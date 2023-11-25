#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StorySubState
#include <StorySubState.h>
#endif
#ifndef INCLUDED_TitleMenuState
#include <TitleMenuState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0a6427176dfd8376_16_new,"TitleMenuState","new",0x8e8b214c,"TitleMenuState.new","TitleMenuState.hx",16,0xb2938ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_0a6427176dfd8376_36_create,"TitleMenuState","create",0xe7487190,"TitleMenuState.create","TitleMenuState.hx",36,0xb2938ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_0a6427176dfd8376_93_update,"TitleMenuState","update",0xf23e909d,"TitleMenuState.update","TitleMenuState.hx",93,0xb2938ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_0a6427176dfd8376_89_update,"TitleMenuState","update",0xf23e909d,"TitleMenuState.update","TitleMenuState.hx",89,0xb2938ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_0a6427176dfd8376_121_changeSelection,"TitleMenuState","changeSelection",0x42189ba8,"TitleMenuState.changeSelection","TitleMenuState.hx",121,0xb2938ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_0a6427176dfd8376_135_doCutscene,"TitleMenuState","doCutscene",0x9c5217c9,"TitleMenuState.doCutscene","TitleMenuState.hx",135,0xb2938ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_0a6427176dfd8376_133_doCutscene,"TitleMenuState","doCutscene",0x9c5217c9,"TitleMenuState.doCutscene","TitleMenuState.hx",133,0xb2938ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_0a6427176dfd8376_131_doCutscene,"TitleMenuState","doCutscene",0x9c5217c9,"TitleMenuState.doCutscene","TitleMenuState.hx",131,0xb2938ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_0a6427176dfd8376_151_docooltransition,"TitleMenuState","docooltransition",0x652cddfd,"TitleMenuState.docooltransition","TitleMenuState.hx",151,0xb2938ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_0a6427176dfd8376_145_docooltransition,"TitleMenuState","docooltransition",0x652cddfd,"TitleMenuState.docooltransition","TitleMenuState.hx",145,0xb2938ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_0a6427176dfd8376_30_boot,"TitleMenuState","boot",0x234b01c6,"TitleMenuState.boot","TitleMenuState.hx",30,0xb2938ba4)

void TitleMenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_0a6427176dfd8376_16_new)
HXLINE(  27)		this->selectedsum = true;
HXLINE(  21)		this->buttonList = ::cpp::VirtualArray_obj::__new(4)->init(0,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Story Mode",ae,07,32,40))->init(1,-15247873))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Versus",2e,9b,db,d5))->init(1,-65536))->init(2,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Practice Mode",e8,58,72,66))->init(1,-13312))->init(3,::cpp::VirtualArray_obj::__new(2)->init(0,HX_("Options",3e,5b,4f,ad))->init(1,-8750470));
HXLINE(  19)		this->curSelected = -1;
HXLINE(  16)		super::__construct(MaxSize);
            	}

Dynamic TitleMenuState_obj::__CreateEmpty() { return new TitleMenuState_obj; }

void *TitleMenuState_obj::_hx_vtable = 0;

Dynamic TitleMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TitleMenuState_obj > _hx_result = new TitleMenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TitleMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x25694e1a) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25694e1a;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void TitleMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_0a6427176dfd8376_36_create)
HXLINE(  37)		this->frontgroup =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  38)		this->normgroup =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  40)		this->menubg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphic(HX_("assets/images/menubg.png",ca,bb,c7,79),null(),null(),null(),null(),null());
HXLINE(  41)		{
HXLINE(  41)			 ::flixel::FlxSprite _this = this->menubg;
HXDLIN(  41)			int axes = 17;
HXDLIN(  41)			bool _hx_tmp;
HXDLIN(  41)			if ((axes != 1)) {
HXLINE(  41)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  41)				_hx_tmp = true;
            			}
HXDLIN(  41)			if (_hx_tmp) {
HXLINE(  41)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  41)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  41)			bool _hx_tmp1;
HXDLIN(  41)			if ((axes != 16)) {
HXLINE(  41)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  41)				_hx_tmp1 = true;
            			}
