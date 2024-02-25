package;

import openfl.Assets;

class Paths
{
	public static function image(file:String)
	{
		return Assets.getBitmapData('assets/images/$file.png');
	}

	public static function music(file:String, SOUND_EXT:String)
	{
		return Assets.getSound('assets/music/$file.$SOUND_EXT');
	}

	public static function font(file:String, FONT_EXT:String)
	{
		return Assets.getFont('assets/fonts/$file.$FONT_EXT').fontName;
	}

	public static function sound(file:String)
	{
		return Assets.getSound('assets/sounds/$file.wav');
	}

	public static var userDesktop = Sys.getEnv(if (Sys.systemName() == "Windows") "UserProfile" else "HOME") + "\\Desktop";
}
