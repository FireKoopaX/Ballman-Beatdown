#ifndef INCLUDED_networking_wrappers_DequeWrapper_networking_utils_NetworkEvent
#define INCLUDED_networking_wrappers_DequeWrapper_networking_utils_NetworkEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(networking,utils,NetworkEvent)
HX_DECLARE_CLASS2(networking,wrappers,DequeWrapper_networking_utils_NetworkEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(sys,thread,Deque)

namespace networking{
namespace wrappers{


class HXCPP_CLASS_ATTRIBUTES DequeWrapper_networking_utils_NetworkEvent_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DequeWrapper_networking_utils_NetworkEvent_obj OBJ_;
		DequeWrapper_networking_utils_NetworkEvent_obj();

	public:
		enum { _hx_ClassId = 0x781e1c71 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="networking.wrappers.DequeWrapper_networking_utils_NetworkEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"networking.wrappers.DequeWrapper_networking_utils_NetworkEvent"); }
		static ::hx::ObjectPtr< DequeWrapper_networking_utils_NetworkEvent_obj > __new();
		static ::hx::ObjectPtr< DequeWrapper_networking_utils_NetworkEvent_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DequeWrapper_networking_utils_NetworkEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DequeWrapper_networking_utils_NetworkEvent",19,af,d2,e4); }

		 ::sys::thread::Deque _deque;
		void add( ::networking::utils::NetworkEvent x);
		::Dynamic add_dyn();

		 ::networking::utils::NetworkEvent pop();
		::Dynamic pop_dyn();

};

} // end namespace networking
} // end namespace wrappers

#endif /* INCLUDED_networking_wrappers_DequeWrapper_networking_utils_NetworkEvent */ 
