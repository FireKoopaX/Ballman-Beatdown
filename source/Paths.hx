package;

class Paths
{
	public static function image(file:String)
	{
		if (sys.FileSystem.exists('assets/images/$file.png'))
			return 'assets/images/$file.png';
		else
			trace('hey man $file is returning null!!!!');
		return null;
	}

	public static function music(file:String, SOUND_EXT:String)
	{
		if (sys.FileSystem.exists('assets/music/$file.$SOUND_EXT'))
			return 'assets/music/$file.$SOUND_EXT';
		else
			trace('hey man $file is returning null!!!!');
		return null;
	}

	public static function font(file:String, FONT_EXT:String)
	{
		if (sys.FileSystem.exists('assets/fonts/$file.$FONT_EXT'))
			return 'assets/fonts/$file.$FONT_EXT';
		else
			trace('hey man $file is returning null!!!!');
		return null;
	}
}
