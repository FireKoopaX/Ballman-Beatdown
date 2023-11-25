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
#ifndef INCLUDED_networking_sessions_items_ClientObject
#include <networking/sessions/items/ClientObject.h>
#endif
#ifndef INCLUDED_networking_sessions_items_ServerObject
#include <networking/sessions/items/ServerObject.h>
#endif
#ifndef INCLUDED_networking_sessions_server_FlashPolicyServer
#include <networking/sessions/server/FlashPolicyServer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_fa6f3625a3c52273_81_new,"networking.sessions.server.Server","new",0x99c6d209,"networking.sessions.server.Server.new","networking/sessions/server/Server.hx",81,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_124_broadcast,"networking.sessions.server.Server","broadcast",0x99eec96a,"networking.sessions.server.Server.broadcast","networking/sessions/server/Server.hx",124,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_142_disconnectClient,"networking.sessions.server.Server","disconnectClient",0xb3aeb87e,"networking.sessions.server.Server.disconnectClient","networking/sessions/server/Server.hx",142,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_160_stop,"networking.sessions.server.Server","stop",0xf78a6239,"networking.sessions.server.Server.stop","networking/sessions/server/Server.hx",160,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_179_send,"networking.sessions.server.Server","send",0xf77eff7f,"networking.sessions.server.Server.send","networking/sessions/server/Server.hx",179,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_188_session,"networking.sessions.server.Server","session",0x17d7a17f,"networking.sessions.server.Server.session","networking/sessions/server/Server.hx",188,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_193_threadLoop,"networking.sessions.server.Server","threadLoop",0x032cefc5,"networking.sessions.server.Server.threadLoop","networking/sessions/server/Server.hx",193,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_218_cleanup,"networking.sessions.server.Server","cleanup",0x2f81964d,"networking.sessions.server.Server.cleanup","networking/sessions/server/Server.hx",218,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_231_maxClientsReached,"networking.sessions.server.Server","maxClientsReached",0x69dda0d7,"networking.sessions.server.Server.maxClientsReached","networking/sessions/server/Server.hx",231,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_236_getThreadCreate,"networking.sessions.server.Server","getThreadCreate",0x04123a45,"networking.sessions.server.Server.getThreadCreate","networking/sessions/server/Server.hx",236,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_235_getThreadCreate,"networking.sessions.server.Server","getThreadCreate",0x04123a45,"networking.sessions.server.Server.getThreadCreate","networking/sessions/server/Server.hx",235,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_246_getThreadListen,"networking.sessions.server.Server","getThreadListen",0x77fc9b90,"networking.sessions.server.Server.getThreadListen","networking/sessions/server/Server.hx",246,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_261_getThreadDisconnect,"networking.sessions.server.Server","getThreadDisconnect",0xaeed1025,"networking.sessions.server.Server.getThreadDisconnect","networking/sessions/server/Server.hx",261,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_259_getThreadDisconnect,"networking.sessions.server.Server","getThreadDisconnect",0xaeed1025,"networking.sessions.server.Server.getThreadDisconnect","networking/sessions/server/Server.hx",259,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_29_boot,"networking.sessions.server.Server","boot",0xec49f669,"networking.sessions.server.Server.boot","networking/sessions/server/Server.hx",29,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_32_boot,"networking.sessions.server.Server","boot",0xec49f669,"networking.sessions.server.Server.boot","networking/sessions/server/Server.hx",32,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_35_boot,"networking.sessions.server.Server","boot",0xec49f669,"networking.sessions.server.Server.boot","networking/sessions/server/Server.hx",35,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_38_boot,"networking.sessions.server.Server","boot",0xec49f669,"networking.sessions.server.Server.boot","networking/sessions/server/Server.hx",38,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_41_boot,"networking.sessions.server.Server","boot",0xec49f669,"networking.sessions.server.Server.boot","networking/sessions/server/Server.hx",41,0xb9e9b146)
HX_LOCAL_STACK_FRAME(_hx_pos_fa6f3625a3c52273_44_boot,"networking.sessions.server.Server","boot",0xec49f669,"networking.sessions.server.Server.boot","networking/sessions/server/Server.hx",44,0xb9e9b146)
namespace networking{
namespace sessions{
namespace server{

void Server_obj::__construct( ::networking::sessions::Session session,::String uuid,::String __o_ip, ::Dynamic __o_port, ::Dynamic __o_max_connections, ::Dynamic flash_policy_file_port){
            		::String ip = __o_ip;
            		if (::hx::IsNull(__o_ip)) ip = HX_("127.0.0.1",fd,bc,5e,a1);
            		 ::Dynamic port = __o_port;
            		if (::hx::IsNull(__o_port)) port = 9696;
            		 ::Dynamic max_connections = __o_max_connections;
            		if (::hx::IsNull(__o_max_connections)) max_connections = 24;
            	HX_GC_STACKFRAME(&_hx_pos_fa6f3625a3c52273_81_new)
HXLINE(  83)		this->_session = session;
HXLINE(  84)		this->_mutex =  ::networking::wrappers::MutexWrapper_obj::__alloc( HX_CTX );
HXLINE(  85)		this->_uuid = uuid;
HXLINE(  87)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  92)			this->info =  ::networking::sessions::items::ServerObject_obj::__alloc( HX_CTX ,this->_session,this->_uuid,::hx::ObjectPtr<OBJ_>(this));
HXLINE(  93)			this->info->initializeSocket(ip,port,null(),null());
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  95)				{
HXLINE(  95)					null();
            				}
HXDLIN(  95)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(  96)				 ::networking::sessions::Session _hx_tmp = this->_session;
HXDLIN(  96)				_hx_tmp->triggerEvent(HX_("NETWORK_EVENT_INIT_FAILURE",b1,0b,fc,78), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("message",c7,35,11,9a),(((((HX_("Could not bind to ",ae,63,db,77) + ip) + HX_(":",3a,00,00,00)) + port) + HX_(". Ensure that no server is running on that port. Reason: ",85,5a,a7,39)) + ::Std_obj::string(e)))
            					->setFixed(1,HX_("server",c3,4a,37,6e),::hx::ObjectPtr<OBJ_>(this))));