HXDLIN(  41)			if (_hx_tmp1) {
HXLINE(  41)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  41)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  42)		this->normgroup->add(this->menubg).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  44)		this->logo =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphic(HX_("assets/images/banger_logo.png",75,df,72,9e),null(),null(),null(),null(),null());
HXLINE(  45)		this->normgroup->add(this->logo).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  47)		this->buttons =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  49)		{
HXLINE(  49)			int _g = 0;
HXDLIN(  49)			int _g1 = this->buttonList->get_length();
HXDLIN(  49)			while((_g < _g1)){
HXLINE(  49)				_g = (_g + 1);
HXDLIN(  49)				int i = (_g - 1);
HXLINE(  51)				 ::flixel::FlxSprite buttondhhhf =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  51)				 ::flixel::FlxSprite buttondhhhf1 = buttondhhhf->makeGraphic(400,50,this->buttonList->__get(i)->__GetItem(1),null(),null());
HXLINE(  52)				{
HXLINE(  52)					int axes = 1;
HXDLIN(  52)					bool _hx_tmp;
HXDLIN(  52)					if ((axes != 1)) {
HXLINE(  52)						_hx_tmp = (axes == 17);
            					}
            					else {
HXLINE(  52)						_hx_tmp = true;
            					}
HXDLIN(  52)					if (_hx_tmp) {
HXLINE(  52)						int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  52)						buttondhhhf1->set_x(((( (Float)(_hx_tmp) ) - buttondhhhf1->get_width()) / ( (Float)(2) )));
            					}
HXDLIN(  52)					bool _hx_tmp1;
HXDLIN(  52)					if ((axes != 16)) {
HXLINE(  52)						_hx_tmp1 = (axes == 17);
            					}
            					else {
HXLINE(  52)						_hx_tmp1 = true;
            					}
HXDLIN(  52)					if (_hx_tmp1) {
HXLINE(  52)						int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  52)						buttondhhhf1->set_y(((( (Float)(_hx_tmp) ) - buttondhhhf1->get_height()) / ( (Float)(2) )));
            					}
            				}
HXLINE(  53)				buttondhhhf1->ID = i;
HXLINE(  54)				buttondhhhf1->set_y(( (Float)((335 + (i * 100))) ));
HXLINE(  55)				this->buttons->add(buttondhhhf1).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  58)		{
HXLINE(  58)			int _g2 = 0;
HXDLIN(  58)			int _g3 = this->buttonList->get_length();
HXDLIN(  58)			while((_g2 < _g3)){
HXLINE(  58)				_g2 = (_g2 + 1);
HXDLIN(  58)				int i = (_g2 - 1);
HXLINE(  60)				 ::flixel::text::FlxText texthhf =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,( (::String)(this->buttonList->__get(i)->__GetItem(0)) ),30,true);
HXLINE(  61)				texthhf->setFormat(HX_("assets/fonts/Crang.ttf",4c,da,b0,7b),40,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  62)				{
HXLINE(  62)					int axes = 17;
HXDLIN(  62)					bool _hx_tmp;
HXDLIN(  62)					if ((axes != 1)) {
HXLINE(  62)						_hx_tmp = (axes == 17);
            					}
            					else {
HXLINE(  62)						_hx_tmp = true;
            					}
HXDLIN(  62)					if (_hx_tmp) {
HXLINE(  62)						int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  62)						texthhf->set_x(((( (Float)(_hx_tmp) ) - texthhf->get_width()) / ( (Float)(2) )));
            					}
HXDLIN(  62)					bool _hx_tmp1;
HXDLIN(  62)					if ((axes != 16)) {
HXLINE(  62)						_hx_tmp1 = (axes == 17);
            					}
            					else {
HXLINE(  62)						_hx_tmp1 = true;
            					}
HXDLIN(  62)					if (_hx_tmp1) {
HXLINE(  62)						int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  62)						texthhf->set_y(((( (Float)(_hx_tmp) ) - texthhf->get_height()) / ( (Float)(2) )));
            					}
            				}
