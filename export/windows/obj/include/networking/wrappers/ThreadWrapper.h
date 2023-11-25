#ifndef INCLUDED_networking_wrappers_ThreadWrapper
#define INCLUDED_networking_wrappers_ThreadWrapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(networking,wrappers,MutexWrapper)
HX_DECLARE_CLASS2(networking,wrappers,ThreadWrapper)

namespace networking{
namespace wrappers{


class HXCPP_CLASS_ATTRIBUTES ThreadWrapper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ThreadWrapper_obj OBJ_;
		ThreadWrapper_obj();

	public:
		enum { _hx_ClassId = 0x21adf415 };

		void __construct( ::Dynamic on_start, ::Dynamic on_loop, ::Dynamic on_stop);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="networking.wrappers.ThreadWrapper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"networking.wrappers.ThreadWrapper"); }
		static ::hx::ObjectPtr< ThreadWrapper_obj > __new( ::Dynamic on_start, ::Dynamic on_loop, ::Dynamic on_stop);
		static ::hx::ObjectPtr< ThreadWrapper_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic on_start, ::Dynamic on_loop, ::Dynamic on_stop);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ThreadWrapper_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ThreadWrapper",89,1f,3e,f9); }

		bool _active;
		 ::networking::wrappers::MutexWrapper _mutex;
		 ::Dynamic _on_start;
		Dynamic _on_start_dyn() { return _on_start;}
		 ::Dynamic _on_loop;
		Dynamic _on_loop_dyn() { return _on_loop;}
		 ::Dynamic _on_stop;
		Dynamic _on_stop_dyn() { return _on_stop;}
		void stop();
		::Dynamic stop_dyn();

		void handler();
		::Dynamic handler_dyn();

		void handlerLogic();
		::Dynamic handlerLogic_dyn();

};

} // end namespace networking
} // end namespace wrappers

#endif /* INCLUDED_networking_wrappers_ThreadWrapper */ 
