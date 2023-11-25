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
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
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
#ifndef INCLUDED_networking_utils_NetworkEvent
#include <networking/utils/NetworkEvent.h>
#endif
#ifndef INCLUDED_networking_utils_NetworkEventsQueue
#include <networking/utils/NetworkEventsQueue.h>
#endif
#ifndef INCLUDED_networking_utils_NetworkMode
#include <networking/utils/NetworkMode.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_90b31971c2e1a969_23_new,"networking.sessions.Session","new",0xa73ab751,"networking.sessions.Session.new","networking/sessions/Session.hx",23,0x63fe6d1f)
HX_LOCAL_STACK_FRAME(_hx_pos_90b31971c2e1a969_75_send,"networking.sessions.Session","send",0xaf73b937,"networking.sessions.Session.send","networking/sessions/Session.hx",75,0x63fe6d1f)
HX_LOCAL_STACK_FRAME(_hx_pos_90b31971c2e1a969_87_start,"networking.sessions.Session","start",0xdfaeb993,"networking.sessions.Session.start","networking/sessions/Session.hx",87,0x63fe6d1f)
HX_LOCAL_STACK_FRAME(_hx_pos_90b31971c2e1a969_105_stop,"networking.sessions.Session","stop",0xaf7f1bf1,"networking.sessions.Session.stop","networking/sessions/Session.hx",105,0x63fe6d1f)
HX_LOCAL_STACK_FRAME(_hx_pos_90b31971c2e1a969_121_disconnectClient,"networking.sessions.Session","disconnectClient",0xc6af2636,"networking.sessions.Session.disconnectClient","networking/sessions/Session.hx",121,0x63fe6d1f)
HX_LOCAL_STACK_FRAME(_hx_pos_90b31971c2e1a969_140_triggerEvent,"networking.sessions.Session","triggerEvent",0x2e822ab1,"networking.sessions.Session.triggerEvent","networking/sessions/Session.hx",140,0x63fe6d1f)
HX_LOCAL_STACK_FRAME(_hx_pos_90b31971c2e1a969_156_trigger,"networking.sessions.Session","trigger",0x24c308a9,"networking.sessions.Session.trigger","networking/sessions/Session.hx",156,0x63fe6d1f)
HX_LOCAL_STACK_FRAME(_hx_pos_90b31971c2e1a969_176_on,"networking.sessions.Session","on",0x7cbb634e,"networking.sessions.Session.on","networking/sessions/Session.hx",176,0x63fe6d1f)
HX_LOCAL_STACK_FRAME(_hx_pos_90b31971c2e1a969_175_on,"networking.sessions.Session","on",0x7cbb634e,"networking.sessions.Session.on","networking/sessions/Session.hx",175,0x63fe6d1f)
HX_LOCAL_STACK_FRAME(_hx_pos_90b31971c2e1a969_186_get_clients,"networking.sessions.Session","get_clients",0xf7fc57d0,"networking.sessions.Session.get_clients","networking/sessions/Session.hx",186,0x63fe6d1f)
HX_LOCAL_STACK_FRAME(_hx_pos_90b31971c2e1a969_191_get_uuid,"networking.sessions.Session","get_uuid",0xd5c32533,"networking.sessions.Session.get_uuid","networking/sessions/Session.hx",191,0x63fe6d1f)
HX_LOCAL_STACK_FRAME(_hx_pos_90b31971c2e1a969_197_addCoreEventListeners,"networking.sessions.Session","addCoreEventListeners",0x5d87ad76,"networking.sessions.Session.addCoreEventListeners","networking/sessions/Session.hx",197,0x63fe6d1f)
HX_LOCAL_STACK_FRAME(_hx_pos_90b31971c2e1a969_221_debugEvent,"networking.sessions.Session","debugEvent",0x4187e1f6,"networking.sessions.Session.debugEvent","networking/sessions/Session.hx",221,0x63fe6d1f)
HX_LOCAL_STACK_FRAME(_hx_pos_90b31971c2e1a969_226_handleCoreQueuedEvents,"networking.sessions.Session","handleCoreQueuedEvents",0x4c01fca2,"networking.sessions.Session.handleCoreQueuedEvents","networking/sessions/Session.hx",226,0x63fe6d1f)
HX_LOCAL_STACK_FRAME(_hx_pos_90b31971c2e1a969_230_handleCoreReceivedMessage,"networking.sessions.Session","handleCoreReceivedMessage",0xf927dcf0,"networking.sessions.Session.handleCoreReceivedMessage","networking/sessions/Session.hx",230,0x63fe6d1f)
HX_LOCAL_STACK_FRAME(_hx_pos_90b31971c2e1a969_255_eventMatched,"networking.sessions.Session","eventMatched",0x53f866d9,"networking.sessions.Session.eventMatched","networking/sessions/Session.hx",255,0x63fe6d1f)
namespace networking{
namespace sessions{

void Session_obj::__construct( ::networking::utils::NetworkMode mode, ::Dynamic params){
            	HX_GC_STACKFRAME(&_hx_pos_90b31971c2e1a969_23_new)
HXLINE(  64)		this->uuid = null();
HXLINE(  59)		this->clients = null();
HXLINE(  54)		this->network_item = null();
HXLINE(  49)		this->params = null();
HXLINE(  44)		this->mode = null();
HXLINE(  33)		super::__construct(null());
HXLINE(  34)		this->_events_queue =  ::networking::utils::NetworkEventsQueue_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE(  35)		this->mode = mode;
HXLINE(  36)		this->params = params;
HXLINE(  38)		this->addCoreEventListeners();
            	}

Dynamic Session_obj::__CreateEmpty() { return new Session_obj; }

void *Session_obj::_hx_vtable = 0;

Dynamic Session_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Session_obj > _hx_result = new Session_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Session_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0ab4e685) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0ab4e685;
	} else {
		return inClassId==(int)0x0c89e854;
	}
}

