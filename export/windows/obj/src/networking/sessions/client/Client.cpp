#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_networking_sessions_Session
#include <networking/sessions/Session.h>
#endif
#ifndef INCLUDED_networking_sessions_client_Client
#include <networking/sessions/client/Client.h>
#endif
#ifndef INCLUDED_networking_sessions_items_ClientObject
#include <networking/sessions/items/ClientObject.h>
#endif
#ifndef INCLUDED_networking_sessions_server_Server
#include <networking/sessions/server/Server.h>
#endif
#ifndef INCLUDED_networking_wrappers_MutexWrapper
#include <networking/wrappers/MutexWrapper.h>
#endif
#ifndef INCLUDED_networking_wrappers_SocketWrapper
#include <networking/wrappers/SocketWrapper.h>
#endif
#ifndef INCLUDED_networking_wrappers_ThreadWrapper
#include <networking/wrappers/ThreadWrapper.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_system_Security
#include <openfl/system/Security.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ccd21489c82ab689_61_new,"networking.sessions.client.Client","new",0x6405d309,"networking.sessions.client.Client.new","networking/sessions/client/Client.hx",61,0x8045d046)
HX_LOCAL_STACK_FRAME(_hx_pos_ccd21489c82ab689_79_send,"networking.sessions.client.Client","send",0x2460de7f,"networking.sessions.client.Client.send","networking/sessions/client/Client.hx",79,0x8045d046)
HX_LOCAL_STACK_FRAME(_hx_pos_ccd21489c82ab689_92_stop,"networking.sessions.client.Client","stop",0x246c4139,"networking.sessions.client.Client.stop","networking/sessions/client/Client.hx",92,0x8045d046)
HX_LOCAL_STACK_FRAME(_hx_pos_ccd21489c82ab689_116_threadCreate,"networking.sessions.client.Client","threadCreate",0xb6cb699d,"networking.sessions.client.Client.threadCreate","networking/sessions/client/Client.hx",116,0x8045d046)
HX_LOCAL_STACK_FRAME(_hx_pos_ccd21489c82ab689_128_threadCreate,"networking.sessions.client.Client","threadCreate",0xb6cb699d,"networking.sessions.client.Client.threadCreate","networking/sessions/client/Client.hx",128,0x8045d046)
HX_LOCAL_STACK_FRAME(_hx_pos_ccd21489c82ab689_99_threadCreate,"networking.sessions.client.Client","threadCreate",0xb6cb699d,"networking.sessions.client.Client.threadCreate","networking/sessions/client/Client.hx",99,0x8045d046)
HX_LOCAL_STACK_FRAME(_hx_pos_ccd21489c82ab689_139_threadListen,"networking.sessions.client.Client","threadListen",0x2ab5cae8,"networking.sessions.client.Client.threadListen","networking/sessions/client/Client.hx",139,0x8045d046)
HX_LOCAL_STACK_FRAME(_hx_pos_ccd21489c82ab689_152_threadClose,"networking.sessions.client.Client","threadClose",0x26360437,"networking.sessions.client.Client.threadClose","networking/sessions/client/Client.hx",152,0x8045d046)
HX_LOCAL_STACK_FRAME(_hx_pos_ccd21489c82ab689_159_disconnect,"networking.sessions.client.Client","disconnect",0xe703f8d3,"networking.sessions.client.Client.disconnect","networking/sessions/client/Client.hx",159,0x8045d046)
HX_LOCAL_STACK_FRAME(_hx_pos_ccd21489c82ab689_23_boot,"networking.sessions.client.Client","boot",0x192bd569,"networking.sessions.client.Client.boot","networking/sessions/client/Client.hx",23,0x8045d046)
HX_LOCAL_STACK_FRAME(_hx_pos_ccd21489c82ab689_26_boot,"networking.sessions.client.Client","boot",0x192bd569,"networking.sessions.client.Client.boot","networking/sessions/client/Client.hx",26,0x8045d046)
HX_LOCAL_STACK_FRAME(_hx_pos_ccd21489c82ab689_29_boot,"networking.sessions.client.Client","boot",0x192bd569,"networking.sessions.client.Client.boot","networking/sessions/client/Client.hx",29,0x8045d046)
HX_LOCAL_STACK_FRAME(_hx_pos_ccd21489c82ab689_32_boot,"networking.sessions.client.Client","boot",0x192bd569,"networking.sessions.client.Client.boot","networking/sessions/client/Client.hx",32,0x8045d046)
namespace networking{
namespace sessions{
namespace client{

void Client_obj::__construct( ::networking::sessions::Session session,::String uuid,::String __o_ip, ::Dynamic __o_port,::String flash_policy_file_url){
            		::String ip = __o_ip;
            		if (::hx::IsNull(__o_ip)) ip = HX_("127.0.0.1",fd,bc,5e,a1);
            		 ::Dynamic port = __o_port;
            		if (::hx::IsNull(__o_port)) port = 9696;
            	HX_GC_STACKFRAME(&_hx_pos_ccd21489c82ab689_61_new)
HXLINE(  63)		this->_session = session;
HXLINE(  64)		this->ip = ip;
HXLINE(  65)		this->port = port;
HXLINE(  66)		this->flash_policy_file_url = flash_policy_file_url;
HXLINE(  68)		this->_uuid = uuid;
HXLINE(  69)		this->_mutex =  ::networking::wrappers::MutexWrapper_obj::__alloc( HX_CTX );
HXLINE(  70)		this->_thread =  ::networking::wrappers::ThreadWrapper_obj::__alloc( HX_CTX ,this->threadCreate_dyn(),this->threadListen_dyn(),this->threadClose_dyn());
            	}

Dynamic Client_obj::__CreateEmpty() { return new Client_obj; }

void *Client_obj::_hx_vtable = 0;

Dynamic Client_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Client_obj > _hx_result = new Client_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Client_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3f5fe5cf;
}

void Client_obj::send( ::Dynamic obj){
            	HX_STACKFRAME(&_hx_pos_ccd21489c82ab689_79_send)
HXDLIN(  79)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  80)			if (!(this->info->send(obj))) {
HXLINE(  81)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Could not send message to server.",2b,72,08,90)));
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  83)				{
HXLINE(  83)					null();
            				}
HXLINE(  84)				 ::networking::sessions::server::Server server;
HXDLIN(  84)				if (::hx::IsNotNull( this->info )) {
HXLINE(  84)					server = this->info->server;
            				}
            				else {
HXLINE(  84)					server = null();
            				}
HXLINE(  85)				this->_session->triggerEvent(HX_("NETWORK_EVENT_MESSAGE_SENT_FAILED",f6,2e,8e,fd), ::Dynamic(::hx::Anon_obj::Create(3)
            					->setFixed(0,HX_("message",c7,35,11,9a),obj)
            					->setFixed(1,HX_("client",4b,ca,4f,0a),this->info)
            					->setFixed(2,HX_("server",c3,4a,37,6e),server)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Client_obj,send,(void))

void Client_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_ccd21489c82ab689_92_stop)
HXLINE(  93)		bool _hx_tmp;
HXDLIN(  93)		if (::hx::IsNotNull( this->info->socket )) {
HXLINE(  93)			_hx_tmp = this->info->socket->connected;
            		}
            		else {
HXLINE(  93)			_hx_tmp = false;
            		}
HXDLIN(  93)		if (_hx_tmp) {
HXLINE(  94)			this->_session->triggerEvent(HX_("NETWORK_EVENT_CLOSED",22,f4,4c,45), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("message",c7,35,11,9a),HX_("Session closed.",18,76,1d,79))
            				->setFixed(1,HX_("client",4b,ca,4f,0a),::hx::ObjectPtr<OBJ_>(this))));
            		}
