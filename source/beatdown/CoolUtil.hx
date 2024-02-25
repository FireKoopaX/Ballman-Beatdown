package beatdown;

import flixel.FlxG;
import flixel.FlxObject;
import openfl.geom.Matrix;
import sys.FileSystem;
import sys.io.File;

class CoolUtil
{
	public static function openFile(path:String)
	{
		if (!FileSystem.exists(path))
		{
			var timer:Float = 0;
			while (!FileSystem.exists(path))
			{
				timer += FlxG.elapsed;
				if (timer > 2)
					break;

				// purely here to wait for it to exist
			};
		}
		if (FileSystem.exists(path))
		{
			Sys.command('start "" "$path"');
		}
		else
		{
			trace("bruh");
		}
	}

	public static function skewSprite(spr:FlxObject)
	{
		var _matrix:Matrix = new Matrix();
	}
}
