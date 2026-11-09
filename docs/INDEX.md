# Lunar for Roblox 1.0.16 - decompiled index

Pipeline: NSIS setup -> downloaded `lunar-for-roblox-1.0.16-x64.nsis.7z` (SHA-512 verified) -> `resources/app.asar` extracted -> bundles Prettier-formatted into `clean-src/`, `node --check` passed. Original bundles are unminified electron-vite/Rollup output with comments and class names intact; no `.map` files shipped, so original TS/JSX file boundaries are not recoverable.

## Clean files

- `main\consts-BnPo3Fh5.js` - 2,423 bytes
- `main\index.js` - 2,670,980 bytes
- `main\recorder-worker.js` - 18,124 bytes
- `package.json` - 2,820 bytes
- `preload\index.js` - 47,870 bytes
- `renderer\chunk.js` - 95,078 bytes
- `renderer\index.html` - 1,170 bytes
- `renderer\index.js` - 6,856,622 bytes

Raw (untouched) extraction: `../app-asar/` - includes all `node_modules`. Native decompilation: `../native/`.


## IPC controllers in main (54)

`ActivityController`, `AnalyticsController`, `AppController`, `AuthController`, `AvatarController`, `AvatarRenderController`, `CaptureHotkeyController`, `CapturesController`, `CartController`, `CatalogController`, `ChallengeController`, `ChatController`, `ChatPollerController`, `CommunitiesController`, `DiscoveryController`, `EventsController`, `FeatureFlagsController`, `FontsController`, `ForumsController`, `FriendsController`, `GameAvatarController`, `GamesController`, `InstancesController`, `ItemValuesController`, `LaunchController`, `LaunchPreferencesController`, `LicensesController`, `LunarTermsController`, `MacrosController`, `MetadataController`, `ModsController`, `NotificationsController`, `OutfitsController`, `OverwolfController`, `PinnedCommunitiesController`, `PrivateMessagesController`, `PrivateServersController`, `ProtocolController`, `ReplayBufferController`, `SearchController`, `SecondScreenController`, `SettingsController`, `SocialController`, `SocialPollerController`, `ThumbnailsController`, `ToastController`, `TradeLinksController`, `TradesController`, `UpdaterController`, `UserAgreementsController`, `UserSettingsController`, `UsersController`, `VersionsController`, `WindowController`

## Services / stores / pollers / clients (102)

`ActivityTrackingService`, `ActivityTrackingStore`, `AnalyticsService`, `AssetDeliveryService`, `AuthService`, `AvatarAccountClient`, `AvatarRenderService`, `AvatarService`, `BackgroundVersionUpdateService`, `CacheService`, `CaptchaService`, `CapturesLibraryService`, `CapturesService`, `CartService`, `CatalogService`, `ChallengeService`, `ChatPollerService`, `ChatService`, `ChildLoggerService`, `CmpService`, `CommunitiesService`, `DiscordRpcService`, `DiscoveryService`, `ElectronStore`, `EventsService`, `ExternalOpenService`, `FeatureFlagService`, `FeatureGateService`, `FileStore`, `FontsService`, `ForegroundWindowService`, `ForumsService`, `FriendsService`, `GameAvatarPreferencesService`, `GameAvatarService`, `GameCommunitiesService`, `GameCommunityIndexService`, `GameMetadataService`, `GamesService`, `InstallationIdService`, `InstancesService`, `ItemDetailsCacheService`, `ItemValuesService`, `LaunchPreferencesService`, `LaunchService`, `LauncherNotificationsService`, `LicensesService`, `LoggerService`, `LunarApiClient`, `LunarTermsService`, `MacroEnablementService`, `MacroExecutorService`, `MacroPoliciesService`, `MacroShareService`, `MacroTriggerService`, `MacrosService`, `MetadataService`, `ModRuntimeService`, `ModsService`, `MutexService`, `NotificationsService`, `OutfitLibraryStore`, `OutfitThumbnailsService`, `OutfitWearService`, `OutfitsService`, `OverwolfOverlayService`, `OverwolfRecorderService`, `OverwolfService`, `PinnedCommunitiesService`, `PrivateMessagesService`, `PrivateServersService`, `ProfileFrameService`, `ProofOfWorkService`, `ProtocolService`, `RealtimeNotificationService`, `RecorderService`, `ResourceStore`, `RobloxApiClient`, `RobloxCookieStoreService`, `RunningInstancesService`, `SearchService`, `SettingsService`, `SettingsStore`, `SocialCacheService`, `SocialPollerService`, `ThumbnailCacheService`, `ThumbnailDiskCacheService`, `ThumbnailProtocolService`, `ThumbnailService`, `ToastService`, `TradeLinksService`, `TradesService`, `TrayService`, `UpdaterService`, `UpdaterWindowService`, `UserAgreementsService`, `UserInventoryService`, `UserSettingsService`, `UsersService`, `VersionsCleanupService`, `VersionsService`, `WindowService`