HXLINE(  96)		this->disconnect();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,stop,(void))

bool Client_obj::threadCreate(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::networking::sessions::client::Client,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic data){
            			HX_GC_STACKFRAME(&_hx_pos_ccd21489c82ab689_116_threadCreate)
HXLINE( 117)			_gthis->_session->triggerEvent(HX_("NETWORK_EVENT_INIT_SUCCESS",2a,c1,4f,1a), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("message",c7,35,11,9a),(((HX_("Connected to ",4e,05,0a,fe) + _gthis->ip) + HX_(":",3a,00,00,00)) + _gthis->port))));
HXLINE( 118)			_gthis->_session->triggerEvent(HX_("NETWORK_EVENT_CONNECTED",f3,a1,8c,f2), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("message",c7,35,11,9a),(((HX_("Connected to ",4e,05,0a,fe) + _gthis->ip) + HX_(":",3a,00,00,00)) + _gthis->port))));
HXLINE( 120)			_gthis->info->load();
HXLINE( 121)			if (!(_gthis->info->send( ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("uuid",3b,1a,af,4d),_gthis->info->uuid)
            				->setFixed(1,HX_("verb",9f,34,4c,4e),HX_("_core.sync.update_client_data",6b,2c,b7,5e)))))) {
HXLINE( 122)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Could not update client's data",68,44,b7,7c)));
            			}
