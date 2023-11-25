#include <hxcpp.h>

#ifndef INCLUDED_networking_Network
#include <networking/Network.h>
#endif
#ifndef INCLUDED_networking_sessions_Session
#include <networking/sessions/Session.h>
#endif
#ifndef INCLUDED_networking_utils_NetworkMode
#include <networking/utils/NetworkMode.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ca81605dc7339956_27_new,"networking.Network","new",0x82982606,"networking.Network.new","networking/Network.hx",27,0x9e27676b)
HX_LOCAL_STACK_FRAME(_hx_pos_ca81605dc7339956_36_registerSession,"networking.Network","registerSession",0x436db1d9,"networking.Network.registerSession","networking/Network.hx",36,0x9e27676b)
HX_LOCAL_STACK_FRAME(_hx_pos_ca81605dc7339956_49_destroySession,"networking.Network","destroySession",0x0dc6e596,"networking.Network.destroySession","networking/Network.hx",49,0x9e27676b)
HX_LOCAL_STACK_FRAME(_hx_pos_ca81605dc7339956_25_boot,"networking.Network","boot",0xbaa21fcc,"networking.Network.boot","networking/Network.hx",25,0x9e27676b)
namespace networking{

void Network_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ca81605dc7339956_27_new)
            	}

Dynamic Network_obj::__CreateEmpty() { return new Network_obj; }

void *Network_obj::_hx_vtable = 0;

Dynamic Network_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Network_obj > _hx_result = new Network_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Network_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x39ae89d2;
}

::Array< ::Dynamic> Network_obj::sessions;

 ::networking::sessions::Session Network_obj::registerSession( ::networking::utils::NetworkMode mode, ::Dynamic params){
            	HX_GC_STACKFRAME(&_hx_pos_ca81605dc7339956_36_registerSession)
HXLINE(  37)		 ::networking::sessions::Session session =  ::networking::sessions::Session_obj::__alloc( HX_CTX ,mode,params);
HXLINE(  38)		::networking::Network_obj::sessions->push(session);
HXLINE(  39)		return session;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Network_obj,registerSession,return )

bool Network_obj::destroySession( ::networking::sessions::Session session,::hx::Null< bool >  __o_auto_stop){
            		bool auto_stop = __o_auto_stop.Default(true);
            	HX_STACKFRAME(&_hx_pos_ca81605dc7339956_49_destroySession)
HXLINE(  50)		if ((::networking::Network_obj::sessions->indexOf(session,null()) == -1)) {
HXLINE(  50)			return false;
            		}
HXLINE(  51)		if (auto_stop) {
HXLINE(  51)			session->stop();
            		}
HXLINE(  52)		::networking::Network_obj::sessions->remove(session);
HXLINE(  53)		return ::networking::Network_obj::sessions->remove(session);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Network_obj,destroySession,return )


Network_obj::Network_obj()
{
}

bool Network_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"sessions") ) { outValue = ( sessions ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroySession") ) { outValue = destroySession_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"registerSession") ) { outValue = registerSession_dyn(); return true; }
	}
	return false;
}

bool Network_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"sessions") ) { sessions=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Network_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Network_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &Network_obj::sessions,HX_("sessions",5d,54,7c,91)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Network_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Network_obj::sessions,"sessions");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Network_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Network_obj::sessions,"sessions");
};

#endif

::hx::Class Network_obj::__mClass;

static ::String Network_obj_sStaticFields[] = {
	HX_("sessions",5d,54,7c,91),
	HX_("registerSession",33,7b,ac,46),
	HX_("destroySession",7c,05,04,00),
	::String(null())
};

void Network_obj::__register()
{
	Network_obj _hx_dummy;
	Network_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.Network",14,6b,47,d0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Network_obj::__GetStatic;
	__mClass->mSetStaticField = &Network_obj::__SetStatic;
	__mClass->mMarkFunc = Network_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Network_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Network_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Network_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Network_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Network_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Network_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ca81605dc7339956_25_boot)
HXDLIN(  25)		sessions = ::Array_obj< ::Dynamic>::__new();
            	}
}

} // end namespace networking
