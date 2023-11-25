#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_OnlineLobbyState
#include <OnlineLobbyState.h>
#endif
#ifndef INCLUDED_OnlineMenuState
#include <OnlineMenuState.h>
#endif
#ifndef INCLUDED_SessionData
#include <SessionData.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_networking_utils_NetworkMode
#include <networking/utils/NetworkMode.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_128006ab35acf67f_19_new,"OnlineMenuState","new",0x1f7b9531,"OnlineMenuState.new","OnlineMenuState.hx",19,0x2048db5f)
HX_LOCAL_STACK_FRAME(_hx_pos_128006ab35acf67f_28_create,"OnlineMenuState","create",0x273fbacb,"OnlineMenuState.create","OnlineMenuState.hx",28,0x2048db5f)
HX_LOCAL_STACK_FRAME(_hx_pos_128006ab35acf67f_47_update,"OnlineMenuState","update",0x3235d9d8,"OnlineMenuState.update","OnlineMenuState.hx",47,0x2048db5f)
HX_LOCAL_STACK_FRAME(_hx_pos_128006ab35acf67f_83_changeSelection,"OnlineMenuState","changeSelection",0x5899d30d,"OnlineMenuState.changeSelection","OnlineMenuState.hx",83,0x2048db5f)

void OnlineMenuState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_128006ab35acf67f_19_new)
HXLINE(  22)		this->selectedsum = false;
HXLINE(  21)		this->curSelected = 0;
HXLINE(  19)		super::__construct(MaxSize);
            	}

Dynamic OnlineMenuState_obj::__CreateEmpty() { return new OnlineMenuState_obj; }

void *OnlineMenuState_obj::_hx_vtable = 0;

Dynamic OnlineMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OnlineMenuState_obj > _hx_result = new OnlineMenuState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OnlineMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2cbcac37) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2cbcac37;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void OnlineMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_128006ab35acf67f_28_create)
HXLINE(  29)		 ::flixel::addons::display::FlxBackdrop bgthing =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::flixel::addons::display::FlxGridOverlay_obj::createGrid(80,80,160,160,true,-1184275,-5526613),null(),null(),null());
HXLINE(  30)		{
HXLINE(  30)			 ::flixel::math::FlxBasePoint this1 = bgthing->velocity;
HXDLIN(  30)			this1->set_x(( (Float)(40) ));
HXDLIN(  30)			this1->set_y(( (Float)(40) ));
            		}
HXLINE(  31)		this->add(bgthing);
HXLINE(  33)		this->joinLobby =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphic(HX_("assets/images/joinlobby.png",9c,00,4b,c7),null(),null(),null(),null(),null());
HXLINE(  34)		this->joinLobby->set_x(((Float)176.5));
HXLINE(  35)		{
HXLINE(  35)			 ::flixel::FlxSprite _this = this->joinLobby;
HXDLIN(  35)			int axes = 16;
HXDLIN(  35)			bool _hx_tmp;
HXDLIN(  35)			if ((axes != 1)) {
HXLINE(  35)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  35)				_hx_tmp = true;
            			}
HXDLIN(  35)			if (_hx_tmp) {
HXLINE(  35)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  35)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  35)			bool _hx_tmp1;
HXDLIN(  35)			if ((axes != 16)) {
HXLINE(  35)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  35)				_hx_tmp1 = true;
            			}
HXDLIN(  35)			if (_hx_tmp1) {
HXLINE(  35)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  35)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  36)		this->add(this->joinLobby);
HXLINE(  38)		this->makeLobby =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphic(HX_("assets/images/makelobby.png",18,1a,33,3f),null(),null(),null(),null(),null());
HXLINE(  39)		this->makeLobby->set_x(((Float)776.5));
HXLINE(  40)		{
HXLINE(  40)			 ::flixel::FlxSprite _this1 = this->makeLobby;
HXDLIN(  40)			int axes1 = 16;
HXDLIN(  40)			bool _hx_tmp2;
HXDLIN(  40)			if ((axes1 != 1)) {
HXLINE(  40)				_hx_tmp2 = (axes1 == 17);
            			}
            			else {
HXLINE(  40)				_hx_tmp2 = true;
            			}
HXDLIN(  40)			if (_hx_tmp2) {
HXLINE(  40)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  40)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  40)			bool _hx_tmp3;
HXDLIN(  40)			if ((axes1 != 16)) {
HXLINE(  40)				_hx_tmp3 = (axes1 == 17);
            			}
            			else {
HXLINE(  40)				_hx_tmp3 = true;
            			}
HXDLIN(  40)			if (_hx_tmp3) {
HXLINE(  40)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  40)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  41)		this->add(this->makeLobby);
HXLINE(  43)		this->super::create();
            	}


void OnlineMenuState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_128006ab35acf67f_47_update)
HXLINE(  48)		this->super::update(elapsed);
HXLINE(  50)		Float a;
HXDLIN(  50)		if ((this->curSelected == 0)) {
HXLINE(  50)			a = ((Float)309.5);
            		}
            		else {
HXLINE(  50)			a = ((Float)329.5);
            		}
HXDLIN(  50)		this->joinLobby->set_y((a + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(( (Float)(1) ) - (elapsed * ( (Float)(12) ))))) * (this->joinLobby->y - a))));
HXLINE(  51)		Float a1;
HXDLIN(  51)		if ((this->curSelected == 1)) {
HXLINE(  51)			a1 = ((Float)309.5);
            		}
            		else {
HXLINE(  51)			a1 = ((Float)329.5);
            		}
