package beatdown.states;

import Sys.sleep;
import beatdown.backend.*;
import beatdown.system.*;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.display.FlxBackdrop;
import flixel.addons.display.FlxGridOverlay;
import flixel.addons.transition.FlxTransitionableState;
import flixel.addons.ui.FlxInputText;
import flixel.graphics.FlxGraphic;
import flixel.input.FlxInput;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxGradient;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
#if discord_rpc
import beatdown.system.Discord.DiscordClient;
import beatdown.system.Discord;
#end

class GamejoltApiState extends CoolState
{
	var background:FlxBackdrop;
	var coolgradient:FlxSprite;

	var usernameInput:FlxInputText;
	var tokenInput:FlxInputText;

	var blackBox:FlxSprite;

	// if gamejolt is initialized
	var userProfile:FlxSprite;

	override public function create()
	{
		background = new FlxBackdrop(FlxGridOverlay.createGrid(80, 80, 160, 160, true, 0xFF20D600, 0xFF158c00));
		background.velocity.set(0, -40);
		background.antialiasing = PlayerSettings.antiAliasing;
		add(background);

		coolgradient = FlxGradient.createGradientFlxSprite(FlxG.width, FlxG.height, [0x0, 0xFFFFFFFF], 1, 90, false);
		coolgradient.screenCenter();
		coolgradient.blend = ADD;
		coolgradient.alpha = 0.4;
		coolgradient.antialiasing = PlayerSettings.antiAliasing;
		add(coolgradient);

		var gamejolt:FlxSprite = new FlxSprite().loadGraphic(Paths.image('gamejolt'));
		gamejolt.screenCenter(X);
		gamejolt.y = 70;
		gamejolt.antialiasing = PlayerSettings.antiAliasing;
		add(gamejolt);

		blackBox = new FlxSprite().makeGraphic(400, 400, FlxColor.BLACK);
		blackBox.x = 100;
		blackBox.screenCenter(Y);
		add(blackBox);

		if (FlxGameJolt.initialized)
		{
			trace('Successfully Authenticated as ${FlxGameJolt.username}');
			userProfile = new FlxSprite();
			FlxGameJolt.fetchAvatarImage(380, apiImageReturn);
			// FlxGameJolt.fetchUser(0, FlxGameJolt.username, [], apiReturn);
			add(userProfile);

			FlxGameJolt.addTrophy(217461);

			// add(bignametext);
		}
		else
		{
			var questionMark:FlxSprite = new FlxSprite().loadGraphic(Paths.image('gamejolt/question'));
			questionMark.x = blackBox.x + 20;
			questionMark.screenCenter(Y);
			questionMark.antialiasing = PlayerSettings.antiAliasing;
			add(questionMark);

			var userImage:FlxSprite = new FlxSprite().loadGraphic(Paths.image('gamejolt/username'));
			userImage.setGraphicSize(450, 0);
			userImage.x = 215;
			userImage.y = 65;
			userImage.antialiasing = PlayerSettings.antiAliasing;
			add(userImage);

			var tokImage:FlxSprite = new FlxSprite().loadGraphic(Paths.image('gamejolt/token'));
			tokImage.setGraphicSize(350, 0);
			tokImage.x = 320;
			tokImage.antialiasing = PlayerSettings.antiAliasing;
			tokImage.y = 245;
			add(tokImage);

			usernameInput = new FlxInputText(0, 0, 500, "", 40, FlxColor.BLACK, FlxColor.WHITE, false);
			usernameInput.x = 600;
			usernameInput.y = 290;
			usernameInput.setFormat(null, 40, FlxColor.BLACK, CENTER);
			add(usernameInput);

			tokenInput = new FlxInputText(0, 0, 500, "", 40, FlxColor.BLACK, FlxColor.WHITE, false);
			tokenInput.x = 600;
			tokenInput.passwordMode = true;
			tokenInput.y = usernameInput.y + 220;
			tokenInput.setFormat(null, 40, FlxColor.BLACK, CENTER);
			add(tokenInput);
		}

		super.create();

		#if discord_rpc
		DiscordClient.changePresence('Connecting to Gamejolt', null, 'gamejolt');
		#end

		trace(FlxGameJolt.initialized);
	}

	override public function update(elapsed:Float)
	{
		if (FlxG.keys.justPressed.ENTER && !FlxGameJolt.initialized)
		{
			FlxGameJolt.authUser(usernameInput.text, tokenInput.text, function(fart:Dynamic)
			{
				if (fart)
				{
					trace('Successfully Authenticated as ${FlxGameJolt.username}');
					FlxG.save.data.gjUser = usernameInput.text;
					FlxG.save.data.gjToken = tokenInput.text;
					FlxG.save.flush();
					FlxG.resetState();
				}
				else
				{
					trace('failed to authenticate');
					FlxG.resetState();
				}
			});
		}

		super.update(elapsed);
	}

	function apiImageReturn(Bits:BitmapData):Void
	{
		userProfile.loadGraphic(Bits);
		userProfile.x = blackBox.x + 9;
		userProfile.screenCenter(Y);

		var map = FlxGameJolt.returnMap;

		var bignametext:FlxText = new FlxText(0, 0, 500, '${map.get('developer_name')} (${map.get('username')})', 45, true);
		trace(map.get('developer_name'));
		bignametext.setFormat(null, 45, FlxColor.WHITE, CENTER, OUTLINE, FlxColor.BLACK);
		bignametext.x = 700;
		bignametext.y = 150;
		add(bignametext);

		var otherInfotext:FlxText = new FlxText(0, 0, 500, '', 45, true);
		otherInfotext.setFormat(null, 25, FlxColor.WHITE, CENTER, OUTLINE, FlxColor.BLACK);
		otherInfotext.x = 700;
		otherInfotext.y = 300;
		add(otherInfotext);

		otherInfotext.text = 'Last Logged In: ${map.get('last_logged_in')}
		Signed Up: ${map.get('signed_up')}
		Type: ${map.get('type')}';
	}
}
