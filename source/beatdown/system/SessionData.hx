package beatdown.system;

import beatdown.states.*;
import flixel.FlxG;
import lime.app.Application;
import networking.Network;
import networking.sessions.Session;
import networking.utils.NetworkEvent;
import networking.utils.NetworkMode;

class SessionData
{
	public static var _session:Session;

	public static var _PLAYERS:Int = 0;
	public static var _PLAYERID:Int = -1;

	// it goes [PlayerNum, Name, Fighter Chosen, Status (Ready, not ready, spectate)]
	public static var _PLAYERINFO:Array<Dynamic> = [['p0', '', '', ''], ['p1', '', '', ''], ['p2', '', '', ''], ['p3', '', '', '']];

	public static function start(mode:NetworkMode, params:Dynamic)
	{
		_session = Network.registerSession(mode, params);

		_session.addEventListener(NetworkEvent.CONNECTED, onConnected);
		_session.addEventListener(NetworkEvent.MESSAGE_RECEIVED, onMessageRecieved);
		_session.addEventListener(NetworkEvent.DISCONNECTED, onDisconnect);

		_session.start();
	}

	public static function onMessageRecieved(e:NetworkEvent)
	{
		trace('message ' + _session.mode);
		switch (_session.mode)
		{
			case SERVER:
				switch (e.verb)
				{
					case 'playerJoin':
						_PLAYERS += 1;
						trace('pushed server');
					case 'disconnect':
						_PLAYERS -= 1;
				}
			case CLIENT:
				switch (e.verb)
				{
					case 'updatePC':
						_PLAYERS = e.data.val;

						if (_PLAYERID == -1)
						{
							_PLAYERID = e.data.val;
						}
				}
		}
	}

	public static function onConnected(e:NetworkEvent)
	{
		SessionData._session.send({verb: "playerJoin"});

		switch (_session.mode)
		{
			case SERVER:
				trace(_PLAYERS);
				_session.send({verb: "updatePC", val: _PLAYERS + 1});
				// _session.send({verb: 'updateInfo', val: })
				trace('Server connected!');
			case CLIENT:
				trace('Client connected!');
		}
	}

	public static function onDisconnect(e:NetworkEvent)
	{
		SessionData._session.send({verb: "disconnect"});

		trace('butt');
		switch (_session.mode)
		{
			case SERVER:
				SessionData._session.send({verb: "updatePC", val: _PLAYERS + 1});
			case CLIENT:
				trace('negro thompson');
		}
	}

	public static function handlePlayerShit(type:String, player:Int)
	{
		// penis mcdildo
	}
}
