package;

import flixel.FlxGame;
import openfl.display.Sprite;
import beatdown.*;

class Main extends Sprite
{
	public function new()
	{
		super();
		addChild(new FlxGame(0, 0, LogoSplash, 60, 60, false));
	}
}