void Session_obj::send( ::Dynamic obj){
            	HX_STACKFRAME(&_hx_pos_90b31971c2e1a969_75_send)
HXLINE(  76)		if (::hx::IsNull( this->network_item )) {
HXLINE(  76)			return;
            		}
HXLINE(  77)		if (::hx::IsNull( obj )) {
HXLINE(  77)			obj =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE(  79)		this->network_item->__Field(HX_("send",48,8d,50,4c),::hx::paccDynamic)(obj);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Session_obj,send,(void))

 ::networking::sessions::Session Session_obj::start(){
            	HX_GC_STACKFRAME(&_hx_pos_90b31971c2e1a969_87_start)
HXLINE(  88)		this->stop();
HXLINE(  90)		 ::Dynamic _hx_tmp;
HXDLIN(  90)		if (::hx::IsNotNull( this->params )) {
HXLINE(  90)			_hx_tmp = this->params;
            		}
            		else {
HXLINE(  90)			_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXDLIN(  90)		this->params = _hx_tmp;
HXLINE(  92)		switch((int)(this->mode->_hx_getIndex())){
            			case (int)0: {
HXLINE(  93)				 ::Dynamic _hx_tmp =  ::Dynamic(this->params->__Field(HX_("uuid",3b,1a,af,4d),::hx::paccDynamic));
HXDLIN(  93)				 ::Dynamic _hx_tmp1 =  ::Dynamic(this->params->__Field(HX_("ip",e7,5b,00,00),::hx::paccDynamic));
HXDLIN(  93)				 ::Dynamic _hx_tmp2 = ::Std_obj::parseInt(( (::String)(this->params->__Field(HX_("port",81,83,5c,4a),::hx::paccDynamic)) ));
HXDLIN(  93)				this->network_item =  ::networking::sessions::server::Server_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),( (::String)(_hx_tmp) ),( (::String)(_hx_tmp1) ),_hx_tmp2,this->params->__Field(HX_("max_connections",3a,99,4d,c6),::hx::paccDynamic),this->params->__Field(HX_("flash_policy_file_port",46,9c,08,e7),::hx::paccDynamic));
            			}
            			break;
            			case (int)1: {
HXLINE(  94)				 ::Dynamic _hx_tmp =  ::Dynamic(this->params->__Field(HX_("uuid",3b,1a,af,4d),::hx::paccDynamic));
HXDLIN(  94)				 ::Dynamic _hx_tmp1 =  ::Dynamic(this->params->__Field(HX_("ip",e7,5b,00,00),::hx::paccDynamic));
HXDLIN(  94)				 ::Dynamic _hx_tmp2 = ::Std_obj::parseInt(( (::String)(this->params->__Field(HX_("port",81,83,5c,4a),::hx::paccDynamic)) ));
HXDLIN(  94)				this->network_item =  ::networking::sessions::client::Client_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),( (::String)(_hx_tmp) ),( (::String)(_hx_tmp1) ),_hx_tmp2,( (::String)(this->params->__Field(HX_("flash_policy_file_url",4a,12,d7,b1),::hx::paccDynamic)) ));
            			}
            			break;
            		}
