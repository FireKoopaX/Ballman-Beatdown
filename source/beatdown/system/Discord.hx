package beatdown.system;

import Sys.sleep;
import discord_rpc.DiscordRpc;

using StringTools;

class DiscordClient
{
	public static var isInitialized:Bool = false;

	public function new()
	{
		trace("Discord Client starting...");
		DiscordRpc.start({
			clientID: "1178373679948779530",
			onReady: onReady,
			onError: onError,
			onDisconnected: onDisconnected
		});
		trace("Discord Client started.");

		while (true)
		{
			DiscordRpc.process();
			sleep(2);
			// trace("Discord Client Update");
		}

		DiscordRpc.shutdown();
	}

	public static function shutdown()
	{
		DiscordRpc.shutdown();
	}

	static function onReady()
	{
		DiscordRpc.presence({
			details: "In the Menus",
			state: null,
			largeImageKey: 'main',
			largeImageText: "Ballman Beatdown"
		});
	}

	static function onError(_code:Int, _message:String)
	{
		trace('Error! $_code : $_message');
	}

	static function onDisconnected(_code:Int, _message:String)
	{
		trace('Disconnected! $_code : $_message');
	}

	public static function initialize()
	{
		var DiscordDaemon = sys.thread.Thread.create(() ->
		{
			new DiscordClient();
		});
		trace("Discord Client initialized");
		isInitialized = true;
	}

	public static function changePresence(details:String, state:Null<String>, largeImageKey:String)
	{
		DiscordRpc.presence({
			details: details,
			state: state,
			largeImageKey: largeImageKey,
			largeImageText: "Ballman Beatdown",
		});

		// trace('Discord RPC Updated. Arguments: $details, $state, $smallImageKey, $hasStartTimestamp, $endTimestamp');
	}
}
