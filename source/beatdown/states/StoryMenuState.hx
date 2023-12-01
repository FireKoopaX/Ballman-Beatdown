package beatdown.states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.display.FlxBackdrop;
import flixel.addons.display.FlxGridOverlay;
import flixel.math.FlxMath;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;

class StoryMenuState extends FlxState
{
	var backgroundthing:FlxBackdrop;

	var singleplayerButton:FlxSprite;
	var multiplayerButton:FlxSprite;
	var backButton:FlxSprite;

	var curSelected:Int = -1;
	var canselect:Bool = false;

	override public function create()
	{
		backgroundthing = new FlxBackdrop(FlxGridOverlay.createGrid(80, 80, 160, 160, true, 0xFF005EFF, 0xFF0017EB));
		backgroundthing.velocity.set(-40, 40);
		add(backgroundthing);

		singleplayerButton = new FlxSprite().loadGraphic(AssetPaths.singleplayer__png);
		singleplayerButton.x = 1100;
		singleplayerButton.screenCenter(Y);
		add(singleplayerButton);

		multiplayerButton = new FlxSprite().loadGraphic(AssetPaths.multiplayer__png);
		multiplayerButton.x = 1100;
		multiplayerButton.y = 470;
		add(multiplayerButton);

		backButton = new FlxSprite().loadGraphic(Paths.image('BackButton'), true, 227, 99);
		backButton.animation.addByPrefix("Selected", 'sel', 1, false);
		backButton.animation.addByPrefix("Unselected", 'unsel', 1, false);
		backButton.animation.play('Selected');
		backButton.x = 40;
		backButton.y = 40;
		add(backButton);

		FlxTween.tween(singleplayerButton, {x: 704}, 0.7, {ease: FlxEase.cubeOut});
		FlxTween.tween(multiplayerButton, {x: 724}, 0.7, {
			ease: FlxEase.cubeOut,
			onComplete: function(twn:FlxTween)
			{
				canselect = true;
				curSelected = 0;
			}
		});

		super.create();
	}

	override public function update(elapsed:Float)
	{
		if (FlxG.mouse.overlaps(backButton))
		{
			backButton.animation.play('Selected');

			if (FlxG.mouse.justPressed)
			{
				FlxG.switchState(new TitleMenuState());
			}
		}
		else
		{
			backButton.animation.play('Unselected');
		}

		super.update(elapsed);
	}
}
