#ifndef INCLUDED_networking_wrappers_DequeWrapper
#define INCLUDED_networking_wrappers_DequeWrapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(networking,wrappers,DequeWrapper)
HX_DECLARE_CLASS2(sys,thread,Deque)

namespace networking{
namespace wrappers{


class HXCPP_CLASS_ATTRIBUTES DequeWrapper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DequeWrapper_obj OBJ_;
		DequeWrapper_obj();

	public:
		enum { _hx_ClassId = 0x3a416c8b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="networking.wrappers.DequeWrapper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"networking.wrappers.DequeWrapper"); }
		static ::hx::ObjectPtr< DequeWrapper_obj > __new();
		static ::hx::ObjectPtr< DequeWrapper_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DequeWrapper_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DequeWrapper",33,59,6a,03); }

		 ::sys::thread::Deque _deque;
		void add( ::Dynamic x);
		::Dynamic add_dyn();

		 ::Dynamic pop();
		::Dynamic pop_dyn();

};

} // end namespace networking
} // end namespace wrappers

#endif /* INCLUDED_networking_wrappers_DequeWrapper */ 