HXLINE(  97)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Session_obj,start,return )

 ::networking::sessions::Session Session_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_90b31971c2e1a969_105_stop)
HXLINE( 106)		bool _hx_tmp;
HXDLIN( 106)		if (::hx::IsNotNull( this->mode )) {
HXLINE( 106)			_hx_tmp = ::hx::IsNull( this->network_item );
            		}
            		else {
HXLINE( 106)			_hx_tmp = true;
            		}
HXDLIN( 106)		if (_hx_tmp) {
HXLINE( 106)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 108)		this->network_item->__Field(HX_("stop",02,f0,5b,4c),::hx::paccDynamic)();
HXLINE( 109)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Session_obj,stop,return )

void Session_obj::disconnectClient( ::networking::sessions::items::ClientObject cl){
            	HX_STACKFRAME(&_hx_pos_90b31971c2e1a969_121_disconnectClient)
HXDLIN( 121)		switch((int)(this->mode->_hx_getIndex())){
            			case (int)0: {
HXLINE( 123)				bool _hx_tmp;
HXDLIN( 123)				if (::hx::IsNotNull( this->network_item )) {
HXLINE( 123)					_hx_tmp = ::hx::IsNull( cl );
            				}
            				else {
HXLINE( 123)					_hx_tmp = true;
            				}
HXDLIN( 123)				if (_hx_tmp) {
HXLINE( 123)					return;
            				}
HXLINE( 124)				::hx::TCast<  ::networking::sessions::server::Server >::cast(this->network_item)->disconnectClient(cl,null());
            			}
            			break;
            			case (int)1: {
HXLINE( 127)				if (::hx::IsNull( this->network_item )) {
HXLINE( 127)					return;
            				}
HXLINE( 128)				this->stop();
            			}
            			break;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Session_obj,disconnectClient,(void))

void Session_obj::triggerEvent(::String label, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_90b31971c2e1a969_140_triggerEvent)
HXDLIN( 140)		this->_events_queue->dispatchEvent(label,data);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Session_obj,triggerEvent,(void))

void Session_obj::trigger(::String verb, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_90b31971c2e1a969_156_trigger)
HXLINE( 157)		if (::hx::IsNull( data )) {
HXLINE( 157)			data =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXLINE( 158)		this->send( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("content",39,8d,77,19),data)
            			->setFixed(1,HX_("verb",9f,34,4c,4e),verb)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Session_obj,trigger,(void))