HXLINE(  97)				this->info = null();
HXLINE(  98)				return;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 101)		this->_session->triggerEvent(HX_("NETWORK_EVENT_INIT_SUCCESS",2a,c1,4f,1a), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("message",c7,35,11,9a),((((HX_("Binded to ",a1,13,e3,f5) + ip) + HX_(":",3a,00,00,00)) + port) + HX_(".",2e,00,00,00)))
            			->setFixed(1,HX_("server",c3,4a,37,6e),::hx::ObjectPtr<OBJ_>(this))));
HXLINE( 103)		this->ip = ip;
HXLINE( 104)		this->port = port;
HXLINE( 105)		this->max_connections = ( (int)(max_connections) );
HXLINE( 106)		this->flash_policy_file_port = flash_policy_file_port;
HXLINE( 108)		this->clients = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 109)		this->_thread =  ::networking::wrappers::ThreadWrapper_obj::__alloc( HX_CTX ,null(),this->threadLoop_dyn(),null());
HXLINE( 111)		if (::hx::IsNotNull( this->flash_policy_file_port )) {
HXLINE( 112)			this->_policy_server =  ::networking::sessions::server::FlashPolicyServer_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),flash_policy_file_port);
HXLINE( 113)			this->_policy_server->run();
            		}
            	}

Dynamic Server_obj::__CreateEmpty() { return new Server_obj; }

void *Server_obj::_hx_vtable = 0;

Dynamic Server_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Server_obj > _hx_result = new Server_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Server_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5bd81ebf;
}

void Server_obj::broadcast( ::Dynamic obj){
            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_124_broadcast)
HXDLIN( 124)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 125)			{
HXLINE( 125)				int _g = 0;
HXDLIN( 125)				::Array< ::Dynamic> _g1 = this->clients;
HXDLIN( 125)				while((_g < _g1->length)){
HXLINE( 125)					 ::networking::sessions::items::ClientObject cl = _g1->__get(_g).StaticCast<  ::networking::sessions::items::ClientObject >();
HXDLIN( 125)					_g = (_g + 1);
HXLINE( 126)					if (!(cl->send(obj))) {
HXLINE( 126)						this->disconnectClient(cl,false);
            					}
            				}
            			}
HXLINE( 128)			this->_session->triggerEvent(HX_("NETWORK_EVENT_SV_MESSAGE_BROADCAST",23,62,3f,7a), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("message",c7,35,11,9a),obj)
            				->setFixed(1,HX_("server",c3,4a,37,6e),::hx::ObjectPtr<OBJ_>(this))));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 130)				{
HXLINE( 130)					null();
            				}
