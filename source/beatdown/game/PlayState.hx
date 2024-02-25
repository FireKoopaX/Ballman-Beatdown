package beatdown.game;

import beatdown.backend.PlayerSettings;
import flixel.FlxCamera;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxStringUtil;
import flixel.util.FlxTimer;

class PlayState extends CoolState
{
	// cameras!!!
	var camMain:FlxCamera;
	var camHUD:FlxCamera;

	// changeable variables
	public static var gameTime:Int = 60; // the amount of time in seconds, if -1 means infinite time

	// game objects
	var timePercent:Float = 0; // for the pie timer;
	var tElapsed:Float = 0;
	var countdownText:FlxText;
	var timeText:FlxText;

	var pPlayer:FlxSprite;

	// other stuff
	var gameStarted:Bool = false;

	override public function create()
	{
		camMain = new FlxCamera();

		camHUD = new FlxCamera();
		camHUD.bgColor.alpha = 0;

		FlxG.cameras.reset(camMain);
		FlxG.cameras.add(camHUD, false);

		var penis = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.GREEN);
		penis.screenCenter();
		add(penis);

		countdownText = new FlxText(0, 0, FlxG.width, "", 0);
		countdownText.setFormat(null, 70, FlxColor.WHITE, CENTER, OUTLINE, FlxColor.BLACK);
		countdownText.screenCenter();
		countdownText.alpha = 0;
		countdownText.antialiasing = PlayerSettings.antiAliasing;
		countdownText.cameras = [camHUD];
		add(countdownText);

		timeText = new FlxText(0, 0, 1250, "", 25);
		timeText.setFormat(null, 25, FlxColor.WHITE, RIGHT, OUTLINE, FlxColor.BLACK);
		timeText.x = 0;
		timeText.y = 110;
		timeText.antialiasing = PlayerSettings.antiAliasing;
		timeText.cameras = [camHUD];
		add(timeText);

		startGame();

		super.create();
	}

	override public function update(elapsed:Float)
	{
		if (gameStarted)
		{
			timePercent = tElapsed / gameTime;

			countdownText.alpha = FlxMath.lerp(0, countdownText.alpha, Math.max(0, Math.min(1, 1 - (elapsed * 3))));

			timeText.text = FlxStringUtil.formatTime(gameTime - tElapsed);
		}

		super.update(elapsed);
	}

	function startGame()
	{
		gameStarted = true;
		new FlxTimer().start(1, function(tmr:FlxTimer)
		{
			tElapsed += 1;
			if (gameTime - tElapsed <= 4)
			{
				// the countdown!!!!
				var coolswag = (gameTime - tElapsed) + 1;
				switch (coolswag)
				{
					case 0:
						countdownText.text = "FINISHED";
						countdownText.alpha = 1;
					case 1:
						countdownText.text = "1";
						countdownText.alpha = 1;
					case 2:
						countdownText.text = "2";
						countdownText.alpha = 1;
					case 3:
						countdownText.text = "3";
						countdownText.alpha = 1;
					case 4:
						countdownText.text = "4";
						countdownText.alpha = 1;
					case 5:
						countdownText.text = "5";
						countdownText.alpha = 1;
				}
			}
		}, 0);
	}
}