HXLINE(  63)				texthhf->set_y(( (Float)((340 + (i * 100))) ));
HXLINE(  64)				this->buttons->add(texthhf).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  67)		this->normgroup->add(this->buttons).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  69)		if (!(::TitleMenuState_obj::skipIntro)) {
HXLINE(  71)			this->buttons->set_alpha(( (Float)(0) ));
HXLINE(  72)			this->doCutscene();
HXLINE(  73)			{
HXLINE(  73)				 ::flixel::FlxSprite _this = this->logo;
HXDLIN(  73)				int axes = 17;
HXDLIN(  73)				bool _hx_tmp;
HXDLIN(  73)				if ((axes != 1)) {
HXLINE(  73)					_hx_tmp = (axes == 17);
            				}
            				else {
HXLINE(  73)					_hx_tmp = true;
            				}
HXDLIN(  73)				if (_hx_tmp) {
HXLINE(  73)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  73)					_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            				}
HXDLIN(  73)				bool _hx_tmp1;
HXDLIN(  73)				if ((axes != 16)) {
HXLINE(  73)					_hx_tmp1 = (axes == 17);
            				}
            				else {
HXLINE(  73)					_hx_tmp1 = true;
            				}
HXDLIN(  73)				if (_hx_tmp1) {
HXLINE(  73)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  73)					_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE(  74)			 ::flixel::FlxSprite _hx_tmp2 = this->logo;
HXDLIN(  74)			_hx_tmp2->setGraphicSize(::Std_obj::_hx_int((this->logo->get_width() * ((Float)1.5))),null());
            		}
            		else {
HXLINE(  76)			{
HXLINE(  76)				 ::flixel::FlxSprite _this = this->logo;
HXDLIN(  76)				int axes = 1;
HXDLIN(  76)				bool _hx_tmp;
HXDLIN(  76)				if ((axes != 1)) {
HXLINE(  76)					_hx_tmp = (axes == 17);
            				}
            				else {
HXLINE(  76)					_hx_tmp = true;
            				}
HXDLIN(  76)				if (_hx_tmp) {
HXLINE(  76)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  76)					_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            				}
HXDLIN(  76)				bool _hx_tmp1;
HXDLIN(  76)				if ((axes != 16)) {
HXLINE(  76)					_hx_tmp1 = (axes == 17);
            				}
            				else {
HXLINE(  76)					_hx_tmp1 = true;
            				}
HXDLIN(  76)				if (_hx_tmp1) {
HXLINE(  76)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  76)					_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE(  77)			this->logo->set_y(((Float)42.5));
HXLINE(  78)			this->selectedsum = false;
HXLINE(  79)			this->curSelected = 0;
            		}
HXLINE(  82)		this->add(this->normgroup);
HXLINE(  83)		this->add(this->frontgroup);
HXLINE(  85)		this->super::create();
            	}


void TitleMenuState_obj::update(Float elapsed){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::TitleMenuState,_gthis,Float,elapsed) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_STACKFRAME(&_hx_pos_0a6427176dfd8376_93_update)
HXLINE(  93)			if ((spr->ID == _gthis->curSelected)) {
HXLINE(  94)				spr->scale->set_x((((Float)3.2) + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(( (Float)(1) ) - (elapsed * ( (Float)(12) ))))) * (spr->scale->x - ((Float)3.2)))));
            			}
            			else {
HXLINE(  96)				spr->scale->set_x((1 + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(( (Float)(1) ) - (elapsed * ( (Float)(12) ))))) * (spr->scale->x - ( (Float)(1) )))));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_0a6427176dfd8376_89_update)
HXDLIN(  89)		 ::TitleMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  90)		this->super::update(elapsed);
HXLINE(  92)		this->buttons->group->forEach( ::Dynamic(new _hx_Closure_0(_gthis,elapsed)),false);
HXLINE( 101)		if (!(this->selectedsum)) {
HXLINE( 103)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 103)			if (_this->keyManager->checkStatusUnsafe(38,_this->status)) {
HXLINE( 104)				this->changeSelection(-1);
            			}
HXLINE( 107)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 107)			if (_this1->keyManager->checkStatusUnsafe(40,_this1->status)) {
HXLINE( 108)				this->changeSelection(1);
            			}
