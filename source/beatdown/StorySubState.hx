package beatdown;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxSubState;
import flixel.util.FlxColor;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.math.FlxMath;

class StorySubState extends FlxSubState
{
    // hi marioh
    var singleplayerButton:FlxSprite;
    var multiplayerButton:FlxSprite;

    var curSelected:Int = -1;
    var canselect:Bool = false;

    public function new() {
        super();

        singleplayerButton = new FlxSprite().loadGraphic(AssetPaths.singleplayer__png);
        singleplayerButton.x = 1100;
        singleplayerButton.screenCenter(Y);
        add(singleplayerButton);
        
        multiplayerButton = new FlxSprite().loadGraphic(AssetPaths.multiplayer__png);
        multiplayerButton.x = 1100;
        multiplayerButton.y = 470;
        add(multiplayerButton);

        FlxTween.tween(singleplayerButton, {x: 704}, 0.7, {ease: FlxEase.cubeOut});
        FlxTween.tween(multiplayerButton, {x: 724}, 0.7, {
            ease: FlxEase.cubeOut, 
            onComplete: function(twn:FlxTween){
                canselect = true;
                curSelected = 0;
            }
        });
        trace('opened');

    }

    override function update(elapsed:Float)
    {
        if (canselect)
        {
            singleplayerButton.x = FlxMath.lerp((curSelected == 0) ? 704 : 724, singleplayerButton.x, Math.max(0, Math.min(1, 1 - (elapsed * 12))));
            multiplayerButton.x = FlxMath.lerp((curSelected == 1) ? 704 : 724, multiplayerButton.x, Math.max(0, Math.min(1, 1 - (elapsed * 12))));
        }

        super.update(elapsed);
    }
}