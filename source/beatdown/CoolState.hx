package beatdown;

import beatdown.backend.Controls;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.ui.FlxUIState;
import flixel.group.FlxSpriteGroup;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import openfl.Lib;

class CoolState extends FlxUIState
{
	public static var defCam:FlxCamera;
	public static var altCam:FlxCamera;

	var fadeIn:Bool = true;
	var fadeOut:Bool = true;

	public var controls(get, never):Controls;

	private function get_controls()
	{
		return Controls.instance;
	}

	override function create()
	{
		defCam = new FlxCamera();
		altCam = new FlxCamera();
		altCam.bgColor.alpha = 0;

		FlxG.cameras.reset(defCam);
		FlxG.cameras.add(altCam, false);

		super.create();
	}

	override function update(elapsed:Float)
	{
		FlxG.fullscreen = true;

		super.update(elapsed);
	}
}
