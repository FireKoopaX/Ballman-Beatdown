package;

import beatdown.*;
import beatdown.backend.*;
import beatdown.game.PlayState;
import beatdown.states.options.OptionsState;
import flixel.FlxG;
import flixel.FlxGame;
import openfl.display.Sprite;

class Main extends Sprite
{
	public function new()
	{
		super();
		addChild(new FlxGame(0, 0, PlayState, 60, 60, true));

		FlxG.mouse.visible = false;

		Controls.instance = new Controls();
	}
}
