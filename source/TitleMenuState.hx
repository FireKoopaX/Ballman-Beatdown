package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.group.FlxSpriteGroup;
import flixel.addons.display.FlxGridOverlay;
import flixel.util.FlxTimer;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;
import flixel.addons.display.FlxBackdrop;
import flixel.util.FlxColor;
import flixel.FlxSprite;
import flixel.math.FlxMath;
import flixel.text.FlxText;

class TitleMenuState extends FlxState
{
    var menubg:FlxSprite;
    var curSelected:Int = -1;
    var buttons:FlxSpriteGroup;
    var buttonList:Array<Dynamic> = [
        ['Story Mode', 0xFF1755FF],
        ['Versus', 0xFFFF0000],
        ['Practice Mode', 0xFFFFCC00],
        ['Options', 0xFF7A7A7A]
    ];
    var selectedsum:Bool = true;
    var logo:FlxSprite;

    public static var skipIntro:Bool = true;

    var frontgroup:FlxSpriteGroup; //the group a sprite will change to once it gets selected
    var normgroup:FlxSpriteGroup; //the normal group;

    override public function create()
    {
        frontgroup = new FlxSpriteGroup();
        normgroup = new FlxSpriteGroup();

        menubg = new FlxSprite().loadGraphic(AssetPaths.menubg__png);
        menubg.screenCenter();
        normgroup.add(menubg);

        logo = new FlxSprite().loadGraphic(AssetPaths.banger_logo__png);
        normgroup.add(logo);

        buttons = new FlxSpriteGroup();

        for (i in 0...buttonList.length)
        {
            var buttondhhhf:FlxSprite = new FlxSprite().makeGraphic(400, 50, buttonList[i][1]);
            buttondhhhf.screenCenter(X);
            buttondhhhf.ID = i;
            buttondhhhf.y = 335 + (i * 100);
            buttons.add(buttondhhhf);
        }

        for (i in 0...buttonList.length)
        {
            var texthhf = new FlxText(0, 0, FlxG.width, buttonList[i][0], 30, true);
            texthhf.setFormat('assets/fonts/Crang.ttf', 40, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
            texthhf.screenCenter();
            texthhf.y = 340 + (i * 100);
            buttons.add(texthhf);
        } // i literally had to do this because of curselection problems and haxe crashing if i try setting curSelected to something else, it's dumb

        normgroup.add(buttons);
        
        if (!skipIntro)
        {
            buttons.alpha = 0;
            doCutscene();   
            logo.screenCenter();
            logo.setGraphicSize(Std.int(logo.width * 1.5)); 
        } else {
            logo.screenCenter(X);
            logo.y = 42.5;
            selectedsum = false;
            curSelected = 0;
        }

        add(normgroup);
        add(frontgroup);

        super.create();
    }

    override public function update(elapsed:Float)
    {
        super.update(elapsed);

        buttons.forEach(function(spr:FlxSprite){
            if (spr.ID == curSelected){
                spr.scale.x = FlxMath.lerp(3.2, spr.scale.x, Math.max(0, Math.min(1, 1 - (elapsed * 12))));
            } else {
                spr.scale.x = FlxMath.lerp(1, spr.scale.x, Math.max(0, Math.min(1, 1 - (elapsed * 12))));
            }
        });


        if (!selectedsum)
        {
            if (FlxG.keys.justPressed.UP){
                changeSelection(-1);
            }
    
            if (FlxG.keys.justPressed.DOWN){
                changeSelection(1);
            } 

            if (FlxG.keys.justPressed.ENTER)
            {
                docooltransition(curSelected);
                trace(curSelected);
                selectedsum = true;
            }
        }
    }

    function changeSelection(bal:Int)
    {
        curSelected += bal;

        if (curSelected >= buttonList.length)
			curSelected = 0;
		if (curSelected < 0)
			curSelected = buttonList.length - 1;
    }

    function doCutscene()
    {
        var coolswag = new FlxTimer().start(3, function(tmr:FlxTimer){
            FlxTween.tween(logo, {y: 42.5, "scale.x": 1, "scale.y": 1}, 1.5, {
                ease: FlxEase.cubeOut,
                onComplete: function(twn:FlxTween){
                    FlxTween.tween(buttons, {alpha: 1}, 0.5);
                    selectedsum = false;
                    curSelected = 0;
                }
            });
        });
    }

    function docooltransition(thing:Int)
    {
        normgroup.remove(buttons.members[thing]);
        frontgroup.add(buttons.members[thing]);
        FlxTween.tween(buttons.members[thing], {y: 335, "scale.y": 14.4}, 0.8, {
            ease: FlxEase.circInOut,
            onComplete: function(twn:FlxTween){
                switch(curSelected)
                {
                    case 0:
                        openSubState(new StorySubState());
                }
            }
        });
    }
}