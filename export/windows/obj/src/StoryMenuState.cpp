#include <hxcpp.h>

#ifndef INCLUDED_Paths
#include <Paths.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_f93022dfbe651d27_13_new,"StoryMenuState","new",0xec20accf,"StoryMenuState.new","StoryMenuState.hx",13,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_52_create,"StoryMenuState","create",0xac12b9ed,"StoryMenuState.create","StoryMenuState.hx",52,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_25_create,"StoryMenuState","create",0xac12b9ed,"StoryMenuState.create","StoryMenuState.hx",25,0xd8e12181)
HX_LOCAL_STACK_FRAME(_hx_pos_f93022dfbe651d27_62_update,"StoryMenuState","update",0xb708d8fa,"StoryMenuState.update","StoryMenuState.hx",62,0xd8e12181)

void StoryMenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_f93022dfbe651d27_13_new)
HXLINE(  22)		this->canselect = false;
HXLINE(  21)		this->curSelected = -1;
HXLINE(  13)		super::__construct(MaxSize);
            	}

Dynamic StoryMenuState_obj::__CreateEmpty() { return new StoryMenuState_obj; }

void *StoryMenuState_obj::_hx_vtable = 0;

Dynamic StoryMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StoryMenuState_obj > _hx_result = new StoryMenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StoryMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x244c1c1d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x244c1c1d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void StoryMenuState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::StoryMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween twn){
            			HX_GC_STACKFRAME(&_hx_pos_f93022dfbe651d27_52_create)
HXLINE(  53)			_gthis->canselect = true;
HXLINE(  54)			_gthis->curSelected = 0;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_f93022dfbe651d27_25_create)
HXDLIN(  25)		 ::StoryMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  26)		this->backgroundthing =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::flixel::addons::display::FlxGridOverlay_obj::createGrid(80,80,160,160,true,-16752897,-16771093),null(),null(),null());
HXLINE(  27)		{
HXLINE(  27)			 ::flixel::math::FlxBasePoint this1 = this->backgroundthing->velocity;
HXDLIN(  27)			this1->set_x(( (Float)(-40) ));
HXDLIN(  27)			this1->set_y(( (Float)(40) ));
            		}
HXLINE(  28)		this->add(this->backgroundthing);
HXLINE(  30)		this->singleplayerButton =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphic(HX_("assets/images/singleplayer.png",4f,4b,d2,b5),null(),null(),null(),null(),null());
HXLINE(  31)		this->singleplayerButton->set_x(( (Float)(1100) ));
HXLINE(  32)		{
HXLINE(  32)			 ::flixel::FlxSprite _this = this->singleplayerButton;
HXDLIN(  32)			int axes = 16;
HXDLIN(  32)			bool _hx_tmp;
HXDLIN(  32)			if ((axes != 1)) {
HXLINE(  32)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  32)				_hx_tmp = true;
            			}
HXDLIN(  32)			if (_hx_tmp) {
HXLINE(  32)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  32)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  32)			bool _hx_tmp1;
HXDLIN(  32)			if ((axes != 16)) {
HXLINE(  32)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  32)				_hx_tmp1 = true;
            			}
HXDLIN(  32)			if (_hx_tmp1) {
HXLINE(  32)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  32)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  33)		this->add(this->singleplayerButton);
HXLINE(  35)		this->multiplayerButton =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphic(HX_("assets/images/multiplayer.png",8a,a9,54,57),null(),null(),null(),null(),null());
HXLINE(  36)		this->multiplayerButton->set_x(( (Float)(1100) ));
HXLINE(  37)		this->multiplayerButton->set_y(( (Float)(470) ));
HXLINE(  38)		this->add(this->multiplayerButton);
HXLINE(  40)		 ::flixel::FlxSprite _hx_tmp2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  40)		this->backButton = _hx_tmp2->loadGraphic(::Paths_obj::image(HX_("BackButton",99,4b,1b,0f)),true,227,99,null(),null());
HXLINE(  41)		this->backButton->animation->addByPrefix(HX_("Selected",7b,e6,1e,8b),HX_("sel",9a,9b,57,00),1,false,null(),null());
HXLINE(  42)		this->backButton->animation->addByPrefix(HX_("Unselected",d4,15,e2,2d),HX_("unsel",e1,f2,ee,a6),1,false,null(),null());
HXLINE(  43)		this->backButton->animation->play(HX_("Selected",7b,e6,1e,8b),null(),null(),null());
HXLINE(  44)		this->backButton->set_x(( (Float)(40) ));
HXLINE(  45)		this->backButton->set_y(( (Float)(40) ));
HXLINE(  46)		this->add(this->backButton);
HXLINE(  48)		::flixel::tweens::FlxTween_obj::tween(this->singleplayerButton, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("x",78,00,00,00),704)),((Float)0.7), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeOut_dyn())));
HXLINE(  49)		::flixel::tweens::FlxTween_obj::tween(this->multiplayerButton, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("x",78,00,00,00),724)),((Float)0.7), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
HXLINE(  58)		this->super::create();
            	}


