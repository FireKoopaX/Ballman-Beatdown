#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
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
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_626da793e26fdbd0_238_new,"flixel.util.FlxTimerManager","new",0x367f0c72,"flixel.util.FlxTimerManager.new","flixel/util/FlxTimer.hx",238,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_626da793e26fdbd0_259_destroy,"flixel.util.FlxTimerManager","destroy",0xb435da0c,"flixel.util.FlxTimerManager.destroy","flixel/util/FlxTimer.hx",259,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_626da793e26fdbd0_271_update,"flixel.util.FlxTimerManager","update",0xf26da137,"flixel.util.FlxTimerManager.update","flixel/util/FlxTimer.hx",271,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_626da793e26fdbd0_309_add,"flixel.util.FlxTimerManager","add",0x36752e33,"flixel.util.FlxTimerManager.add","flixel/util/FlxTimer.hx",309,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_626da793e26fdbd0_321_remove,"flixel.util.FlxTimerManager","remove",0x6ff0b772,"flixel.util.FlxTimerManager.remove","flixel/util/FlxTimer.hx",321,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_626da793e26fdbd0_330_completeAll,"flixel.util.FlxTimerManager","completeAll",0x4a72c7fa,"flixel.util.FlxTimerManager.completeAll","flixel/util/FlxTimer.hx",330,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_626da793e26fdbd0_351_clear,"flixel.util.FlxTimerManager","clear",0xccdb561f,"flixel.util.FlxTimerManager.clear","flixel/util/FlxTimer.hx",351,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_626da793e26fdbd0_362_forEach,"flixel.util.FlxTimerManager","forEach",0x546dd6bc,"flixel.util.FlxTimerManager.forEach","flixel/util/FlxTimer.hx",362,0x0a681e11)
namespace flixel{
namespace util{

void FlxTimerManager_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_238_new)
HXLINE( 240)		this->_timers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 247)		super::__construct();
HXLINE( 250)		this->set_visible(false);
HXLINE( 252)		::flixel::FlxG_obj::signals->preStateSwitch->add(this->clear_dyn());
            	}

Dynamic FlxTimerManager_obj::__CreateEmpty() { return new FlxTimerManager_obj; }

void *FlxTimerManager_obj::_hx_vtable = 0;

Dynamic FlxTimerManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTimerManager_obj > _hx_result = new FlxTimerManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxTimerManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x7ccf8994;
	} else {
		return inClassId==(int)0x7fe1e070;
	}
}

void FlxTimerManager_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_259_destroy)
HXLINE( 260)		::flixel::util::FlxArrayUtil_obj::clearArray(this->_timers,null());
HXLINE( 261)		this->_timers = null();
HXLINE( 262)		::flixel::FlxG_obj::signals->preStateSwitch->remove(this->clear_dyn());
HXLINE( 263)		this->super::destroy();
            	}


void FlxTimerManager_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_271_update)
HXLINE( 272)		::Array< ::Dynamic> loopedTimers = null();
HXLINE( 274)		{
HXLINE( 274)			int _g = 0;
HXDLIN( 274)			::Array< ::Dynamic> _g1 = this->_timers;
HXDLIN( 274)			while((_g < _g1->length)){
HXLINE( 274)				 ::flixel::util::FlxTimer timer = _g1->__get(_g).StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN( 274)				_g = (_g + 1);
HXLINE( 276)				bool _hx_tmp;
HXDLIN( 276)				bool _hx_tmp1;
HXDLIN( 276)				if (timer->active) {
HXLINE( 276)					_hx_tmp1 = !(timer->finished);
            				}
            				else {
HXLINE( 276)					_hx_tmp1 = false;
            				}
HXDLIN( 276)				if (_hx_tmp1) {
HXLINE( 276)					_hx_tmp = (timer->time >= 0);
            				}
            				else {
HXLINE( 276)					_hx_tmp = false;
            				}
HXDLIN( 276)				if (_hx_tmp) {
HXLINE( 278)					int timerLoops = timer->_loopsCounter;
HXLINE( 279)					timer->update(elapsed);
HXLINE( 281)					if ((timerLoops != timer->_loopsCounter)) {
HXLINE( 283)						if (::hx::IsNull( loopedTimers )) {
HXLINE( 284)							loopedTimers = ::Array_obj< ::Dynamic>::__new(0);
            						}
HXLINE( 286)						loopedTimers->push(timer);
            					}
            				}
            			}
            		}
HXLINE( 291)		if (::hx::IsNotNull( loopedTimers )) {
HXLINE( 293)			while((loopedTimers->length > 0)){
HXLINE( 295)				loopedTimers->shift().StaticCast<  ::flixel::util::FlxTimer >()->onLoopFinished();
            			}
            		}
            	}


