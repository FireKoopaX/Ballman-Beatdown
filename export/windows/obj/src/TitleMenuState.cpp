#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_TitleMenuState
#include <TitleMenuState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_addons_display_FlxBackdrop
#include <flixel/addons/display/FlxBackdrop.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxGridOverlay
#include <flixel/addons/display/FlxGridOverlay.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0a6427176dfd8376_19_new,"TitleMenuState","new",0x8e8b214c,"TitleMenuState.new","TitleMenuState.hx",19,0xb2938ba4)
static const ::String _hx_array_data_437dcb5a_1[] = {
	HX_("Story",d5,83,43,17),HX_("Versus",2e,9b,db,d5),HX_("Practice",db,bc,98,7a),HX_("Options",3e,5b,4f,ad),HX_("Locked",2a,79,5b,8e),
};
HX_LOCAL_STACK_FRAME(_hx_pos_0a6427176dfd8376_31_create,"TitleMenuState","create",0xe7487190,"TitleMenuState.create","TitleMenuState.hx",31,0xb2938ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_0a6427176dfd8376_91_update,"TitleMenuState","update",0xf23e909d,"TitleMenuState.update","TitleMenuState.hx",91,0xb2938ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_0a6427176dfd8376_95_update,"TitleMenuState","update",0xf23e909d,"TitleMenuState.update","TitleMenuState.hx",95,0xb2938ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_0a6427176dfd8376_134_changeSelection,"TitleMenuState","changeSelection",0x42189ba8,"TitleMenuState.changeSelection","TitleMenuState.hx",134,0xb2938ba4)
HX_LOCAL_STACK_FRAME(_hx_pos_0a6427176dfd8376_145_docoolshit,"TitleMenuState","docoolshit",0xcc1e6228,"TitleMenuState.docoolshit","TitleMenuState.hx",145,0xb2938ba4)

void TitleMenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_0a6427176dfd8376_19_new)
HXLINE(  25)		this->selectedsum = true;
HXLINE(  24)		this->buttonList = ::Array_obj< ::String >::fromData( _hx_array_data_437dcb5a_1,5);
HXLINE(  22)		this->curSelected = -1;
HXLINE(  19)		super::__construct(MaxSize);
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
            	HX_GC_STACKFRAME(&_hx_pos_0a6427176dfd8376_31_create)
HXLINE(  32)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  32)		this->menubg = _hx_tmp->loadGraphic(::Paths_obj::image(HX_("menushitslol/menubg",de,68,11,63)),null(),null(),null(),null(),null());
HXLINE(  33)		{
HXLINE(  33)			 ::flixel::FlxSprite _this = this->menubg;
HXDLIN(  33)			int axes = 17;
HXDLIN(  33)			bool _hx_tmp1;
HXDLIN(  33)			if ((axes != 1)) {
HXLINE(  33)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  33)				_hx_tmp1 = true;
            			}
HXDLIN(  33)			if (_hx_tmp1) {
HXLINE(  33)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  33)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  33)			bool _hx_tmp2;
HXDLIN(  33)			if ((axes != 16)) {
HXLINE(  33)				_hx_tmp2 = (axes == 17);
            			}
            			else {
HXLINE(  33)				_hx_tmp2 = true;
            			}
HXDLIN(  33)			if (_hx_tmp2) {
HXLINE(  33)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  33)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  34)		this->add(this->menubg);
HXLINE(  36)		this->scrollingthing =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::flixel::addons::display::FlxGridOverlay_obj::createGrid(80,80,160,160,true,0,(int)1358954495),null(),null(),null());
HXLINE(  37)		{
HXLINE(  37)			 ::flixel::math::FlxBasePoint this1 = this->scrollingthing->velocity;
HXDLIN(  37)			this1->set_x(( (Float)(20) ));
HXDLIN(  37)			this1->set_y(( (Float)(20) ));
            		}