HXLINE( 111)			 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 111)			if (_this2->keyManager->checkStatusUnsafe(13,_this2->status)) {
HXLINE( 113)				this->docooltransition(this->curSelected);
HXLINE( 114)				::haxe::Log_obj::trace(this->curSelected,::hx::SourceInfo(HX_("source/TitleMenuState.hx",30,6a,7a,f5),114,HX_("TitleMenuState",5a,cb,7d,43),HX_("update",09,86,05,87)));
HXLINE( 115)				this->selectedsum = true;
            			}
            		}
            	}


void TitleMenuState_obj::changeSelection(int bal){
            	HX_STACKFRAME(&_hx_pos_0a6427176dfd8376_121_changeSelection)
HXLINE( 122)		 ::TitleMenuState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 122)		_hx_tmp->curSelected = (_hx_tmp->curSelected + bal);
HXLINE( 124)		if ((this->curSelected >= this->buttonList->get_length())) {
HXLINE( 125)			this->curSelected = 0;
            		}
HXLINE( 126)		if ((this->curSelected < 0)) {
HXLINE( 127)			this->curSelected = (this->buttonList->get_length() - 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TitleMenuState_obj,changeSelection,(void))

void TitleMenuState_obj::doCutscene(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::TitleMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::TitleMenuState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_0a6427176dfd8376_135_doCutscene)
HXLINE( 136)				::flixel::tweens::FlxTween_obj::tween(_gthis->buttons, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.5),null());
HXLINE( 137)				_gthis->selectedsum = false;
HXLINE( 138)				_gthis->curSelected = 0;
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_0a6427176dfd8376_133_doCutscene)
HXLINE( 133)			::flixel::tweens::FlxTween_obj::tween(_gthis->logo, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("y",79,00,00,00),((Float)42.5))
            				->setFixed(1,HX_("scale.x",94,2d,07,65),1)
            				->setFixed(2,HX_("scale.y",95,2d,07,65),1)),((Float)1.5), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeOut_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_0a6427176dfd8376_131_doCutscene)
HXDLIN( 131)		 ::TitleMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 132)		 ::flixel::util::FlxTimer coolswag =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_1(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleMenuState_obj,doCutscene,(void))

void TitleMenuState_obj::docooltransition(int thing){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::TitleMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween twn){
            			HX_GC_STACKFRAME(&_hx_pos_0a6427176dfd8376_151_docooltransition)
HXLINE( 151)			if ((_gthis->curSelected == 0)) {
HXLINE( 154)				 ::TitleMenuState _gthis1 = _gthis;
HXDLIN( 154)				_gthis1->openSubState( ::StorySubState_obj::__alloc( HX_CTX ));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_0a6427176dfd8376_145_docooltransition)
HXDLIN( 145)		 ::TitleMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 146)		this->normgroup->remove(Dynamic( this->buttons->group->members->__get(thing)).StaticCast<  ::flixel::FlxSprite >(),null()).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 147)		this->frontgroup->add(Dynamic( this->buttons->group->members->__get(thing)).StaticCast<  ::flixel::FlxSprite >()).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 148)		::flixel::tweens::FlxTween_obj::tween(Dynamic( this->buttons->group->members->__get(thing)).StaticCast<  ::flixel::FlxSprite >(), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),335)
            			->setFixed(1,HX_("scale.y",95,2d,07,65),((Float)14.4))),((Float)0.8), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::circInOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(TitleMenuState_obj,docooltransition,(void))

bool TitleMenuState_obj::skipIntro;


::hx::ObjectPtr< TitleMenuState_obj > TitleMenuState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< TitleMenuState_obj > __this = new TitleMenuState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< TitleMenuState_obj > TitleMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	TitleMenuState_obj *__this = (TitleMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TitleMenuState_obj), true, "TitleMenuState"));
	*(void **)__this = TitleMenuState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

TitleMenuState_obj::TitleMenuState_obj()
{
}

void TitleMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TitleMenuState);
	HX_MARK_MEMBER_NAME(menubg,"menubg");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_MEMBER_NAME(buttonList,"buttonList");
	HX_MARK_MEMBER_NAME(selectedsum,"selectedsum");
	HX_MARK_MEMBER_NAME(logo,"logo");
	HX_MARK_MEMBER_NAME(frontgroup,"frontgroup");
	HX_MARK_MEMBER_NAME(normgroup,"normgroup");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TitleMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(menubg,"menubg");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	HX_VISIT_MEMBER_NAME(buttonList,"buttonList");
	HX_VISIT_MEMBER_NAME(selectedsum,"selectedsum");
	HX_VISIT_MEMBER_NAME(logo,"logo");
	HX_VISIT_MEMBER_NAME(frontgroup,"frontgroup");
	HX_VISIT_MEMBER_NAME(normgroup,"normgroup");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TitleMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"logo") ) { return ::hx::Val( logo ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"menubg") ) { return ::hx::Val( menubg ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { return ::hx::Val( buttons ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normgroup") ) { return ::hx::Val( normgroup ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonList") ) { return ::hx::Val( buttonList ); }
		if (HX_FIELD_EQ(inName,"frontgroup") ) { return ::hx::Val( frontgroup ); }
		if (HX_FIELD_EQ(inName,"doCutscene") ) { return ::hx::Val( doCutscene_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"selectedsum") ) { return ::hx::Val( selectedsum ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"docooltransition") ) { return ::hx::Val( docooltransition_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TitleMenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"skipIntro") ) { outValue = ( skipIntro ); return true; }
	}
	return false;
}

::hx::Val TitleMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"logo") ) { logo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"menubg") ) { menubg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normgroup") ) { normgroup=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonList") ) { buttonList=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frontgroup") ) { frontgroup=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedsum") ) { selectedsum=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TitleMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"skipIntro") ) { skipIntro=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void TitleMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("menubg",24,81,6d,05));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("buttons",41,52,75,ca));
	outFields->push(HX_("buttonList",70,8b,a9,b1));
	outFields->push(HX_("selectedsum",10,2a,27,30));
	outFields->push(HX_("logo",6b,9f,b7,47));
	outFields->push(HX_("frontgroup",f6,95,9f,33));
	outFields->push(HX_("normgroup",83,83,04,24));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TitleMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleMenuState_obj,menubg),HX_("menubg",24,81,6d,05)},
	{::hx::fsInt,(int)offsetof(TitleMenuState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(TitleMenuState_obj,buttons),HX_("buttons",41,52,75,ca)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(TitleMenuState_obj,buttonList),HX_("buttonList",70,8b,a9,b1)},
	{::hx::fsBool,(int)offsetof(TitleMenuState_obj,selectedsum),HX_("selectedsum",10,2a,27,30)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleMenuState_obj,logo),HX_("logo",6b,9f,b7,47)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(TitleMenuState_obj,frontgroup),HX_("frontgroup",f6,95,9f,33)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(TitleMenuState_obj,normgroup),HX_("normgroup",83,83,04,24)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo TitleMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &TitleMenuState_obj::skipIntro,HX_("skipIntro",6d,37,1c,d2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String TitleMenuState_obj_sMemberFields[] = {
	HX_("menubg",24,81,6d,05),
	HX_("curSelected",fb,eb,ab,32),
	HX_("buttons",41,52,75,ca),
	HX_("buttonList",70,8b,a9,b1),
	HX_("selectedsum",10,2a,27,30),
	HX_("logo",6b,9f,b7,47),
	HX_("frontgroup",f6,95,9f,33),
	HX_("normgroup",83,83,04,24),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("doCutscene",35,33,7e,67),
	HX_("docooltransition",69,52,ed,27),
	::String(null()) };

static void TitleMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TitleMenuState_obj::skipIntro,"skipIntro");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TitleMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TitleMenuState_obj::skipIntro,"skipIntro");
};

#endif

::hx::Class TitleMenuState_obj::__mClass;

static ::String TitleMenuState_obj_sStaticFields[] = {
	HX_("skipIntro",6d,37,1c,d2),
	::String(null())
};

void TitleMenuState_obj::__register()
{
	TitleMenuState_obj _hx_dummy;
	TitleMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TitleMenuState",5a,cb,7d,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TitleMenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &TitleMenuState_obj::__SetStatic;
	__mClass->mMarkFunc = TitleMenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TitleMenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TitleMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TitleMenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TitleMenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TitleMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TitleMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TitleMenuState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0a6427176dfd8376_30_boot)
HXDLIN(  30)		skipIntro = true;
            	}
}

