package beatdown.objects;

import flixel.graphics.FlxGraphic;
import lime.graphics.cairo.Cairo;
import lime.graphics.cairo.CairoImageSurface;
import openfl.display.BitmapData;
import openfl.display.Sprite;

class Arc extends Sprite
{
	public var amount:Int; // 0-100 lol

	public function new(x:Float, y:Float, radius:Float, frames:Int = 50, ?image:FlxGraphic)
	{
		super();

		var bmd = new BitmapData(200, 200, true, 0);
		var surface = CairoImageSurface.fromImage(bmd.image);
		var _arc = new Cairo(surface);

		_arc.lineWidth = 5;
	}
}