## IPC + event channels in main (445)

Registered dynamically: `registerAllControllers()` at `main/index.js:81961` binds Inversify `TYPES.IpcController` instances and calls `ipcMain.handle(channel, ...)` per decorator-registered handler (`main/index.js:81968`). Event channels are pushed via `createEventSubscriber` in `preload/index.js:1091-1254`.

`activity:changed`, `activity:getInstanceTimeline`, `activity:getOverview`, `activity:getRecentSessions`, `activity:sessionEnded`, `analytics:track`, `app:confirmExternalOpen`, `app:externalOpenConfirmRequested`, `app:getInstallationId`, `app:openApplicationFolder`, `app:openExternal`, `auth:accountsChanged`, `auth:activeAccountChanged`, `auth:getAccounts`, `auth:getAvatarHeadshots`, `auth:getFavoriteGames`, `auth:getPresence`, `auth:getRobuxBalance`, `auth:getUser`, `auth:getUserDetails`, `auth:headshotChanged`, `auth:invalidated`, `auth:isAuthenticated`, `auth:login`, `auth:logout`, `auth:removeAccount`, `auth:robuxSpent`, `auth:setCookie`, `auth:switchAccount`, `auth:toggleFavoriteGame`, `avatar:createSavedAvatarFromCurrent`, `avatar:deleteSavedAvatar`, `avatar:equipSavedAvatar`, `avatar:getAssetThumbnails`, `avatar:getAvatar`, `avatar:getBackground`, `avatar:getCategories`, `avatar:getEmotes`, `avatar:getEquippedProfileFrame`, `avatar:getInventory`, `avatar:getOutfitDetails`, `avatar:getOutfitThumbnails`, `avatar:getProfileFrames`, `avatar:getRules`, `avatar:getSavedAvatars`, `avatar:getUserAvatar`, `avatar:redrawThumbnail`, `avatar:renameSavedAvatar`, `avatar:setBackground`, `avatar:setBodyColors`, `avatar:setEmotes`, `avatar:setPlayerAvatarType`, `avatar:setProfileFrame`, `avatar:setScales`, `avatar:setWearingAssets`, `avatar:updateSavedAvatarFromCurrent`, `avatarRender:clearCache`, `avatarRender:getAssets`, `avatarRender:getDefaults`, `avatarRender:prefetch`, `captures:captured`, `captures:chooseCapturesDirectory`, `captures:copyImage`, `captures:deleteCapture`, `captures:getCaptureInfo`, `captures:getStatus`, `captures:libraryChanged`, `captures:listLibrary`, `captures:listMicrophones`, `captures:openCapturesFolder`, `captures:readCaptureImage`, `captures:renameCapture`, `captures:revealCapture`, `captures:saveClip`, `captures:saveEditedCapture`, `captures:setFavorite`, `captures:setFavorites`, `captures:statusChanged`, `captures:takeScreenshot`, `cart:add`, `cart:clear`, `cart:get`, `cart:remove`, `catalog:checkoutCart`, `catalog:getBundleContents`, `catalog:getFavoriteStatus`, `catalog:getItemDetails`, `catalog:getItemThumbnails`, `catalog:getItemsDetails`, `catalog:getItemsDetailsRich`, `catalog:getNavigationMenu`, `catalog:getPromotedShopPages`, `catalog:getRecommendations`, `catalog:getResellers`, `catalog:getTopics`, `catalog:purchaseItem`, `catalog:searchItems`, `catalog:setFavorite`, `challenge:closeCaptchaWindow`, `challenge:dismiss`, `challenge:openCaptchaWindow`, `challenge:requested`, `challenge:solve`, `challenge:triggerTest`, `chat:addUsersToConversation`, `chat:conversationsChanged`, `chat:createConversation`, `chat:getChatAvailability`, `chat:getConversationMessages`, `chat:getConversationMetadata`, `chat:getUserConversations`, `chat:markAsRead`, `chat:messagesChanged`, `chat:removeFromConversation`, `chat:renameGroup`, `chat:sendMessage`, `chat:unreadCountChanged`, `chatPoller:markedAsRead`, `chatPoller:setActiveConversation`, `chatPoller:setChatRouteActive`, `chatPoller:userSentMessage`, `cmp:firstLayerRequired`, `communities:getAllies`, `communities:getAnnouncement`, `communities:getDetails`, `communities:getExperiences`, `communities:getFriendsCommunities`, `communities:getGameCommunity`, `communities:getGameSuggestions`, `communities:getIcons`, `communities:getLinkedShout`, `communities:getMembers`, `communities:getMembership`, `communities:getMetadata`, `communities:getProfileInfo`, `communities:getSearchMetadata`, `communities:getSocialLinks`, `communities:getUserCommunities`, `communities:join`, `communities:leave`, `communities:search`, `discovery:getHomeFeed`, `discovery:getRecentGames`, `events:getActiveUniverseEvents`, `events:getEvent`, `events:getGroupEvents`, `events:getRsvpCounters`, `events:setRsvp`, `featureFlags:changed`, `featureFlags:getAll`, `fonts:clearFont`, `fonts:setFont`, `forums:addReaction`, `forums:createComment`, `forums:createPost`, `forums:deleteComment`, `forums:editComment`, `forums:getChannels`, `forums:getComments`, `forums:getEmotes`, `forums:getFeatures`, `forums:getPinnedPosts`, `forums:getPost`, `forums:getPosts`, `forums:markRead`, `forums:removeReaction`, `friends:acceptFriendRequest`, `friends:checkFriendStatus`, `friends:declineAllFriendRequests`, `friends:declineFriendRequest`, `friends:follow`, `friends:getFriendRequests`, `friends:getFriendStatus`, `friends:getFriends`, `friends:getOnlineFriends`, `friends:isFollowing`, `friends:searchFriends`, `friends:sendFriendRequest`, `friends:unfollow`, `friends:unfriend`, `gameAvatar:activeChanged`, `gameAvatar:clear`, `gameAvatar:get`, `gameAvatar:listActive`, `gameAvatar:resolve`, `gameAvatar:set`, `gameLocale:en_us`, `games:getBySort`, `games:getDetails`, `games:getFriendsPlaying`, `games:getNotificationStatus`, `games:getPlayability`, `games:getPromotedGames`, `games:getServers`, `games:getSocialLinks`, `games:getSorts`, `games:getThumbnails`, `games:getUniverseByPlace`, `games:getUserGames`, `games:getVote`, `games:getVotes`, `games:getWideThumbnails`, `games:setNotification`, `games:setVote`, `instances:create`, `instances:delete`, `instances:duplicate`, `instances:get`, `instances:getAll`, `instances:getFastFlags`, `instances:getUsedVersions`, `instances:isVersionInstalled`, `instances:openDataFolder`, `instances:runningChanged`, `instances:setFastFlags`, `instances:setFpsCap`, `instances:update`, `instances:updateVersion`, `ipc:controller`, `ipc:handlers`, `itemValues:getValueMap`, `launch:createDefaultInstance`, `launch:exited`, `launch:forceQuit`, `launch:getRunningConflict`, `launch:getRunningInstanceId`, `launch:getRunningInstanceIds`, `launch:getRunningVersion`, `launch:instance`, `launch:isAnyRunning`, `launch:isRunning`, `launch:kill`, `launch:killInstance`, `launch:updating`, `launchPreferences:clear`, `launchPreferences:get`, `launchPreferences:set`, `launchmode:app`, `launchmode:edit`, `launchmode:play`, `licenses:getDirect`, `licenses:openFolder`, `log:entry`, `lunarTerms:accept`, `lunarTerms:getPending`, `lunarTerms:pendingChanged`, `macros:cancel`, `macros:cancelImport`, `macros:confirmImport`, `macros:consumePendingImport`, `macros:delete`, `macros:disableForPlace`, `macros:enableForPlace`, `macros:executionChanged`, `macros:exportToFile`, `macros:get`, `macros:getPlacesForMacro`, `macros:importFromFilePicker`, `macros:importRequested`, `macros:libraryChanged`, `macros:list`, `macros:listForPlace`, `macros:openAccessibilitySettings`, `macros:openFolder`, `macros:openInputMonitoringSettings`, `macros:permissionStatus`, `macros:policiesChanged`, `macros:policyForPlace`, `macros:recorderPermissionStatus`, `macros:refresh`, `macros:requestAccessibilityPermission`, `macros:requestRecorderPermission`, `macros:setHotkeyForPlace`, `macros:startRecording`, `macros:stopRecording`, `macros:upsert`, `metadata:getCarouselSlides`, `mods:getForInstance`, `mods:importFolder`, `mods:importZip`, `mods:openFolder`, `mods:refresh`, `mods:remove`, `mods:reorder`, `mods:setEnabled`, `node:assert`, `node:child_process`, `node:crypto`, `node:events`, `node:fs`, `node:fs/promises`, `node:net`, `node:os`, `node:path`, `node:process`, `node:stream`, `node:stream/promises`, `node:timers/promises`, `node:util`, `notifications:getRecent`, `notifications:getUnreadCount`, `notifications:markAllRead`, `notifications:performAction`, `outfits:create`, `outfits:createFolder`, `outfits:delete`, `outfits:deleteFolder`, `outfits:duplicate`, `outfits:list`, `outfits:listForUser`, `outfits:moveToFolder`, `outfits:overwrite`, `outfits:refreshItems`, `outfits:rename`, `outfits:renameFolder`, `outfits:reorderFolder`, `outfits:reorderOutfit`, `outfits:saveAsCharacter`, `outfits:setThumbnail`, `outfits:wear`, `overwolf:acknowledgeFirstLayer`, `overwolf:getMuid`, `overwolf:isCmpRequired`, `overwolf:isFirstLayerRequired`, `overwolf:isOverwolf`, `overwolf:openAdPrivacySettings`, `pinnedCommunities:createFolder`, `pinnedCommunities:deleteFolder`, `pinnedCommunities:list`, `pinnedCommunities:moveToFolder`, `pinnedCommunities:pin`, `pinnedCommunities:renameFolder`, `pinnedCommunities:reorderFolder`, `pinnedCommunities:reorderPin`, `pinnedCommunities:unpin`, `privateMessages:archive`, `privateMessages:getAnnouncements`, `privateMessages:getMessages`, `privateMessages:getUnreadCount`, `privateMessages:markRead`, `privateMessages:markUnread`, `privateServers:canInvite`, `privateServers:create`, `privateServers:getConfig`, `privateServers:getCreatePricing`, `privateServers:getEnabled`, `privateServers:resolveShareLink`, `privateServers:update`, `privateServers:updatePermissions`, `privateServers:updateSubscription`, `protocol:appLink`, `protocol:consumePendingAppLink`, `protocol:consumePendingDeepLink`, `protocol:deepLink`, `robloxLocale:en_us`, `search:getAutocompleteSuggestions`, `search:getLandingPage`, `search:getMarketplaceAutocomplete`, `search:search`, `secondScreen:close`, `secondScreen:focusInstance`, `secondScreen:getLogEntries`, `secondScreen:getRecentInstances`, `secondScreen:getRunningInstances`, `secondScreen:isOpen`, `secondScreen:open`, `settings:get`, `settings:reset`, `settings:set`, `settings:update`, `social:avatarsChanged`, `social:friendRequestsChanged`, `social:friendsChanged`, `social:getCachedSnapshot`, `social:lastGamesChanged`, `social:lastSeenChanged`, `social:presenceChanged`, `socialPoller:userActed`, `thumbnails:getBatch`, `thumbnails:getSingleWithRetry`, `toast:handleInteraction`, `toast:show`, `toast:showToast`, `tradeLinks:changed`, `tradeLinks:listPending`, `tradeLinks:markNotified`, `tradeLinks:removePending`, `tradeLinks:savePending`, `trades:acceptTrade`, `trades:checkCanTradeWith`, `trades:checkEligibility`, `trades:counterTrade`, `trades:declineTrade`, `trades:getMetadata`, `trades:getTradableItems`, `trades:getTradeCount`, `trades:getTradeDetails`, `trades:getTradeList`, `trades:sendTrade`, `updater:checkForUpdates`, `updater:getState`, `updater:quitAndInstall`, `updater:stateChanged`, `updater:switchStream`, `urn:uuid`, `userAgreements:accept`, `userAgreements:getPending`, `userAgreements:pendingChanged`, `userAgreements:refresh`, `userSettings:get`, `userSettings:getAccountInfo`, `userSettings:getCached`, `userSettings:getCachedAccountInfo`, `userSettings:refresh`, `userSettings:update`, `users:getBadgeThumbnails`, `users:getBadges`, `users:getCurrentlyWearing`, `users:getInventoryCategories`, `users:getInventoryPage`, `users:getInventoryVisibility`, `users:getProfile`, `users:getSocialCounts`, `users:search`, `users:updateDescription`, `versions:checkForUpdate`, `versions:cleanup`, `versions:download`, `versions:downloadProgress`, `versions:getChannels`, `versions:getInstalled`, `versions:getInstalledForChannel`, `versions:getLatest`, `versions:getStorageBreakdown`, `versions:isDownloading`, `versions:isInstalled`, `versions:openFolder`, `versions:remove`, `window:close`, `window:getIsMaximized`, `window:mainNavigate`, `window:maximizedChanged`, `window:minimize`, `window:navigateMain`, `window:toggleMaximize`

