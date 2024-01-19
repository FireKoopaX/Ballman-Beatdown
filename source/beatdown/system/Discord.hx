package beatdown.system;

import Sys.sleep;
import beatdown.states.*;
import discord_rpc.DiscordRpc;
import flixel.FlxG;
import networking.utils.NetworkMode;

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
			onDisconnected: onDisconnected,
			onJoin: onJoin
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
		if (FlxG.save.data.boobs)
		{
			DiscordRpc.presence({
				details: "???",
				state: 'What the fuck',
				largeImageKey: 'boobs',
				largeImageText: "Ballman Beatdown"
			});
		}
		else
		{
			DiscordRpc.presence({
				details: "In the Menus",
				state: null,
				largeImageKey: 'main',
				largeImageText: "Ballman Beatdown"
			});
		}
	}

	static function onError(_code:Int, _message:String)
	{
		trace('Error! $_code : $_message');
	}

	static function onDisconnected(_code:Int, _message:String)
	{
		trace('Disconnected! $_code : $_message');
	}

	static function onJoin(_joinSecret:String)
	{
		SessionData.start(NetworkMode.CLIENT, {
			ip: '127.0.0.1',
			port: 1234
		});
		FlxG.switchState(new OnlineLobbyState());
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

	public static function changePresence(details:String, state:Null<String>, largeImageKey:String, ?smallImageKey:String, ?partyID:String, ?partySize:Int,
			?partyMax:Int, ?spectateSecret:String, ?joinSecret:String, ?matchSecret:String)
	{
		DiscordRpc.presence({
			details: details,
			state: state,
			largeImageKey: largeImageKey,
			largeImageText: "Ballman Beatdown",
			smallImageKey: smallImageKey,
			partyID: partyID,
			partySize: partySize,
			partyMax: partyMax,
			matchSecret: matchSecret,
			joinSecret: joinSecret,
			spectateSecret: spectateSecret,
		});

		// trace('Discord RPC Updated. Arguments: $details, $state, $smallImageKey, $hasStartTimestamp, $endTimestamp');
	}
}
