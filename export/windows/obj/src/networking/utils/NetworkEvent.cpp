#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_networking_sessions_Session
#include <networking/sessions/Session.h>
#endif
#ifndef INCLUDED_networking_sessions_items_ClientObject
#include <networking/sessions/items/ClientObject.h>
#endif
#ifndef INCLUDED_networking_utils_NetworkEvent
#include <networking/utils/NetworkEvent.h>
#endif
#ifndef INCLUDED_networking_utils_NetworkMode
#include <networking/utils/NetworkMode.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_84_new,"networking.utils.NetworkEvent","new",0x1f31c2b5,"networking.utils.NetworkEvent.new","networking/utils/NetworkEvent.hx",84,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_91_get_data,"networking.utils.NetworkEvent","get_data",0xfbc88b3e,"networking.utils.NetworkEvent.get_data","networking/utils/NetworkEvent.hx",91,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_95_get_metadata,"networking.utils.NetworkEvent","get_metadata",0xd0c13683,"networking.utils.NetworkEvent.get_metadata","networking/utils/NetworkEvent.hx",95,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_98_get_client,"networking.utils.NetworkEvent","get_client",0xcf3b6c5f,"networking.utils.NetworkEvent.get_client","networking/utils/NetworkEvent.hx",98,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_104_get_verb,"networking.utils.NetworkEvent","get_verb",0x07b169b3,"networking.utils.NetworkEvent.get_verb","networking/utils/NetworkEvent.hx",104,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_108_get_sender,"networking.utils.NetworkEvent","get_sender",0x307069c9,"networking.utils.NetworkEvent.get_sender","networking/utils/NetworkEvent.hx",108,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_17_boot,"networking.utils.NetworkEvent","boot",0x24719c3d,"networking.utils.NetworkEvent.boot","networking/utils/NetworkEvent.hx",17,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_19_boot,"networking.utils.NetworkEvent","boot",0x24719c3d,"networking.utils.NetworkEvent.boot","networking/utils/NetworkEvent.hx",19,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_21_boot,"networking.utils.NetworkEvent","boot",0x24719c3d,"networking.utils.NetworkEvent.boot","networking/utils/NetworkEvent.hx",21,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_23_boot,"networking.utils.NetworkEvent","boot",0x24719c3d,"networking.utils.NetworkEvent.boot","networking/utils/NetworkEvent.hx",23,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_25_boot,"networking.utils.NetworkEvent","boot",0x24719c3d,"networking.utils.NetworkEvent.boot","networking/utils/NetworkEvent.hx",25,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_30_boot,"networking.utils.NetworkEvent","boot",0x24719c3d,"networking.utils.NetworkEvent.boot","networking/utils/NetworkEvent.hx",30,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_32_boot,"networking.utils.NetworkEvent","boot",0x24719c3d,"networking.utils.NetworkEvent.boot","networking/utils/NetworkEvent.hx",32,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_37_boot,"networking.utils.NetworkEvent","boot",0x24719c3d,"networking.utils.NetworkEvent.boot","networking/utils/NetworkEvent.hx",37,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_42_boot,"networking.utils.NetworkEvent","boot",0x24719c3d,"networking.utils.NetworkEvent.boot","networking/utils/NetworkEvent.hx",42,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_44_boot,"networking.utils.NetworkEvent","boot",0x24719c3d,"networking.utils.NetworkEvent.boot","networking/utils/NetworkEvent.hx",44,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_49_boot,"networking.utils.NetworkEvent","boot",0x24719c3d,"networking.utils.NetworkEvent.boot","networking/utils/NetworkEvent.hx",49,0x0ba23dd9)
HX_LOCAL_STACK_FRAME(_hx_pos_3ea7acea8acf9b18_52_boot,"networking.utils.NetworkEvent","boot",0x24719c3d,"networking.utils.NetworkEvent.boot","networking/utils/NetworkEvent.hx",52,0x0ba23dd9)
namespace networking{
namespace utils{

void NetworkEvent_obj::__construct(::String label, ::networking::sessions::Session session, ::Dynamic netData,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_84_new)
HXLINE(  85)		super::__construct(label,bubbles,cancelable);
HXLINE(  86)		this->netData = netData;
HXLINE(  87)		this->session = session;
            	}

Dynamic NetworkEvent_obj::__CreateEmpty() { return new NetworkEvent_obj; }

void *NetworkEvent_obj::_hx_vtable = 0;

Dynamic NetworkEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NetworkEvent_obj > _hx_result = new NetworkEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool NetworkEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x3ecdfe69;
	}
}

 ::Dynamic NetworkEvent_obj::get_data(){
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_91_get_data)
HXDLIN(  91)		return  ::Dynamic( ::Dynamic(this->netData->__Field(HX_("message",c7,35,11,9a),::hx::paccDynamic))->__Field(HX_("data",2a,56,63,42),::hx::paccDynamic));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetworkEvent_obj,get_data,return )

 ::Dynamic NetworkEvent_obj::get_metadata(){
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_95_get_metadata)
HXDLIN(  95)		return  ::Dynamic( ::Dynamic(this->netData->__Field(HX_("message",c7,35,11,9a),::hx::paccDynamic))->__Field(HX_("metadata",6f,e7,19,40),::hx::paccDynamic));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetworkEvent_obj,get_metadata,return )

 ::networking::sessions::items::ClientObject NetworkEvent_obj::get_client(){
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_98_get_client)
HXLINE(  99)		 ::networking::sessions::items::ClientObject cl;
HXDLIN(  99)		if (::hx::IsNotNull( this->netData->__Field(HX_("client",4b,ca,4f,0a),::hx::paccDynamic) )) {
HXLINE(  99)			cl = ( ( ::networking::sessions::items::ClientObject)(this->netData->__Field(HX_("client",4b,ca,4f,0a),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  99)			cl = ( ( ::networking::sessions::items::ClientObject)(this->netData->__Field(HX_("obj",f7,8f,54,00),::hx::paccDynamic)) );
            		}
HXLINE( 100)		return cl;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetworkEvent_obj,get_client,return )

::String NetworkEvent_obj::get_verb(){
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_104_get_verb)
HXDLIN( 104)		return ( (::String)(this->get_data()->__Field(HX_("verb",9f,34,4c,4e),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetworkEvent_obj,get_verb,return )

 ::Dynamic NetworkEvent_obj::get_sender(){
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_108_get_sender)
HXDLIN( 108)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 109)			switch((int)(this->session->mode->_hx_getIndex())){
            				case (int)0: {
HXLINE( 110)					return  ::Dynamic(this->get_metadata()->__Field(HX_("client",4b,ca,4f,0a),::hx::paccDynamic));
            				}
            				break;
            				case (int)1: {
HXLINE( 111)					return  ::Dynamic(this->get_metadata()->__Field(HX_("server",c3,4a,37,6e),::hx::paccDynamic));
            				}
            				break;
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 114)				{
HXLINE( 114)					null();
            				}
HXDLIN( 114)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 115)				{
HXLINE( 115)					::String msg = ( (::String)(e) );
HXDLIN( 115)					{
HXLINE( 115)						::String level = HX_("ERROR",a8,03,18,f1);
HXDLIN( 115)						if (::hx::IsNull( level )) {
HXLINE( 115)							level = HX_("INFO",6e,00,7c,30);
            						}
HXDLIN( 115)						::haxe::Log_obj::trace((((HX_("# NETWORK ",6f,67,50,2d) + level) + HX_(" -- $ -- ",24,9e,72,56)) + msg),::hx::SourceInfo(HX_("networking/utils/NetworkLogger.hx",99,c5,fb,66),64,HX_("networking.utils.NetworkLogger",47,fe,2e,80),HX_("log",84,54,52,00)));
            					}
            				}
HXLINE( 116)				return null();
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 108)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetworkEvent_obj,get_sender,return )