HXLINE( 125)			_gthis->_disconnected_message = HX_("Disconnected",db,d7,7d,56);
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::networking::sessions::client::Client,_gthis) HXARGC(1)
            		void _hx_run( ::Dynamic error){
            			HX_GC_STACKFRAME(&_hx_pos_ccd21489c82ab689_128_threadCreate)
HXLINE( 129)			_gthis->_session->triggerEvent(HX_("NETWORK_EVENT_INIT_FAILURE",b1,0b,fc,78), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("message",c7,35,11,9a),HX_("Could not connect to server.",28,a5,c0,68))));
HXLINE( 130)			_gthis->stop();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_ccd21489c82ab689_99_threadCreate)
HXDLIN(  99)		 ::networking::sessions::client::Client _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 105)		this->_disconnected_message = HX_("",00,00,00,00);
HXLINE( 107)		if (::hx::IsNotNull( this->flash_policy_file_url )) {
HXLINE( 108)			::openfl::_hx_system::Security_obj::allowDomain(HX_("*",2a,00,00,00),null(),null(),null(),null());
HXLINE( 109)			::openfl::_hx_system::Security_obj::loadPolicyFile(this->flash_policy_file_url);
            		}
HXLINE( 114)		this->info =  ::networking::sessions::items::ClientObject_obj::__alloc( HX_CTX ,this->_session,this->_uuid,null(),null());
HXLINE( 116)		 ::Dynamic on_connect =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 128)		 ::Dynamic on_failure =  ::Dynamic(new _hx_Closure_1(_gthis));
HXLINE( 133)		this->info->initializeSocket(this->ip,this->port,on_connect,on_failure);
HXLINE( 135)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,threadCreate,return )

bool Client_obj::threadListen(){
            	HX_STACKFRAME(&_hx_pos_ccd21489c82ab689_139_threadListen)
HXLINE( 140)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 141)			this->info->read();
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
HXLINE( 145)				this->_disconnected_message = (HX_("Connection lost: ",2c,75,00,25) + ::Std_obj::string(e));
HXLINE( 146)				return false;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 149)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,threadListen,return )

void Client_obj::threadClose(){
            	HX_STACKFRAME(&_hx_pos_ccd21489c82ab689_152_threadClose)
HXLINE( 153)		bool _hx_tmp;
HXDLIN( 153)		if (::hx::IsNotNull( this->info->socket )) {
HXLINE( 153)			_hx_tmp = this->info->socket->connected;
            		}
            		else {
HXLINE( 153)			_hx_tmp = false;
            		}
HXDLIN( 153)		if (_hx_tmp) {
HXLINE( 154)			this->_session->triggerEvent(HX_("NETWORK_EVENT_DISCONNECTED",b1,be,61,c5), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("message",c7,35,11,9a),this->_disconnected_message)));
            		}
HXLINE( 156)		this->disconnect();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,threadClose,(void))

void Client_obj::disconnect(){
            	HX_STACKFRAME(&_hx_pos_ccd21489c82ab689_159_disconnect)
HXLINE( 160)		this->_mutex->acquire();
HXLINE( 161)		this->info->destroySocket();
HXLINE( 162)		if (::hx::IsNotNull( this->_thread )) {
HXLINE( 162)			this->_thread->stop();
            		}
HXLINE( 163)		this->_mutex->release();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Client_obj,disconnect,(void))

::String Client_obj::DEFAULT_IP;

 ::Dynamic Client_obj::DEFAULT_PORT;

::String Client_obj::DEFAULT_UUID;

::String Client_obj::DEFAULT_FLASH_POLICY_FILE_URL;


::hx::ObjectPtr< Client_obj > Client_obj::__new( ::networking::sessions::Session session,::String uuid,::String __o_ip, ::Dynamic __o_port,::String flash_policy_file_url) {
	::hx::ObjectPtr< Client_obj > __this = new Client_obj();
	__this->__construct(session,uuid,__o_ip,__o_port,flash_policy_file_url);
	return __this;
}

