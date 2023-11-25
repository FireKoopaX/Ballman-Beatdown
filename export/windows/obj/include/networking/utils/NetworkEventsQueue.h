#ifndef INCLUDED_networking_utils_NetworkEventsQueue
#define INCLUDED_networking_utils_NetworkEventsQueue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(networking,sessions,Session)
HX_DECLARE_CLASS2(networking,utils,NetworkEvent)
HX_DECLARE_CLASS2(networking,utils,NetworkEventsQueue)
HX_DECLARE_CLASS2(networking,wrappers,DequeWrapper_networking_utils_NetworkEvent)
HX_DECLARE_CLASS2(networking,wrappers,MutexWrapper)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace networking{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES NetworkEventsQueue_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NetworkEventsQueue_obj OBJ_;
		NetworkEventsQueue_obj();

	public:
		enum { _hx_ClassId = 0x1cd0af47 };

		void __construct( ::networking::sessions::Session session);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="networking.utils.NetworkEventsQueue")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"networking.utils.NetworkEventsQueue"); }
		static ::hx::ObjectPtr< NetworkEventsQueue_obj > __new( ::networking::sessions::Session session);
		static ::hx::ObjectPtr< NetworkEventsQueue_obj > __alloc(::hx::Ctx *_hx_ctx, ::networking::sessions::Session session);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NetworkEventsQueue_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NetworkEventsQueue",ca,4d,5e,aa); }

		 ::networking::wrappers::DequeWrapper_networking_utils_NetworkEvent _queue;
		 ::networking::wrappers::MutexWrapper _mutex;
		int _queue_size;
		 ::networking::sessions::Session _session;
		void dispatchEvent(::String label, ::Dynamic data);
		::Dynamic dispatchEvent_dyn();

		void handleQueuedEvents();
		::Dynamic handleQueuedEvents_dyn();

		int length();
		::Dynamic length_dyn();

		 ::networking::utils::NetworkEvent popEvent();
		::Dynamic popEvent_dyn();

		void addEvent( ::networking::utils::NetworkEvent event);
		::Dynamic addEvent_dyn();

		void incrementCounterBy(int value);
		::Dynamic incrementCounterBy_dyn();

};

} // end namespace networking
} // end namespace utils

#endif /* INCLUDED_networking_utils_NetworkEventsQueue */ 
