#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_networking_sessions_Session
#include <networking/sessions/Session.h>
#endif
#ifndef INCLUDED_networking_sessions_server_FlashPolicyServer
#include <networking/sessions/server/FlashPolicyServer.h>
#endif
#ifndef INCLUDED_networking_sessions_server_Server
#include <networking/sessions/server/Server.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4833c73d2b955776_43_new,"networking.sessions.server.FlashPolicyServer","new",0x7b047d43,"networking.sessions.server.FlashPolicyServer.new","networking/sessions/server/FlashPolicyServer.hx",43,0x3b90962e)
HX_LOCAL_STACK_FRAME(_hx_pos_4833c73d2b955776_60_run,"networking.sessions.server.FlashPolicyServer","run",0x7b07942e,"networking.sessions.server.FlashPolicyServer.run","networking/sessions/server/FlashPolicyServer.hx",60,0x3b90962e)
HX_LOCAL_STACK_FRAME(_hx_pos_4833c73d2b955776_66_stop,"networking.sessions.server.FlashPolicyServer","stop",0x2c4289bf,"networking.sessions.server.FlashPolicyServer.stop","networking/sessions/server/FlashPolicyServer.hx",66,0x3b90962e)
HX_LOCAL_STACK_FRAME(_hx_pos_4833c73d2b955776_71_startServer,"networking.sessions.server.FlashPolicyServer","startServer",0xcf6a70a8,"networking.sessions.server.FlashPolicyServer.startServer","networking/sessions/server/FlashPolicyServer.hx",71,0x3b90962e)
HX_LOCAL_STACK_FRAME(_hx_pos_4833c73d2b955776_84_loopServer,"networking.sessions.server.FlashPolicyServer","loopServer",0x0ede4dc4,"networking.sessions.server.FlashPolicyServer.loopServer","networking/sessions/server/FlashPolicyServer.hx",84,0x3b90962e)
HX_LOCAL_STACK_FRAME(_hx_pos_4833c73d2b955776_28_boot,"networking.sessions.server.FlashPolicyServer","boot",0x21021def,"networking.sessions.server.FlashPolicyServer.boot","networking/sessions/server/FlashPolicyServer.hx",28,0x3b90962e)
namespace networking{
namespace sessions{
namespace server{

void FlashPolicyServer_obj::__construct( ::networking::sessions::server::Server server, ::Dynamic port){
            	HX_GC_STACKFRAME(&_hx_pos_4833c73d2b955776_43_new)
HXLINE(  44)		if (::hx::IsNull( port )) {
HXLINE(  44)			port = ::networking::sessions::server::FlashPolicyServer_obj::PORT;
            		}
HXLINE(  46)		this->_port = port;
HXLINE(  47)		this->_server = server;
HXLINE(  49)		this->_socket =  ::networking::wrappers::SocketWrapper_obj::__alloc( HX_CTX ,null());
            	}

Dynamic FlashPolicyServer_obj::__CreateEmpty() { return new FlashPolicyServer_obj; }

void *FlashPolicyServer_obj::_hx_vtable = 0;

Dynamic FlashPolicyServer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlashPolicyServer_obj > _hx_result = new FlashPolicyServer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlashPolicyServer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6b411c8d;
}

void FlashPolicyServer_obj::run(){
            	HX_GC_STACKFRAME(&_hx_pos_4833c73d2b955776_60_run)
HXDLIN(  60)		this->_thread =  ::networking::wrappers::ThreadWrapper_obj::__alloc( HX_CTX ,this->startServer_dyn(),this->loopServer_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlashPolicyServer_obj,run,(void))

void FlashPolicyServer_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_4833c73d2b955776_66_stop)
HXLINE(  67)		this->_socket->close();
HXLINE(  68)		this->_thread->stop();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlashPolicyServer_obj,stop,(void))

bool FlashPolicyServer_obj::startServer(){
            	HX_STACKFRAME(&_hx_pos_4833c73d2b955776_71_startServer)
HXLINE(  72)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  73)			this->_socket->bind(this->_server->ip,this->_port);
HXLINE(  74)			this->_socket->listen(200);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  76)				{
HXLINE(  76)					null();
            				}
