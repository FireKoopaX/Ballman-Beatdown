#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_StorySubState
#include <StorySubState.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5cb6093fcce1134b_36_new,"StorySubState","new",0x84bab558,"StorySubState.new","StorySubState.hx",36,0x469f3d18)
HX_DEFINE_STACK_FRAME(_hx_pos_5cb6093fcce1134b_11_new,"StorySubState","new",0x84bab558,"StorySubState.new","StorySubState.hx",11,0x469f3d18)
HX_LOCAL_STACK_FRAME(_hx_pos_5cb6093fcce1134b_46_update,"StorySubState","update",0x9ef20c11,"StorySubState.update","StorySubState.hx",46,0x469f3d18)

void StorySubState_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::StorySubState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::tweens::FlxTween twn){
            			HX_GC_STACKFRAME(&_hx_pos_5cb6093fcce1134b_36_new)
HXLINE(  37)			_gthis->canselect = true;
HXLINE(  38)			_gthis->curSelected = 0;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_5cb6093fcce1134b_11_new)
HXLINE(  18)		this->canselect = false;
HXLINE(  17)		this->curSelected = -1;
HXLINE(  20)		 ::StorySubState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  21)		super::__construct(null());
HXLINE(  23)		this->singleplayerButton =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphic(HX_("assets/images/singleplayer.png",4f,4b,d2,b5),null(),null(),null(),null(),null());
HXLINE(  24)		this->singleplayerButton->set_x(( (Float)(1100) ));
HXLINE(  25)		{
HXLINE(  25)			 ::flixel::FlxSprite _this = this->singleplayerButton;
HXDLIN(  25)			int axes = 16;
HXDLIN(  25)			bool _hx_tmp;
HXDLIN(  25)			if ((axes != 1)) {
HXLINE(  25)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  25)				_hx_tmp = true;
            			}
HXDLIN(  25)			if (_hx_tmp) {
HXLINE(  25)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  25)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  25)			bool _hx_tmp1;
HXDLIN(  25)			if ((axes != 16)) {
HXLINE(  25)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  25)				_hx_tmp1 = true;
            			}
HXDLIN(  25)			if (_hx_tmp1) {
HXLINE(  25)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  25)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  26)		this->add(this->singleplayerButton);
HXLINE(  28)		this->multiplayerButton =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphic(HX_("assets/images/multiplayer.png",8a,a9,54,57),null(),null(),null(),null(),null());
HXLINE(  29)		this->multiplayerButton->set_x(( (Float)(1100) ));
HXLINE(  30)		this->multiplayerButton->set_y(( (Float)(470) ));
HXLINE(  31)		this->add(this->multiplayerButton);
HXLINE(  33)		::flixel::tweens::FlxTween_obj::tween(this->singleplayerButton, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("x",78,00,00,00),704)),((Float)0.7), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeOut_dyn())));
HXLINE(  34)		::flixel::tweens::FlxTween_obj::tween(this->multiplayerButton, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("x",78,00,00,00),704)),((Float)0.7), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeOut_dyn())
            			->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
HXLINE(  41)		::haxe::Log_obj::trace(HX_("opened",a9,62,94,21),::hx::SourceInfo(HX_("source/StorySubState.hx",0c,74,c8,07),41,HX_("StorySubState",66,69,b7,70),HX_("new",60,d0,53,00)));
            	}

Dynamic StorySubState_obj::__CreateEmpty() { return new StorySubState_obj; }

void *StorySubState_obj::_hx_vtable = 0;

Dynamic StorySubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StorySubState_obj > _hx_result = new StorySubState_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StorySubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x4cfe7ea6) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x4cfe7ea6;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void StorySubState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_5cb6093fcce1134b_46_update)
HXLINE(  47)		if (this->canselect) {
HXLINE(  49)			Float a;
HXDLIN(  49)			if ((this->curSelected == 0)) {
HXLINE(  49)				a = ( (Float)(704) );
            			}
            			else {
HXLINE(  49)				a = ( (Float)(714) );
            			}
HXDLIN(  49)			this->singleplayerButton->set_x((a + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(( (Float)(1) ) - (elapsed * ( (Float)(12) ))))) * (this->singleplayerButton->x - a))));
HXLINE(  50)			Float a1;
HXDLIN(  50)			if ((this->curSelected == 1)) {
HXLINE(  50)				a1 = ( (Float)(704) );
            			}
            			else {
HXLINE(  50)				a1 = ( (Float)(714) );
            			}
HXDLIN(  50)			this->multiplayerButton->set_x((a1 + (::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(( (Float)(1) ) - (elapsed * ( (Float)(12) ))))) * (this->multiplayerButton->x - a1))));
            		}
HXLINE(  53)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< StorySubState_obj > StorySubState_obj::__new() {
	::hx::ObjectPtr< StorySubState_obj > __this = new StorySubState_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StorySubState_obj > StorySubState_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StorySubState_obj *__this = (StorySubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StorySubState_obj), true, "StorySubState"));
	*(void **)__this = StorySubState_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StorySubState_obj::StorySubState_obj()
{
}

void StorySubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StorySubState);
	HX_MARK_MEMBER_NAME(singleplayerButton,"singleplayerButton");
	HX_MARK_MEMBER_NAME(multiplayerButton,"multiplayerButton");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(canselect,"canselect");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StorySubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(singleplayerButton,"singleplayerButton");
	HX_VISIT_MEMBER_NAME(multiplayerButton,"multiplayerButton");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(canselect,"canselect");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StorySubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"canselect") ) { return ::hx::Val( canselect ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"multiplayerButton") ) { return ::hx::Val( multiplayerButton ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"singleplayerButton") ) { return ::hx::Val( singleplayerButton ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StorySubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"canselect") ) { canselect=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"multiplayerButton") ) { multiplayerButton=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"singleplayerButton") ) { singleplayerButton=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StorySubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("singleplayerButton",bb,12,b7,fc));
	outFields->push(HX_("multiplayerButton",2c,dc,49,4d));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("canselect",0c,fb,e4,87));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StorySubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StorySubState_obj,singleplayerButton),HX_("singleplayerButton",bb,12,b7,fc)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(StorySubState_obj,multiplayerButton),HX_("multiplayerButton",2c,dc,49,4d)},
	{::hx::fsInt,(int)offsetof(StorySubState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(int)offsetof(StorySubState_obj,canselect),HX_("canselect",0c,fb,e4,87)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StorySubState_obj_sStaticStorageInfo = 0;
#endif

static ::String StorySubState_obj_sMemberFields[] = {
	HX_("singleplayerButton",bb,12,b7,fc),
	HX_("multiplayerButton",2c,dc,49,4d),
	HX_("curSelected",fb,eb,ab,32),
	HX_("canselect",0c,fb,e4,87),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class StorySubState_obj::__mClass;

void StorySubState_obj::__register()
{
	StorySubState_obj _hx_dummy;
	StorySubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StorySubState",66,69,b7,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StorySubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StorySubState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StorySubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StorySubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