HXLINE( 131)				this->_session->triggerEvent(HX_("NETWORK_EVENT_SV_MESSAGE_BROADCAST_FAILED",99,fb,2e,06), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("message",c7,35,11,9a),obj)
            					->setFixed(1,HX_("server",c3,4a,37,6e),::hx::ObjectPtr<OBJ_>(this))));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Server_obj,broadcast,(void))

bool Server_obj::disconnectClient( ::networking::sessions::items::ClientObject cl,::hx::Null< bool >  __o_dispatch){
            		bool dispatch = __o_dispatch.Default(true);
            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_142_disconnectClient)
HXLINE( 143)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 144)			if (!(cl->get_active())) {
HXLINE( 144)				return false;
            			}
HXLINE( 146)			if (dispatch) {
HXLINE( 147)				this->_session->triggerEvent(HX_("NETWORK_EVENT_DISCONNECTED",b1,be,61,c5), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("client",4b,ca,4f,0a),cl)
            					->setFixed(1,HX_("server",c3,4a,37,6e),::hx::ObjectPtr<OBJ_>(this))));
            			}
HXLINE( 150)			cl->destroySocket();
HXLINE( 151)			this->clients->remove(cl);
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 153)				{
HXLINE( 153)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 154)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Server_obj,disconnectClient,return )

void Server_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_160_stop)
HXLINE( 161)		if (::hx::IsNotNull( this->_thread )) {
HXLINE( 161)			this->_thread->stop();
            		}
HXLINE( 162)		if (::hx::IsNotNull( this->_policy_server )) {
HXLINE( 162)			this->_policy_server->stop();
            		}
HXLINE( 164)		this->_mutex->acquire();
HXLINE( 165)		this->cleanup();
HXLINE( 166)		this->_mutex->release();
HXLINE( 167)		if (::hx::IsNotNull( this->info )) {
HXLINE( 167)			this->_session->triggerEvent(HX_("NETWORK_EVENT_CLOSED",22,f4,4c,45), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("message",c7,35,11,9a),HX_("Session closed.",18,76,1d,79))
            				->setFixed(1,HX_("server",c3,4a,37,6e),::hx::ObjectPtr<OBJ_>(this))));
            		}
HXLINE( 169)		this->_thread = null();
HXLINE( 170)		this->_mutex = null();
HXLINE( 171)		this->_policy_server = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,stop,(void))

void Server_obj::send( ::Dynamic obj){
            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_179_send)
HXDLIN( 179)		this->broadcast(obj);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Server_obj,send,(void))

 ::networking::sessions::Session Server_obj::session(){
            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_188_session)
HXDLIN( 188)		return this->_session;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,session,return )

bool Server_obj::threadLoop(){
            	HX_GC_STACKFRAME(&_hx_pos_fa6f3625a3c52273_193_threadLoop)
HXLINE( 194)		 ::networking::wrappers::SocketWrapper sk = null();
HXLINE( 195)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 196)			sk = this->info->socket->accept();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 198)				{
HXLINE( 198)					null();
            				}
HXDLIN( 198)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 199)				{
HXLINE( 199)					::String msg = ( (::String)(e) );
HXDLIN( 199)					{
HXLINE( 199)						::String level = HX_("ERROR",a8,03,18,f1);
HXDLIN( 199)						if (::hx::IsNull( level )) {
HXLINE( 199)							level = HX_("INFO",6e,00,7c,30);
            						}
HXDLIN( 199)						::haxe::Log_obj::trace((((HX_("# NETWORK ",6f,67,50,2d) + level) + HX_(" -- $ -- ",24,9e,72,56)) + msg),::hx::SourceInfo(HX_("networking/utils/NetworkLogger.hx",99,c5,fb,66),64,HX_("networking.utils.NetworkLogger",47,fe,2e,80),HX_("log",84,54,52,00)));
            					}
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 201)		if (::hx::IsNotNull( sk )) {
HXLINE( 202)			 ::networking::sessions::items::ClientObject cl =  ::networking::sessions::items::ClientObject_obj::__alloc( HX_CTX ,this->_session,null(),::hx::ObjectPtr<OBJ_>(this),sk);
HXLINE( 204)			if (!(this->maxClientsReached())) {
HXLINE( 205)				 ::Dynamic _hx_tmp = this->getThreadCreate(cl);
HXDLIN( 205)				 ::Dynamic _hx_tmp1 = this->getThreadListen(cl);
HXDLIN( 205)				 ::networking::wrappers::ThreadWrapper_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,this->getThreadDisconnect(cl));
            			}
            			else {
HXLINE( 208)				 ::Dynamic message =  ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("message",c7,35,11,9a),HX_("Server is full.",e6,13,ca,48))
            					->setFixed(1,HX_("verb",9f,34,4c,4e),HX_("_core.errors.server_full",b8,ab,b3,3f)));