HXLINE(  38)		this->add(this->scrollingthing);
HXLINE(  40)		 ::flixel::FlxSprite _hx_tmp3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  40)		this->logo = _hx_tmp3->loadGraphic(::Paths_obj::image(HX_("menushitslol/banger_logo",0b,11,0b,f2)),null(),null(),null(),null(),null());
HXLINE(  41)		{
HXLINE(  41)			 ::flixel::FlxSprite _this1 = this->logo;
HXDLIN(  41)			int axes1 = 16;
HXDLIN(  41)			bool _hx_tmp4;
HXDLIN(  41)			if ((axes1 != 1)) {
HXLINE(  41)				_hx_tmp4 = (axes1 == 17);
            			}
            			else {
HXLINE(  41)				_hx_tmp4 = true;
            			}
HXDLIN(  41)			if (_hx_tmp4) {
HXLINE(  41)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  41)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  41)			bool _hx_tmp5;
HXDLIN(  41)			if ((axes1 != 16)) {
HXLINE(  41)				_hx_tmp5 = (axes1 == 17);
            			}
            			else {
HXLINE(  41)				_hx_tmp5 = true;
            			}
HXDLIN(  41)			if (_hx_tmp5) {
HXLINE(  41)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  41)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  42)		this->logo->set_x(( (Float)(50) ));
HXLINE(  43)		this->selectedsum = false;
HXLINE(  44)		this->add(this->logo);
HXLINE(  46)		this->buttons =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  48)		{
HXLINE(  48)			int _g = 0;
HXDLIN(  48)			int _g1 = this->buttonList->length;
HXDLIN(  48)			while((_g < _g1)){
HXLINE(  48)				_g = (_g + 1);
HXDLIN(  48)				int i = (_g - 1);
HXLINE(  50)				 ::flixel::FlxSprite buttondhhhf =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  50)				 ::flixel::FlxSprite buttondhhhf1 = buttondhhhf->loadGraphic(::Paths_obj::image((HX_("menushitslol/",3a,00,87,d2) + this->buttonList->__get(i))),null(),null(),null(),null(),null());
HXLINE(  51)				buttondhhhf1->ID = i;
HXLINE(  52)				buttondhhhf1->set_x(( (Float)(810) ));
HXLINE(  53)				buttondhhhf1->set_y(( (Float)((47 + (i * 130))) ));
HXLINE(  54)				this->buttons->add(buttondhhhf1).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  57)		 ::flixel::FlxSprite otherbuttond =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  57)		 ::flixel::FlxSprite otherbuttond1 = otherbuttond->loadGraphic(::Paths_obj::image(HX_("menushitslol/tophy",6c,3e,fb,e8)),null(),null(),null(),null(),null());
HXLINE(  58)		otherbuttond1->ID = 5;
HXLINE(  59)		otherbuttond1->set_x(( (Float)(30) ));
HXLINE(  60)		otherbuttond1->set_y(( (Float)(30) ));
HXLINE(  61)		this->buttons->add(otherbuttond1).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  63)		 ::flixel::FlxSprite otherbuttond2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  63)		 ::flixel::FlxSprite otherbuttond21 = otherbuttond2->loadGraphic(::Paths_obj::image(HX_("menushitslol/Gamejolt",d9,91,9c,9d)),null(),null(),null(),null(),null());
HXLINE(  64)		otherbuttond21->ID = 6;
HXLINE(  65)		otherbuttond21->set_x(( (Float)(160) ));
HXLINE(  66)		otherbuttond21->set_y(( (Float)(30) ));
HXLINE(  67)		this->buttons->add(otherbuttond21).StaticCast<  ::flixel::FlxSprite >();
HXLINE(  69)		this->add(this->buttons);
HXLINE(  71)		 ::flixel::FlxSprite _hx_tmp6 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  71)		this->ballman = _hx_tmp6->loadGraphic(::Paths_obj::image(HX_("menushitslol/ballman",01,0d,99,bc)),null(),null(),null(),null(),null());
HXLINE(  72)		 ::flixel::FlxSprite _hx_tmp7 = this->ballman;
HXDLIN(  72)		_hx_tmp7->setGraphicSize(::Std_obj::_hx_int((this->ballman->get_width() * ((Float)0.9))),null());
HXLINE(  73)		this->ballman->set_x(( (Float)(30) ));
HXLINE(  74)		this->ballman->set_y(( (Float)(120) ));
HXLINE(  75)		this->add(this->ballman);
HXLINE(  77)		if (::hx::IsNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  79)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  79)			_hx_tmp->playMusic(::Paths_obj::music(HX_("menu_theme",29,8c,5d,b9),HX_("ogg",4f,94,54,00)),1,true,null());
            		}
