#ifndef INCLUDED_networking_wrappers_MutexWrapper
#define INCLUDED_networking_wrappers_MutexWrapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(networking,wrappers,MutexWrapper)
HX_DECLARE_CLASS2(sys,thread,Mutex)

namespace networking{
namespace wrappers{


class HXCPP_CLASS_ATTRIBUTES MutexWrapper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MutexWrapper_obj OBJ_;
		MutexWrapper_obj();

	public:
		enum { _hx_ClassId = 0x24d05d70 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="networking.wrappers.MutexWrapper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"networking.wrappers.MutexWrapper"); }
		static ::hx::ObjectPtr< MutexWrapper_obj > __new();
		static ::hx::ObjectPtr< MutexWrapper_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MutexWrapper_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MutexWrapper",b4,37,93,b1); }

		 ::sys::thread::Mutex _mutex;
		void acquire();
		::Dynamic acquire_dyn();

		void release();
		::Dynamic release_dyn();

};

} // end namespace networking
} // end namespace wrappers

#endif /* INCLUDED_networking_wrappers_MutexWrapper */ 
