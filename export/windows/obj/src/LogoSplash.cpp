#include <hxcpp.h>

#ifndef INCLUDED_LogoSplash
#include <LogoSplash.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_addons_effects_FlxTrail
#include <flixel/addons/effects/FlxTrail.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_deeb527dfb7f7b36_14_new,"LogoSplash","new",0xde802d44,"LogoSplash.new","LogoSplash.hx",14,0xaae626ac)
HX_LOCAL_STACK_FRAME(_hx_pos_deeb527dfb7f7b36_22_create,"LogoSplash","create",0x27b93098,"LogoSplash.create","LogoSplash.hx",22,0xaae626ac)
HX_LOCAL_STACK_FRAME(_hx_pos_deeb527dfb7f7b36_49_update,"LogoSplash","update",0x32af4fa5,"LogoSplash.update","LogoSplash.hx",49,0xaae626ac)
HX_LOCAL_STACK_FRAME(_hx_pos_deeb527dfb7f7b36_56_doThing,"LogoSplash","doThing",0xcb9d0747,"LogoSplash.doThing","LogoSplash.hx",56,0xaae626ac)
HX_LOCAL_STACK_FRAME(_hx_pos_deeb527dfb7f7b36_70_doThing,"LogoSplash","doThing",0xcb9d0747,"LogoSplash.doThing","LogoSplash.hx",70,0xaae626ac)
HX_LOCAL_STACK_FRAME(_hx_pos_deeb527dfb7f7b36_67_doThing,"LogoSplash","doThing",0xcb9d0747,"LogoSplash.doThing","LogoSplash.hx",67,0xaae626ac)
HX_LOCAL_STACK_FRAME(_hx_pos_deeb527dfb7f7b36_61_doThing,"LogoSplash","doThing",0xcb9d0747,"LogoSplash.doThing","LogoSplash.hx",61,0xaae626ac)
HX_LOCAL_STACK_FRAME(_hx_pos_deeb527dfb7f7b36_82_doThing,"LogoSplash","doThing",0xcb9d0747,"LogoSplash.doThing","LogoSplash.hx",82,0xaae626ac)
HX_LOCAL_STACK_FRAME(_hx_pos_deeb527dfb7f7b36_75_doThing,"LogoSplash","doThing",0xcb9d0747,"LogoSplash.doThing","LogoSplash.hx",75,0xaae626ac)
HX_LOCAL_STACK_FRAME(_hx_pos_deeb527dfb7f7b36_53_doThing,"LogoSplash","doThing",0xcb9d0747,"LogoSplash.doThing","LogoSplash.hx",53,0xaae626ac)

void LogoSplash_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_deeb527dfb7f7b36_14_new)
HXDLIN(  14)		super::__construct(MaxSize);
            	}

Dynamic LogoSplash_obj::__CreateEmpty() { return new LogoSplash_obj; }

void *LogoSplash_obj::_hx_vtable = 0;

Dynamic LogoSplash_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LogoSplash_obj > _hx_result = new LogoSplash_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LogoSplash_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2234aada) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2234aada;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void LogoSplash_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_deeb527dfb7f7b36_22_create)
HXLINE(  23)		this->penisMcDildo =  ::flixel::addons::display::FlxBackdrop_obj::__alloc( HX_CTX ,::flixel::addons::display::FlxGridOverlay_obj::createGrid(80,80,160,160,true,-40448,-3061504),null(),null(),null());
HXLINE(  24)		{
HXLINE(  24)			 ::flixel::math::FlxBasePoint this1 = this->penisMcDildo->velocity;
HXDLIN(  24)			this1->set_x(( (Float)(40) ));
HXDLIN(  24)			this1->set_y(( (Float)(40) ));
            		}
