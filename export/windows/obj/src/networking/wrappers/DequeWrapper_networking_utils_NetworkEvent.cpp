#include <hxcpp.h>

#ifndef INCLUDED_networking_utils_NetworkEvent
#include <networking/utils/NetworkEvent.h>
#endif
#ifndef INCLUDED_networking_wrappers_DequeWrapper_networking_utils_NetworkEvent
#include <networking/wrappers/DequeWrapper_networking_utils_NetworkEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_sys_thread_Deque
#include <sys/thread/Deque.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cf31efbfea5acedc_27_new,"networking.wrappers.DequeWrapper_networking_utils_NetworkEvent","new",0x220323ff,"networking.wrappers.DequeWrapper_networking_utils_NetworkEvent.new","networking/wrappers/DequeWrapper.hx",27,0xd3dc5197)
HX_LOCAL_STACK_FRAME(_hx_pos_cf31efbfea5acedc_41_add,"networking.wrappers.DequeWrapper_networking_utils_NetworkEvent","add",0x21f945c0,"networking.wrappers.DequeWrapper_networking_utils_NetworkEvent.add","networking/wrappers/DequeWrapper.hx",41,0xd3dc5197)
HX_LOCAL_STACK_FRAME(_hx_pos_cf31efbfea5acedc_56_pop,"networking.wrappers.DequeWrapper_networking_utils_NetworkEvent","pop",0x2204b130,"networking.wrappers.DequeWrapper_networking_utils_NetworkEvent.pop","networking/wrappers/DequeWrapper.hx",56,0xd3dc5197)
namespace networking{
namespace wrappers{

void DequeWrapper_networking_utils_NetworkEvent_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_cf31efbfea5acedc_27_new)
HXDLIN(  27)		this->_deque =  ::sys::thread::Deque_obj::__alloc( HX_CTX );
            	}

Dynamic DequeWrapper_networking_utils_NetworkEvent_obj::__CreateEmpty() { return new DequeWrapper_networking_utils_NetworkEvent_obj; }

void *DequeWrapper_networking_utils_NetworkEvent_obj::_hx_vtable = 0;

Dynamic DequeWrapper_networking_utils_NetworkEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DequeWrapper_networking_utils_NetworkEvent_obj > _hx_result = new DequeWrapper_networking_utils_NetworkEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DequeWrapper_networking_utils_NetworkEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x781e1c71;
}

void DequeWrapper_networking_utils_NetworkEvent_obj::add( ::networking::utils::NetworkEvent x){
            	HX_STACKFRAME(&_hx_pos_cf31efbfea5acedc_41_add)
HXDLIN(  41)		this->_deque->add(x);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DequeWrapper_networking_utils_NetworkEvent_obj,add,(void))

 ::networking::utils::NetworkEvent DequeWrapper_networking_utils_NetworkEvent_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_cf31efbfea5acedc_56_pop)
HXDLIN(  56)		return this->_deque->pop(false).StaticCast<  ::networking::utils::NetworkEvent >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DequeWrapper_networking_utils_NetworkEvent_obj,pop,return )


::hx::ObjectPtr< DequeWrapper_networking_utils_NetworkEvent_obj > DequeWrapper_networking_utils_NetworkEvent_obj::__new() {
	::hx::ObjectPtr< DequeWrapper_networking_utils_NetworkEvent_obj > __this = new DequeWrapper_networking_utils_NetworkEvent_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< DequeWrapper_networking_utils_NetworkEvent_obj > DequeWrapper_networking_utils_NetworkEvent_obj::__alloc(::hx::Ctx *_hx_ctx) {
	DequeWrapper_networking_utils_NetworkEvent_obj *__this = (DequeWrapper_networking_utils_NetworkEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DequeWrapper_networking_utils_NetworkEvent_obj), true, "networking.wrappers.DequeWrapper_networking_utils_NetworkEvent"));
	*(void **)__this = DequeWrapper_networking_utils_NetworkEvent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DequeWrapper_networking_utils_NetworkEvent_obj::DequeWrapper_networking_utils_NetworkEvent_obj()
{
}

void DequeWrapper_networking_utils_NetworkEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DequeWrapper_networking_utils_NetworkEvent);
	HX_MARK_MEMBER_NAME(_deque,"_deque");
	HX_MARK_END_CLASS();
}

void DequeWrapper_networking_utils_NetworkEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_deque,"_deque");
}

::hx::Val DequeWrapper_networking_utils_NetworkEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"pop") ) { return ::hx::Val( pop_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_deque") ) { return ::hx::Val( _deque ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DequeWrapper_networking_utils_NetworkEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_deque") ) { _deque=inValue.Cast<  ::sys::thread::Deque >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DequeWrapper_networking_utils_NetworkEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_deque",61,fb,11,d3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DequeWrapper_networking_utils_NetworkEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::sys::thread::Deque */ ,(int)offsetof(DequeWrapper_networking_utils_NetworkEvent_obj,_deque),HX_("_deque",61,fb,11,d3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DequeWrapper_networking_utils_NetworkEvent_obj_sStaticStorageInfo = 0;
#endif

static ::String DequeWrapper_networking_utils_NetworkEvent_obj_sMemberFields[] = {
	HX_("_deque",61,fb,11,d3),
	HX_("add",21,f2,49,00),
	HX_("pop",91,5d,55,00),
	::String(null()) };

::hx::Class DequeWrapper_networking_utils_NetworkEvent_obj::__mClass;

void DequeWrapper_networking_utils_NetworkEvent_obj::__register()
{
	DequeWrapper_networking_utils_NetworkEvent_obj _hx_dummy;
	DequeWrapper_networking_utils_NetworkEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.wrappers.DequeWrapper_networking_utils_NetworkEvent",8d,b8,8b,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DequeWrapper_networking_utils_NetworkEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DequeWrapper_networking_utils_NetworkEvent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DequeWrapper_networking_utils_NetworkEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DequeWrapper_networking_utils_NetworkEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace networking
} // end namespace wrappers