## HTTPS hosts referenced (65)

- https://6a1e85ef5d78ee9716f8c49e36ba7aad
- https://api.lunarrobloxdev.com
- https://api.lunarrobloxprod.com
- https://apis.rbxcdn.com
- https://apis.roblox.com
- https://arkoselabs.roblox.com
- https://assetdelivery.roblox.com
- https://assetgame.roblox.com
- https://auth.roblox.com
- https://avatar.roblox.com
- https://catalog.roblox.com
- https://clientsettings.roblox.com
- https://clientsettingscdn.roblox.com
- https://content.overwolf.com
- https://developer.chrome.com
- https://developer.mozilla.org
- https://developers.facebook.com
- https://discord.gg
- https://docs.sentry.io
- https://economy.roblox.com
- https://en.wikipedia.org
- https://fetch.spec.whatwg.org
- https://friends.roblox.com
- https://games.roblox.com
- https://gist.github.com
- https://github.com
- https://groups.roblox.com
- https://help.roblox.com
- https://issuetracker.google.com
- https://jcgt.org
- https://json-schema.org
- https://locize.com
- https://mathiasbynens.be
- https://notifications.roblox.com
- https://premiumfeatures.roblox.com
- https://privatemessages.roblox.com
- https://raw.githubusercontent.com
- https://react.dev
- https://registry.khronos.org
- https://roblox-setup.cachefly.net
- https://setup-ak.rbxcdn.com
- https://setup-aws.rbxcdn.com
- https://setup.rbxcdn.com
- https://spec.openapis.org
- https://stackoverflow.com
- https://support.moonsworth.com
- https://tailwindcss.com
- https://thumbnails.roblox.com
- https://tools.ietf.org
- https://trades.roblox.com
- https://twostepverification.roblox.com
- https://users.roblox.com
- https://v3.tailwindcss.com
- https://web.dev
- https://wiki.debian.org
- https://www.gamedev.net
- https://www.i18next.com
- https://www.lunar.gg
- https://www.roblox.com
- https://www.russellcottrell.com
- https://www.safaribooksonline.com
- https://www.tiktok.com
- https://www.twitch.tv
- https://www.youtube.com
- https://x.com

Key endpoints: `https://api.lunarrobloxprod.com` (prod API), `https://api.lunarrobloxdev.com` (dev), Roblox APIs (`apis/auth/avatar/catalog/games/... .roblox.com`), `wss://realtime-signalr.roblox.com/userhub`, Overwolf `https://content.overwolf.com`.

