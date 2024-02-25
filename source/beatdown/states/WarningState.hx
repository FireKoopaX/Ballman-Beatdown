package beatdown.states;

class WarningState extends CoolState
{
	var outdated(get, never):Bool;

	private function get_outdated()
		return isOutdated();

	override public function create()
	{
		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}

	function isOutdated()
	{
		trace('update checking!!!!!!!!');
		var http = new haxe.Http("");

		return false;
	}
}