HXLINE( 209)				cl->send(message);
HXLINE( 210)				this->_session->triggerEvent(HX_("NETWORK_EVENT_SERVER_FULL",95,a9,3f,1e), ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("message",c7,35,11,9a),message)
            					->setFixed(1,HX_("client",4b,ca,4f,0a),cl)));
            			}
            		}
HXLINE( 214)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,threadLoop,return )

void Server_obj::cleanup(){
            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_218_cleanup)
HXLINE( 219)		if (::hx::IsNull( this->clients )) {
HXLINE( 219)			return;
            		}
HXLINE( 221)		{
HXLINE( 221)			int _g = 0;
HXDLIN( 221)			::Array< ::Dynamic> _g1 = this->clients;
HXDLIN( 221)			while((_g < _g1->length)){
HXLINE( 221)				 ::networking::sessions::items::ClientObject cl = _g1->__get(_g).StaticCast<  ::networking::sessions::items::ClientObject >();
HXDLIN( 221)				_g = (_g + 1);
HXLINE( 222)				this->disconnectClient(cl,false);
            			}
            		}
HXLINE( 225)		this->info->destroySocket();
HXLINE( 226)		this->clients = ::Array_obj< ::Dynamic>::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,cleanup,(void))

bool Server_obj::maxClientsReached(){
            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_231_maxClientsReached)
HXDLIN( 231)		return (this->clients->length >= this->max_connections);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,maxClientsReached,return )

 ::Dynamic Server_obj::getThreadCreate( ::networking::sessions::items::ClientObject cl){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::networking::sessions::server::Server,_gthis, ::networking::sessions::items::ClientObject,cl) HXARGC(0)
            		bool _hx_run(){
            			HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_236_getThreadCreate)
HXLINE( 237)			_gthis->clients->push(cl);
HXLINE( 238)			cl->load();
HXLINE( 239)			_gthis->_session->triggerEvent(HX_("NETWORK_EVENT_CONNECTED",f3,a1,8c,f2), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("client",4b,ca,4f,0a),cl)
            				->setFixed(1,HX_("server",c3,4a,37,6e),_gthis)));
HXLINE( 240)			return true;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_235_getThreadCreate)
HXDLIN( 235)		 ::networking::sessions::server::Server _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 236)		return  ::Dynamic(new _hx_Closure_0(_gthis,cl));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Server_obj,getThreadCreate,return )

 ::Dynamic Server_obj::getThreadListen( ::networking::sessions::items::ClientObject cl){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::networking::sessions::items::ClientObject,cl) HXARGC(0)
            		bool _hx_run(){
            			HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_246_getThreadListen)
HXLINE( 247)			if (!(cl->get_active())) {
HXLINE( 247)				return false;
            			}
HXLINE( 248)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 249)				cl->read();
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 251)					{
HXLINE( 251)						null();
            					}
HXLINE( 252)					return false;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 255)			return true;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_246_getThreadListen)
HXDLIN( 246)		return  ::Dynamic(new _hx_Closure_0(cl));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Server_obj,getThreadListen,return )

 ::Dynamic Server_obj::getThreadDisconnect( ::networking::sessions::items::ClientObject cl){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::networking::sessions::server::Server,_gthis, ::networking::sessions::items::ClientObject,cl) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_261_getThreadDisconnect)
HXLINE( 261)			_gthis->disconnectClient(cl,null());
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_259_getThreadDisconnect)
HXDLIN( 259)		 ::networking::sessions::server::Server _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 260)		return  ::Dynamic(new _hx_Closure_0(_gthis,cl));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Server_obj,getThreadDisconnect,return )

