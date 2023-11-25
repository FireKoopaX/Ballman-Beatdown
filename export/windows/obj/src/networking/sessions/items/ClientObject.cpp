#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_networking_sessions_Session
#include <networking/sessions/Session.h>
#endif
#ifndef INCLUDED_networking_sessions_items_ClientObject
#include <networking/sessions/items/ClientObject.h>
#endif
#ifndef INCLUDED_networking_sessions_items_ServerObject
#include <networking/sessions/items/ServerObject.h>
#endif
#ifndef INCLUDED_networking_sessions_server_Server
#include <networking/sessions/server/Server.h>
#endif
#ifndef INCLUDED_networking_utils_NetworkMessage
#include <networking/utils/NetworkMessage.h>
#endif
#ifndef INCLUDED_networking_utils_Utils
#include <networking/utils/Utils.h>
#endif
#ifndef INCLUDED_networking_wrappers_SocketWrapper
#include <networking/wrappers/SocketWrapper.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_42b3cf02416350ce_48_new,"networking.sessions.items.ClientObject","new",0x503a1c21,"networking.sessions.items.ClientObject.new","networking/sessions/items/ClientObject.hx",48,0x8475e7ae)
HX_LOCAL_STACK_FRAME(_hx_pos_42b3cf02416350ce_62_toString,"networking.sessions.items.ClientObject","toString",0x75b9494b,"networking.sessions.items.ClientObject.toString","networking/sessions/items/ClientObject.hx",62,0x8475e7ae)
HX_LOCAL_STACK_FRAME(_hx_pos_42b3cf02416350ce_75_update,"networking.sessions.items.ClientObject","update",0xbd7248e8,"networking.sessions.items.ClientObject.update","networking/sessions/items/ClientObject.hx",75,0x8475e7ae)
HX_LOCAL_STACK_FRAME(_hx_pos_42b3cf02416350ce_88_initializeSocket,"networking.sessions.items.ClientObject","initializeSocket",0x64b8bcc2,"networking.sessions.items.ClientObject.initializeSocket","networking/sessions/items/ClientObject.hx",88,0x8475e7ae)
HX_LOCAL_STACK_FRAME(_hx_pos_42b3cf02416350ce_105_destroySocket,"networking.sessions.items.ClientObject","destroySocket",0xb0c10b4e,"networking.sessions.items.ClientObject.destroySocket","networking/sessions/items/ClientObject.hx",105,0x8475e7ae)
HX_LOCAL_STACK_FRAME(_hx_pos_42b3cf02416350ce_116_load,"networking.sessions.items.ClientObject","load",0xe1539745,"networking.sessions.items.ClientObject.load","networking/sessions/items/ClientObject.hx",116,0x8475e7ae)
HX_LOCAL_STACK_FRAME(_hx_pos_42b3cf02416350ce_133_send,"networking.sessions.items.ClientObject","send",0xe5ec8a67,"networking.sessions.items.ClientObject.send","networking/sessions/items/ClientObject.hx",133,0x8475e7ae)
HX_LOCAL_STACK_FRAME(_hx_pos_42b3cf02416350ce_154_read,"networking.sessions.items.ClientObject","read",0xe5434875,"networking.sessions.items.ClientObject.read","networking/sessions/items/ClientObject.hx",154,0x8475e7ae)
HX_LOCAL_STACK_FRAME(_hx_pos_42b3cf02416350ce_166_trigger,"networking.sessions.items.ClientObject","trigger",0x8e9d1579,"networking.sessions.items.ClientObject.trigger","networking/sessions/items/ClientObject.hx",166,0x8475e7ae)
HX_LOCAL_STACK_FRAME(_hx_pos_42b3cf02416350ce_171_generateUuid,"networking.sessions.items.ClientObject","generateUuid",0x6d1f982f,"networking.sessions.items.ClientObject.generateUuid","networking/sessions/items/ClientObject.hx",171,0x8475e7ae)
HX_LOCAL_STACK_FRAME(_hx_pos_42b3cf02416350ce_177_get_object,"networking.sessions.items.ClientObject","get_object",0x05180ce7,"networking.sessions.items.ClientObject.get_object","networking/sessions/items/ClientObject.hx",177,0x8475e7ae)
HX_LOCAL_STACK_FRAME(_hx_pos_42b3cf02416350ce_181_get_active,"networking.sessions.items.ClientObject","get_active",0x061ecfee,"networking.sessions.items.ClientObject.get_active","networking/sessions/items/ClientObject.hx",181,0x8475e7ae)
namespace networking{
namespace sessions{
namespace items{

void ClientObject_obj::__construct( ::networking::sessions::Session session,::String uuid, ::networking::sessions::server::Server sv, ::networking::wrappers::SocketWrapper skt){
            	HX_STACKFRAME(&_hx_pos_42b3cf02416350ce_48_new)
HXLINE(  49)		this->server = sv;
HXLINE(  50)		this->socket = skt;
HXLINE(  51)		this->uuid = uuid;
HXLINE(  53)		this->_peer_str = HX_("?:?",c4,00,30,00);
HXLINE(  54)		this->_session = session;
            	}

Dynamic ClientObject_obj::__CreateEmpty() { return new ClientObject_obj; }

void *ClientObject_obj::_hx_vtable = 0;

Dynamic ClientObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClientObject_obj > _hx_result = new ClientObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool ClientObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ddbf635;
}

::String ClientObject_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_42b3cf02416350ce_62_toString)
HXDLIN(  62)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  63)			return ((((HX_("",00,00,00,00) + this->uuid) + HX_(" (",08,1c,00,00)) + this->_peer_str) + HX_(")",29,00,00,00));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  65)				{
HXLINE(  65)					null();
            				}
