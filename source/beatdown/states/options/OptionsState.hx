package beatdown.states.options;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.display.FlxBackdrop;

class OptionsState extends CoolState
{
	override public function create()
	{
		var peepee = new FlxBackdrop(Paths.image('options/bg'), XY, 0, 0);
		peepee.velocity.set(-30, 0);
		add(peepee);

		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