::String Server_obj::DEFAULT_IP;

 ::Dynamic Server_obj::DEFAULT_PORT;

int Server_obj::DEFAULT_MAX_CONNECTIONS;

::String Server_obj::DEFAULT_UUID;

 ::Dynamic Server_obj::FLASH_POLICY_FILE_PORT;

int Server_obj::MAX_LISTEN_INCOMING_REQUESTS;


::hx::ObjectPtr< Server_obj > Server_obj::__new( ::networking::sessions::Session session,::String uuid,::String __o_ip, ::Dynamic __o_port, ::Dynamic __o_max_connections, ::Dynamic flash_policy_file_port) {
	::hx::ObjectPtr< Server_obj > __this = new Server_obj();
	__this->__construct(session,uuid,__o_ip,__o_port,__o_max_connections,flash_policy_file_port);
	return __this;
}

::hx::ObjectPtr< Server_obj > Server_obj::__alloc(::hx::Ctx *_hx_ctx, ::networking::sessions::Session session,::String uuid,::String __o_ip, ::Dynamic __o_port, ::Dynamic __o_max_connections, ::Dynamic flash_policy_file_port) {
	Server_obj *__this = (Server_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Server_obj), true, "networking.sessions.server.Server"));
	*(void **)__this = Server_obj::_hx_vtable;
	__this->__construct(session,uuid,__o_ip,__o_port,__o_max_connections,flash_policy_file_port);
	return __this;
}

Server_obj::Server_obj()
{
}

void Server_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Server);
	HX_MARK_MEMBER_NAME(clients,"clients");
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_MEMBER_NAME(ip,"ip");
	HX_MARK_MEMBER_NAME(port,"port");
	HX_MARK_MEMBER_NAME(max_connections,"max_connections");
	HX_MARK_MEMBER_NAME(flash_policy_file_port,"flash_policy_file_port");
	HX_MARK_MEMBER_NAME(_session,"_session");
	HX_MARK_MEMBER_NAME(_mutex,"_mutex");
	HX_MARK_MEMBER_NAME(_uuid,"_uuid");
	HX_MARK_MEMBER_NAME(_thread,"_thread");
	HX_MARK_MEMBER_NAME(_policy_server,"_policy_server");
	HX_MARK_END_CLASS();
}

void Server_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(clients,"clients");
	HX_VISIT_MEMBER_NAME(info,"info");
	HX_VISIT_MEMBER_NAME(ip,"ip");
	HX_VISIT_MEMBER_NAME(port,"port");
	HX_VISIT_MEMBER_NAME(max_connections,"max_connections");
	HX_VISIT_MEMBER_NAME(flash_policy_file_port,"flash_policy_file_port");
	HX_VISIT_MEMBER_NAME(_session,"_session");
	HX_VISIT_MEMBER_NAME(_mutex,"_mutex");
	HX_VISIT_MEMBER_NAME(_uuid,"_uuid");
	HX_VISIT_MEMBER_NAME(_thread,"_thread");
	HX_VISIT_MEMBER_NAME(_policy_server,"_policy_server");
}