HXLINE(  77)				this->_server->_session->triggerEvent(HX_("NETWORK_EVENT_SECURITY_ERROR",1f,8a,c8,c5),HX_("Could not start policy server.",27,17,e7,ff));
HXLINE(  78)				return false;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  81)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlashPolicyServer_obj,startServer,return )

bool FlashPolicyServer_obj::loopServer(){
            	HX_STACKFRAME(&_hx_pos_4833c73d2b955776_84_loopServer)
HXLINE(  85)		 ::networking::wrappers::SocketWrapper client;
HXLINE(  87)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  88)			client = this->_socket->accept();
HXLINE(  89)			if (::hx::IsNull( client )) {
HXLINE(  89)				return true;
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  91)				{
HXLINE(  91)					null();
            				}
HXLINE(  92)				return true;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  95)		 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::ofString(((HX_("HTTP/1.1 200 OK\n\r",20,a2,c0,6b) + HX_("Content-Type: text/xml\n\r\n\r",ef,ac,61,53)) + HX_("<cross-domain-policy><site-control permitted-cross-domain-policies=\"master-only\"/><allow-access-from domain=\"*\" to-ports=\"*\" /></cross-domain-policy>\x00""",1a,81,79,7e)),null());
HXLINE( 101)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 102)			client->writeBytes(bytes,bytes->length,null());
HXLINE( 103)			client->close();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 105)				{
HXLINE( 105)					null();
            				}
HXDLIN( 105)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 106)				{
HXLINE( 106)					::String msg = ( (::String)(e) );
HXDLIN( 106)					{
HXLINE( 106)						::String level = HX_("ERROR",a8,03,18,f1);
HXDLIN( 106)						if (::hx::IsNull( level )) {
HXLINE( 106)							level = HX_("INFO",6e,00,7c,30);
            						}
HXDLIN( 106)						::haxe::Log_obj::trace((((HX_("# NETWORK ",6f,67,50,2d) + level) + HX_(" -- $ -- ",24,9e,72,56)) + msg),::hx::SourceInfo(HX_("networking/utils/NetworkLogger.hx",99,c5,fb,66),64,HX_("networking.utils.NetworkLogger",47,fe,2e,80),HX_("log",84,54,52,00)));
            					}
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 109)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlashPolicyServer_obj,loopServer,return )

 ::Dynamic FlashPolicyServer_obj::PORT;


::hx::ObjectPtr< FlashPolicyServer_obj > FlashPolicyServer_obj::__new( ::networking::sessions::server::Server server, ::Dynamic port) {
	::hx::ObjectPtr< FlashPolicyServer_obj > __this = new FlashPolicyServer_obj();
	__this->__construct(server,port);
	return __this;
}

::hx::ObjectPtr< FlashPolicyServer_obj > FlashPolicyServer_obj::__alloc(::hx::Ctx *_hx_ctx, ::networking::sessions::server::Server server, ::Dynamic port) {
	FlashPolicyServer_obj *__this = (FlashPolicyServer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlashPolicyServer_obj), true, "networking.sessions.server.FlashPolicyServer"));
	*(void **)__this = FlashPolicyServer_obj::_hx_vtable;
	__this->__construct(server,port);
	return __this;
}

FlashPolicyServer_obj::FlashPolicyServer_obj()
{
}

void FlashPolicyServer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlashPolicyServer);
	HX_MARK_MEMBER_NAME(_port,"_port");
	HX_MARK_MEMBER_NAME(_socket,"_socket");
	HX_MARK_MEMBER_NAME(_server,"_server");
	HX_MARK_MEMBER_NAME(_thread,"_thread");
	HX_MARK_END_CLASS();
}

