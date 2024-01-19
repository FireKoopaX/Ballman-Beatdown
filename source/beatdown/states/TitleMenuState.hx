package beatdown.states;

import beatdown.backend.*;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;

class TitleMenuState extends CoolState
{
	var coolText:FlxText;

	var peepee:Float;

	override public function create()
	{
		var bg = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.WHITE);
		bg.screenCenter();
		bg.scale.x = 0;
		add(bg);

		var blackBars = new FlxSprite().loadGraphic(Paths.image('menushitslol/blackbars'));
		blackBars.screenCenter();
		add(blackBars);

		var logo = new FlxSprite().loadGraphic(Paths.image('menushitslol/banger_logo'));
		logo.screenCenter();
		logo.antialiasing = PlayerSettings.antiAliasing;
		add(logo);

		FlxTween.tween(bg, {"scale.x": 1}, 0.2, {ease: FlxEase.cubeOut});

		FlxTween.tween(logo, {angle: -5}, 2, {
			type: PINGPONG,
			ease: FlxEase.cubeInOut
		});

		coolText = new FlxText(0, 0, FlxG.width, "", 10);
		coolText.setFormat(null, 35, FlxColor.WHITE, CENTER, OUTLINE, FlxColor.BLACK, false);
		coolText.font = Paths.font('Crang', 'ttf');
		coolText.text = 'PRESS ANY KEY TO CONTINUE';
		coolText.antialiasing = PlayerSettings.antiAliasing;
		coolText.screenCenter(X);
		coolText.y = 720 - coolText.height + 6;
		add(coolText);

		super.create();
	}

	override public function update(elapsed:Float)
	{
		peepee += 180 * (elapsed * 0.7);
		coolText.alpha = 1 - Math.sin((Math.PI * peepee) / 180);

		if (FlxG.keys.pressed.ANY)
		{
			FlxG.switchState(new MenuState());
		}

		super.update(elapsed);
	}
}