HXDLIN(  51)		this->makeLobby->set_y((a1 + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(( (Float)(1) ) - (elapsed * ( (Float)(12) ))))) * (this->makeLobby->y - a1))));
HXLINE(  53)		if (!(this->selectedsum)) {
HXLINE(  55)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  55)			if (_this->keyManager->checkStatusUnsafe(37,_this->status)) {
HXLINE(  56)				this->changeSelection();
            			}
HXLINE(  59)			 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  59)			if (_this1->keyManager->checkStatusUnsafe(39,_this1->status)) {
HXLINE(  60)				this->changeSelection();
            			}
HXLINE(  63)			 ::flixel::input::keyboard::FlxKeyList _this2 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN(  63)			if (_this2->keyManager->checkStatusUnsafe(13,_this2->status)) {
HXLINE(  65)				this->selectedsum = true;
HXLINE(  67)				switch((int)(this->curSelected)){
            					case (int)0: {
HXLINE(  70)						::SessionData_obj::start(::networking::utils::NetworkMode_obj::CLIENT_dyn(), ::Dynamic(::hx::Anon_obj::Create(2)
            							->setFixed(0,HX_("ip",e7,5b,00,00),HX_("127.0.0.1",fd,bc,5e,a1))
            							->setFixed(1,HX_("port",81,83,5c,4a),9696)));
HXLINE(  71)						{
HXLINE(  71)							 ::flixel::FlxState nextState =  ::OnlineLobbyState_obj::__alloc( HX_CTX ,null());
HXDLIN(  71)							if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  71)								::flixel::FlxG_obj::game->_requestedState = nextState;
            							}
            						}
            					}
            					break;
            					case (int)1: {
HXLINE(  73)						::SessionData_obj::start(::networking::utils::NetworkMode_obj::SERVER_dyn(), ::Dynamic(::hx::Anon_obj::Create(4)
            							->setFixed(0,HX_("max_connections",3a,99,4d,c6),4)
            							->setFixed(1,HX_("ip",e7,5b,00,00),HX_("127.0.0.1",fd,bc,5e,a1))
            							->setFixed(2,HX_("port",81,83,5c,4a),9696)
            							->setFixed(3,HX_("uuid",3b,1a,af,4d),HX_("poop",e0,80,5c,4a))));
HXLINE(  74)						::haxe::Log_obj::trace(HX_("created server",fb,79,23,71),::hx::SourceInfo(HX_("source/OnlineMenuState.hx",53,b7,64,67),74,HX_("OnlineMenuState",bf,28,83,02),HX_("update",09,86,05,87)));
HXLINE(  75)						{
HXLINE(  75)							 ::flixel::FlxState nextState =  ::OnlineLobbyState_obj::__alloc( HX_CTX ,null());
HXDLIN(  75)							if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  75)								::flixel::FlxG_obj::game->_requestedState = nextState;
            							}
            						}
            					}
            					break;
            				}
            			}
            		}
            	}


void OnlineMenuState_obj::changeSelection(){
            	HX_STACKFRAME(&_hx_pos_128006ab35acf67f_83_changeSelection)
HXDLIN(  83)		this->curSelected = (1 - this->curSelected);
            	}


HX_DEFINE_DYNAMIC_FUNC0(OnlineMenuState_obj,changeSelection,(void))


::hx::ObjectPtr< OnlineMenuState_obj > OnlineMenuState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< OnlineMenuState_obj > __this = new OnlineMenuState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< OnlineMenuState_obj > OnlineMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	OnlineMenuState_obj *__this = (OnlineMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OnlineMenuState_obj), true, "OnlineMenuState"));
	*(void **)__this = OnlineMenuState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

OnlineMenuState_obj::OnlineMenuState_obj()
{
}

void OnlineMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OnlineMenuState);
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(selectedsum,"selectedsum");
	HX_MARK_MEMBER_NAME(joinLobby,"joinLobby");
	HX_MARK_MEMBER_NAME(makeLobby,"makeLobby");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OnlineMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(selectedsum,"selectedsum");
	HX_VISIT_MEMBER_NAME(joinLobby,"joinLobby");
	HX_VISIT_MEMBER_NAME(makeLobby,"makeLobby");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OnlineMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"joinLobby") ) { return ::hx::Val( joinLobby ); }
		if (HX_FIELD_EQ(inName,"makeLobby") ) { return ::hx::Val( makeLobby ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"selectedsum") ) { return ::hx::Val( selectedsum ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OnlineMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"joinLobby") ) { joinLobby=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"makeLobby") ) { makeLobby=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedsum") ) { selectedsum=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OnlineMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("selectedsum",10,2a,27,30));
	outFields->push(HX_("joinLobby",cc,d3,81,3a));
	outFields->push(HX_("makeLobby",48,7f,88,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OnlineMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OnlineMenuState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(int)offsetof(OnlineMenuState_obj,selectedsum),HX_("selectedsum",10,2a,27,30)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(OnlineMenuState_obj,joinLobby),HX_("joinLobby",cc,d3,81,3a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(OnlineMenuState_obj,makeLobby),HX_("makeLobby",48,7f,88,4c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OnlineMenuState_obj_sStaticStorageInfo = 0;
#endif

static ::String OnlineMenuState_obj_sMemberFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("selectedsum",10,2a,27,30),
	HX_("joinLobby",cc,d3,81,3a),
	HX_("makeLobby",48,7f,88,4c),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

::hx::Class OnlineMenuState_obj::__mClass;

void OnlineMenuState_obj::__register()
{
	OnlineMenuState_obj _hx_dummy;
	OnlineMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OnlineMenuState",bf,28,83,02);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OnlineMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OnlineMenuState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OnlineMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OnlineMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

