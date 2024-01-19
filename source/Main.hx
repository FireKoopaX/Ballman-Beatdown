package;

import beatdown.*;
import beatdown.backend.*;
import flixel.FlxG;
import flixel.FlxGame;
import openfl.display.Sprite;

class Main extends Sprite
{
	public function new()
	{
		super();
		addChild(new FlxGame(0, 0, LogoSplash, 60, 60, true));

		FlxG.mouse.visible = false;

		Controls.instance = new Controls();
	}
}
