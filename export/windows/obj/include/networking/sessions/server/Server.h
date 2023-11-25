#ifndef INCLUDED_networking_sessions_server_Server
#define INCLUDED_networking_sessions_server_Server

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(networking,sessions,Session)
HX_DECLARE_CLASS3(networking,sessions,items,ClientObject)
HX_DECLARE_CLASS3(networking,sessions,items,ServerObject)
HX_DECLARE_CLASS3(networking,sessions,server,FlashPolicyServer)
HX_DECLARE_CLASS3(networking,sessions,server,Server)
HX_DECLARE_CLASS2(networking,wrappers,MutexWrapper)
HX_DECLARE_CLASS2(networking,wrappers,ThreadWrapper)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace networking{
namespace sessions{
namespace server{


class HXCPP_CLASS_ATTRIBUTES Server_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Server_obj OBJ_;
		Server_obj();

	public:
		enum { _hx_ClassId = 0x5bd81ebf };

		void __construct( ::networking::sessions::Session session,::String uuid,::String __o_ip, ::Dynamic __o_port, ::Dynamic __o_max_connections, ::Dynamic flash_policy_file_port);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="networking.sessions.server.Server")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"networking.sessions.server.Server"); }
		static ::hx::ObjectPtr< Server_obj > __new( ::networking::sessions::Session session,::String uuid,::String __o_ip, ::Dynamic __o_port, ::Dynamic __o_max_connections, ::Dynamic flash_policy_file_port);
		static ::hx::ObjectPtr< Server_obj > __alloc(::hx::Ctx *_hx_ctx, ::networking::sessions::Session session,::String uuid,::String __o_ip, ::Dynamic __o_port, ::Dynamic __o_max_connections, ::Dynamic flash_policy_file_port);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Server_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Server",e3,be,cb,a2); }

		static void __boot();
		static ::String DEFAULT_IP;
		static  ::Dynamic DEFAULT_PORT;
		static int DEFAULT_MAX_CONNECTIONS;
		static ::String DEFAULT_UUID;
		static  ::Dynamic FLASH_POLICY_FILE_PORT;
		static int MAX_LISTEN_INCOMING_REQUESTS;
		::Array< ::Dynamic> clients;
		 ::networking::sessions::items::ServerObject info;
		::String ip;
		 ::Dynamic port;
		int max_connections;
		 ::Dynamic flash_policy_file_port;
		 ::networking::sessions::Session _session;
		 ::networking::wrappers::MutexWrapper _mutex;
		::String _uuid;
		 ::networking::wrappers::ThreadWrapper _thread;
		 ::networking::sessions::server::FlashPolicyServer _policy_server;
		void broadcast( ::Dynamic obj);
		::Dynamic broadcast_dyn();

		bool disconnectClient( ::networking::sessions::items::ClientObject cl,::hx::Null< bool >  dispatch);
		::Dynamic disconnectClient_dyn();

		void stop();
		::Dynamic stop_dyn();

		void send( ::Dynamic obj);
		::Dynamic send_dyn();

		 ::networking::sessions::Session session();
		::Dynamic session_dyn();

		bool threadLoop();
		::Dynamic threadLoop_dyn();

		void cleanup();
		::Dynamic cleanup_dyn();

		bool maxClientsReached();
		::Dynamic maxClientsReached_dyn();

		 ::Dynamic getThreadCreate( ::networking::sessions::items::ClientObject cl);
		::Dynamic getThreadCreate_dyn();

		 ::Dynamic getThreadListen( ::networking::sessions::items::ClientObject cl);
		::Dynamic getThreadListen_dyn();

		 ::Dynamic getThreadDisconnect( ::networking::sessions::items::ClientObject cl);
		::Dynamic getThreadDisconnect_dyn();

};

} // end namespace networking
} // end namespace sessions
} // end namespace server

#endif /* INCLUDED_networking_sessions_server_Server */ 