HXLINE(  82)		::flixel::tweens::FlxTween_obj::tween(this->logo, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("angle",d3,43,e2,22),-5)),2, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())
            			->setFixed(1,HX_("type",ba,f2,08,4d),4)));
HXLINE(  87)		this->super::create();
            	}


void TitleMenuState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_0a6427176dfd8376_91_update)
HXDLIN(  91)		 ::TitleMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  92)		if (!(this->selectedsum)) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::TitleMenuState,_gthis,Float,elapsed) HXARGC(1)
            			void _hx_run( ::flixel::FlxSprite spr){
            				HX_STACKFRAME(&_hx_pos_0a6427176dfd8376_95_update)
HXLINE(  96)				if (::flixel::FlxG_obj::mouse->overlaps(spr,null())) {
HXLINE(  98)					_gthis->curSelected = spr->ID;
            				}
HXLINE( 101)				if ((spr->ID < 5)) {
HXLINE( 102)					Float a;
HXDLIN( 102)					if ((spr->ID == _gthis->curSelected)) {
HXLINE( 102)						a = ( (Float)(765) );
            					}
            					else {
HXLINE( 102)						a = ( (Float)(830) );
            					}
HXDLIN( 102)					spr->set_x((a + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(( (Float)(1) ) - (elapsed * ( (Float)(12) ))))) * (spr->x - a))));
            				}
            				else {
HXLINE( 104)					Float a;
HXDLIN( 104)					if ((spr->ID == _gthis->curSelected)) {
HXLINE( 104)						a = ( (Float)(20) );
            					}
            					else {
HXLINE( 104)						a = ( (Float)(30) );
            					}
HXDLIN( 104)					spr->set_y((a + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(( (Float)(1) ) - (elapsed * ( (Float)(12) ))))) * (spr->y - a))));
            				}
HXLINE( 106)				Float a;
HXDLIN( 106)				if ((spr->ID == _gthis->curSelected)) {
HXLINE( 106)					a = ( (Float)(1) );
            				}
            				else {
HXLINE( 106)					a = ((Float)0.7);
            				}
HXDLIN( 106)				spr->set_alpha((a + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(( (Float)(1) ) - (elapsed * ( (Float)(12) ))))) * (spr->alpha - a))));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  94)			this->buttons->group->forEach( ::Dynamic(new _hx_Closure_0(_gthis,elapsed)),false);
HXLINE( 109)			if (!(::flixel::FlxG_obj::mouse->overlaps(this->buttons,null()))) {
HXLINE( 111)				this->curSelected = -1;
            			}
HXLINE( 114)			bool _hx_tmp;
HXDLIN( 114)			if (::flixel::FlxG_obj::mouse->overlaps(this->buttons,null())) {
HXLINE( 114)				_hx_tmp = (::flixel::FlxG_obj::mouse->_leftButton->current == 2);
            			}
            			else {
HXLINE( 114)				_hx_tmp = false;
            			}
HXDLIN( 114)			if (_hx_tmp) {
HXLINE( 116)				if ((this->curSelected == 4)) {
HXLINE( 118)					::flixel::FlxG_obj::camera->shake(((Float)0.02),((Float)0.2),null(),null(),null());
            				}
            				else {
HXLINE( 122)					this->selectedsum = true;
HXLINE( 123)					this->docoolshit();
            				}
            			}
            		}
HXLINE( 128)		this->logo->set_angle((::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(( (Float)(1) ) - (elapsed * ( (Float)(12) ))))) * this->logo->angle));
HXLINE( 130)		this->super::update(elapsed);
            	}


void TitleMenuState_obj::changeSelection(int bal){
            	HX_STACKFRAME(&_hx_pos_0a6427176dfd8376_134_changeSelection)
HXLINE( 135)		 ::TitleMenuState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 135)		_hx_tmp->curSelected = (_hx_tmp->curSelected + bal);
HXLINE( 137)		if ((this->curSelected >= this->buttonList->length)) {
HXLINE( 138)			this->curSelected = 0;
            		}
