package beatdown;

import beatdown.backend.Controls;
import beatdown.objects.GamejoltPopup;
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
	var fadeIn:Bool = true;
	var fadeOut:Bool = true;

	public var controls(get, never):Controls;

	private function get_controls()
	{
		return Controls.instance;
	}

	override function create()
	{
		super.create();
	}

	override function update(elapsed:Float)
	{
		FlxG.fullscreen = true;

		super.update(elapsed);
	}

	public static function gjPopup()
	{
		var penis = new GamejoltPopup();
		Lib.current.addChild(penis);
	}
}