::hx::ObjectPtr< Client_obj > Client_obj::__alloc(::hx::Ctx *_hx_ctx, ::networking::sessions::Session session,::String uuid,::String __o_ip, ::Dynamic __o_port,::String flash_policy_file_url) {
	Client_obj *__this = (Client_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Client_obj), true, "networking.sessions.client.Client"));
	*(void **)__this = Client_obj::_hx_vtable;
	__this->__construct(session,uuid,__o_ip,__o_port,flash_policy_file_url);
	return __this;
}

Client_obj::Client_obj()
{
}

void Client_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Client);
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_MEMBER_NAME(ip,"ip");
	HX_MARK_MEMBER_NAME(port,"port");
	HX_MARK_MEMBER_NAME(flash_policy_file_url,"flash_policy_file_url");
	HX_MARK_MEMBER_NAME(_session,"_session");
	HX_MARK_MEMBER_NAME(_mutex,"_mutex");
	HX_MARK_MEMBER_NAME(_uuid,"_uuid");
	HX_MARK_MEMBER_NAME(_thread,"_thread");
	HX_MARK_MEMBER_NAME(_disconnected_message,"_disconnected_message");
	HX_MARK_END_CLASS();
}

void Client_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(info,"info");
	HX_VISIT_MEMBER_NAME(ip,"ip");
	HX_VISIT_MEMBER_NAME(port,"port");
	HX_VISIT_MEMBER_NAME(flash_policy_file_url,"flash_policy_file_url");
	HX_VISIT_MEMBER_NAME(_session,"_session");
	HX_VISIT_MEMBER_NAME(_mutex,"_mutex");
	HX_VISIT_MEMBER_NAME(_uuid,"_uuid");
	HX_VISIT_MEMBER_NAME(_thread,"_thread");
	HX_VISIT_MEMBER_NAME(_disconnected_message,"_disconnected_message");
}

