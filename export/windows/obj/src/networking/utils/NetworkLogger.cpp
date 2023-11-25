#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_networking_utils_NetworkEvent
#include <networking/utils/NetworkEvent.h>
#endif
#ifndef INCLUDED_networking_utils_NetworkLogger
#include <networking/utils/NetworkLogger.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6a4b3a9cdbde7f2a_31_new,"networking.utils.NetworkLogger","new",0xf6b4ceb9,"networking.utils.NetworkLogger.new","networking/utils/NetworkLogger.hx",31,0x66fbc599)
HX_LOCAL_STACK_FRAME(_hx_pos_6a4b3a9cdbde7f2a_38_error,"networking.utils.NetworkLogger","error",0x8289d261,"networking.utils.NetworkLogger.error","networking/utils/NetworkLogger.hx",38,0x66fbc599)
HX_LOCAL_STACK_FRAME(_hx_pos_6a4b3a9cdbde7f2a_53_event,"networking.utils.NetworkLogger","event",0x8524ceb3,"networking.utils.NetworkLogger.event","networking/utils/NetworkLogger.hx",53,0x66fbc599)
HX_LOCAL_STACK_FRAME(_hx_pos_6a4b3a9cdbde7f2a_64_log,"networking.utils.NetworkLogger","log",0xf6b352dd,"networking.utils.NetworkLogger.log","networking/utils/NetworkLogger.hx",64,0x66fbc599)
namespace networking{
namespace utils{

void NetworkLogger_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6a4b3a9cdbde7f2a_31_new)
            	}

Dynamic NetworkLogger_obj::__CreateEmpty() { return new NetworkLogger_obj; }

void *NetworkLogger_obj::_hx_vtable = 0;

Dynamic NetworkLogger_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NetworkLogger_obj > _hx_result = new NetworkLogger_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NetworkLogger_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7b6f2561;
}

void NetworkLogger_obj::error( ::Dynamic exception){
            	HX_STACKFRAME(&_hx_pos_6a4b3a9cdbde7f2a_38_error)
HXLINE(  42)		::String msg = ( (::String)(exception) );
HXLINE(  44)		{
HXLINE(  44)			::String level = HX_("ERROR",a8,03,18,f1);
HXDLIN(  44)			if (::hx::IsNull( level )) {
HXLINE(  44)				level = HX_("INFO",6e,00,7c,30);
            			}
HXDLIN(  44)			::haxe::Log_obj::trace((((HX_("# NETWORK ",6f,67,50,2d) + level) + HX_(" -- $ -- ",24,9e,72,56)) + msg),::hx::SourceInfo(HX_("networking/utils/NetworkLogger.hx",99,c5,fb,66),64,HX_("networking.utils.NetworkLogger",47,fe,2e,80),HX_("log",84,54,52,00)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NetworkLogger_obj,error,(void))

void NetworkLogger_obj::event( ::networking::utils::NetworkEvent event){
            	HX_STACKFRAME(&_hx_pos_6a4b3a9cdbde7f2a_53_event)
HXDLIN(  53)		::String msg = ((HX_("",00,00,00,00) + event->type) + HX_(" -- ",a0,20,49,15));
HXDLIN(  53)		::String msg1 = (msg + ::Std_obj::string(event->netData));
HXDLIN(  53)		::String level = HX_("EVENT",fa,ff,b2,f3);
HXDLIN(  53)		if (::hx::IsNull( level )) {
HXDLIN(  53)			level = HX_("INFO",6e,00,7c,30);
            		}
HXDLIN(  53)		::haxe::Log_obj::trace((((HX_("# NETWORK ",6f,67,50,2d) + level) + HX_(" -- $ -- ",24,9e,72,56)) + msg1),::hx::SourceInfo(HX_("networking/utils/NetworkLogger.hx",99,c5,fb,66),64,HX_("networking.utils.NetworkLogger",47,fe,2e,80),HX_("log",84,54,52,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NetworkLogger_obj,event,(void))

void NetworkLogger_obj::log(::String msg,::String __o_level){
            		::String level = __o_level;
            		if (::hx::IsNull(__o_level)) level = HX_("INFO",6e,00,7c,30);
            	HX_STACKFRAME(&_hx_pos_6a4b3a9cdbde7f2a_64_log)
HXDLIN(  64)		::haxe::Log_obj::trace((((HX_("# NETWORK ",6f,67,50,2d) + level) + HX_(" -- $ -- ",24,9e,72,56)) + msg),::hx::SourceInfo(HX_("networking/utils/NetworkLogger.hx",99,c5,fb,66),64,HX_("networking.utils.NetworkLogger",47,fe,2e,80),HX_("log",84,54,52,00)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NetworkLogger_obj,log,(void))


NetworkLogger_obj::NetworkLogger_obj()
{
}

bool NetworkLogger_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { outValue = error_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"event") ) { outValue = event_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NetworkLogger_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NetworkLogger_obj_sStaticStorageInfo = 0;
#endif

::hx::Class NetworkLogger_obj::__mClass;

static ::String NetworkLogger_obj_sStaticFields[] = {
	HX_("error",c8,cb,29,73),
	HX_("event",1a,c8,c4,75),
	HX_("log",84,54,52,00),
	::String(null())
};

void NetworkLogger_obj::__register()
{
	NetworkLogger_obj _hx_dummy;
	NetworkLogger_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.utils.NetworkLogger",47,fe,2e,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NetworkLogger_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NetworkLogger_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NetworkLogger_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NetworkLogger_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NetworkLogger_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace networking
} // end namespace utils
