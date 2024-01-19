package beatdown.states;

import beatdown.backend.*;
import flixel.FlxG;
import flixel.addons.display.FlxBackdrop;
import flixel.addons.display.FlxGridOverlay;
import flixel.tweens.FlxTween;
import flixel.util.FlxGradient;

class CreditsState extends CoolState
{
	var credits:Array<Dynamic> = [['FireKoopa', 'Director, Coder, Artist',],];
	var intendedColor:Int;
	var colorTween:FlxTween;

	override public function create()
	{
		var coolgradient = FlxGradient.createGradientFlxSprite(FlxG.width, FlxG.height, [0xFFFFFFFF, 0xFF8B8B8B], 1, 90, false);
		coolgradient.screenCenter();
		coolgradient.antialiasing = PlayerSettings.antiAliasing;
		add(coolgradient);

		coolgradient.color = 0xFFFF6600;

		var background = new FlxBackdrop(FlxGridOverlay.createGrid(80, 80, 160, 160, true, 0x32000000, 0x0));
		background.velocity.set(0, 40);
		background.antialiasing = PlayerSettings.antiAliasing;
		add(background);

		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