::String NetworkEvent_obj::MESSAGE_SENT;

::String NetworkEvent_obj::MESSAGE_RECEIVED;

::String NetworkEvent_obj::MESSAGE_SENT_FAILED;

::String NetworkEvent_obj::MESSAGE_BROADCAST;

::String NetworkEvent_obj::MESSAGE_BROADCAST_FAILED;

::String NetworkEvent_obj::INIT_SUCCESS;

::String NetworkEvent_obj::INIT_FAILURE;

::String NetworkEvent_obj::CLOSED;

::String NetworkEvent_obj::CONNECTED;

::String NetworkEvent_obj::DISCONNECTED;

::String NetworkEvent_obj::SERVER_FULL;

::String NetworkEvent_obj::SECURITY_ERROR;


::hx::ObjectPtr< NetworkEvent_obj > NetworkEvent_obj::__new(::String label, ::networking::sessions::Session session, ::Dynamic netData,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< NetworkEvent_obj > __this = new NetworkEvent_obj();
	__this->__construct(label,session,netData,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< NetworkEvent_obj > NetworkEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String label, ::networking::sessions::Session session, ::Dynamic netData,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	NetworkEvent_obj *__this = (NetworkEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NetworkEvent_obj), true, "networking.utils.NetworkEvent"));
	*(void **)__this = NetworkEvent_obj::_hx_vtable;
	__this->__construct(label,session,netData,__o_bubbles,__o_cancelable);
	return __this;
}