HXLINE(  66)				return ((HX_("",00,00,00,00) + this->uuid) + HX_(" (?:?)",ed,6a,43,fd));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  62)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClientObject_obj,toString,return )

void ClientObject_obj::update(::String uuid){
            	HX_STACKFRAME(&_hx_pos_42b3cf02416350ce_75_update)
HXDLIN(  75)		if (::hx::IsNotNull( uuid )) {
HXDLIN(  75)			this->uuid = uuid;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClientObject_obj,update,(void))

bool ClientObject_obj::initializeSocket(::String ip, ::Dynamic port, ::Dynamic on_connect, ::Dynamic on_failure){
            	HX_GC_STACKFRAME(&_hx_pos_42b3cf02416350ce_88_initializeSocket)
HXLINE(  89)		if (::hx::IsNotNull( this->socket )) {
HXLINE(  89)			return false;
            		}
HXLINE(  91)		this->socket =  ::networking::wrappers::SocketWrapper_obj::__alloc( HX_CTX ,null());
HXLINE(  92)		this->socket->onConnect = on_connect;
HXLINE(  93)		this->socket->onFailure = on_failure;
HXLINE(  95)		this->socket->connect(ip,port);
HXLINE(  97)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(ClientObject_obj,initializeSocket,return )

bool ClientObject_obj::destroySocket(){
            	HX_STACKFRAME(&_hx_pos_42b3cf02416350ce_105_destroySocket)
HXLINE( 106)		if (::hx::IsNull( this->socket )) {
HXLINE( 106)			return false;
            		}
HXLINE( 108)		this->socket->close();
HXLINE( 109)		this->socket = null();
HXLINE( 110)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClientObject_obj,destroySocket,return )

void ClientObject_obj::load(){
            	HX_STACKFRAME(&_hx_pos_42b3cf02416350ce_116_load)
HXLINE( 117)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 118)			this->_peer_str = this->socket->toString();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 120)				{
HXLINE( 120)					null();
            				}
HXLINE( 121)				this->_peer_str = HX_("?:?",c4,00,30,00);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 124)		this->generateUuid();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClientObject_obj,load,(void))

bool ClientObject_obj::send( ::Dynamic msg){
            	HX_GC_STACKFRAME(&_hx_pos_42b3cf02416350ce_133_send)
HXLINE( 134)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 135)			if (::hx::IsNull( this->socket )) {
HXLINE( 135)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Socket is not initialized.",f0,4f,d6,e4)));
            			}
HXLINE( 137)			 ::networking::sessions::items::ServerObject server_info;
HXDLIN( 137)			if (::hx::IsNotNull( this->server )) {
HXLINE( 137)				server_info = this->server->info;
            			}
            			else {
HXLINE( 137)				server_info = null();
            			}
HXLINE( 138)			 ::Dynamic raw_message = ::networking::utils::NetworkMessage_obj::createRaw(server_info,::hx::ObjectPtr<OBJ_>(this),msg);
HXLINE( 140)			 ::networking::wrappers::SocketWrapper _hx_tmp = this->socket;
HXDLIN( 140)			 ::haxe::Serializer handler =  ::haxe::Serializer_obj::__alloc( HX_CTX );
HXDLIN( 140)			handler->serialize(raw_message);
HXDLIN( 140)			_hx_tmp->write((handler->toString() + HX_("\n",0a,00,00,00)));
HXLINE( 141)			this->_session->triggerEvent(HX_("NETWORK_EVENT_MESSAGE_SENT",26,e5,9d,66), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("message",c7,35,11,9a),raw_message)
            				->setFixed(1,HX_("obj",f7,8f,54,00),::hx::ObjectPtr<OBJ_>(this))));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 143)				{
HXLINE( 143)					null();
            				}
