package;

import flixel.FlxG;
import networking.sessions.Session;
import networking.Network;
import networking.utils.NetworkEvent;
import networking.utils.NetworkMode;
import OnlineLobbyState;

import lime.app.Application;

class SessionData
{
    public static var _session:Session;

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
            switch(_session.mode)
            {
                case SERVER:
                    switch (e.verb)
                    {
                        case 'playerJoin':
                            trace('pushed server');
                            OnlineLobbyState.playerList.push(0);
                        case 'disconnect':
                            OnlineLobbyState.playerList.remove(0);
                    }  
                case CLIENT:
                    switch(e.verb)
                    {
                        case 'updatePC':
                            OnlineLobbyState.playerList.resize(e.data.val + 1);

                            if (!OnlineLobbyState.setplayerid)
                            {
                                OnlineLobbyState.yourPlayerID = e.data.val;
                                OnlineLobbyState.setplayerid = true;
                            }
                    }
            }

            switch(e.verb)
            {
                case 'playerMove':
                    OnlineLobbyState.playerx[e.data.p] = e.data.tx;
                    trace('got move player message');
            }
        }

    public static function onConnected(e:NetworkEvent)
    {
        SessionData._session.send({verb: "playerJoin"});

        switch (_session.mode)
        {
            case SERVER:
                SessionData._session.send({verb: "updatePC", val: OnlineLobbyState.playerList.length});
                trace ('Server connected!');
                OnlineLobbyState.yourPlayerID = 0;   
                
                for (i in 0...OnlineLobbyState.playerList.length)
                {
                    SessionData._session.send({verb: "playerMove", p: i, tx: OnlineLobbyState.playerx[i]});
                }
            case CLIENT:
                trace ('Client connected!');
        }
    }

    public static function onDisconnect(e:NetworkEvent)
    {
        SessionData._session.send({verb: "disconnect"});

        trace('butt');
        switch(_session.mode)
        {
            case SERVER:
                OnlineLobbyState.playerList.remove(0);
                SessionData._session.send({verb: "updatePC", val: OnlineLobbyState.playerList.length});
            case CLIENT:
                trace('negro thompson');
        }
    }

    public static function handlePlayerShit(type:String, player:Int)
    {
        switch(type)
        {
            case 'move':
                _session.send({verb: "playerMove", p: player, tx: OnlineLobbyState.playerx[player]});
        }
    }
}