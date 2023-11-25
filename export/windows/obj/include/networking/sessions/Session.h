#ifndef INCLUDED_networking_sessions_Session
#define INCLUDED_networking_sessions_Session

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(networking,sessions,Session)
HX_DECLARE_CLASS3(networking,sessions,items,ClientObject)
HX_DECLARE_CLASS2(networking,utils,NetworkEvent)
HX_DECLARE_CLASS2(networking,utils,NetworkEventsQueue)
HX_DECLARE_CLASS2(networking,utils,NetworkMode)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace networking{
namespace sessions{


class HXCPP_CLASS_ATTRIBUTES Session_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef Session_obj OBJ_;
		Session_obj();

	public:
		enum { _hx_ClassId = 0x0ab4e685 };

		void __construct( ::networking::utils::NetworkMode mode, ::Dynamic params);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="networking.sessions.Session")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"networking.sessions.Session"); }
		static ::hx::ObjectPtr< Session_obj > __new( ::networking::utils::NetworkMode mode, ::Dynamic params);
		static ::hx::ObjectPtr< Session_obj > __alloc(::hx::Ctx *_hx_ctx, ::networking::utils::NetworkMode mode, ::Dynamic params);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Session_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Session",36,3f,e9,60); }

		 ::networking::utils::NetworkEventsQueue _events_queue;
		 ::networking::utils::NetworkMode mode;
		 ::Dynamic params;
		 ::Dynamic network_item;
		::Array< ::Dynamic> clients;
		::String uuid;
		void send( ::Dynamic obj);
		::Dynamic send_dyn();

		 ::networking::sessions::Session start();
		::Dynamic start_dyn();

		 ::networking::sessions::Session stop();
		::Dynamic stop_dyn();

		void disconnectClient( ::networking::sessions::items::ClientObject cl);
		::Dynamic disconnectClient_dyn();

		void triggerEvent(::String label, ::Dynamic data);
		::Dynamic triggerEvent_dyn();

		void trigger(::String verb, ::Dynamic data);
		::Dynamic trigger_dyn();

		void on(::String verb, ::Dynamic callback);
		::Dynamic on_dyn();

		::Array< ::Dynamic> get_clients();
		::Dynamic get_clients_dyn();

		::String get_uuid();
		::Dynamic get_uuid_dyn();

		void addCoreEventListeners();
		::Dynamic addCoreEventListeners_dyn();

		void debugEvent( ::Dynamic e);
		::Dynamic debugEvent_dyn();

		void handleCoreQueuedEvents( ::openfl::events::Event e);
		::Dynamic handleCoreQueuedEvents_dyn();

		void handleCoreReceivedMessage( ::networking::utils::NetworkEvent event);
		::Dynamic handleCoreReceivedMessage_dyn();

		void eventMatched( ::networking::utils::NetworkEvent event);
		::Dynamic eventMatched_dyn();

};

} // end namespace networking
} // end namespace sessions

#endif /* INCLUDED_networking_sessions_Session */ 