HXDLIN( 143)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 144)				{
HXLINE( 144)					::String msg = ( (::String)(e) );
HXDLIN( 144)					{
HXLINE( 144)						::String level = HX_("ERROR",a8,03,18,f1);
HXDLIN( 144)						if (::hx::IsNull( level )) {
HXLINE( 144)							level = HX_("INFO",6e,00,7c,30);
            						}
HXDLIN( 144)						::haxe::Log_obj::trace((((HX_("# NETWORK ",6f,67,50,2d) + level) + HX_(" -- $ -- ",24,9e,72,56)) + msg),::hx::SourceInfo(HX_("networking/utils/NetworkLogger.hx",99,c5,fb,66),64,HX_("networking.utils.NetworkLogger",47,fe,2e,80),HX_("log",84,54,52,00)));
            					}
            				}
HXLINE( 145)				this->active = false;
HXLINE( 146)				return false;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 148)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClientObject_obj,send,return )

void ClientObject_obj::read(){
            	HX_STACKFRAME(&_hx_pos_42b3cf02416350ce_154_read)
HXLINE( 155)		::String data = this->socket->read();
HXLINE( 156)		bool _hx_tmp;
HXDLIN( 156)		if (this->get_active()) {
HXLINE( 156)			_hx_tmp = ::hx::IsNotNull( data );
            		}
            		else {
HXLINE( 156)			_hx_tmp = false;
            		}
HXDLIN( 156)		if (_hx_tmp) {
HXLINE( 156)			 ::networking::sessions::Session _hx_tmp = this->_session;
HXDLIN( 156)			_hx_tmp->triggerEvent(HX_("NETWORK_EVENT_MESSAGE_RECEIVED",ef,63,8e,0b), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("message",c7,35,11,9a),::networking::utils::NetworkMessage_obj::parse(data))
            				->setFixed(1,HX_("obj",f7,8f,54,00),::hx::ObjectPtr<OBJ_>(this))));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClientObject_obj,read,(void))

void ClientObject_obj::trigger(::String verb, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_42b3cf02416350ce_166_trigger)
HXLINE( 167)		if (::hx::IsNull( data )) {
HXLINE( 167)			data =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE( 168)		this->send( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("content",39,8d,77,19),data)
            			->setFixed(1,HX_("verb",9f,34,4c,4e),verb)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(ClientObject_obj,trigger,(void))

void ClientObject_obj::generateUuid(){
            	HX_STACKFRAME(&_hx_pos_42b3cf02416350ce_171_generateUuid)
HXLINE( 172)		bool _hx_tmp;
HXDLIN( 172)		if (::hx::IsNotNull( this->uuid )) {
HXLINE( 172)			_hx_tmp = (this->uuid != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 172)			_hx_tmp = false;
            		}
HXDLIN( 172)		if (_hx_tmp) {
HXLINE( 172)			return;
            		}
HXLINE( 173)		this->uuid = ::networking::utils::Utils_obj::guid();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClientObject_obj,generateUuid,(void))

 ::Dynamic ClientObject_obj::get_object(){
            	HX_STACKFRAME(&_hx_pos_42b3cf02416350ce_177_get_object)
HXDLIN( 177)		bool _hx_tmp = this->get_active();
HXDLIN( 177)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("active",c6,41,46,16),_hx_tmp)
            			->setFixed(1,HX_("uuid",3b,1a,af,4d),this->uuid));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClientObject_obj,get_object,return )

bool ClientObject_obj::get_active(){
            	HX_STACKFRAME(&_hx_pos_42b3cf02416350ce_181_get_active)
HXDLIN( 181)		return ::hx::IsNotNull( this->socket );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClientObject_obj,get_active,return )


::hx::ObjectPtr< ClientObject_obj > ClientObject_obj::__new( ::networking::sessions::Session session,::String uuid, ::networking::sessions::server::Server sv, ::networking::wrappers::SocketWrapper skt) {
	::hx::ObjectPtr< ClientObject_obj > __this = new ClientObject_obj();
	__this->__construct(session,uuid,sv,skt);
	return __this;
}

::hx::ObjectPtr< ClientObject_obj > ClientObject_obj::__alloc(::hx::Ctx *_hx_ctx, ::networking::sessions::Session session,::String uuid, ::networking::sessions::server::Server sv, ::networking::wrappers::SocketWrapper skt) {
	ClientObject_obj *__this = (ClientObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClientObject_obj), true, "networking.sessions.items.ClientObject"));
	*(void **)__this = ClientObject_obj::_hx_vtable;
	__this->__construct(session,uuid,sv,skt);
	return __this;
}

