#ifndef INCLUDED_networking_sessions_client_Client
#define INCLUDED_networking_sessions_client_Client

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(networking,sessions,Session)
HX_DECLARE_CLASS3(networking,sessions,client,Client)
HX_DECLARE_CLASS3(networking,sessions,items,ClientObject)
HX_DECLARE_CLASS2(networking,wrappers,MutexWrapper)
HX_DECLARE_CLASS2(networking,wrappers,ThreadWrapper)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace networking{
namespace sessions{
namespace client{


class HXCPP_CLASS_ATTRIBUTES Client_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Client_obj OBJ_;
		Client_obj();

	public:
		enum { _hx_ClassId = 0x3f5fe5cf };

		void __construct( ::networking::sessions::Session session,::String uuid,::String __o_ip, ::Dynamic __o_port,::String flash_policy_file_url);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="networking.sessions.client.Client")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"networking.sessions.client.Client"); }
		static ::hx::ObjectPtr< Client_obj > __new( ::networking::sessions::Session session,::String uuid,::String __o_ip, ::Dynamic __o_port,::String flash_policy_file_url);
		static ::hx::ObjectPtr< Client_obj > __alloc(::hx::Ctx *_hx_ctx, ::networking::sessions::Session session,::String uuid,::String __o_ip, ::Dynamic __o_port,::String flash_policy_file_url);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Client_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Client",6b,3e,e4,3e); }

		static void __boot();
		static ::String DEFAULT_IP;
		static  ::Dynamic DEFAULT_PORT;
		static ::String DEFAULT_UUID;
		static ::String DEFAULT_FLASH_POLICY_FILE_URL;
		 ::networking::sessions::items::ClientObject info;
		::String ip;
		 ::Dynamic port;
		::String flash_policy_file_url;
		 ::networking::sessions::Session _session;
		 ::networking::wrappers::MutexWrapper _mutex;
		::String _uuid;
		 ::networking::wrappers::ThreadWrapper _thread;
		::String _disconnected_message;
		void send( ::Dynamic obj);
		::Dynamic send_dyn();

		void stop();
		::Dynamic stop_dyn();

		bool threadCreate();
		::Dynamic threadCreate_dyn();

		bool threadListen();
		::Dynamic threadListen_dyn();

		void threadClose();
		::Dynamic threadClose_dyn();

		void disconnect();
		::Dynamic disconnect_dyn();

};

} // end namespace networking
} // end namespace sessions
} // end namespace client

#endif /* INCLUDED_networking_sessions_client_Client */ 
