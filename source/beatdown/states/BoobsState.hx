package beatdown.states;

import beatdown.system.*;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
#if discord_rpc
import beatdown.system.Discord.DiscordClient;
import beatdown.system.Discord;
#end

class BoobsState extends FlxState
{
	var player:FlxSprite;

	override public function create()
	{
		var bgshit:FlxSprite = new FlxSprite().makeGraphic(100, 100, FlxColor.WHITE);
		bgshit.screenCenter(Y);
		bgshit.x = 800;
		add(bgshit);

		player = new FlxSprite().makeGraphic(100, 200, FlxColor.WHITE);
		player.screenCenter();
		add(player);

		FlxG.camera.follow(player, TOPDOWN, 0.6);

		FlxG.camera.fade(FlxColor.BLACK, 2, true);

		super.create();
	}

	override public function update(elapsed:Float)
	{
		if (FlxG.keys.pressed.UP)
		{
			player.y -= 5;
		}

		if (FlxG.keys.pressed.DOWN)
		{
			player.y += 5;
		}

		if (FlxG.keys.pressed.LEFT)
		{
			player.x -= 5;
		}

		if (FlxG.keys.pressed.RIGHT)
		{
			player.x += 5;
		}

		super.update(elapsed);
	}
}