NetworkEvent_obj::NetworkEvent_obj()
{
}

void NetworkEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NetworkEvent);
	HX_MARK_MEMBER_NAME(netData,"netData");
	HX_MARK_MEMBER_NAME(session,"session");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(metadata,"metadata");
	HX_MARK_MEMBER_NAME(client,"client");
	HX_MARK_MEMBER_NAME(verb,"verb");
	HX_MARK_MEMBER_NAME(sender,"sender");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NetworkEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(netData,"netData");
	HX_VISIT_MEMBER_NAME(session,"session");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(metadata,"metadata");
	HX_VISIT_MEMBER_NAME(client,"client");
	HX_VISIT_MEMBER_NAME(verb,"verb");
	HX_VISIT_MEMBER_NAME(sender,"sender");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NetworkEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_data() : data ); }
		if (HX_FIELD_EQ(inName,"verb") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_verb() : verb ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_client() : client ); }
		if (HX_FIELD_EQ(inName,"sender") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_sender() : sender ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"netData") ) { return ::hx::Val( netData ); }
		if (HX_FIELD_EQ(inName,"session") ) { return ::hx::Val( session ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"metadata") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_metadata() : metadata ); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return ::hx::Val( get_data_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_verb") ) { return ::hx::Val( get_verb_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_client") ) { return ::hx::Val( get_client_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_sender") ) { return ::hx::Val( get_sender_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_metadata") ) { return ::hx::Val( get_metadata_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NetworkEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"verb") ) { verb=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { client=inValue.Cast<  ::networking::sessions::items::ClientObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sender") ) { sender=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"netData") ) { netData=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"session") ) { session=inValue.Cast<  ::networking::sessions::Session >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"metadata") ) { metadata=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NetworkEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("netData",27,45,fc,37));
	outFields->push(HX_("session",56,17,98,93));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("metadata",6f,e7,19,40));
	outFields->push(HX_("client",4b,ca,4f,0a));
	outFields->push(HX_("verb",9f,34,4c,4e));
	outFields->push(HX_("sender",b5,c7,84,6b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NetworkEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NetworkEvent_obj,netData),HX_("netData",27,45,fc,37)},
	{::hx::fsObject /*  ::networking::sessions::Session */ ,(int)offsetof(NetworkEvent_obj,session),HX_("session",56,17,98,93)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NetworkEvent_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NetworkEvent_obj,metadata),HX_("metadata",6f,e7,19,40)},
	{::hx::fsObject /*  ::networking::sessions::items::ClientObject */ ,(int)offsetof(NetworkEvent_obj,client),HX_("client",4b,ca,4f,0a)},
	{::hx::fsString,(int)offsetof(NetworkEvent_obj,verb),HX_("verb",9f,34,4c,4e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NetworkEvent_obj,sender),HX_("sender",b5,c7,84,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NetworkEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &NetworkEvent_obj::MESSAGE_SENT,HX_("MESSAGE_SENT",30,0a,f6,cd)},
	{::hx::fsString,(void *) &NetworkEvent_obj::MESSAGE_RECEIVED,HX_("MESSAGE_RECEIVED",f9,d5,5e,94)},
	{::hx::fsString,(void *) &NetworkEvent_obj::MESSAGE_SENT_FAILED,HX_("MESSAGE_SENT_FAILED",2c,1f,ad,37)},
	{::hx::fsString,(void *) &NetworkEvent_obj::MESSAGE_BROADCAST,HX_("MESSAGE_BROADCAST",09,cf,16,63)},
	{::hx::fsString,(void *) &NetworkEvent_obj::MESSAGE_BROADCAST_FAILED,HX_("MESSAGE_BROADCAST_FAILED",73,97,af,a1)},
	{::hx::fsString,(void *) &NetworkEvent_obj::INIT_SUCCESS,HX_("INIT_SUCCESS",34,e6,a7,81)},
	{::hx::fsString,(void *) &NetworkEvent_obj::INIT_FAILURE,HX_("INIT_FAILURE",bb,30,54,e0)},
	{::hx::fsString,(void *) &NetworkEvent_obj::CLOSED,HX_("CLOSED",ac,55,d4,c0)},
	{::hx::fsString,(void *) &NetworkEvent_obj::CONNECTED,HX_("CONNECTED",a9,52,4f,9e)},
	{::hx::fsString,(void *) &NetworkEvent_obj::DISCONNECTED,HX_("DISCONNECTED",bb,e3,b9,2c)},
	{::hx::fsString,(void *) &NetworkEvent_obj::SERVER_FULL,HX_("SERVER_FULL",cb,73,98,44)},
	{::hx::fsString,(void *) &NetworkEvent_obj::SECURITY_ERROR,HX_("SECURITY_ERROR",a9,85,3b,cf)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NetworkEvent_obj_sMemberFields[] = {
	HX_("netData",27,45,fc,37),
	HX_("session",56,17,98,93),
	HX_("data",2a,56,63,42),
	HX_("metadata",6f,e7,19,40),
	HX_("client",4b,ca,4f,0a),
	HX_("verb",9f,34,4c,4e),
	HX_("sender",b5,c7,84,6b),
	HX_("get_data",b3,11,1e,c2),
	HX_("get_metadata",78,9b,33,f5),
	HX_("get_client",14,3a,d7,fa),
	HX_("get_verb",28,f0,06,ce),
	HX_("get_sender",7e,37,0c,5c),
	::String(null()) };

static void NetworkEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NetworkEvent_obj::MESSAGE_SENT,"MESSAGE_SENT");
	HX_MARK_MEMBER_NAME(NetworkEvent_obj::MESSAGE_RECEIVED,"MESSAGE_RECEIVED");
	HX_MARK_MEMBER_NAME(NetworkEvent_obj::MESSAGE_SENT_FAILED,"MESSAGE_SENT_FAILED");
	HX_MARK_MEMBER_NAME(NetworkEvent_obj::MESSAGE_BROADCAST,"MESSAGE_BROADCAST");
	HX_MARK_MEMBER_NAME(NetworkEvent_obj::MESSAGE_BROADCAST_FAILED,"MESSAGE_BROADCAST_FAILED");
	HX_MARK_MEMBER_NAME(NetworkEvent_obj::INIT_SUCCESS,"INIT_SUCCESS");
	HX_MARK_MEMBER_NAME(NetworkEvent_obj::INIT_FAILURE,"INIT_FAILURE");
	HX_MARK_MEMBER_NAME(NetworkEvent_obj::CLOSED,"CLOSED");
	HX_MARK_MEMBER_NAME(NetworkEvent_obj::CONNECTED,"CONNECTED");
	HX_MARK_MEMBER_NAME(NetworkEvent_obj::DISCONNECTED,"DISCONNECTED");
	HX_MARK_MEMBER_NAME(NetworkEvent_obj::SERVER_FULL,"SERVER_FULL");
	HX_MARK_MEMBER_NAME(NetworkEvent_obj::SECURITY_ERROR,"SECURITY_ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NetworkEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NetworkEvent_obj::MESSAGE_SENT,"MESSAGE_SENT");
	HX_VISIT_MEMBER_NAME(NetworkEvent_obj::MESSAGE_RECEIVED,"MESSAGE_RECEIVED");
	HX_VISIT_MEMBER_NAME(NetworkEvent_obj::MESSAGE_SENT_FAILED,"MESSAGE_SENT_FAILED");
	HX_VISIT_MEMBER_NAME(NetworkEvent_obj::MESSAGE_BROADCAST,"MESSAGE_BROADCAST");
	HX_VISIT_MEMBER_NAME(NetworkEvent_obj::MESSAGE_BROADCAST_FAILED,"MESSAGE_BROADCAST_FAILED");
	HX_VISIT_MEMBER_NAME(NetworkEvent_obj::INIT_SUCCESS,"INIT_SUCCESS");
	HX_VISIT_MEMBER_NAME(NetworkEvent_obj::INIT_FAILURE,"INIT_FAILURE");
	HX_VISIT_MEMBER_NAME(NetworkEvent_obj::CLOSED,"CLOSED");
	HX_VISIT_MEMBER_NAME(NetworkEvent_obj::CONNECTED,"CONNECTED");
	HX_VISIT_MEMBER_NAME(NetworkEvent_obj::DISCONNECTED,"DISCONNECTED");
	HX_VISIT_MEMBER_NAME(NetworkEvent_obj::SERVER_FULL,"SERVER_FULL");
	HX_VISIT_MEMBER_NAME(NetworkEvent_obj::SECURITY_ERROR,"SECURITY_ERROR");
};

#endif

::hx::Class NetworkEvent_obj::__mClass;

static ::String NetworkEvent_obj_sStaticFields[] = {
	HX_("MESSAGE_SENT",30,0a,f6,cd),
	HX_("MESSAGE_RECEIVED",f9,d5,5e,94),
	HX_("MESSAGE_SENT_FAILED",2c,1f,ad,37),
	HX_("MESSAGE_BROADCAST",09,cf,16,63),
	HX_("MESSAGE_BROADCAST_FAILED",73,97,af,a1),
	HX_("INIT_SUCCESS",34,e6,a7,81),
	HX_("INIT_FAILURE",bb,30,54,e0),
	HX_("CLOSED",ac,55,d4,c0),
	HX_("CONNECTED",a9,52,4f,9e),
	HX_("DISCONNECTED",bb,e3,b9,2c),
	HX_("SERVER_FULL",cb,73,98,44),
	HX_("SECURITY_ERROR",a9,85,3b,cf),
	::String(null())
};

void NetworkEvent_obj::__register()
{
	NetworkEvent_obj _hx_dummy;
	NetworkEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.utils.NetworkEvent",43,44,ab,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NetworkEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NetworkEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NetworkEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NetworkEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NetworkEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NetworkEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NetworkEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NetworkEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_17_boot)
HXDLIN(  17)		MESSAGE_SENT = HX_("NETWORK_EVENT_MESSAGE_SENT",26,e5,9d,66);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_19_boot)
HXDLIN(  19)		MESSAGE_RECEIVED = HX_("NETWORK_EVENT_MESSAGE_RECEIVED",ef,63,8e,0b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_21_boot)
HXDLIN(  21)		MESSAGE_SENT_FAILED = HX_("NETWORK_EVENT_MESSAGE_SENT_FAILED",f6,2e,8e,fd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_23_boot)
HXDLIN(  23)		MESSAGE_BROADCAST = HX_("NETWORK_EVENT_SV_MESSAGE_BROADCAST",23,62,3f,7a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_25_boot)
HXDLIN(  25)		MESSAGE_BROADCAST_FAILED = HX_("NETWORK_EVENT_SV_MESSAGE_BROADCAST_FAILED",99,fb,2e,06);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_30_boot)
HXDLIN(  30)		INIT_SUCCESS = HX_("NETWORK_EVENT_INIT_SUCCESS",2a,c1,4f,1a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_32_boot)
HXDLIN(  32)		INIT_FAILURE = HX_("NETWORK_EVENT_INIT_FAILURE",b1,0b,fc,78);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_37_boot)
HXDLIN(  37)		CLOSED = HX_("NETWORK_EVENT_CLOSED",22,f4,4c,45);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_42_boot)
HXDLIN(  42)		CONNECTED = HX_("NETWORK_EVENT_CONNECTED",f3,a1,8c,f2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_44_boot)
HXDLIN(  44)		DISCONNECTED = HX_("NETWORK_EVENT_DISCONNECTED",b1,be,61,c5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_49_boot)
HXDLIN(  49)		SERVER_FULL = HX_("NETWORK_EVENT_SERVER_FULL",95,a9,3f,1e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3ea7acea8acf9b18_52_boot)
HXDLIN(  52)		SECURITY_ERROR = HX_("NETWORK_EVENT_SECURITY_ERROR",1f,8a,c8,c5);
            	}
}

} // end namespace networking
} // end namespace utils