void StoryMenuState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_f93022dfbe651d27_62_update)
HXLINE(  63)		if (::flixel::FlxG_obj::mouse->overlaps(this->backButton,null())) {
HXLINE(  65)			this->backButton->animation->play(HX_("Selected",7b,e6,1e,8b),null(),null(),null());
HXLINE(  67)			if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE(  69)				 ::flixel::FlxState nextState =  ::TitleMenuState_obj::__alloc( HX_CTX ,null());
HXDLIN(  69)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  69)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            		else {
HXLINE(  74)			this->backButton->animation->play(HX_("Unselected",d4,15,e2,2d),null(),null(),null());
            		}
HXLINE(  77)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< StoryMenuState_obj > StoryMenuState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< StoryMenuState_obj > __this = new StoryMenuState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< StoryMenuState_obj > StoryMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	StoryMenuState_obj *__this = (StoryMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StoryMenuState_obj), true, "StoryMenuState"));
	*(void **)__this = StoryMenuState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

StoryMenuState_obj::StoryMenuState_obj()
{
}

void StoryMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StoryMenuState);
	HX_MARK_MEMBER_NAME(backgroundthing,"backgroundthing");
	HX_MARK_MEMBER_NAME(singleplayerButton,"singleplayerButton");
	HX_MARK_MEMBER_NAME(multiplayerButton,"multiplayerButton");
	HX_MARK_MEMBER_NAME(backButton,"backButton");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(canselect,"canselect");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StoryMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(backgroundthing,"backgroundthing");
	HX_VISIT_MEMBER_NAME(singleplayerButton,"singleplayerButton");
	HX_VISIT_MEMBER_NAME(multiplayerButton,"multiplayerButton");
	HX_VISIT_MEMBER_NAME(backButton,"backButton");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(canselect,"canselect");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StoryMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"canselect") ) { return ::hx::Val( canselect ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { return ::hx::Val( backButton ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundthing") ) { return ::hx::Val( backgroundthing ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"multiplayerButton") ) { return ::hx::Val( multiplayerButton ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"singleplayerButton") ) { return ::hx::Val( singleplayerButton ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StoryMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"canselect") ) { canselect=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"backButton") ) { backButton=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundthing") ) { backgroundthing=inValue.Cast<  ::flixel::addons::display::FlxBackdrop >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"multiplayerButton") ) { multiplayerButton=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"singleplayerButton") ) { singleplayerButton=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StoryMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("backgroundthing",40,f5,46,3f));
	outFields->push(HX_("singleplayerButton",bb,12,b7,fc));
	outFields->push(HX_("multiplayerButton",2c,dc,49,4d));
	outFields->push(HX_("backButton",79,47,6a,18));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("canselect",0c,fb,e4,87));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StoryMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::display::FlxBackdrop */ ,(int)offsetof(StoryMenuState_obj,backgroundthing),HX_("backgroundthing",40,f5,46,3f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StoryMenuState_obj,singleplayerButton),HX_("singleplayerButton",bb,12,b7,fc)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StoryMenuState_obj,multiplayerButton),HX_("multiplayerButton",2c,dc,49,4d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StoryMenuState_obj,backButton),HX_("backButton",79,47,6a,18)},
	{::hx::fsInt,(int)offsetof(StoryMenuState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(int)offsetof(StoryMenuState_obj,canselect),HX_("canselect",0c,fb,e4,87)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StoryMenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String StoryMenuState_obj_sMemberFields[] = {
	HX_("backgroundthing",40,f5,46,3f),
	HX_("singleplayerButton",bb,12,b7,fc),
	HX_("multiplayerButton",2c,dc,49,4d),
	HX_("backButton",79,47,6a,18),
	HX_("curSelected",fb,eb,ab,32),
	HX_("canselect",0c,fb,e4,87),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class StoryMenuState_obj::__mClass;

void StoryMenuState_obj::__register()
{
	StoryMenuState_obj _hx_dummy;
	StoryMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StoryMenuState",5d,99,60,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StoryMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StoryMenuState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StoryMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StoryMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

