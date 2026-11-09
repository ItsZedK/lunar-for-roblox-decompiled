using System;
using System.Diagnostics;
using System.IO;
using System.IO.Compression;
using System.Reflection;
using System.Windows.Forms;

internal static class Program
{
    private const string Version = "__VERSION__";

    [STAThread]
    private static void Main(string[] args)
    {
        string baseDir = Path.Combine(
            Environment.GetFolderPath(Environment.SpecialFolder.LocalApplicationData),
            "LunarForRoblox", "portable-" + Version);
        string exePath = Path.Combine(baseDir, "LunarForRoblox.exe");
        bool extractOnly = Array.IndexOf(args, "--extract-only") >= 0;

        try
        {
            if (!File.Exists(exePath))
            {
                Directory.CreateDirectory(baseDir);
                string tmpZip = Path.Combine(Path.GetTempPath(), "lunar-app-" + Guid.NewGuid().ToString("N") + ".zip");
                try
                {
                    using (Stream input = Assembly.GetExecutingAssembly().GetManifestResourceStream("app.zip"))
                    {
                        if (input == null) throw new InvalidOperationException("Embedded payload missing.");
                        using (FileStream output = File.Create(tmpZip))
                            input.CopyTo(output);
                    }
                    ZipFile.ExtractToDirectory(tmpZip, baseDir);
                }
                finally
                {
                    try { if (File.Exists(tmpZip)) File.Delete(tmpZip); } catch { }
                }
            }
        }
        catch (Exception ex)
        {
            MessageBox.Show("Failed to extract Lunar for Roblox:\n" + ex.Message,
                "Lunar for Roblox (portable)", MessageBoxButtons.OK, MessageBoxIcon.Error);
            return;
        }

        if (extractOnly)
        {
            Console.WriteLine(exePath);
            return;
        }

        var start = new ProcessStartInfo
        {
            FileName = exePath,
            WorkingDirectory = baseDir,
            UseShellExecute = true,
        };
        // forward arguments (skip nothing; launcher args are app args)
        start.Arguments = string.Join(" ", Array.ConvertAll(args, QuoteArg));
        try { Process.Start(start); }
        catch (Exception ex)
        {
            MessageBox.Show("Failed to start Lunar for Roblox:\n" + ex.Message,
                "Lunar for Roblox (portable)", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }
    }

    private static string QuoteArg(string arg)
    {
        if (string.IsNullOrEmpty(arg)) return "\"\"";
        if (arg.IndexOfAny(new[] { ' ', '\t', '"' }) < 0) return arg;
        return "\"" + arg.Replace("\\", "\\\\").Replace("\"", "\\\"") + "\"";
    }
}