::hx::Val Server_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ip") ) { return ::hx::Val( ip ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return ::hx::Val( info ); }
		if (HX_FIELD_EQ(inName,"port") ) { return ::hx::Val( port ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		if (HX_FIELD_EQ(inName,"send") ) { return ::hx::Val( send_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_uuid") ) { return ::hx::Val( _uuid ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_mutex") ) { return ::hx::Val( _mutex ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"clients") ) { return ::hx::Val( clients ); }
		if (HX_FIELD_EQ(inName,"_thread") ) { return ::hx::Val( _thread ); }
		if (HX_FIELD_EQ(inName,"session") ) { return ::hx::Val( session_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return ::hx::Val( cleanup_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_session") ) { return ::hx::Val( _session ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"broadcast") ) { return ::hx::Val( broadcast_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"threadLoop") ) { return ::hx::Val( threadLoop_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_policy_server") ) { return ::hx::Val( _policy_server ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"max_connections") ) { return ::hx::Val( max_connections ); }
		if (HX_FIELD_EQ(inName,"getThreadCreate") ) { return ::hx::Val( getThreadCreate_dyn() ); }
		if (HX_FIELD_EQ(inName,"getThreadListen") ) { return ::hx::Val( getThreadListen_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"disconnectClient") ) { return ::hx::Val( disconnectClient_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"maxClientsReached") ) { return ::hx::Val( maxClientsReached_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getThreadDisconnect") ) { return ::hx::Val( getThreadDisconnect_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"flash_policy_file_port") ) { return ::hx::Val( flash_policy_file_port ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Server_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ip") ) { ip=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast<  ::networking::sessions::items::ServerObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"port") ) { port=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_uuid") ) { _uuid=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_mutex") ) { _mutex=inValue.Cast<  ::networking::wrappers::MutexWrapper >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"clients") ) { clients=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_thread") ) { _thread=inValue.Cast<  ::networking::wrappers::ThreadWrapper >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_session") ) { _session=inValue.Cast<  ::networking::sessions::Session >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_policy_server") ) { _policy_server=inValue.Cast<  ::networking::sessions::server::FlashPolicyServer >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"max_connections") ) { max_connections=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"flash_policy_file_port") ) { flash_policy_file_port=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Server_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("clients",c8,37,81,fb));
	outFields->push(HX_("info",6e,38,bb,45));
	outFields->push(HX_("ip",e7,5b,00,00));
	outFields->push(HX_("port",81,83,5c,4a));
	outFields->push(HX_("max_connections",3a,99,4d,c6));
	outFields->push(HX_("flash_policy_file_port",46,9c,08,e7));
	outFields->push(HX_("_session",d7,70,50,cd));
	outFields->push(HX_("_mutex",c0,d6,42,0c));
	outFields->push(HX_("_uuid",1a,36,c0,00));
	outFields->push(HX_("_thread",69,8c,30,fd));
	outFields->push(HX_("_policy_server",f1,b2,cb,f9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Server_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Server_obj,clients),HX_("clients",c8,37,81,fb)},
	{::hx::fsObject /*  ::networking::sessions::items::ServerObject */ ,(int)offsetof(Server_obj,info),HX_("info",6e,38,bb,45)},
	{::hx::fsString,(int)offsetof(Server_obj,ip),HX_("ip",e7,5b,00,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Server_obj,port),HX_("port",81,83,5c,4a)},
	{::hx::fsInt,(int)offsetof(Server_obj,max_connections),HX_("max_connections",3a,99,4d,c6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Server_obj,flash_policy_file_port),HX_("flash_policy_file_port",46,9c,08,e7)},
	{::hx::fsObject /*  ::networking::sessions::Session */ ,(int)offsetof(Server_obj,_session),HX_("_session",d7,70,50,cd)},
	{::hx::fsObject /*  ::networking::wrappers::MutexWrapper */ ,(int)offsetof(Server_obj,_mutex),HX_("_mutex",c0,d6,42,0c)},
	{::hx::fsString,(int)offsetof(Server_obj,_uuid),HX_("_uuid",1a,36,c0,00)},
	{::hx::fsObject /*  ::networking::wrappers::ThreadWrapper */ ,(int)offsetof(Server_obj,_thread),HX_("_thread",69,8c,30,fd)},
	{::hx::fsObject /*  ::networking::sessions::server::FlashPolicyServer */ ,(int)offsetof(Server_obj,_policy_server),HX_("_policy_server",f1,b2,cb,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Server_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Server_obj::DEFAULT_IP,HX_("DEFAULT_IP",05,84,2f,18)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Server_obj::DEFAULT_PORT,HX_("DEFAULT_PORT",1f,53,bc,2a)},
	{::hx::fsInt,(void *) &Server_obj::DEFAULT_MAX_CONNECTIONS,HX_("DEFAULT_MAX_CONNECTIONS",1c,92,41,00)},
	{::hx::fsString,(void *) &Server_obj::DEFAULT_UUID,HX_("DEFAULT_UUID",d9,e9,0e,2e)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Server_obj::FLASH_POLICY_FILE_PORT,HX_("FLASH_POLICY_FILE_PORT",66,34,5a,ee)},
	{::hx::fsInt,(void *) &Server_obj::MAX_LISTEN_INCOMING_REQUESTS,HX_("MAX_LISTEN_INCOMING_REQUESTS",20,ad,54,e9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Server_obj_sMemberFields[] = {
	HX_("clients",c8,37,81,fb),
	HX_("info",6e,38,bb,45),
	HX_("ip",e7,5b,00,00),
	HX_("port",81,83,5c,4a),
	HX_("max_connections",3a,99,4d,c6),
	HX_("flash_policy_file_port",46,9c,08,e7),
	HX_("_session",d7,70,50,cd),
	HX_("_mutex",c0,d6,42,0c),
	HX_("_uuid",1a,36,c0,00),
	HX_("_thread",69,8c,30,fd),
	HX_("_policy_server",f1,b2,cb,f9),
	HX_("broadcast",01,a3,19,df),
	HX_("disconnectClient",c7,4f,42,47),
	HX_("stop",02,f0,5b,4c),
	HX_("send",48,8d,50,4c),
	HX_("session",56,17,98,93),
	HX_("threadLoop",4e,7a,80,43),
	HX_("cleanup",24,0c,42,ab),
	HX_("maxClientsReached",6e,69,6e,f7),
	HX_("getThreadCreate",1c,df,8e,bd),
	HX_("getThreadListen",67,40,79,31),
	HX_("getThreadDisconnect",7c,6c,b2,58),
	::String(null()) };

static void Server_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Server_obj::DEFAULT_IP,"DEFAULT_IP");
	HX_MARK_MEMBER_NAME(Server_obj::DEFAULT_PORT,"DEFAULT_PORT");
	HX_MARK_MEMBER_NAME(Server_obj::DEFAULT_MAX_CONNECTIONS,"DEFAULT_MAX_CONNECTIONS");
	HX_MARK_MEMBER_NAME(Server_obj::DEFAULT_UUID,"DEFAULT_UUID");
	HX_MARK_MEMBER_NAME(Server_obj::FLASH_POLICY_FILE_PORT,"FLASH_POLICY_FILE_PORT");
	HX_MARK_MEMBER_NAME(Server_obj::MAX_LISTEN_INCOMING_REQUESTS,"MAX_LISTEN_INCOMING_REQUESTS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Server_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Server_obj::DEFAULT_IP,"DEFAULT_IP");
	HX_VISIT_MEMBER_NAME(Server_obj::DEFAULT_PORT,"DEFAULT_PORT");
	HX_VISIT_MEMBER_NAME(Server_obj::DEFAULT_MAX_CONNECTIONS,"DEFAULT_MAX_CONNECTIONS");
	HX_VISIT_MEMBER_NAME(Server_obj::DEFAULT_UUID,"DEFAULT_UUID");
	HX_VISIT_MEMBER_NAME(Server_obj::FLASH_POLICY_FILE_PORT,"FLASH_POLICY_FILE_PORT");
	HX_VISIT_MEMBER_NAME(Server_obj::MAX_LISTEN_INCOMING_REQUESTS,"MAX_LISTEN_INCOMING_REQUESTS");
};

#endif

::hx::Class Server_obj::__mClass;

static ::String Server_obj_sStaticFields[] = {
	HX_("DEFAULT_IP",05,84,2f,18),
	HX_("DEFAULT_PORT",1f,53,bc,2a),
	HX_("DEFAULT_MAX_CONNECTIONS",1c,92,41,00),
	HX_("DEFAULT_UUID",d9,e9,0e,2e),
	HX_("FLASH_POLICY_FILE_PORT",66,34,5a,ee),
	HX_("MAX_LISTEN_INCOMING_REQUESTS",20,ad,54,e9),
	::String(null())
};

void Server_obj::__register()
{
	Server_obj _hx_dummy;
	Server_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.sessions.server.Server",97,19,89,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Server_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Server_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Server_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Server_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Server_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Server_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Server_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Server_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_29_boot)
HXDLIN(  29)		DEFAULT_IP = HX_("127.0.0.1",fd,bc,5e,a1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_32_boot)
HXDLIN(  32)		DEFAULT_PORT = 9696;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_35_boot)
HXDLIN(  35)		DEFAULT_MAX_CONNECTIONS = 24;
            	}
{
            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_38_boot)
HXDLIN(  38)		DEFAULT_UUID = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_41_boot)
HXDLIN(  41)		FLASH_POLICY_FILE_PORT = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_fa6f3625a3c52273_44_boot)
HXDLIN(  44)		MAX_LISTEN_INCOMING_REQUESTS = 200;
            	}
}

} // end namespace networking
} // end namespace sessions
} // end namespace server