void FlashPolicyServer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_port,"_port");
	HX_VISIT_MEMBER_NAME(_socket,"_socket");
	HX_VISIT_MEMBER_NAME(_server,"_server");
	HX_VISIT_MEMBER_NAME(_thread,"_thread");
}

::hx::Val FlashPolicyServer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return ::hx::Val( run_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_port") ) { return ::hx::Val( _port ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_socket") ) { return ::hx::Val( _socket ); }
		if (HX_FIELD_EQ(inName,"_server") ) { return ::hx::Val( _server ); }
		if (HX_FIELD_EQ(inName,"_thread") ) { return ::hx::Val( _thread ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loopServer") ) { return ::hx::Val( loopServer_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startServer") ) { return ::hx::Val( startServer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlashPolicyServer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"PORT") ) { outValue = ( PORT ); return true; }
	}
	return false;
}

::hx::Val FlashPolicyServer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_port") ) { _port=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_socket") ) { _socket=inValue.Cast<  ::networking::wrappers::SocketWrapper >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_server") ) { _server=inValue.Cast<  ::networking::sessions::server::Server >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_thread") ) { _thread=inValue.Cast<  ::networking::wrappers::ThreadWrapper >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlashPolicyServer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"PORT") ) { PORT=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void FlashPolicyServer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_port",60,9f,6d,fd));
	outFields->push(HX_("_socket",52,9d,bd,94));
	outFields->push(HX_("_server",62,5c,ae,dc));
	outFields->push(HX_("_thread",69,8c,30,fd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlashPolicyServer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlashPolicyServer_obj,_port),HX_("_port",60,9f,6d,fd)},
	{::hx::fsObject /*  ::networking::wrappers::SocketWrapper */ ,(int)offsetof(FlashPolicyServer_obj,_socket),HX_("_socket",52,9d,bd,94)},
	{::hx::fsObject /*  ::networking::sessions::server::Server */ ,(int)offsetof(FlashPolicyServer_obj,_server),HX_("_server",62,5c,ae,dc)},
	{::hx::fsObject /*  ::networking::wrappers::ThreadWrapper */ ,(int)offsetof(FlashPolicyServer_obj,_thread),HX_("_thread",69,8c,30,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlashPolicyServer_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &FlashPolicyServer_obj::PORT,HX_("PORT",81,4b,1d,35)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlashPolicyServer_obj_sMemberFields[] = {
	HX_("_port",60,9f,6d,fd),
	HX_("_socket",52,9d,bd,94),
	HX_("_server",62,5c,ae,dc),
	HX_("_thread",69,8c,30,fd),
	HX_("run",4b,e7,56,00),
	HX_("stop",02,f0,5b,4c),
	HX_("startServer",c5,a8,1d,e6),
	HX_("loopServer",47,48,26,37),
	::String(null()) };

static void FlashPolicyServer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlashPolicyServer_obj::PORT,"PORT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlashPolicyServer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlashPolicyServer_obj::PORT,"PORT");
};

#endif

::hx::Class FlashPolicyServer_obj::__mClass;

static ::String FlashPolicyServer_obj_sStaticFields[] = {
	HX_("PORT",81,4b,1d,35),
	::String(null())
};

void FlashPolicyServer_obj::__register()
{
	FlashPolicyServer_obj _hx_dummy;
	FlashPolicyServer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.sessions.server.FlashPolicyServer",d1,1f,8e,3a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlashPolicyServer_obj::__GetStatic;
	__mClass->mSetStaticField = &FlashPolicyServer_obj::__SetStatic;
	__mClass->mMarkFunc = FlashPolicyServer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlashPolicyServer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlashPolicyServer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlashPolicyServer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlashPolicyServer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlashPolicyServer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlashPolicyServer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlashPolicyServer_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4833c73d2b955776_28_boot)
HXDLIN(  28)		PORT = 9999;
            	}
}

} // end namespace networking
} // end namespace sessions
} // end namespace server
