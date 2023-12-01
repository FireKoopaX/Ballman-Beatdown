package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.display.FlxBackdrop;
import flixel.addons.display.FlxGridOverlay;
import flixel.group.FlxSpriteGroup;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
#if desktop
import Discord.DiscordClient;
#end

class TitleMenuState extends FlxState
{
	var menubg:FlxSprite;
	var curSelected:Int = -1;
	var buttons:FlxSpriteGroup;
	var buttonList:Array<String> = ['Story', 'Versus', 'Practice', 'Options', 'Locked'];
	var selectedsum:Bool = true;
	var logo:FlxSprite;
	var scrollingthing:FlxBackdrop;
	var ballman:FlxSprite;

	override public function create()
	{
		menubg = new FlxSprite().loadGraphic(Paths.image('menushitslol/menubg'));
		menubg.screenCenter();
		add(menubg);

		scrollingthing = new FlxBackdrop(FlxGridOverlay.createGrid(80, 80, 160, 160, true, 0x0, 0x50FFFFFF));
		scrollingthing.velocity.set(20, 20);
		add(scrollingthing);

		logo = new FlxSprite().loadGraphic(Paths.image('menushitslol/banger_logo'));
		logo.screenCenter(Y);
		logo.x = 50;
		selectedsum = false;
		add(logo);

		buttons = new FlxSpriteGroup();

		for (i in 0...buttonList.length) // main 5 buttons on the side of the screen
		{
			var buttondhhhf:FlxSprite = new FlxSprite().loadGraphic(Paths.image('menushitslol/' + buttonList[i]));
			buttondhhhf.ID = i;
			buttondhhhf.x = 810;
			buttondhhhf.y = 47 + (i * 130);
			buttons.add(buttondhhhf);
		}

		var otherbuttond:FlxSprite = new FlxSprite().loadGraphic(Paths.image('menushitslol/tophy'));
		otherbuttond.ID = 5;
		otherbuttond.x = 30;
		otherbuttond.y = 30;
		buttons.add(otherbuttond);

		var otherbuttond2:FlxSprite = new FlxSprite().loadGraphic(Paths.image('menushitslol/Gamejolt'));
		otherbuttond2.ID = 6;
		otherbuttond2.x = 160;
		otherbuttond2.y = 30;
		buttons.add(otherbuttond2);

		add(buttons);

		ballman = new FlxSprite().loadGraphic(Paths.image('menushitslol/ballman'));
		ballman.setGraphicSize(Std.int(ballman.width * 0.9));
		ballman.x = 30;
		ballman.y = 120;
		add(ballman);

		if (FlxG.sound.music == null)
		{
			FlxG.sound.playMusic(Paths.music('menu_theme', 'ogg'), 1, true);
		}

		FlxTween.tween(logo, {angle: -5}, 2, {
			type: PINGPONG,
			ease: FlxEase.cubeInOut
		});

		super.create();
	}

	override public function update(elapsed:Float)
	{
		if (!selectedsum)
		{
			buttons.forEach(function(spr:FlxSprite)
			{
				if (FlxG.mouse.overlaps(spr))
				{
					curSelected = spr.ID;
				}

				if (spr.ID < 5)
					spr.x = FlxMath.lerp((spr.ID == curSelected) ? 765 : 830, spr.x, Math.max(0, Math.min(1, 1 - (elapsed * 12))));
				else
					spr.y = FlxMath.lerp((spr.ID == curSelected) ? 20 : 30, spr.y, Math.max(0, Math.min(1, 1 - (elapsed * 12))));

				spr.alpha = FlxMath.lerp((spr.ID == curSelected) ? 1 : 0.7, spr.alpha, Math.max(0, Math.min(1, 1 - (elapsed * 12))));
			});

			if (!FlxG.mouse.overlaps(buttons))
			{
				curSelected = -1;
			}

			if (FlxG.mouse.overlaps(buttons) && FlxG.mouse.justPressed)
			{
				if (curSelected == 4)
				{
					FlxG.camera.shake(0.02, 0.2);
				}
				else
				{
					selectedsum = true;
					docoolshit();
				}
			}
		}

		logo.angle = FlxMath.lerp(0, logo.angle, Math.max(0, Math.min(1, 1 - (elapsed * 12))));

		super.update(elapsed);
	}

	function changeSelection(bal:Int)
	{
		curSelected += bal;

		if (curSelected >= buttonList.length)
			curSelected = 0;
		if (curSelected < 0)
			curSelected = buttonList.length - 1;
	}

	function docoolshit()
	{
		switch (curSelected)
		{
			case 0:
				FlxG.switchState(new StoryMenuState());
			case 1:
			// FlxG.switchState(new VersusMenuState());
			case 2:
			// FlxG.switchState(new PracticeMenuState());
			case 3:
			// FlxG.switchState(new OptionsMenuState());
			case 5:
			// fewiuhf
			case 6:
				// iuehwf
		}
	}
}
