package beatdown;

import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxSubState;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;

class CoolTransition extends FlxSubState
{
	public static var finishCallBack:Void->Void;

	var isTransIn:Bool = false;
	var bigblackscreen:FlxSprite;

	public function new(duration:Float, isTransIn:Bool)
	{
		super();

		bigblackscreen = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		bigblackscreen.screenCenter();
		add(bigblackscreen);

		if (isTransIn)
		{
			bigblackscreen.alpha = 1;
			FlxTween.tween(bigblackscreen, {alpha: 0}, duration, {
				onComplete: function(twn:FlxTween)
				{
					close();
				}
			});
		}
		else
		{
			bigblackscreen.alpha = 0;
			FlxTween.tween(bigblackscreen, {alpha: 1}, duration, {
				onComplete: function(twn:FlxTween)
				{
					if (finishCallBack != null)
					{
						finishCallBack();
					}
				}
			});
		}
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}

	override function destroy()
	{
		super.destroy();
	}
}