HXLINE(  25)		this->penisMcDildo->set_alpha(( (Float)(0) ));
HXLINE(  26)		this->add(this->penisMcDildo);
HXLINE(  28)		this->Logo =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphic(HX_("assets/images/logo.png",d1,c8,3b,1e),null(),null(),null(),null(),null());
HXLINE(  29)		{
HXLINE(  29)			 ::flixel::FlxSprite _this = this->Logo;
HXDLIN(  29)			int axes = 1;
HXDLIN(  29)			bool _hx_tmp;
HXDLIN(  29)			if ((axes != 1)) {
HXLINE(  29)				_hx_tmp = (axes == 17);
            			}
            			else {
HXLINE(  29)				_hx_tmp = true;
            			}
HXDLIN(  29)			if (_hx_tmp) {
HXLINE(  29)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  29)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  29)			bool _hx_tmp1;
HXDLIN(  29)			if ((axes != 16)) {
HXLINE(  29)				_hx_tmp1 = (axes == 17);
            			}
            			else {
HXLINE(  29)				_hx_tmp1 = true;
            			}
HXDLIN(  29)			if (_hx_tmp1) {
HXLINE(  29)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  29)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  30)		this->Logo->set_y(( (Float)(-300) ));
HXLINE(  32)		this->logoTrail =  ::flixel::addons::effects::FlxTrail_obj::__alloc( HX_CTX ,this->Logo,null(),5,4,((Float)0.3),((Float)0.069));
HXLINE(  33)		this->add(this->logoTrail);
HXLINE(  34)		this->add(this->Logo);
HXLINE(  36)		this->otherLogo =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->loadGraphic(HX_("assets/images/firekoopa.png",36,c7,06,fc),null(),null(),null(),null(),null());
HXLINE(  37)		{
HXLINE(  37)			 ::flixel::FlxSprite _this1 = this->otherLogo;
HXDLIN(  37)			int axes1 = 1;
HXDLIN(  37)			bool _hx_tmp2;
HXDLIN(  37)			if ((axes1 != 1)) {
HXLINE(  37)				_hx_tmp2 = (axes1 == 17);
            			}
            			else {
HXLINE(  37)				_hx_tmp2 = true;
            			}
HXDLIN(  37)			if (_hx_tmp2) {
HXLINE(  37)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  37)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  37)			bool _hx_tmp3;
HXDLIN(  37)			if ((axes1 != 16)) {
HXLINE(  37)				_hx_tmp3 = (axes1 == 17);
            			}
            			else {
HXLINE(  37)				_hx_tmp3 = true;
            			}
HXDLIN(  37)			if (_hx_tmp3) {
HXLINE(  37)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  37)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  38)		this->otherLogo->set_y(( (Float)(900) ));
HXLINE(  39)		 ::flixel::FlxSprite _hx_tmp4 = this->otherLogo;
HXDLIN(  39)		_hx_tmp4->setGraphicSize(::Std_obj::_hx_int((this->otherLogo->get_width() * ((Float)0.6))),null());
HXLINE(  40)		this->add(this->otherLogo);
HXLINE(  42)		this->doThing();
HXLINE(  44)		this->super::create();
            	}


void LogoSplash_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_deeb527dfb7f7b36_49_update)
HXDLIN(  49)		this->super::update(elapsed);
            	}


