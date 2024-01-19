package beatdown.states;

import beatdown.*;
import beatdown.backend.*;
import flash.events.KeyboardEvent;
import flash.system.System;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.display.FlxBackdrop;
import flixel.addons.display.FlxGridOverlay;
import flixel.addons.transition.FlxTransitionableState;
import flixel.group.FlxSpriteGroup;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import sys.FileSystem;
import sys.io.File;
#if discord_rpc
import beatdown.system.Discord.DiscordClient;
import beatdown.system.Discord;
#end

class MenuState extends CoolState
{
	var curSelected:Int = 0;
	var buttons:FlxSpriteGroup;
	var menubg:FlxBackdrop;
	var buttonList:Array<String> = [
		'Story',
		'Versus',
		'Practice',
		'Options',
		'Locked',
		'tophy',
		'Gamejolt',
		'Credits'
	];
	var selectedsum:Bool = true;
	var ballman:FlxSprite;

	var secretshhhh:String = '';

	override public function create()
	{
		var otherBG = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.WHITE);
		otherBG.screenCenter();
		otherBG.antialiasing = PlayerSettings.antiAliasing;
		add(otherBG);

		FlxTween.color(otherBG, 5, 0xFF2F00FF, 0xFFFF0000, {
			ease: FlxEase.quadInOut,
			type: PINGPONG
		});

		menubg = new FlxBackdrop(FlxGridOverlay.createGrid(80, 80, 160, 160, true, 0x0, 0x44000000));
		menubg.velocity.x = 40;
		menubg.antialiasing = PlayerSettings.antiAliasing;
		add(menubg);

		selectedsum = false;

		buttons = new FlxSpriteGroup();

		for (i in 0...buttonList.length)
		{
			var buttondhhhf:FlxSprite = new FlxSprite().loadGraphic(Paths.image('menushitslol/' + buttonList[i]));
			buttondhhhf.ID = i;
			buttondhhhf.antialiasing = PlayerSettings.antiAliasing;
			if (i < 5)
			{
				buttondhhhf.x = 810;
				buttondhhhf.y = 47 + (i * 130);
			}
			else
			{
				buttondhhhf.x = 30 + ((i - 5) * 160);
				buttondhhhf.y = 30;
			}
			buttons.add(buttondhhhf);
		}

		add(buttons);

		ballman = new FlxSprite().loadGraphic(Paths.image('menushitslol/ballman'));
		ballman.setGraphicSize(Std.int(ballman.width * 0.7));
		ballman.x = -700;
		ballman.y = -250;
		ballman.antialiasing = PlayerSettings.antiAliasing;
		add(ballman);

		if (FlxG.sound.music == null)
		{
			FlxG.sound.playMusic(Paths.music('menu_theme', 'ogg'), 1, true);
		}

		FlxG.stage.addEventListener(KeyboardEvent.KEY_DOWN, onKeyDown);

		FlxTween.tween(ballman, {x: -220}, 1.3, {ease: FlxEase.cubeOut});

		#if discord_rpc
		DiscordClient.changePresence('In the Menus', null, 'main');
		#end

		var menuCredits:FlxSprite = new FlxSprite().loadGraphic(Paths.image('menushitslol/menuCredits'));
		menuCredits.setGraphicSize(Std.int(menuCredits.width * 0.7));
		menuCredits.updateHitbox();
		menuCredits.x = 0;
		menuCredits.y = 720 - menuCredits.height;
		menuCredits.antialiasing = PlayerSettings.antiAliasing;
		add(menuCredits);

		super.create();
	}

	override public function update(elapsed:Float)
	{
		menubg.y = Math.sin(menubg.x / 48) * 48;

		if (!selectedsum)
		{
			buttons.forEach(function(spr:FlxSprite)
			{
				if (spr.ID < 5)
					spr.x = FlxMath.lerp((spr.ID == curSelected) ? 765 : 830, spr.x, Math.max(0, Math.min(1, 1 - (elapsed * 12))));
				else
					spr.y = FlxMath.lerp((spr.ID == curSelected) ? 20 : 30, spr.y, Math.max(0, Math.min(1, 1 - (elapsed * 12))));

				spr.alpha = FlxMath.lerp((spr.ID == curSelected) ? 1 : 0.7, spr.alpha, Math.max(0, Math.min(1, 1 - (elapsed * 12))));
			});

			if (controls.ACCEPT)
			{
				if (curSelected == 4)
				{
					FlxG.camera.shake(0.02, 0.2);
				}
				else
				{
					selectedsum = true;
					docoolshit();
				}
			}

			if (controls.up_p)
				changeSelection(-1);

			if (controls.down_p)
				changeSelection(1);
		}

		super.update(elapsed);
	}

	function changeSelection(bal:Int)
	{
		curSelected += bal;

		if (curSelected >= buttonList.length)
			curSelected = 0;
		if (curSelected < 0)
			curSelected = buttonList.length - 1;
	}

	function docoolshit()
	{
		FlxG.stage.removeEventListener(KeyboardEvent.KEY_DOWN, onKeyDown, true);
		switch (curSelected)
		{
			case 0:
				FlxG.switchState(new CharacterSelectionState());
			case 1:
			// FlxG.switchState(new VersusMenuState());
			case 2:
			// FlxG.switchState(new PracticeMenuState());
			case 3:
			// FlxG.switchState(new OptionsMenuState());
			case 5:
			// fewiuhf
			case 6:
				FlxG.switchState(new GamejoltApiState());
			case 7:
				FlxG.switchState(new CreditsState());
		}
	}

	function onKeyDown(e:KeyboardEvent):Void
	{
		var key:String = String.fromCharCode(e.charCode);

		secretshhhh = secretshhhh + key;

		if (secretshhhh == '80085')
		{
			var path = '${Paths.userDesktop}\\boobs.txt';
			var contents = "boobs
boobs
boobs
boobs
boobs
boobs
boobs
boobs
boobs
boobs
boobs
boobs
boobs
boobs";
			try
			{
				File.saveContent(path, contents);
			}
			catch (e:Dynamic)
			{
				path = 'boobs.txt';
				File.saveContent(path, contents);
			}
			CoolUtil.openFile(path);
			FlxG.save.data.boobs = true;
			System.exit(0);
		}
	}
}
