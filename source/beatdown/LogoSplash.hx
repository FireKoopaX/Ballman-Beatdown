package beatdown;

import beatdown.backend.*;
import beatdown.states.*;
import beatdown.system.*;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.display.FlxBackdrop;
import flixel.addons.display.FlxGridOverlay;
import flixel.addons.effects.FlxTrail;
import flixel.addons.transition.FlxTransitionableState;
import flixel.input.gamepad.FlxGamepad;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import lime.app.Application;
import networking.utils.NetworkMode;
#if discord_rpc
import beatdown.system.Discord.DiscordClient;
import beatdown.system.Discord;
#end

class LogoSplash extends CoolState
{
	var Logo:FlxSprite;
	var otherLogo:FlxSprite;
	var penisMcDildo:FlxBackdrop;
	var logoTrail:FlxTrail;

	var counter:Int = 0;

	public static var discordJoin:Bool = false;

	override public function create()
	{
		penisMcDildo = new FlxBackdrop(FlxGridOverlay.createGrid(80, 80, 160, 160, true, 0xFFFF6200, 0xFFD14900));
		penisMcDildo.velocity.set(40, 40);
		penisMcDildo.alpha = 0;
		penisMcDildo.antialiasing = PlayerSettings.antiAliasing;
		add(penisMcDildo);

		Logo = new FlxSprite().loadGraphic(Paths.image('logo'));
		Logo.screenCenter(X);
		Logo.y = -300;
		Logo.antialiasing = PlayerSettings.antiAliasing;

		logoTrail = new FlxTrail(Logo, null, 5, 4, 0.3, 0.069);
		add(logoTrail);
		add(Logo);

		otherLogo = new FlxSprite().loadGraphic(Paths.image('firekoopa'));
		otherLogo.screenCenter(X);
		otherLogo.y = 900;
		otherLogo.antialiasing = PlayerSettings.antiAliasing;
		otherLogo.setGraphicSize(Std.int(otherLogo.width * 0.6));
		add(otherLogo);

		transOut = FlxTransitionableState.defaultTransOut;

		#if discord_rpc
		DiscordClient.initialize();

		Application.current.onExit.add(function(exitCode)
		{
			DiscordClient.shutdown();
		});
		#end

		FlxGameJolt.init(GJKeys.id, GJKeys.key);
		if (FlxG.save.data.gjUser != null)
			FlxGameJolt.authUser(FlxG.save.data.gjUser, FlxG.save.data.gjToken, function(callback:Dynamic)
			{
				trace('$callback authenticated as ${FlxGameJolt.username}');
			});

		FlxG.save.data.boobs = false;

		if (FlxG.save.data.boobs)
		{
			FlxG.switchState(new BoobsState());
		}

		doThing();

		super.create();
	}

	override public function update(elapsed:Float)
	{
		if (controls.ACCEPT)
		{
			FlxG.switchState(new TitleMenuState());
		}

		super.update(elapsed);
	}

	function doThing()
	{
		FlxTween.tween(Logo, {y: 276.5}, 1.5, {ease: FlxEase.cubeOut});

		var coolswag = new FlxTimer().start(3, function(tmr:FlxTimer)
		{
			FlxTween.tween(otherLogo, {y: 235}, 1.5, {ease: FlxEase.cubeOut});
			FlxTween.tween(Logo, {y: 206.5}, 1.5, {ease: FlxEase.cubeOut});
		});

		var penis = new FlxTimer().start(5, function(tmr:FlxTimer)
		{
			var white = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.WHITE);
			white.screenCenter();
			white.alpha = 0;
			add(white);

			FlxTween.tween(white, {alpha: 1}, 0.3, {
				onComplete: function(twn:FlxTween)
				{
					penisMcDildo.alpha = 1;
					FlxTween.tween(white, {alpha: 0}, 1, {
						onComplete: function(twn:FlxTween)
						{
							remove(white);
						}
					});
				}
			});
		});

		var dildo = new FlxTimer().start(9, function(tmr:FlxTimer)
		{
			var black = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
			black.screenCenter();
			black.alpha = 0;
			add(black);

			FlxTween.tween(black, {alpha: 1}, 4, {
				onComplete: function(twn:FlxTween)
				{
					FlxG.switchState(new TitleMenuState());
				}
			});
		});
	}
}