void FlxTimerManager_obj::add( ::flixel::util::FlxTimer timer){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_309_add)
HXDLIN( 309)		this->_timers->push(timer);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimerManager_obj,add,(void))

void FlxTimerManager_obj::remove( ::flixel::util::FlxTimer timer){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_321_remove)
HXDLIN( 321)		::Array< ::Dynamic> array = this->_timers;
HXDLIN( 321)		int index = array->indexOf(timer,null());
HXDLIN( 321)		if ((index != -1)) {
HXDLIN( 321)			array[index] = array->__get((array->length - 1)).StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN( 321)			array->pop().StaticCast<  ::flixel::util::FlxTimer >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimerManager_obj,remove,(void))

void FlxTimerManager_obj::completeAll(){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_330_completeAll)
HXLINE( 331)		::Array< ::Dynamic> timersToFinish = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 332)		{
HXLINE( 332)			int _g = 0;
HXDLIN( 332)			::Array< ::Dynamic> _g1 = this->_timers;
HXDLIN( 332)			while((_g < _g1->length)){
HXLINE( 332)				 ::flixel::util::FlxTimer timer = _g1->__get(_g).StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN( 332)				_g = (_g + 1);
HXLINE( 333)				bool _hx_tmp;
HXDLIN( 333)				if ((timer->loops > 0)) {
HXLINE( 333)					_hx_tmp = timer->active;
            				}
            				else {
HXLINE( 333)					_hx_tmp = false;
            				}
HXDLIN( 333)				if (_hx_tmp) {
HXLINE( 334)					timersToFinish->push(timer);
            				}
            			}
            		}
HXLINE( 336)		{
HXLINE( 336)			int _g2 = 0;
HXDLIN( 336)			while((_g2 < timersToFinish->length)){
HXLINE( 336)				 ::flixel::util::FlxTimer timer = timersToFinish->__get(_g2).StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN( 336)				_g2 = (_g2 + 1);
HXLINE( 338)				while(!(timer->finished)){
HXLINE( 340)					timer->update((timer->time - timer->_timeCounter));
HXLINE( 341)					timer->onLoopFinished();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimerManager_obj,completeAll,(void))

void FlxTimerManager_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_351_clear)
HXDLIN( 351)		::flixel::util::FlxArrayUtil_obj::clearArray(this->_timers,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimerManager_obj,clear,(void))

void FlxTimerManager_obj::forEach( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_626da793e26fdbd0_362_forEach)
HXDLIN( 362)		int _g = 0;
HXDLIN( 362)		::Array< ::Dynamic> _g1 = this->_timers;
HXDLIN( 362)		while((_g < _g1->length)){
HXDLIN( 362)			 ::flixel::util::FlxTimer timer = _g1->__get(_g).StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN( 362)			_g = (_g + 1);
HXLINE( 363)			func(timer);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimerManager_obj,forEach,(void))


::hx::ObjectPtr< FlxTimerManager_obj > FlxTimerManager_obj::__new() {
	::hx::ObjectPtr< FlxTimerManager_obj > __this = new FlxTimerManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxTimerManager_obj > FlxTimerManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxTimerManager_obj *__this = (FlxTimerManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTimerManager_obj), true, "flixel.util.FlxTimerManager"));
	*(void **)__this = FlxTimerManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxTimerManager_obj::FlxTimerManager_obj()
{
}

void FlxTimerManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTimerManager);
	HX_MARK_MEMBER_NAME(_timers,"_timers");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTimerManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_timers,"_timers");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTimerManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { return ::hx::Val( _timers ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"completeAll") ) { return ::hx::Val( completeAll_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTimerManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { _timers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTimerManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_timers",ad,1e,49,8d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTimerManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTimerManager_obj,_timers),HX_("_timers",ad,1e,49,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTimerManager_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTimerManager_obj_sMemberFields[] = {
	HX_("_timers",ad,1e,49,8d),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("add",21,f2,49,00),
	HX_("remove",44,9c,88,04),
	HX_("completeAll",e8,29,b2,07),
	HX_("clear",8d,71,5b,48),
	HX_("forEach",aa,29,be,c4),
	::String(null()) };

::hx::Class FlxTimerManager_obj::__mClass;

void FlxTimerManager_obj::__register()
{
	FlxTimerManager_obj _hx_dummy;
	FlxTimerManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxTimerManager",80,ab,c7,ef);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTimerManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTimerManager_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTimerManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTimerManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
