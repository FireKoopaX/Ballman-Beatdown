package beatdown.objects;

import flash.display.BitmapData;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.util.FlxColor;
import openfl.Lib;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.geom.Matrix;

class GamejoltPopup extends Sprite
{
	public function new()
	{
		super();

		graphics.beginFill(FlxColor.BLACK);
		graphics.drawRoundRect(0, 0, 420, 300, 30, 30);

		x = 200;
		y = 200;

		FlxG.game.addChild(this);

		addEventListener(Event.ENTER_FRAME, update);
	}

	function update(e:Event)
	{
		// peepee
	}
}
