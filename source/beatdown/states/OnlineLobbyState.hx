package beatdown.states;

import flixel.FlxG;
import flixel.FlxState;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.math.FlxMath;
import flixel.util.FlxColor;
import flixel.group.FlxSpriteGroup;
//online shits
import networking.Network;
import networking.sessions.Session;
import networking.utils.NetworkEvent;
import networking.utils.NetworkMode;
import SessionData;


class OnlineLobbyState extends FlxState
{
    public static var playerList:Array<Int> = [0];
    
    public static var yourPlayerID:Int = 0;
    public static var setplayerid:Bool = false;

    var fartgroup:FlxSpriteGroup;

    var debugText:FlxText;

    var colors = [0xFFFF0000, 0xFF00A2FF, 0xFFFFE100, 0xFF00EB00];

    public static var playerx:Array<Float> = [0, 0, 0, 0];

    //ALL TEST SHIT AND BECAUSE I WANNA LOL
    var sx:Float = 0;
    var lastx:Float = 0; //this is because it lags like a motherfucker whenever a message is sent across the server for every update, which is understandable

    override public function create()
    {
        fartgroup = new FlxSpriteGroup();
        add(fartgroup);

        for (i in 0...4)
        {
            var playerSQ:FlxSprite = new FlxSprite().makeGraphic(200, 200, colors[i]);
            playerSQ.x = i * 300;
            playerx[i] = playerSQ.x;
            playerSQ.ID = i;
            playerSQ.screenCenter(Y);
            fartgroup.add(playerSQ);
        }

        debugText = new FlxText(0, 0, 1280, 'Player ', 40, true);
        debugText.screenCenter();
        add(debugText);

        super.create();
    }
    
    override public function update(elapsed:Float)
    {
        debugText.text = 'Player ' + (yourPlayerID + 1);

        updatePlayerCount();

        doPlayerMoveStuff();

        super.update(elapsed);
    }

    function updatePlayerCount()
    {
        for (i in 0...fartgroup.length)
        {
            fartgroup.members[i].alpha = 0;
            fartgroup.members[i].x = playerx[i];

            if(fartgroup.members[i].ID <= playerList.length - 1)
            {
                fartgroup.members[i].alpha = 1;
            }
        }
    }

    function doPlayerMoveStuff()
    {
        if (FlxG.keys.pressed.LEFT)
        {
            sx -= 1.5;
        }
        if (FlxG.keys.pressed.RIGHT)
        {
            sx += 1.5;
        }
        sx = (sx * 0.9);

        playerx[yourPlayerID] += sx;

        if (lastx != playerx[yourPlayerID])
        {
            SessionData.handlePlayerShit('move', yourPlayerID);
            lastx = playerx[yourPlayerID];
        }
    }
}