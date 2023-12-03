package beatdown.states;

import beatdown.system.*;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxSpriteGroup;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import networking.Network;
import networking.sessions.Session;
import networking.utils.NetworkEvent;
import networking.utils.NetworkMode;
#if discord_rpc
import beatdown.system.Discord.DiscordClient;
import beatdown.system.Discord;
#end

// online shits
class OnlineLobbyState extends FlxState
{
	var fartgroup:FlxSpriteGroup;
	var thingypositions:Array<Float> = [0, 0, 0, 0];

	var debugText:FlxText;

	var colors = [0xFFFF0000, 0xFF00A2FF, 0xFFFFB700, 0xFF00EB00];

	override public function create()
	{
		fartgroup = new FlxSpriteGroup();
		add(fartgroup);

		for (i in 0...4)
		{
			var playerSQ:FlxSprite = new FlxSprite().loadGraphic(Paths.image('onlineLobby/thing'));
			playerSQ.setGraphicSize(290, 0);
			playerSQ.x = i * 300;
			playerSQ.ID = i;
			playerSQ.screenCenter(Y);
			fartgroup.add(playerSQ);
		}

		debugText = new FlxText(0, 0, 1280, 'Player ', 40, true);
		debugText.screenCenter();
		add(debugText);

		if (SessionData._session.mode == SERVER)
		{
			SessionData._PLAYERID = 0;
			trace('hi');
		}

		super.create();
	}

	override public function update(elapsed:Float)
	{
		debugText.text = 'Player ' + (SessionData._PLAYERID + 1);

		updatePlayerCount();

		super.update(elapsed);
	}

	function updatePlayerCount()
	{
		for (i in 0...fartgroup.length)
		{
			if (fartgroup.members[i].ID <= SessionData._PLAYERS)
			{
				fartgroup.members[i].color = colors[fartgroup.members[i].ID];
			}
			else
			{
				fartgroup.members[i].color = FlxColor.WHITE;
			}
		}

		#if discord_rpc
		DiscordClient.changePresence('Playing Online', 'In a party', 'main', null, '1234', SessionData._PLAYERS + 1, 4);
		#end
	}
}