void LogoSplash_obj::doThing(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::LogoSplash,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_deeb527dfb7f7b36_56_doThing)
HXLINE(  57)			::flixel::tweens::FlxTween_obj::tween(_gthis->otherLogo, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("y",79,00,00,00),235)),((Float)1.5), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeOut_dyn())));
HXLINE(  58)			::flixel::tweens::FlxTween_obj::tween(_gthis->Logo, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("y",79,00,00,00),((Float)206.5))),((Float)1.5), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeOut_dyn())));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_3, ::LogoSplash,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::LogoSplash,_gthis, ::flixel::FlxSprite,white) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::LogoSplash,_gthis, ::flixel::FlxSprite,white) HXARGC(1)
            				void _hx_run( ::flixel::tweens::FlxTween twn){
            					HX_GC_STACKFRAME(&_hx_pos_deeb527dfb7f7b36_70_doThing)
HXLINE(  70)					_gthis->remove(white,null()).StaticCast<  ::flixel::FlxBasic >();
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_GC_STACKFRAME(&_hx_pos_deeb527dfb7f7b36_67_doThing)
HXLINE(  68)				_gthis->penisMcDildo->set_alpha(( (Float)(1) ));
HXLINE(  69)				::flixel::tweens::FlxTween_obj::tween(white, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("alpha",5e,a7,96,21),0)),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1(_gthis,white)))));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_deeb527dfb7f7b36_61_doThing)
HXLINE(  62)			 ::flixel::FlxSprite white =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-1,null(),null());
HXLINE(  63)			{
HXLINE(  63)				int axes = 17;
HXDLIN(  63)				bool penis;
HXDLIN(  63)				if ((axes != 1)) {
HXLINE(  63)					penis = (axes == 17);
            				}
            				else {
HXLINE(  63)					penis = true;
            				}
HXDLIN(  63)				if (penis) {
HXLINE(  63)					 ::flixel::FlxSprite white1 = white;
HXDLIN(  63)					int penis = ::flixel::FlxG_obj::width;
HXDLIN(  63)					white1->set_x(((( (Float)(penis) ) - white->get_width()) / ( (Float)(2) )));
            				}
HXDLIN(  63)				bool penis1;
HXDLIN(  63)				if ((axes != 16)) {
HXLINE(  63)					penis1 = (axes == 17);
            				}
            				else {
HXLINE(  63)					penis1 = true;
            				}
HXDLIN(  63)				if (penis1) {
HXLINE(  63)					 ::flixel::FlxSprite white1 = white;
HXDLIN(  63)					int penis = ::flixel::FlxG_obj::height;
HXDLIN(  63)					white1->set_y(((( (Float)(penis) ) - white->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE(  64)			white->set_alpha(( (Float)(0) ));
HXLINE(  65)			_gthis->add(white).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  67)			::flixel::tweens::FlxTween_obj::tween(white, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),1)),((Float)0.3), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_2(_gthis,white)))));
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_5, ::LogoSplash,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_4) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_deeb527dfb7f7b36_82_doThing)
HXLINE(  82)				 ::flixel::FlxState nextState =  ::TitleMenuState_obj::__alloc( HX_CTX ,null());
HXDLIN(  82)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  82)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_deeb527dfb7f7b36_75_doThing)
HXLINE(  76)			 ::flixel::FlxSprite black =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  77)			{
HXLINE(  77)				int axes = 17;
HXDLIN(  77)				bool dildo;
HXDLIN(  77)				if ((axes != 1)) {
HXLINE(  77)					dildo = (axes == 17);
            				}
            				else {
HXLINE(  77)					dildo = true;
            				}
HXDLIN(  77)				if (dildo) {
HXLINE(  77)					int dildo = ::flixel::FlxG_obj::width;
HXDLIN(  77)					black->set_x(((( (Float)(dildo) ) - black->get_width()) / ( (Float)(2) )));
            				}
HXDLIN(  77)				bool dildo1;
HXDLIN(  77)				if ((axes != 16)) {
HXLINE(  77)					dildo1 = (axes == 17);
            				}
            				else {
HXLINE(  77)					dildo1 = true;
            				}
HXDLIN(  77)				if (dildo1) {
HXLINE(  77)					int dildo = ::flixel::FlxG_obj::height;
HXDLIN(  77)					black->set_y(((( (Float)(dildo) ) - black->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE(  78)			black->set_alpha(( (Float)(0) ));
HXLINE(  79)			_gthis->add(black).StaticCast<  ::flixel::FlxBasic >();
HXLINE(  81)			::flixel::tweens::FlxTween_obj::tween(black, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("alpha",5e,a7,96,21),1)),4, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_4()))));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_deeb527dfb7f7b36_53_doThing)
HXDLIN(  53)		 ::LogoSplash _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  54)		::flixel::tweens::FlxTween_obj::tween(this->Logo, ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),((Float)276.5))),((Float)1.5), ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeOut_dyn())));
HXLINE(  56)		 ::flixel::util::FlxTimer coolswag =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(3, ::Dynamic(new _hx_Closure_0(_gthis)),null());
HXLINE(  61)		 ::flixel::util::FlxTimer penis =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(5, ::Dynamic(new _hx_Closure_3(_gthis)),null());
HXLINE(  75)		 ::flixel::util::FlxTimer dildo =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(9, ::Dynamic(new _hx_Closure_5(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(LogoSplash_obj,doThing,(void))


::hx::ObjectPtr< LogoSplash_obj > LogoSplash_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< LogoSplash_obj > __this = new LogoSplash_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< LogoSplash_obj > LogoSplash_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	LogoSplash_obj *__this = (LogoSplash_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LogoSplash_obj), true, "LogoSplash"));
	*(void **)__this = LogoSplash_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

LogoSplash_obj::LogoSplash_obj()
{
}

void LogoSplash_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogoSplash);
	HX_MARK_MEMBER_NAME(Logo,"Logo");
	HX_MARK_MEMBER_NAME(otherLogo,"otherLogo");
	HX_MARK_MEMBER_NAME(penisMcDildo,"penisMcDildo");
	HX_MARK_MEMBER_NAME(logoTrail,"logoTrail");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LogoSplash_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(Logo,"Logo");
	HX_VISIT_MEMBER_NAME(otherLogo,"otherLogo");
	HX_VISIT_MEMBER_NAME(penisMcDildo,"penisMcDildo");
	HX_VISIT_MEMBER_NAME(logoTrail,"logoTrail");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LogoSplash_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Logo") ) { return ::hx::Val( Logo ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"doThing") ) { return ::hx::Val( doThing_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"otherLogo") ) { return ::hx::Val( otherLogo ); }
		if (HX_FIELD_EQ(inName,"logoTrail") ) { return ::hx::Val( logoTrail ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"penisMcDildo") ) { return ::hx::Val( penisMcDildo ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LogoSplash_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Logo") ) { Logo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"otherLogo") ) { otherLogo=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"logoTrail") ) { logoTrail=inValue.Cast<  ::flixel::addons::effects::FlxTrail >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"penisMcDildo") ) { penisMcDildo=inValue.Cast<  ::flixel::addons::display::FlxBackdrop >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogoSplash_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("Logo",8b,cb,90,32));
	outFields->push(HX_("otherLogo",5b,da,8a,7e));
	outFields->push(HX_("penisMcDildo",99,b2,6f,f6));
	outFields->push(HX_("logoTrail",5b,a0,c4,90));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LogoSplash_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LogoSplash_obj,Logo),HX_("Logo",8b,cb,90,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LogoSplash_obj,otherLogo),HX_("otherLogo",5b,da,8a,7e)},
	{::hx::fsObject /*  ::flixel::addons::display::FlxBackdrop */ ,(int)offsetof(LogoSplash_obj,penisMcDildo),HX_("penisMcDildo",99,b2,6f,f6)},
	{::hx::fsObject /*  ::flixel::addons::effects::FlxTrail */ ,(int)offsetof(LogoSplash_obj,logoTrail),HX_("logoTrail",5b,a0,c4,90)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LogoSplash_obj_sStaticStorageInfo = 0;
#endif

static ::String LogoSplash_obj_sMemberFields[] = {
	HX_("Logo",8b,cb,90,32),
	HX_("otherLogo",5b,da,8a,7e),
	HX_("penisMcDildo",99,b2,6f,f6),
	HX_("logoTrail",5b,a0,c4,90),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("doThing",63,68,b6,42),
	::String(null()) };

::hx::Class LogoSplash_obj::__mClass;

void LogoSplash_obj::__register()
{
	LogoSplash_obj _hx_dummy;
	LogoSplash_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LogoSplash",52,7b,0f,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LogoSplash_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LogoSplash_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LogoSplash_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LogoSplash_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

