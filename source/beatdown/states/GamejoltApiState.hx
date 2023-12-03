package beatdown.states;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.api.FlxGameJolt;
import flixel.addons.display.FlxBackdrop;
import flixel.addons.display.FlxGridOverlay;
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

class GamejoltApiState extends FlxState
{
	var background:FlxBackdrop;
	var coolgradient:FlxSprite;

	var usernameInput:FlxInputText;
	var tokenInput:FlxInputText;

	// if gamejolt is initialized
	var userProfile:FlxSprite;

	override public function create()
	{
		background = new FlxBackdrop(FlxGridOverlay.createGrid(80, 80, 160, 160, true, 0xFF20D600, 0xFF158c00));
		background.velocity.set(0, -40);
		add(background);

		coolgradient = FlxGradient.createGradientFlxSprite(FlxG.width, FlxG.height, [0x0, 0xFF95FF89], 1, 90, false);
		coolgradient.screenCenter();
		add(coolgradient);

		var gamejolt:FlxSprite = new FlxSprite().loadGraphic(Paths.image('gamejolt'));
		gamejolt.screenCenter(X);
		gamejolt.y = 70;
		add(gamejolt);

		if (FlxGameJolt.initialized)
		{
			userProfile = new FlxSprite();
			FlxGameJolt.fetchAvatarImage(function(thing:BitmapData)
			{
				userProfile.loadGraphic(thing);
			});
			trace(userProfile.graphic);
			userProfile.setGraphicSize(300, 300);
			userProfile.screenCenter();
			add(userProfile);

			FlxGameJolt.addTrophy(217461);
		}
		else
		{
			usernameInput = new FlxInputText(0, 0, 500, "", 40, FlxColor.BLACK, FlxColor.WHITE, false);
			usernameInput.screenCenter();
			usernameInput.setFormat(null, 40, FlxColor.BLACK, CENTER);
			add(usernameInput);

			tokenInput = new FlxInputText(0, 0, 500, "", 40, FlxColor.BLACK, FlxColor.WHITE, false);
			tokenInput.screenCenter(X);
			tokenInput.passwordMode = false;
			tokenInput.y = usernameInput.y + 130;
			tokenInput.setFormat(null, 40, FlxColor.BLACK, CENTER);
			add(tokenInput);
		}

		super.create();

		#if discord_rpc
		DiscordClient.changePresence('Connecting to Gamejolt', null, 'main');
		#end
	}

	override public function update(elapsed:Float)
	{
		if (FlxG.keys.justPressed.ENTER)
		{
			FlxGameJolt.authUser(usernameInput.text, tokenInput.text, function(fart:Dynamic)
			{
				if (fart)
				{
					trace('Successfully Authenticated');
					FlxG.save.data.gjUser = usernameInput.text;
					FlxG.save.data.gjToken = tokenInput.text;
					FlxG.save.flush();
					FlxG.resetState();
				}
				else
				{
					trace('failed to authenticate');
				}
			});
		}

		super.update(elapsed);
	}
}
