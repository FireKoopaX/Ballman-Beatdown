#ifndef INCLUDED_networking_utils_NetworkEvent
#define INCLUDED_networking_utils_NetworkEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(networking,sessions,Session)
HX_DECLARE_CLASS3(networking,sessions,items,ClientObject)
HX_DECLARE_CLASS2(networking,utils,NetworkEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace networking{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES NetworkEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef NetworkEvent_obj OBJ_;
		NetworkEvent_obj();

	public:
		enum { _hx_ClassId = 0x3ecdfe69 };

		void __construct(::String label, ::networking::sessions::Session session, ::Dynamic netData,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="networking.utils.NetworkEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"networking.utils.NetworkEvent"); }
		static ::hx::ObjectPtr< NetworkEvent_obj > __new(::String label, ::networking::sessions::Session session, ::Dynamic netData,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static ::hx::ObjectPtr< NetworkEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String label, ::networking::sessions::Session session, ::Dynamic netData,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NetworkEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NetworkEvent",ac,08,9a,32); }

		static void __boot();
		static ::String MESSAGE_SENT;
		static ::String MESSAGE_RECEIVED;
		static ::String MESSAGE_SENT_FAILED;
		static ::String MESSAGE_BROADCAST;
		static ::String MESSAGE_BROADCAST_FAILED;
		static ::String INIT_SUCCESS;
		static ::String INIT_FAILURE;
		static ::String CLOSED;
		static ::String CONNECTED;
		static ::String DISCONNECTED;
		static ::String SERVER_FULL;
		static ::String SECURITY_ERROR;
		 ::Dynamic netData;
		 ::networking::sessions::Session session;
		 ::Dynamic data;
		 ::Dynamic metadata;
		 ::networking::sessions::items::ClientObject client;
		::String verb;
		 ::Dynamic sender;
		 ::Dynamic get_data();
		::Dynamic get_data_dyn();

		 ::Dynamic get_metadata();
		::Dynamic get_metadata_dyn();

		 ::networking::sessions::items::ClientObject get_client();
		::Dynamic get_client_dyn();

		::String get_verb();
		::Dynamic get_verb_dyn();

		 ::Dynamic get_sender();
		::Dynamic get_sender_dyn();

};

} // end namespace networking
} // end namespace utils

#endif /* INCLUDED_networking_utils_NetworkEvent */ 
