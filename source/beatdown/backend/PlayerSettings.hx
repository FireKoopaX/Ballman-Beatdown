package beatdown.backend;

import flixel.input.gamepad.FlxGamepadInputID;
import flixel.input.keyboard.FlxKey;
import flixel.util.FlxSave;

class PlayerSettings
{
	public static var keybinds:Map<String, Array<FlxKey>> = [
		'up' => [W, UP],
		'left' => [A, LEFT],
		'down' => [S, DOWN],
		'right' => [D, RIGHT],
		'accept' => [ENTER],
		'back' => [ESCAPE, BACKSPACE],
		'pause' => [ENTER]
	];

	public static var gamepadbinds:Map<String, Array<FlxGamepadInputID>> = [
		'up' => [DPAD_UP, LEFT_STICK_DIGITAL_UP],
		'left' => [DPAD_LEFT, LEFT_STICK_DIGITAL_LEFT],
		'down' => [DPAD_DOWN, LEFT_STICK_DIGITAL_DOWN],
		'right' => [DPAD_RIGHT, LEFT_STICK_DIGITAL_RIGHT],
		'accept' => [A],
		'back' => [B],
		'pause' => [START]
	];

	public static var antiAliasing:Bool = true;
}