void Session_obj::on(::String verb, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,verb, ::Dynamic,callback) HXARGC(1)
            		void _hx_run( ::networking::utils::NetworkEvent event){
            			HX_STACKFRAME(&_hx_pos_90b31971c2e1a969_176_on)
HXLINE( 176)			::String _hx_tmp = event->get_verb();
HXDLIN( 176)			if ((_hx_tmp == verb)) {
HXLINE( 176)				 ::Dynamic callback1 = callback;
HXDLIN( 176)				callback1( ::Dynamic(event->get_data()->__Field(HX_("content",39,8d,77,19),::hx::paccDynamic)),event);
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_STACKFRAME(&_hx_pos_90b31971c2e1a969_175_on)
HXDLIN( 175)		this->addEventListener(HX_("NETWORK_EVENT_MESSAGE_RECEIVED",ef,63,8e,0b), ::Dynamic(new _hx_Closure_0(verb,callback)),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(Session_obj,on,(void))

::Array< ::Dynamic> Session_obj::get_clients(){
            	HX_STACKFRAME(&_hx_pos_90b31971c2e1a969_186_get_clients)
HXLINE( 187)		bool _hx_tmp;
HXDLIN( 187)		if (::hx::IsNotNull( this->network_item )) {
HXLINE( 187)			_hx_tmp = ::hx::IsPointerNotEq( this->mode,::networking::utils::NetworkMode_obj::SERVER_dyn() );
            		}
            		else {
HXLINE( 187)			_hx_tmp = true;
            		}
HXDLIN( 187)		if (_hx_tmp) {
HXLINE( 187)			return ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 188)		return ( (::Array< ::Dynamic>)(this->network_item->__Field(HX_("clients",c8,37,81,fb),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Session_obj,get_clients,return )

::String Session_obj::get_uuid(){
            	HX_STACKFRAME(&_hx_pos_90b31971c2e1a969_191_get_uuid)
HXLINE( 192)		bool _hx_tmp;
HXDLIN( 192)		if (::hx::IsNotNull( this->network_item )) {
HXLINE( 192)			_hx_tmp = ::hx::IsNull( this->mode );
            		}
            		else {
HXLINE( 192)			_hx_tmp = true;
            		}
HXDLIN( 192)		if (_hx_tmp) {
HXLINE( 192)			return null();
            		}
HXLINE( 193)		return ( (::String)( ::Dynamic(this->network_item->__Field(HX_("info",6e,38,bb,45),::hx::paccDynamic))->__Field(HX_("uuid",3b,1a,af,4d),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Session_obj,get_uuid,return )

void Session_obj::addCoreEventListeners(){
            	HX_STACKFRAME(&_hx_pos_90b31971c2e1a969_197_addCoreEventListeners)
HXLINE( 199)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("enterFrame",f5,03,50,02),this->handleCoreQueuedEvents_dyn(),null(),null(),null());
HXLINE( 202)		this->addEventListener(HX_("NETWORK_EVENT_CONNECTED",f3,a1,8c,f2),this->debugEvent_dyn(),null(),null(),null());
HXLINE( 203)		this->addEventListener(HX_("NETWORK_EVENT_DISCONNECTED",b1,be,61,c5),this->debugEvent_dyn(),null(),null(),null());
HXLINE( 204)		this->addEventListener(HX_("NETWORK_EVENT_INIT_FAILURE",b1,0b,fc,78),this->debugEvent_dyn(),null(),null(),null());
HXLINE( 205)		this->addEventListener(HX_("NETWORK_EVENT_INIT_SUCCESS",2a,c1,4f,1a),this->debugEvent_dyn(),null(),null(),null());
HXLINE( 206)		this->addEventListener(HX_("NETWORK_EVENT_CLOSED",22,f4,4c,45),this->debugEvent_dyn(),null(),null(),null());
HXLINE( 207)		this->addEventListener(HX_("NETWORK_EVENT_MESSAGE_RECEIVED",ef,63,8e,0b),this->debugEvent_dyn(),null(),null(),null());
HXLINE( 208)		this->addEventListener(HX_("NETWORK_EVENT_MESSAGE_SENT",26,e5,9d,66),this->debugEvent_dyn(),null(),null(),null());
HXLINE( 209)		this->addEventListener(HX_("NETWORK_EVENT_MESSAGE_SENT_FAILED",f6,2e,8e,fd),this->debugEvent_dyn(),null(),null(),null());
HXLINE( 210)		this->addEventListener(HX_("NETWORK_EVENT_SV_MESSAGE_BROADCAST",23,62,3f,7a),this->debugEvent_dyn(),null(),null(),null());
HXLINE( 211)		this->addEventListener(HX_("NETWORK_EVENT_SV_MESSAGE_BROADCAST_FAILED",99,fb,2e,06),this->debugEvent_dyn(),null(),null(),null());
HXLINE( 212)		this->addEventListener(HX_("NETWORK_EVENT_SERVER_FULL",95,a9,3f,1e),this->debugEvent_dyn(),null(),null(),null());
HXLINE( 213)		this->addEventListener(HX_("NETWORK_EVENT_SECURITY_ERROR",1f,8a,c8,c5),this->debugEvent_dyn(),null(),null(),null());
HXLINE( 216)		this->addEventListener(HX_("NETWORK_EVENT_MESSAGE_RECEIVED",ef,63,8e,0b),this->handleCoreReceivedMessage_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Session_obj,addCoreEventListeners,(void))

void Session_obj::debugEvent( ::Dynamic e){
            	HX_STACKFRAME(&_hx_pos_90b31971c2e1a969_221_debugEvent)
HXDLIN( 221)		 ::networking::utils::NetworkEvent event = ( ( ::networking::utils::NetworkEvent)(e) );
HXDLIN( 221)		{
HXDLIN( 221)			::String msg = ((HX_("",00,00,00,00) + event->type) + HX_(" -- ",a0,20,49,15));
HXDLIN( 221)			::String msg1 = (msg + ::Std_obj::string(event->netData));
HXDLIN( 221)			::String level = HX_("EVENT",fa,ff,b2,f3);
HXDLIN( 221)			if (::hx::IsNull( level )) {
HXDLIN( 221)				level = HX_("INFO",6e,00,7c,30);
            			}
HXDLIN( 221)			::haxe::Log_obj::trace((((HX_("# NETWORK ",6f,67,50,2d) + level) + HX_(" -- $ -- ",24,9e,72,56)) + msg1),::hx::SourceInfo(HX_("networking/utils/NetworkLogger.hx",99,c5,fb,66),64,HX_("networking.utils.NetworkLogger",47,fe,2e,80),HX_("log",84,54,52,00)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Session_obj,debugEvent,(void))

void Session_obj::handleCoreQueuedEvents( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_90b31971c2e1a969_226_handleCoreQueuedEvents)
HXDLIN( 226)		this->_events_queue->handleQueuedEvents();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Session_obj,handleCoreQueuedEvents,(void))

void Session_obj::handleCoreReceivedMessage( ::networking::utils::NetworkEvent event){
            	HX_STACKFRAME(&_hx_pos_90b31971c2e1a969_230_handleCoreReceivedMessage)
HXDLIN( 230)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 231)			 ::networking::sessions::items::ClientObject client = event->get_client();
HXLINE( 233)			::String _hx_switch_0 = event->get_verb();
            			if (  (_hx_switch_0==HX_("_core.errors.server_full",b8,ab,b3,3f)) ){
HXLINE( 241)				this->eventMatched(event);
HXLINE( 242)				event->session->triggerEvent(HX_("NETWORK_EVENT_SERVER_FULL",95,a9,3f,1e),event->netData);
HXLINE( 243)				event->session->stop();
HXLINE( 240)				goto _hx_goto_14;
            			}
            			if (  (_hx_switch_0==HX_("_core.sync.update_client_data",6b,2c,b7,5e)) ){
HXLINE( 236)				this->eventMatched(event);
HXLINE( 237)				 ::networking::sessions::items::ClientObject _hx_tmp = event->get_client();
HXDLIN( 237)				_hx_tmp->update(( (::String)(event->get_data()->__Field(HX_("uuid",3b,1a,af,4d),::hx::paccDynamic)) ));
HXLINE( 235)				goto _hx_goto_14;
            			}
            			/* default */{
            			}
            			_hx_goto_14:;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 249)				{
HXLINE( 249)					null();
            				}
HXDLIN( 249)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 250)				{
HXLINE( 250)					::String msg = ( (::String)(e) );
HXDLIN( 250)					{
HXLINE( 250)						::String level = HX_("ERROR",a8,03,18,f1);
HXDLIN( 250)						if (::hx::IsNull( level )) {
HXLINE( 250)							level = HX_("INFO",6e,00,7c,30);
            						}
HXDLIN( 250)						::haxe::Log_obj::trace((((HX_("# NETWORK ",6f,67,50,2d) + level) + HX_(" -- $ -- ",24,9e,72,56)) + msg),::hx::SourceInfo(HX_("networking/utils/NetworkLogger.hx",99,c5,fb,66),64,HX_("networking.utils.NetworkLogger",47,fe,2e,80),HX_("log",84,54,52,00)));
            					}
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Session_obj,handleCoreReceivedMessage,(void))

void Session_obj::eventMatched( ::networking::utils::NetworkEvent event){
            	HX_STACKFRAME(&_hx_pos_90b31971c2e1a969_255_eventMatched)
HXDLIN( 255)		event->stopImmediatePropagation();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Session_obj,eventMatched,(void))


::hx::ObjectPtr< Session_obj > Session_obj::__new( ::networking::utils::NetworkMode mode, ::Dynamic params) {
	::hx::ObjectPtr< Session_obj > __this = new Session_obj();
	__this->__construct(mode,params);
	return __this;
}

::hx::ObjectPtr< Session_obj > Session_obj::__alloc(::hx::Ctx *_hx_ctx, ::networking::utils::NetworkMode mode, ::Dynamic params) {
	Session_obj *__this = (Session_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Session_obj), true, "networking.sessions.Session"));
	*(void **)__this = Session_obj::_hx_vtable;
	__this->__construct(mode,params);
	return __this;
}

Session_obj::Session_obj()
{
}

void Session_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Session);
	HX_MARK_MEMBER_NAME(_events_queue,"_events_queue");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(network_item,"network_item");
	HX_MARK_MEMBER_NAME(clients,"clients");
	HX_MARK_MEMBER_NAME(uuid,"uuid");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Session_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_events_queue,"_events_queue");
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(network_item,"network_item");
	HX_VISIT_MEMBER_NAME(clients,"clients");
	HX_VISIT_MEMBER_NAME(uuid,"uuid");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Session_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return ::hx::Val( on_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return ::hx::Val( mode ); }
		if (HX_FIELD_EQ(inName,"uuid") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_uuid() : uuid ); }
		if (HX_FIELD_EQ(inName,"send") ) { return ::hx::Val( send_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"clients") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_clients() : clients ); }
		if (HX_FIELD_EQ(inName,"trigger") ) { return ::hx::Val( trigger_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_uuid") ) { return ::hx::Val( get_uuid_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debugEvent") ) { return ::hx::Val( debugEvent_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_clients") ) { return ::hx::Val( get_clients_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"network_item") ) { return ::hx::Val( network_item ); }
		if (HX_FIELD_EQ(inName,"triggerEvent") ) { return ::hx::Val( triggerEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"eventMatched") ) { return ::hx::Val( eventMatched_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_events_queue") ) { return ::hx::Val( _events_queue ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"disconnectClient") ) { return ::hx::Val( disconnectClient_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addCoreEventListeners") ) { return ::hx::Val( addCoreEventListeners_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"handleCoreQueuedEvents") ) { return ::hx::Val( handleCoreQueuedEvents_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"handleCoreReceivedMessage") ) { return ::hx::Val( handleCoreReceivedMessage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Session_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast<  ::networking::utils::NetworkMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uuid") ) { uuid=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { params=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"clients") ) { clients=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"network_item") ) { network_item=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_events_queue") ) { _events_queue=inValue.Cast<  ::networking::utils::NetworkEventsQueue >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Session_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_events_queue",8a,8f,68,ad));
	outFields->push(HX_("mode",63,d3,60,48));
	outFields->push(HX_("params",46,fb,7a,ed));
	outFields->push(HX_("network_item",84,65,66,5a));
	outFields->push(HX_("clients",c8,37,81,fb));
	outFields->push(HX_("uuid",3b,1a,af,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Session_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::networking::utils::NetworkEventsQueue */ ,(int)offsetof(Session_obj,_events_queue),HX_("_events_queue",8a,8f,68,ad)},
	{::hx::fsObject /*  ::networking::utils::NetworkMode */ ,(int)offsetof(Session_obj,mode),HX_("mode",63,d3,60,48)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Session_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Session_obj,network_item),HX_("network_item",84,65,66,5a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Session_obj,clients),HX_("clients",c8,37,81,fb)},
	{::hx::fsString,(int)offsetof(Session_obj,uuid),HX_("uuid",3b,1a,af,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Session_obj_sStaticStorageInfo = 0;
#endif

static ::String Session_obj_sMemberFields[] = {
	HX_("_events_queue",8a,8f,68,ad),
	HX_("mode",63,d3,60,48),
	HX_("params",46,fb,7a,ed),
	HX_("network_item",84,65,66,5a),
	HX_("clients",c8,37,81,fb),
	HX_("uuid",3b,1a,af,4d),
	HX_("send",48,8d,50,4c),
	HX_("start",62,74,0b,84),
	HX_("stop",02,f0,5b,4c),
	HX_("disconnectClient",c7,4f,42,47),
	HX_("triggerEvent",c2,f7,5a,f4),
	HX_("trigger",38,55,df,25),
	HX_("on",1f,61,00,00),
	HX_("get_clients",df,97,7b,81),
	HX_("get_uuid",c4,d5,69,cd),
	HX_("addCoreEventListeners",45,36,9f,83),
	HX_("debugEvent",c7,98,a8,74),
	HX_("handleCoreQueuedEvents",f3,28,82,7a),
	HX_("handleCoreReceivedMessage",3f,79,95,25),
	HX_("eventMatched",ea,33,d1,19),
	::String(null()) };

::hx::Class Session_obj::__mClass;

void Session_obj::__register()
{
	Session_obj _hx_dummy;
	Session_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.sessions.Session",df,ba,3e,23);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Session_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Session_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Session_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Session_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace networking
} // end namespace sessions
