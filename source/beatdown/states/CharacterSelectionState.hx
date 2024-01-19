package beatdown.states;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.util.FlxColor;
import flixel.util.FlxSpriteUtil;

class CharacterSelectionState extends CoolState
{
	override public function create()
	{
		var tempBG:FlxSprite = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.WHITE);
		tempBG.screenCenter();
		add(tempBG);

		var blackBar:FlxSprite = new FlxSprite().makeGraphic(FlxG.width, 120, FlxColor.BLACK);
		blackBar.screenCenter(X);
		blackBar.y = 0;
		add(blackBar);

		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
