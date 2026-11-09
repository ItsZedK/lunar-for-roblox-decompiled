"use strict";
!(function () {
  try {
    var e =
      "undefined" != typeof window
        ? window
        : "undefined" != typeof global
          ? global
          : "undefined" != typeof globalThis
            ? globalThis
            : "undefined" != typeof self
              ? self
              : {};
    e.SENTRY_RELEASE = { id: "lunar-for-roblox@1.0.16" };
    var n = new e.Error().stack;
    n &&
      ((e._sentryDebugIds = e._sentryDebugIds || {}),
      (e._sentryDebugIds[n] = "074cd01e-e6f1-4681-a1e4-113ce5314ac1"),
      (e._sentryDebugIdIdentifier =
        "sentry-dbid-074cd01e-e6f1-4681-a1e4-113ce5314ac1"));
  } catch (e2) {}
})();
require("@sentry/electron/preload");
const preload = require("@electron-toolkit/preload");
const electron = require("electron");
function handler() {
  return null;
}
const IPC_HANDLER_SCHEMA = {
  auth: {
    /** Check if user is authenticated */
    isAuthenticated: handler(),
    /** Get the currently authenticated user */
    getUser: handler(),
    /** Get the current authenticated user's Robux balance */
    getRobuxBalance: handler(),
    /** Open login window and authenticate user */
    login: handler(),
    /** Set authentication cookie manually (for advanced users) */
    setCookie: handler(),
    /** Logout the current user */
    logout: handler(),
    /** Get detailed user information */
    getUserDetails: handler(),
    /** Get presence information for multiple users */
    getPresence: handler(),
    /** Get avatar headshot URLs for users, framed unless told otherwise */
    getAvatarHeadshots: handler(),
    /** Get favorite games for a user */
    getFavoriteGames: handler(),
    /** Toggle favorite status for a game */
    toggleFavoriteGame: handler(),
    /** Get all stored accounts */
    getAccounts: handler(),
    /** Switch the active account */
    switchAccount: handler(),
    /** Remove an account */
    removeAccount: handler(),
  },
  friends: {
    /** Get a user's friends list */
    getFriends: handler(),
    /** Get a list of online friends for a user */
    getOnlineFriends: handler(),
    /** Get pending friend requests */
    getFriendRequests: handler(),
    /** Accept a friend request */
    acceptFriendRequest: handler(),
    /** Decline a friend request */
    declineFriendRequest: handler(),
    /** Decline every pending friend request in a single call */
    declineAllFriendRequests: handler(),
    /** Send a friend request */
    sendFriendRequest: handler(),
    /** Unfriend a user */
    unfriend: handler(),
    /** Follow a user */
    follow: handler(),
    /** Unfollow a user */
    unfollow: handler(),
    /** Check whether the viewer follows a user */
    isFollowing: handler(),
    /** Get friendship status with a user; `null` when it could not be determined. */
    checkFriendStatus: handler(),
    /** Get friendship status with a user */
    getFriendStatus: handler(),
    /** Search friends by username/display name */
    searchFriends: handler(),
  },
  versions: {
    /** Get available deployment channels */
    getChannels: handler(),
    /** Get latest version for a channel */
    getLatest: handler(),
    /** Get all installed versions */
    getInstalled: handler(),
    /** Get installed versions for a specific channel */
    getInstalledForChannel: handler(),
    /** Check if a version is installed */
    isInstalled: handler(),
    /** Download a specific version */
    download: handler(),
    /** Check if a version download is in progress */
    isDownloading: handler(),
    /** Remove an installed version */
    remove: handler(),
    /** Check for updates on a channel */
    checkForUpdate: handler(),
    /** Open versions folder in the system file manager */
    openFolder: handler(),
    /** Clean temporary files, old versions, and instance caches */
    cleanup: handler(),
    /** Per-category disk usage of the launcher's data directories */
    getStorageBreakdown: handler(),
  },
  instances: {
    /** Get all instances */
    getAll: handler(),
    /** Get a single instance by ID */
    get: handler(),
    /** Create a new instance */
    create: handler(),
    /** Update an instance */
    update: handler(),
    /** Delete an instance */
    delete: handler(),
    /** Duplicate an instance */
    duplicate: handler(),
    /** Update instance version */
    updateVersion: handler(),
    /** Check if instance's version is installed */
    isVersionInstalled: handler(),
    /** Get FastFlags for an instance */
    getFastFlags: handler(),
    /** Set FastFlags for an instance */
    setFastFlags: handler(),
    /** Set FPS cap for an instance */
    setFpsCap: handler(),
    /** Get all version hashes in use by instances */
    getUsedVersions: handler(),
    /** Open instance data folder in the system file manager */
    openDataFolder: handler(),
  },
  mods: {
    /** Get all mods configured for an instance */
    getForInstance: handler(),
    /** Import a mod from a zip archive */
    importZip: handler(),
    /** Import a mod from a directory */
    importFolder: handler(),
    /** Re-scan mod package directories and reconcile manifest */
    refresh: handler(),
    /** Enable/disable a specific mod */
    setEnabled: handler(),
    /** Persist explicit mod order */
    reorder: handler(),
    /** Remove a mod package */
    remove: handler(),
    /** Open instance mods folder in the system file manager */
    openFolder: handler(),
  },
  fonts: {
    /** Pick, validate, and store a custom font for an instance */
    setFont: handler(),
    /** Remove the custom font from an instance */
    clearFont: handler(),
  },
  launch: {
    /** Launch an instance, optionally with launch options */
    instance: handler(),
    /**
     * Auto-create the user's default instance for the given product
     * (downloading the latest LIVE version if needed). Returns the new
     * instance so the renderer can hand off to `launch.instance`. Used
     * to remove first-run friction for users with no instance for the
     * target product yet. `fromDeeplink` records whether the trigger was
     * a protocol deep link, for analytics attribution.
     */
    createDefaultInstance: handler(),
    /** Check if Roblox is running */
    isRunning: handler(),
    /** Check if any Roblox Player or Studio process runs, tracked or not */
    isAnyRunning: handler(),
    /** Check whether launching an instance would close a running game */
    getRunningConflict: handler(),
    /** Get all running instance IDs */
    getRunningInstanceIds: handler(),
    /** Get the running instance ID (first running, for backward compat) */
    getRunningInstanceId: handler(),
    /** Get the running version reference */
    getRunningVersion: handler(),
    /** Kill the running Roblox process */
    kill: handler(),
    /** Kill a specific running instance by ID */
    killInstance: handler(),
    /** Force-quit all Roblox processes */
    forceQuit: handler(),
  },
  launchPreferences: {
    /** Get the preferred launch instance for a place */
    get: handler(),
    /** Set the preferred launch instance for a place */
    set: handler(),
    /** Clear the preferred launch instance for a place */
    clear: handler(),
  },
  gameAvatar: {
    /** One account's avatar choice for a game; null when it inherits the instance's. */
    get: handler(),
    /** Save one account's avatar choice for a game; throws when invalid. */
    set: handler(),
    /** Remove one account's avatar choice for a game; true when one existed. */
    clear: handler(),
    /** Accounts whose avatar is changed for a game that is still running. */
    listActive: handler(),
    /** What a launch through an instance (or none) would wear, and as which account. */
    resolve: handler(),
  },
  macros: {
    /** Returns every macro in the library */
    list: handler(),
    /** Returns a single macro by id, or null when no match exists */
    get: handler(),
    /** Returns the macros enabled in a place with their per-game hotkey */
    listForPlace: handler(),
    /** Insert or update a macro by id; fails on schema validation. */
    upsert: handler(),
    /** Remove a macro from the library by id */
    delete: handler(),
    /**
     * Enable a macro in a specific place. Seeds the binding with the
     * macro's default hotkey when free, otherwise unbound.
     */
    enableForPlace: handler(),
    /** Disable a macro in a specific place. */
    disableForPlace: handler(),
    /**
     * Set (or clear) a macro's per-game hotkey. Fails on an invalid
     * accelerator or a key already bound in that place.
     */
    setHotkeyForPlace: handler(),
    /** Returns the place IDs where a macro is currently enabled. */
    getPlacesForMacro: handler(),
    /**
     * Re-scan the macros directory from disk so files dropped in
     * out-of-band (e.g. a shared macro from a friend) are picked up
     * without restarting the launcher.
     */
    refresh: handler(),
    /**
     * Open the macros directory in the system file browser so the
     * user can drop shared macro files in or copy existing ones out.
     */
    openFolder: handler(),
    /** Cancel the currently running macro, if any */
    cancel: handler(),
    /** Probe OS-level input permissions */
    permissionStatus: handler(),
    /**
     * Fire the prompting Accessibility request (macOS). Registers the
     * launcher in the Accessibility pane so the user has a toggle; the
     * pane offers nothing to enable until it runs. No-op elsewhere.
     */
    requestAccessibilityPermission: handler(),
    /**
     * Open the OS settings pane the user must visit to grant input
     * permissions. No-op on platforms that do not gate synthetic
     * input behind a permission (Windows, Linux).
     */
    openAccessibilitySettings: handler(),
    /**
     * Look up the server-controlled macro policy for a given
     * place. Returns `WARN` for any place whose universe is not
     * present in the server response (the universal default), or
     * while the universe is still being resolved.
     */
    policyForPlace: handler(),
    /**
     * Start a global input-recording session. Progress and the
     * converted actions arrive on `macros:recordingChanged`. Fails with
     * `featureDisabled` while the macros flag is off.
     */
    startRecording: handler(),
    /**
     * Stop the active recording session. The converted actions
     * arrive on `macros:recordingChanged`, not the return value,
     * because Escape-stops originate outside the renderer and share
     * that path.
     */
    stopRecording: handler(),
    /**
     * Probe OS-level permission to observe input (macOS Input
     * Monitoring; always granted elsewhere). Distinct from
     * `permissionStatus`, which probes synthesis permission.
     */
    recorderPermissionStatus: handler(),
    /**
     * Fire the OS input-observation request (macOS Input Monitoring).
     * Shows the one-time prompt and registers the launcher in the
     * Input Monitoring pane. No-op elsewhere.
     */
    requestRecorderPermission: handler(),
    /**
     * Open the OS settings pane that grants input-observation
     * permission. No-op on platforms without one.
     */
    openInputMonitoringSettings: handler(),
    /**
     * Export a macro to a `.lrmacro` file via a save dialog.
     * Resolves with the written path, or `null` when the user
     * cancels the dialog.
     */
    exportToFile: handler(),
    /**
     * Pick a `.lrmacro` file to import. Resolves `true` when a
     * preview was staged (delivered via `macros:importRequested`),
     * `false` when the user cancels the picker.
     */
    importFromFilePicker: handler(),
    /** Persist a staged import after user confirmation. */
    confirmImport: handler(),
    /** Discard a staged import. */
    cancelImport: handler(),
    /**
     * Consume the import preview staged before the renderer mounted
     * (cold start via file association), if any.
     */
    consumePendingImport: handler(),
  },
  activity: {
    /** Get recent activity rows for the top-bar activity UI */
    getOverview: handler(),
    /** Get all current + recent session data for an instance */
    getInstanceTimeline: handler(),
    /**
     * Get the most recent ended sessions across every tracked instance,
     * sorted by end-time descending.
     */
    getRecentSessions: handler(),
  },
  toast: {
    /** Show a toast from the renderer */
    showToast: handler(),
    /** Handle a toast interaction from the renderer */
    handleInteraction: handler(),
  },
  discovery: {
    /** Get the discovery-backed Home feed */
    getHomeFeed: handler(),
    /** Get the authenticated user's recently played games */
    getRecentGames: handler(),
  },
  games: {
    /** Get available game sort categories */
    getSorts: handler(),
    /** Get games by sort category */
    getBySort: handler(),
    /** Get games created by a user */
    getUserGames: handler(),
    /** Get game details by universe IDs */
    getDetails: handler(),
    /** Get per-universe playability for the authenticated user */
    getPlayability: handler(),
    /** Get game thumbnail URLs */
    getThumbnails: handler(),
    /** Get wide (16:9) game thumbnail URLs */
    getWideThumbnails: handler(),
    /** Get game votes (upvotes/downvotes/rating percentage) */
    getVotes: handler(),
    /** Get the creator-configured social links for a game */
    getSocialLinks: handler(),
    /** Get the authenticated user's like/dislike state for a universe */
    getVote: handler(),
    /** Cast or clear the authenticated user's vote on a place */
    setVote: handler(),
    /** Get the authenticated user's notification-follow status for a universe */
    getNotificationStatus: handler(),
    /** Enable or disable notifications for a game's universe */
    setNotification: handler(),
    /** Get friends currently playing games */
    getFriendsPlaying: handler(),
    /** Get paginated servers for a place */
    getServers: handler(),
    /** Resolve a place ID to its parent universe ID */
    getUniverseByPlace: handler(),
    /** Get currently-active promoted games (cached ~4 hours). */
    getPromotedGames: handler(),
  },
  communities: {
    /** Get full detail for a single community */
    getDetails: handler(),
    /** Get account-level community membership limits for the user */
    getMetadata: handler(),
    /** Get the suggested browse keywords for community discovery */
    getSearchMetadata: handler(),
    /** Get the communities a user belongs to, with their role in each */
    getUserCommunities: handler(),
    /** Get the communities each of a user's friends belongs to */
    getFriendsCommunities: handler(),
    /** Get the community behind a game, or null when none is known */
    getGameCommunity: handler(),
    /** Get communities behind the current user's recently played games */
    getGameSuggestions: handler(),
    /** Get a paginated page of a community's members */
    getMembers: handler(),
    /** Get a paginated page of the experiences a community created */
    getExperiences: handler(),
    /** Search communities by keyword */
    search: handler(),
    /** Get community icon image URLs */
    getIcons: handler(),
    /** Get the creator-configured social links on a community */
    getSocialLinks: handler(),
    /** Get a row-index-paginated page of a community's allies */
    getAllies: handler(),
    /** Get a community's cover banner asset id and latest announcement id */
    getProfileInfo: handler(),
    /** Get a single hydrated community announcement */
    getAnnouncement: handler(),
    /** Get the modern community-links shout */
    getLinkedShout: handler(),
    /** Get the viewer's membership state in a community */
    getMembership: handler(),
    /** Join a community (files a join request when approval is required) */
    join: handler(),
    /** Leave a community */
    leave: handler(),
  },
  pinnedCommunities: {
    /** Get the current user's pinned communities. */
    list: handler(),
    /** Pin a community to the root or a folder. No-op if already pinned or at the pin cap. */
    pin: handler(),
    /** Unpin a community. No-op if not pinned. */
    unpin: handler(),
    /** Create a pin folder. No-op on an empty name or at the folder cap. */
    createFolder: handler(),
    /** Rename a pin folder. No-op when the folder is missing or the name is empty. */
    renameFolder: handler(),
    /** Delete a pin folder, moving its pins back to the root. Never unpins. */
    deleteFolder: handler(),
    /** Move a pin into a folder, or to the root when folderId is null. */
    moveToFolder: handler(),
    /** Move a folder to a new display position. */
    reorderFolder: handler(),
    /** Move a pin to a new position within its group (root or its folder). */
    reorderPin: handler(),
  },
  forums: {
    /** Get forum capability flags for a community */
    getFeatures: handler(),
    /** Get a paginated page of a community's forum channels */
    getChannels: handler(),
    /** Get a paginated page of posts in a forum channel */
    getPosts: handler(),
    /** Get the pinned posts in a forum channel */
    getPinnedPosts: handler(),
    /** Get a single forum post by its short id */
    getPost: handler(),
    /** Get a paginated page of a thread's comments */
    getComments: handler(),
    /** Mark a thread read up to the given comment */
    markRead: handler(),
    /** Get the community's stock reaction emotes */
    getEmotes: handler(),
    /** Create a new post (thread) in a channel */
    createPost: handler(),
    /** Add a comment to a thread, or a nested reply when given a parent */
    createComment: handler(),
    /** Edit a comment's body */
    editComment: handler(),
    /** Delete a comment */
    deleteComment: handler(),
    /** Apply the viewer's reaction to a comment */
    addReaction: handler(),
    /** Remove the viewer's reaction from a comment */
    removeReaction: handler(),
  },
  events: {
    /** Get a paginated page of a community's virtual events */
    getGroupEvents: handler(),
    /** Get an experience's active virtual events (failures returned as data) */
    getActiveUniverseEvents: handler(),
    /** Get a single virtual event by id (failures returned as data) */
    getEvent: handler(),
    /** Get the per-status RSVP totals of a virtual event */
    getRsvpCounters: handler(),
    /** Set the viewer's RSVP on a virtual event (failures returned as data) */
    setRsvp: handler(),
  },
  users: {
    /** Search for users by keyword (username or display name) */
    search: handler(),
    /** Get detailed user profile including social counts and place visits */
    getProfile: handler(),
    /** Get badges for a user */
    getBadges: handler(),
    /** Get badge thumbnail URLs */
    getBadgeThumbnails: handler(),
    /** Get social counts (friends, followers, following) for a user */
    getSocialCounts: handler(),
    /** Get whether a user's inventory is viewable by the current viewer */
    getInventoryVisibility: handler(),
    /** Get inventory categories for a user */
    getInventoryCategories: handler(),
    /** Get one inventory page for a selected category item */
    getInventoryPage: handler(),
    /** Update the authenticated user's description/about section */
    updateDescription: handler(),
    /** Get assets currently worn by a user */
    getCurrentlyWearing: handler(),
  },
  privateServers: {
    /** Whether private servers are enabled for an experience. */
    getEnabled: handler(),
    /** Read the full configuration of a private server the user owns. */
    getConfig: handler(),
    /** Update name, join code, and the "Allow Joining" flag. */
    update: handler(),
    /** Activate/cancel the subscription or change its price. */
    updateSubscription: handler(),
    /** Update the invite list and access permissions. */
    updatePermissions: handler(),
    /** Resolve a share-link code into a launchable private server target. */
    resolveShareLink: handler(),
    /** Check whether a candidate user can be invited. */
    canInvite: handler(),
    /** Resolve buyer-facing pricing for creating a private server. */
    getCreatePricing: handler(),
    /** Create (purchase) a private server. */
    create: handler(),
  },
  thumbnails: {
    /** Get thumbnails for multiple targets in a single batch request. */
    getBatch: handler(),
    /** Get a single thumbnail with automatic retry logic for pending states. */
    getSingleWithRetry: handler(),
  },
  avatar: {
    /** Get current avatar details */
    getAvatar: handler(),
    /** Get another user's current avatar details */
    getUserAvatar: handler(),
    /** Get catalog categories */
    getCategories: handler(),
    /** Get avatar rules (colors, scales limits) */
    getRules: handler(),
    /** Set body colors */
    setBodyColors: handler(),
    /** Set scales */
    setScales: handler(),
    /** Set wearing assets */
    setWearingAssets: handler(),
    /** Get the applied avatar background, or null when none is set */
    getBackground: handler(),
    /** Apply or clear the avatar background (asset type 92, v4 API) */
    setBackground: handler(),
    /** Get the equipped emote wheel, sorted by 1-based wheel position */
    getEmotes: handler(),
    /**
     * Replace the emote wheel (v4 API, full-list replace). Equip,
     * remove and reorder all reduce to sending the desired final wheel.
     */
    setEmotes: handler(),
    /** List the Roblox Plus profile frames Roblox currently offers */
    getProfileFrames: handler(),
    /** Get a user's equipped profile frame, or null when none is set */
    getEquippedProfileFrame: handler(),
    /** Equip a profile frame, or clear it with null, for the given account (v4 API) */
    setProfileFrame: handler(),
    /** Set player avatar type */
    setPlayerAvatarType: handler(),
    /** Redraw thumbnail */
    redrawThumbnail: handler(),
    /** Get inventory */
    getInventory: handler(),
    /** Get outfit details, including the outfit's typed member assets */
    getOutfitDetails: handler(),
    /** Get paginated saved avatars for a user */
    getSavedAvatars: handler(),
    /** Create a saved avatar from the current avatar state */
    createSavedAvatarFromCurrent: handler(),
    /** Rename a saved avatar */
    renameSavedAvatar: handler(),
    /** Overwrite a saved avatar from the currently equipped avatar state */
    updateSavedAvatarFromCurrent: handler(),
    /** Delete a saved avatar */
    deleteSavedAvatar: handler(),
    /** Equip a saved avatar */
    equipSavedAvatar: handler(),
    /** Get asset thumbnails */
    getAssetThumbnails: handler(),
    /** Get outfit thumbnails */
    getOutfitThumbnails: handler(),
  },
  avatarRender: {
    /**
     * Resolve, download and parse avatar assets into scene-ready
     * payloads. Per-asset failures are discriminated results; the call
     * itself only rejects on programmer error.
     */
    getAssets: handler(),
    /** Warm the asset caches without transferring payloads. */
    prefetch: handler(),
    /**
     * Default head and face content from the installed Roblox client,
     * for avatars with no head or face asset equipped.
     */
    getDefaults: handler(),
    /** Drop the on-disk asset cache and in-memory parsed cache. */
    clearCache: handler(),
  },
  secondScreen: {
    /** Get all running instances info */
    getRunningInstances: handler(),
    /**
     * Get recently-ended player instances retained for Mission Control
     * (newest first). Their logs and activity remain inspectable.
     */
    getRecentInstances: handler(),
    /**
     * Open the singleton Mission Control window (or focus it if already
     * open) and optionally switch its active tab to the given instance.
     */
    open: handler(),
    /** Close the singleton Mission Control window */
    close: handler(),
    /** Check if the Mission Control window is open */
    isOpen: handler(),
    /** Get buffered log entries for an instance */
    getLogEntries: handler(),
  },
  chat: {
    /** Get conversation metadata including unread message count */
    getConversationMetadata: handler(),
    /** Resolve whether chat is available and, if not, the classified reason */
    getChatAvailability: handler(),
    /** Get user conversations with pagination */
    getUserConversations: handler(),
    /** Get conversation messages with pagination */
    getConversationMessages: handler(),
    /** Send a message to a conversation */
    sendMessage: handler(),
    /** Mark multiple conversations as read */
    markAsRead: handler(),
    /** Remove a user from a conversation (leave group chat) */
    removeFromConversation: handler(),
    /** Rename a group chat */
    renameGroup: handler(),
    /** Add users to a group conversation */
    addUsersToConversation: handler(),
    /** Create a new conversation */
    createConversation: handler(),
  },
  notifications: {
    /** Get recent stream notifications */
    getRecent: handler(),
    /** Get the count of unread stream notifications */
    getUnreadCount: handler(),
    /** Clear the unread stream notification count */
    markAllRead: handler(),
    /** Perform a stream-notification action (ignore, follow, unfollow) */
    performAction: handler(),
  },
  privateMessages: {
    /** Get a page of private messages for a mailbox tab */
    getMessages: handler(),
    /** Get Roblox announcements */
    getAnnouncements: handler(),
    /** Get the count of unread private messages */
    getUnreadCount: handler(),
    /** Archive the given messages */
    archive: handler(),
    /** Mark the given messages as read */
    markRead: handler(),
    /** Mark the given messages as unread */
    markUnread: handler(),
  },
  protocol: {
    /** Consume the pending `lunar-roblox://` app link and clear it */
    consumePendingAppLink: handler(),
    /** Consume the pending deep link and clear it */
    consumePendingDeepLink: handler(),
  },
  settings: {
    /** Get launcher settings */
    get: handler(),
    /** Update one launcher setting */
    set: handler(),
    /** Update launcher settings */
    update: handler(),
    /** Reset launcher settings to defaults */
    reset: handler(),
  },
  updater: {
    /** Get current launcher updater state */
    getState: handler(),
    /** Trigger a user-initiated launcher update check */
    checkForUpdates: handler(),
    /** Install a downloaded launcher update */
    quitAndInstall: handler(),
    /** Switch update stream; returns the channel the server resolved to */
    switchStream: handler(),
  },
  window: {
    /** Minimize the main window */
    minimize: handler(),
    /** Toggle maximize / restore on the main window */
    toggleMaximize: handler(),
    /** Close the main window */
    close: handler(),
    /** Get current maximized state (used for initial icon state) */
    getIsMaximized: handler(),
    /**
     * Focus the main app window and route it to the given target.
     * Used by sub-windows (e.g. the Mission Control window) to hand
     * off navigation that should not happen in their own window.
     * No-op when the main window is closed or destroyed.
     */
    navigateMain: handler(),
  },
  metadata: {
    /**
     * Get the currently-active Home page hero carousel slides
     * (cached ~4 hours).
     */
    getCarouselSlides: handler(),
  },
  app: {
    /** Open the launcher's data folder in the system file manager */
    openApplicationFolder: handler(),
    /** Get the persistent installation UUID for this device */
    getInstallationId: handler(),
    /**
     * Open a URL in the user's default browser and record an
     * `external.open` analytics event. This should be used for
     * all external links in the renderer.
     */
    openExternal: handler(),
    /**
     * Complete an external open the user confirmed in the leave-app
     * dialog, optionally remembering the domain so it stops
     * prompting.
     */
    confirmExternalOpen: handler(),
  },
  overwolf: {
    /** True if the app is running on the ow-electron binary */
    isOverwolf: handler(),
    /** Overwolf MUID if available */
    getMuid: handler(),
    /** True if the Overwolf CMP first layer must be shown */
    isCmpRequired: handler(),
    /** Open Overwolf's ad privacy settings window */
    openAdPrivacySettings: handler(),
    /** True if the first-layer CMP modal should be shown to the user */
    isFirstLayerRequired: handler(),
    /** Mark the first-layer CMP modal as shown after the user dismisses it */
    acknowledgeFirstLayer: handler(),
  },
  captures: {
    /** Snapshot of the captures feature (support, readiness, replay, hotkeys) */
    getStatus: handler(),
    /** Capture the active Roblox game's current frame to a JPEG */
    takeScreenshot: handler(),
    /** Write the instant-replay buffer to an mp4 clip */
    saveClip: handler(),
    /**
     * List every screenshot and clip in the captures directory, newest
     * first. Fails with `DIRECTORY_UNAVAILABLE` when the folder cannot be
     * read, so the gallery never mistakes an unreachable drive for empty.
     */
    listLibrary: handler(),
    /** Move a capture to the recycle bin and forget its metadata */
    deleteCapture: handler(),
    /** Select a capture in the OS file manager */
    revealCapture: handler(),
    /** Open the captures directory in the OS file manager */
    openCapturesFolder: handler(),
    /**
     * Show a folder picker for the captures directory. Resolves null
     * when the user cancels; the renderer persists the choice.
     */
    chooseCapturesDirectory: handler(),
    /** Star or unstar a capture; resolves the updated item */
    setFavorite: handler(),
    /** Star or unstar several captures in one pass */
    setFavorites: handler(),
    /**
     * Rename a capture within its folder, keeping its extension, star,
     * game context, and id. Resolves the updated item.
     */
    renameCapture: handler(),
    /** Resolve the item with its frame size probed and persisted on demand */
    getCaptureInfo: handler(),
    /** Read a screenshot as a base64 data URL for taint-free editor pixels */
    readCaptureImage: handler(),
    /**
     * Write an edited screenshot: `copy` creates `<name>-edited.png`
     * beside the original, `overwrite` re-encodes to the original's
     * extension. Resolves the written item.
     */
    saveEditedCapture: handler(),
    /** Copy a screenshot (or an in-memory editor image) to the clipboard */
    copyImage: handler(),
    /**
     * Enumerate microphones the recorder can mix into clips, bypassing
     * the package's device cache so newly plugged-in devices appear.
     * Fails with `RECORDER_NOT_READY` outside ow-electron builds.
     */
    listMicrophones: handler(),
  },
  trades: {
    /** Check if the current user is eligible to trade */
    checkEligibility: handler(),
    /** Get paginated trade list by status filter */
    getTradeList: handler(),
    /** Get trade count for a status filter */
    getTradeCount: handler(),
    /** Get full trade details */
    getTradeDetails: handler(),
    /** Get trade system metadata (limits, fees) */
    getMetadata: handler(),
    /** Get tradable items for a user */
    getTradableItems: handler(),
    /** Check if the current user can trade with another user */
    checkCanTradeWith: handler(),
    /** Send a new trade */
    sendTrade: handler(),
    /** Counter an existing trade */
    counterTrade: handler(),
    /** Accept a trade */
    acceptTrade: handler(),
    /** Decline a trade */
    declineTrade: handler(),
  },
  tradeLinks: {
    /** List the signed-in account's saved trade links and those waiting on a friend request. */
    listPending: handler(),
    /** Remember an account's pending trade link. `null` on failure. */
    savePending: handler(),
    /** Forget an account's pending trade link for an author. Returns the rest. */
    removePending: handler(),
    /** Record that pending links had their friend-accepted toast shown. `false` on failure. */
    markNotified: handler(),
  },
  search: {
    /** Get the search landing page (recently visited + trending queries) */
    getLandingPage: handler(),
    /** Get autocomplete suggestions for a search prefix */
    getAutocompleteSuggestions: handler(),
    /** Get marketplace (avatar catalog) autocomplete suggestions */
    getMarketplaceAutocomplete: handler(),
    /** Perform an omni-search query */
    search: handler(),
  },
  challenge: {
    /** Submit a solved challenge back to the main process */
    solve: handler(),
    /**
     * Dismiss/cancel a pending challenge. The optional `reason` is
     * forwarded to analytics as the `challenge.failed.reason` field;
     * defaults to `"user_dismissed"` when omitted (the close-button
     * case).
     */
    dismiss: handler(),
    /**
     * Open a captcha popup window (real roblox.com origin) and return the
     * Arkose token once the user solves the challenge.
     */
    openCaptchaWindow: handler(),
    /** Close the currently open captcha popup window, if any */
    closeCaptchaWindow: handler(),
    /** [DEV ONLY] Immediately fire a challenge:requested event with the provided data */
    triggerTest: handler(),
  },
  analytics: {
    /** Track analytics event */
    track: handler(),
  },
  featureFlags: {
    /**
     * Resolved feature-flag snapshot: registry defaults, then the last
     * server map, then dev overrides.
     */
    getAll: handler(),
  },
  lunarTerms: {
    /**
     * Accept every currently-pending Lunar terms document. Triggered
     * by the user clicking "Accept and Continue" in the modal.
     */
    accept: handler(),
    /**
     * Snapshot of Lunar terms documents the user still needs to
     * acknowledge. Empty when the local store is in sync with the
     * published hashes.
     */
    getPending: handler(),
  },
  licenses: {
    /** Direct-dependency and vendored-code license entries, generated at build time. */
    getDirect: handler(),
    /** Materializes the per-package license files, then opens that directory. */
    openFolder: handler(),
  },
  userAgreements: {
    /**
     * Get the list of Roblox agreements the active account still needs
     * to accept. Returns the cached value when available, otherwise
     * fetches from Roblox. An empty array means nothing is pending.
     */
    getPending: handler(),
    /**
     * Force a refresh of pending agreements from Roblox and return the
     * up-to-date list.
     */
    refresh: handler(),
    /**
     * Accept the given agreement IDs on behalf of the active account and
     * return the per-agreement result. The caller should treat any
     * non-zero `errorCode` as a failure and leave the prompt open.
     */
    accept: handler(),
  },
  catalog: {
    /** Get the marketplace filter navigation menu (cached ~30 min). */
    getNavigationMenu: handler(),
    /** Search catalog items with filters, sort, and cursor-based pagination. */
    searchItems: handler(),
    /** Batch-fetch detailed info for a list of asset/bundle refs. */
    getItemsDetails: handler(),
    /** Fetch richer single-item details (includes isPBR, isPurchasable, owned). */
    getItemDetails: handler(),
    /**
     * Fetch rich per-item details (`owned`, `isPurchasable`,
     * `collectibleProductId`) for a small list of refs. Capped; refs
     * that fail to resolve are omitted.
     */
    getItemsDetailsRich: handler(),
    /** Expand a bundle into its constituent, typed assets. */
    getBundleContents: handler(),
    /**
     * Fetch thumbnail image URLs for a mixed list of assets and bundles.
     * Returns a map keyed by the item's numeric id.
     */
    getItemThumbnails: handler(),
    /** Fetch resale listings for a collectible item by UUID. */
    getResellers: handler(),
    /** Fetch search topic pills (trending tags). */
    getTopics: handler(),
    /** Get recommended items for a given asset. */
    getRecommendations: handler(),
    /** Purchase a single collectible item. Fails with `purchasesDisabled` while the kill switch is off. */
    purchaseItem: handler(),
    /** Batch-purchase multiple items via the cart checkout flow. Fails with `purchasesDisabled` while the kill switch is off. */
    checkoutCart: handler(),
    /** Get currently-active promoted shop pages (cached ~4 hours). */
    getPromotedShopPages: handler(),
    /** Whether the active user has favorited the given catalog item. */
    getFavoriteStatus: handler(),
    /**
     * Favorite or unfavorite a catalog item for the active user. Returns
     * the resulting favorite state.
     */
    setFavorite: handler(),
  },
  cart: {
    /** Get the cart for the currently authenticated user. */
    get: handler(),
    /** Add an item to the cart. No-op if already present. */
    add: handler(),
    /** Remove an item from the cart. */
    remove: handler(),
    /** Empty the current user's cart. */
    clear: handler(),
  },
  outfits: {
    /** Get the current user's saved outfits and folders. */
    list: handler(),
    /** Get any stored account's saved outfits and folders, read-only. */
    listForUser: handler(),
    /** Save a new outfit. Refusals come back as data, never as a throw. */
    create: handler(),
    /** Rename an outfit. No-op when the outfit is missing or the name is empty. */
    rename: handler(),
    /** Refresh an outfit's item snapshots without marking it edited. No-op when nothing changed or the list names other items. */
    refreshItems: handler(),
    /** Overwrite an outfit's items and body and drop its captured preview; an absent body clears its overrides. No-op when the items are empty or invalid. */
    overwrite: handler(),
    /** Copy an outfit into the same group under a unique name. */
    duplicate: handler(),
    /** Delete an outfit. No-op if missing. */
    delete: handler(),
    /** Move an outfit into a folder, or to the root when folderId is null. */
    moveToFolder: handler(),
    /** Move an outfit to a new position within its group (root or its folder). */
    reorderOutfit: handler(),
    /** Create an outfit folder. Refusals come back as data, never as a throw. */
    createFolder: handler(),
    /** Rename an outfit folder. No-op when missing or the name is empty. */
    renameFolder: handler(),
    /** Delete an outfit folder, moving its outfits back to the root. */
    deleteFolder: handler(),
    /** Move a folder to a new display position. */
    reorderFolder: handler(),
    /** Store a captured PNG preview for an outfit. Refusals come back as data, never as a throw. */
    setThumbnail: handler(),
    /** Put an outfit on the live avatar, replacing or layering over what it wears. Refusals come back as data. */
    wear: handler(),
    /** Create or update a Roblox saved character from an outfit. Refusals come back as data. */
    saveAsCharacter: handler(),
  },
  itemValues: {
    /**
     * Fetch the third-party item-value map keyed by Roblox catalog item
     * ID. The main process normalizes provider-specific data into the
     * generic `ItemValueEntry` shape before returning. Cached upstream
     * by the Lunar backend and additionally on the main process for
     * the duration of the cache TTL. `fetchedAt` is main's fetch time so
     * renderer caches age the map from the same clock. `force` skips
     * the cache once it is older than the refresh cooldown.
     */
    getValueMap: handler(),
  },
  chatPoller: {
    /** Set the actively-viewed conversation, or `null` to clear. */
    setActiveConversation: handler(),
    /** Tell the poller whether the chat route is currently mounted. */
    setChatRouteActive: handler(),
    /** Boost-trigger after the user sends a message. */
    userSentMessage: handler(),
    /** Boost-trigger after a conversation is marked read. */
    markedAsRead: handler(),
  },
  socialPoller: {
    /** Boost-trigger after a user-initiated social mutation. */
    userActed: handler(),
  },
  social: {
    /** Persisted social snapshot for the active account, or `null`. */
    getCachedSnapshot: handler(),
  },
  userSettings: {
    /**
     * Get the active account's user-settings snapshot, refreshing from
     * Roblox when the cache is empty. Returns `null` when no account is
     * active or the fetch fails.
     */
    get: handler(),
    /**
     * Get the last-fetched user-settings snapshot without issuing a
     * network request. Returns `null` when no refresh has completed for
     * the active account yet.
     */
    getCached: handler(),
    /**
     * Force a refresh of both the user-settings and account-info
     * snapshots from Roblox. Returns the refreshed user-settings value
     * (callers wanting account-info should use `getAccountInfo`).
     */
    refresh: handler(),
    /** Update one or more user-settings fields on Roblox. */
    update: handler(),
    /**
     * Get the active account's AccountInfo (age / premium / chat / 2FA
     * flags from `roblox.com/my/settings/json`), refreshing when the
     * cache is empty.
     */
    getAccountInfo: handler(),
    /**
     * Get the last-fetched AccountInfo snapshot without issuing a
     * network request.
     */
    getCachedAccountInfo: handler(),
  },
};
const HANDLER_METHODS = Object.fromEntries(
  Object.entries(IPC_HANDLER_SCHEMA).map(([namespace, methods]) => [
    namespace,
    Object.keys(methods),
  ]),
);
function createApi() {
  const api2 = {};
  for (const namespace of Object.keys(HANDLER_METHODS)) {
    api2[namespace] = {};
    for (const method of HANDLER_METHODS[namespace]) {
      const channel = `${namespace}:${String(method)}`;
      api2[namespace][method] = (...args) =>
        electron.ipcRenderer.invoke(channel, ...args);
    }
  }
  return api2;
}
function createEventSubscriber(channel, callback) {
  const handler2 = (_event, payload) => {
    callback(payload);
  };
  electron.ipcRenderer.on(channel, handler2);
  return () => {
    electron.ipcRenderer.removeListener(channel, handler2);
  };
}
const baseApi = createApi();
const api = {
  ...baseApi,
  app: {
    ...baseApi.app,
    onExternalOpenConfirmRequested: (callback) =>
      createEventSubscriber("app:externalOpenConfirmRequested", callback),
  },
  challenge: {
    ...baseApi.challenge,
    onChallengeRequested: (callback) =>
      createEventSubscriber("challenge:requested", callback),
  },
  auth: {
    ...baseApi.auth,
    onAuthInvalidated: (callback) =>
      createEventSubscriber("auth:invalidated", callback),
    onAccountsChanged: (callback) =>
      createEventSubscriber("auth:accountsChanged", callback),
    onActiveAccountChanged: (callback) =>
      createEventSubscriber("auth:activeAccountChanged", callback),
    onHeadshotChanged: (callback) =>
      createEventSubscriber("auth:headshotChanged", callback),
    onRobuxSpent: (callback) =>
      createEventSubscriber("auth:robuxSpent", callback),
  },
  versions: {
    ...baseApi.versions,
    onDownloadProgress: (callback) =>
      createEventSubscriber("versions:downloadProgress", callback),
  },
  launch: {
    ...baseApi.launch,
    onExited: (callback) => createEventSubscriber("launch:exited", callback),
    onUpdating: (callback) =>
      createEventSubscriber("launch:updating", callback),
    onRunningInstancesChanged: (callback) =>
      createEventSubscriber("instances:runningChanged", callback),
  },
  activity: {
    ...baseApi.activity,
    onChanged: (callback) =>
      createEventSubscriber("activity:changed", callback),
    onSessionEnded: (callback) =>
      createEventSubscriber("activity:sessionEnded", callback),
  },
  macros: {
    ...baseApi.macros,
    onExecutionChanged: (callback) =>
      createEventSubscriber("macros:executionChanged", callback),
    onRecordingChanged: (callback) =>
      createEventSubscriber("macros:recordingChanged", callback),
    onPoliciesChanged: (callback) =>
      createEventSubscriber("macros:policiesChanged", () => callback()),
    onLibraryChanged: (callback) =>
      createEventSubscriber("macros:libraryChanged", () => callback()),
    onImportRequested: (callback) =>
      createEventSubscriber("macros:importRequested", callback),
  },
  tradeLinks: {
    ...baseApi.tradeLinks,
    onChanged: (callback) =>
      createEventSubscriber("tradeLinks:changed", () => callback()),
  },
  toast: {
    ...baseApi.toast,
    onShow: (callback) => createEventSubscriber("toast:show", callback),
  },
  secondScreen: {
    ...baseApi.secondScreen,
    onLogEntry: (callback) => createEventSubscriber("log:entry", callback),
    onFocusInstance: (callback) =>
      createEventSubscriber("secondScreen:focusInstance", callback),
  },
  protocol: {
    ...baseApi.protocol,
    onAppLink: (callback) =>
      createEventSubscriber("protocol:appLink", callback),
    onDeepLink: (callback) =>
      createEventSubscriber("protocol:deepLink", callback),
  },
  updater: {
    ...baseApi.updater,
    onStateChanged: (callback) =>
      createEventSubscriber("updater:stateChanged", callback),
  },
  window: {
    ...baseApi.window,
    onMaximizedChanged: (callback) =>
      createEventSubscriber("window:maximizedChanged", callback),
    onMainNavigate: (callback) =>
      createEventSubscriber("window:mainNavigate", callback),
  },
  userAgreements: {
    ...baseApi.userAgreements,
    onPendingChanged: (callback) =>
      createEventSubscriber("userAgreements:pendingChanged", callback),
  },
  gameAvatar: {
    ...baseApi.gameAvatar,
    onActiveChanged: (callback) =>
      createEventSubscriber("gameAvatar:activeChanged", callback),
  },
  featureFlags: {
    ...baseApi.featureFlags,
    onChanged: (callback) =>
      createEventSubscriber("featureFlags:changed", callback),
  },
  lunarTerms: {
    ...baseApi.lunarTerms,
    onPendingChanged: (callback) =>
      createEventSubscriber("lunarTerms:pendingChanged", callback),
  },
  overwolf: {
    ...baseApi.overwolf,
    onFirstLayerRequired: (callback) =>
      createEventSubscriber("cmp:firstLayerRequired", callback),
  },
  captures: {
    ...baseApi.captures,
    onStatusChanged: (callback) =>
      createEventSubscriber("captures:statusChanged", callback),
    onCaptured: (callback) =>
      createEventSubscriber("captures:captured", callback),
    onLibraryChanged: (callback) =>
      createEventSubscriber("captures:libraryChanged", () => callback()),
  },
  chat: {
    ...baseApi.chat,
    onUnreadCountChanged: (callback) =>
      createEventSubscriber("chat:unreadCountChanged", callback),
    onConversationsChanged: (callback) =>
      createEventSubscriber("chat:conversationsChanged", callback),
    onMessagesChanged: (callback) =>
      createEventSubscriber("chat:messagesChanged", callback),
  },
  social: {
    ...baseApi.social,
    onAvatarsChanged: (callback) =>
      createEventSubscriber("social:avatarsChanged", callback),
    onFriendsChanged: (callback) =>
      createEventSubscriber("social:friendsChanged", callback),
    onFriendRequestsChanged: (callback) =>
      createEventSubscriber("social:friendRequestsChanged", callback),
    onPresenceChanged: (callback) =>
      createEventSubscriber("social:presenceChanged", callback),
    onLastSeenChanged: (callback) =>
      createEventSubscriber("social:lastSeenChanged", callback),
    onLastGamesChanged: (callback) =>
      createEventSubscriber("social:lastGamesChanged", callback),
  },
};
if (process.contextIsolated) {
  try {
    electron.contextBridge.exposeInMainWorld("electron", preload.electronAPI);
    electron.contextBridge.exposeInMainWorld("api", api);
  } catch (error) {
    console.error(error);
  }
} else {
  const win = window;
  win.electron = preload.electronAPI;
  win.api = api;
}