HXLINE( 139)		if ((this->curSelected < 0)) {
HXLINE( 140)			this->curSelected = (this->buttonList->length - 1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TitleMenuState_obj,changeSelection,(void))

void TitleMenuState_obj::docoolshit(){
            	HX_GC_STACKFRAME(&_hx_pos_0a6427176dfd8376_145_docoolshit)
HXDLIN( 145)		switch((int)(this->curSelected)){
            			case (int)0: {
HXLINE( 148)				 ::flixel::FlxState nextState =  ::StoryMenuState_obj::__alloc( HX_CTX ,null());
HXDLIN( 148)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 148)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			break;
            			case (int)1: {
            			}
            			break;
            			case (int)2: {
            			}
            			break;
            			case (int)3: {
            			}
            			break;
            			case (int)5: {
            			}
            			break;
            			case (int)6: {
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TitleMenuState_obj,docoolshit,(void))


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
	HX_MARK_MEMBER_NAME(scrollingthing,"scrollingthing");
	HX_MARK_MEMBER_NAME(ballman,"ballman");
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
	HX_VISIT_MEMBER_NAME(scrollingthing,"scrollingthing");
	HX_VISIT_MEMBER_NAME(ballman,"ballman");
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
		if (HX_FIELD_EQ(inName,"ballman") ) { return ::hx::Val( ballman ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonList") ) { return ::hx::Val( buttonList ); }
		if (HX_FIELD_EQ(inName,"docoolshit") ) { return ::hx::Val( docoolshit_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"selectedsum") ) { return ::hx::Val( selectedsum ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"scrollingthing") ) { return ::hx::Val( scrollingthing ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
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
		if (HX_FIELD_EQ(inName,"ballman") ) { ballman=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonList") ) { buttonList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedsum") ) { selectedsum=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"scrollingthing") ) { scrollingthing=inValue.Cast<  ::flixel::addons::display::FlxBackdrop >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TitleMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("menubg",24,81,6d,05));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("buttons",41,52,75,ca));
	outFields->push(HX_("buttonList",70,8b,a9,b1));
	outFields->push(HX_("selectedsum",10,2a,27,30));
	outFields->push(HX_("logo",6b,9f,b7,47));
	outFields->push(HX_("scrollingthing",d9,b4,74,44));
	outFields->push(HX_("ballman",fb,31,d2,2a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TitleMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleMenuState_obj,menubg),HX_("menubg",24,81,6d,05)},
	{::hx::fsInt,(int)offsetof(TitleMenuState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(TitleMenuState_obj,buttons),HX_("buttons",41,52,75,ca)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(TitleMenuState_obj,buttonList),HX_("buttonList",70,8b,a9,b1)},
	{::hx::fsBool,(int)offsetof(TitleMenuState_obj,selectedsum),HX_("selectedsum",10,2a,27,30)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleMenuState_obj,logo),HX_("logo",6b,9f,b7,47)},
	{::hx::fsObject /*  ::flixel::addons::display::FlxBackdrop */ ,(int)offsetof(TitleMenuState_obj,scrollingthing),HX_("scrollingthing",d9,b4,74,44)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TitleMenuState_obj,ballman),HX_("ballman",fb,31,d2,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TitleMenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String TitleMenuState_obj_sMemberFields[] = {
	HX_("menubg",24,81,6d,05),
	HX_("curSelected",fb,eb,ab,32),
	HX_("buttons",41,52,75,ca),
	HX_("buttonList",70,8b,a9,b1),
	HX_("selectedsum",10,2a,27,30),
	HX_("logo",6b,9f,b7,47),
	HX_("scrollingthing",d9,b4,74,44),
	HX_("ballman",fb,31,d2,2a),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("docoolshit",94,7d,4a,97),
	::String(null()) };

::hx::Class TitleMenuState_obj::__mClass;

void TitleMenuState_obj::__register()
{
	TitleMenuState_obj _hx_dummy;
	TitleMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TitleMenuState",5a,cb,7d,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TitleMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TitleMenuState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TitleMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TitleMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