ClientObject_obj::ClientObject_obj()
{
}

void ClientObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClientObject);
	HX_MARK_MEMBER_NAME(socket,"socket");
	HX_MARK_MEMBER_NAME(server,"server");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(uuid,"uuid");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(_peer_str,"_peer_str");
	HX_MARK_MEMBER_NAME(_session,"_session");
	HX_MARK_END_CLASS();
}

void ClientObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(socket,"socket");
	HX_VISIT_MEMBER_NAME(server,"server");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(uuid,"uuid");
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(_peer_str,"_peer_str");
	HX_VISIT_MEMBER_NAME(_session,"_session");
}

::hx::Val ClientObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { return ::hx::Val( uuid ); }
		if (HX_FIELD_EQ(inName,"load") ) { return ::hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"send") ) { return ::hx::Val( send_dyn() ); }
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"socket") ) { return ::hx::Val( socket ); }
		if (HX_FIELD_EQ(inName,"server") ) { return ::hx::Val( server ); }
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_active() : active ); }
		if (HX_FIELD_EQ(inName,"object") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_object() : object ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"trigger") ) { return ::hx::Val( trigger_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_session") ) { return ::hx::Val( _session ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_peer_str") ) { return ::hx::Val( _peer_str ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_object") ) { return ::hx::Val( get_object_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_active") ) { return ::hx::Val( get_active_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"generateUuid") ) { return ::hx::Val( generateUuid_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"destroySocket") ) { return ::hx::Val( destroySocket_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initializeSocket") ) { return ::hx::Val( initializeSocket_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ClientObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { uuid=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"socket") ) { socket=inValue.Cast<  ::networking::wrappers::SocketWrapper >(); return inValue; }
		if (HX_FIELD_EQ(inName,"server") ) { server=inValue.Cast<  ::networking::sessions::server::Server >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_session") ) { _session=inValue.Cast<  ::networking::sessions::Session >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_peer_str") ) { _peer_str=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClientObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("socket",b3,8b,46,26));
	outFields->push(HX_("server",c3,4a,37,6e));
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("uuid",3b,1a,af,4d));
	outFields->push(HX_("object",bf,7e,3f,15));
	outFields->push(HX_("_peer_str",b3,3f,7c,fa));
	outFields->push(HX_("_session",d7,70,50,cd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ClientObject_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::networking::wrappers::SocketWrapper */ ,(int)offsetof(ClientObject_obj,socket),HX_("socket",b3,8b,46,26)},
	{::hx::fsObject /*  ::networking::sessions::server::Server */ ,(int)offsetof(ClientObject_obj,server),HX_("server",c3,4a,37,6e)},
	{::hx::fsBool,(int)offsetof(ClientObject_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsString,(int)offsetof(ClientObject_obj,uuid),HX_("uuid",3b,1a,af,4d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ClientObject_obj,object),HX_("object",bf,7e,3f,15)},
	{::hx::fsString,(int)offsetof(ClientObject_obj,_peer_str),HX_("_peer_str",b3,3f,7c,fa)},
	{::hx::fsObject /*  ::networking::sessions::Session */ ,(int)offsetof(ClientObject_obj,_session),HX_("_session",d7,70,50,cd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ClientObject_obj_sStaticStorageInfo = 0;
#endif

static ::String ClientObject_obj_sMemberFields[] = {
	HX_("socket",b3,8b,46,26),
	HX_("server",c3,4a,37,6e),
	HX_("active",c6,41,46,16),
	HX_("uuid",3b,1a,af,4d),
	HX_("object",bf,7e,3f,15),
	HX_("_peer_str",b3,3f,7c,fa),
	HX_("_session",d7,70,50,cd),
	HX_("toString",ac,d0,6e,38),
	HX_("update",09,86,05,87),
	HX_("initializeSocket",23,0d,46,a0),
	HX_("destroySocket",4d,24,40,f4),
	HX_("load",26,9a,b7,47),
	HX_("send",48,8d,50,4c),
	HX_("read",56,4b,a7,4b),
	HX_("trigger",38,55,df,25),
	HX_("generateUuid",10,e4,82,20),
	HX_("get_object",88,ee,c6,05),
	HX_("get_active",8f,b1,cd,06),
	::String(null()) };

::hx::Class ClientObject_obj::__mClass;

void ClientObject_obj::__register()
{
	ClientObject_obj _hx_dummy;
	ClientObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.sessions.items.ClientObject",af,77,d7,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ClientObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ClientObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClientObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClientObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace networking
} // end namespace sessions
} // end namespace items
