package;

import SessionData;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.display.FlxBackdrop;
import flixel.addons.display.FlxGridOverlay;
import flixel.group.FlxSpriteGroup;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import networking.Network;
import networking.sessions.Session;
import networking.utils.NetworkEvent;
import networking.utils.NetworkMode;

// online shits
class OnlineMenuState extends FlxState
{
	var curSelected:Int = 0;
	var selectedsum:Bool = false;

	var joinLobby:FlxSprite;
	var makeLobby:FlxSprite;

	override public function create()
	{
		var bgthing:FlxBackdrop = new FlxBackdrop(FlxGridOverlay.createGrid(80, 80, 160, 160, true, 0xFFEDEDED, 0xFFABABAB));
		bgthing.velocity.set(40, 40);
		add(bgthing);

		joinLobby = new FlxSprite().loadGraphic(Paths.image('joinlobby'));
		joinLobby.x = 176.5;
		joinLobby.screenCenter(Y);
		add(joinLobby);

		makeLobby = new FlxSprite().loadGraphic(Paths.image('makelobby'));
		makeLobby.x = 776.5;
		makeLobby.screenCenter(Y);
		add(makeLobby);

		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		joinLobby.y = FlxMath.lerp((curSelected == 0) ? 309.5 : 329.5, joinLobby.y, Math.max(0, Math.min(1, 1 - (elapsed * 12))));
		makeLobby.y = FlxMath.lerp((curSelected == 1) ? 309.5 : 329.5, makeLobby.y, Math.max(0, Math.min(1, 1 - (elapsed * 12))));

		if (!selectedsum)
		{
			if (FlxG.keys.justPressed.LEFT)
			{
				changeSelection();
			}

			if (FlxG.keys.justPressed.RIGHT)
			{
				changeSelection();
			}

			if (FlxG.keys.justPressed.ENTER)
			{
				selectedsum = true;

				switch (curSelected)
				{
					case 0: // join
						SessionData.start(NetworkMode.CLIENT, {ip: '127.0.0.1', port: 9696});
						FlxG.switchState(new OnlineLobbyState());
					case 1: // create
						SessionData.start(NetworkMode.SERVER, {
							ip: '127.0.0.1',
							port: 9696,
							max_connections: 4,
							uuid: 'poop'
						});
						trace('created server');
						FlxG.switchState(new OnlineLobbyState());
				}
			}
		}
	}

	function changeSelection()
	{
		curSelected = 1 - curSelected;
	}
}