::hx::Val Client_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ip") ) { return ::hx::Val( ip ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return ::hx::Val( info ); }
		if (HX_FIELD_EQ(inName,"port") ) { return ::hx::Val( port ); }
		if (HX_FIELD_EQ(inName,"send") ) { return ::hx::Val( send_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_uuid") ) { return ::hx::Val( _uuid ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_mutex") ) { return ::hx::Val( _mutex ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_thread") ) { return ::hx::Val( _thread ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_session") ) { return ::hx::Val( _session ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"disconnect") ) { return ::hx::Val( disconnect_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"threadClose") ) { return ::hx::Val( threadClose_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"threadCreate") ) { return ::hx::Val( threadCreate_dyn() ); }
		if (HX_FIELD_EQ(inName,"threadListen") ) { return ::hx::Val( threadListen_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"flash_policy_file_url") ) { return ::hx::Val( flash_policy_file_url ); }
		if (HX_FIELD_EQ(inName,"_disconnected_message") ) { return ::hx::Val( _disconnected_message ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Client_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ip") ) { ip=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast<  ::networking::sessions::items::ClientObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"port") ) { port=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_uuid") ) { _uuid=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_mutex") ) { _mutex=inValue.Cast<  ::networking::wrappers::MutexWrapper >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_thread") ) { _thread=inValue.Cast<  ::networking::wrappers::ThreadWrapper >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_session") ) { _session=inValue.Cast<  ::networking::sessions::Session >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"flash_policy_file_url") ) { flash_policy_file_url=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_disconnected_message") ) { _disconnected_message=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Client_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("info",6e,38,bb,45));
	outFields->push(HX_("ip",e7,5b,00,00));
	outFields->push(HX_("port",81,83,5c,4a));
	outFields->push(HX_("flash_policy_file_url",4a,12,d7,b1));
	outFields->push(HX_("_session",d7,70,50,cd));
	outFields->push(HX_("_mutex",c0,d6,42,0c));
	outFields->push(HX_("_uuid",1a,36,c0,00));
	outFields->push(HX_("_thread",69,8c,30,fd));
	outFields->push(HX_("_disconnected_message",e2,d7,2a,de));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Client_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::networking::sessions::items::ClientObject */ ,(int)offsetof(Client_obj,info),HX_("info",6e,38,bb,45)},
	{::hx::fsString,(int)offsetof(Client_obj,ip),HX_("ip",e7,5b,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Client_obj,port),HX_("port",81,83,5c,4a)},
	{::hx::fsString,(int)offsetof(Client_obj,flash_policy_file_url),HX_("flash_policy_file_url",4a,12,d7,b1)},
	{::hx::fsObject /*  ::networking::sessions::Session */ ,(int)offsetof(Client_obj,_session),HX_("_session",d7,70,50,cd)},
	{::hx::fsObject /*  ::networking::wrappers::MutexWrapper */ ,(int)offsetof(Client_obj,_mutex),HX_("_mutex",c0,d6,42,0c)},
	{::hx::fsString,(int)offsetof(Client_obj,_uuid),HX_("_uuid",1a,36,c0,00)},
	{::hx::fsObject /*  ::networking::wrappers::ThreadWrapper */ ,(int)offsetof(Client_obj,_thread),HX_("_thread",69,8c,30,fd)},
	{::hx::fsString,(int)offsetof(Client_obj,_disconnected_message),HX_("_disconnected_message",e2,d7,2a,de)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Client_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Client_obj::DEFAULT_IP,HX_("DEFAULT_IP",05,84,2f,18)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Client_obj::DEFAULT_PORT,HX_("DEFAULT_PORT",1f,53,bc,2a)},
	{::hx::fsString,(void *) &Client_obj::DEFAULT_UUID,HX_("DEFAULT_UUID",d9,e9,0e,2e)},
	{::hx::fsString,(void *) &Client_obj::DEFAULT_FLASH_POLICY_FILE_URL,HX_("DEFAULT_FLASH_POLICY_FILE_URL",ac,c8,65,a4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Client_obj_sMemberFields[] = {
	HX_("info",6e,38,bb,45),
	HX_("ip",e7,5b,00,00),
	HX_("port",81,83,5c,4a),
	HX_("flash_policy_file_url",4a,12,d7,b1),
	HX_("_session",d7,70,50,cd),
	HX_("_mutex",c0,d6,42,0c),
	HX_("_uuid",1a,36,c0,00),
	HX_("_thread",69,8c,30,fd),
	HX_("_disconnected_message",e2,d7,2a,de),
	HX_("send",48,8d,50,4c),
	HX_("stop",02,f0,5b,4c),
	HX_("threadCreate",66,89,a4,9a),
	HX_("threadListen",b1,ea,8e,0e),
	HX_("threadClose",8e,b0,53,9c),
	HX_("disconnect",5c,64,44,69),
	::String(null()) };

static void Client_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Client_obj::DEFAULT_IP,"DEFAULT_IP");
	HX_MARK_MEMBER_NAME(Client_obj::DEFAULT_PORT,"DEFAULT_PORT");
	HX_MARK_MEMBER_NAME(Client_obj::DEFAULT_UUID,"DEFAULT_UUID");
	HX_MARK_MEMBER_NAME(Client_obj::DEFAULT_FLASH_POLICY_FILE_URL,"DEFAULT_FLASH_POLICY_FILE_URL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Client_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Client_obj::DEFAULT_IP,"DEFAULT_IP");
	HX_VISIT_MEMBER_NAME(Client_obj::DEFAULT_PORT,"DEFAULT_PORT");
	HX_VISIT_MEMBER_NAME(Client_obj::DEFAULT_UUID,"DEFAULT_UUID");
	HX_VISIT_MEMBER_NAME(Client_obj::DEFAULT_FLASH_POLICY_FILE_URL,"DEFAULT_FLASH_POLICY_FILE_URL");
};

#endif

::hx::Class Client_obj::__mClass;

static ::String Client_obj_sStaticFields[] = {
	HX_("DEFAULT_IP",05,84,2f,18),
	HX_("DEFAULT_PORT",1f,53,bc,2a),
	HX_("DEFAULT_UUID",d9,e9,0e,2e),
	HX_("DEFAULT_FLASH_POLICY_FILE_URL",ac,c8,65,a4),
	::String(null())
};

void Client_obj::__register()
{
	Client_obj _hx_dummy;
	Client_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.sessions.client.Client",97,9a,f3,a8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Client_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Client_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Client_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Client_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Client_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Client_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Client_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Client_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ccd21489c82ab689_23_boot)
HXDLIN(  23)		DEFAULT_IP = HX_("127.0.0.1",fd,bc,5e,a1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccd21489c82ab689_26_boot)
HXDLIN(  26)		DEFAULT_PORT = 9696;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccd21489c82ab689_29_boot)
HXDLIN(  29)		DEFAULT_UUID = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_ccd21489c82ab689_32_boot)
HXDLIN(  32)		DEFAULT_FLASH_POLICY_FILE_URL = null();
            	}
}

} // end namespace networking
} // end namespace sessions
} // end namespace client
