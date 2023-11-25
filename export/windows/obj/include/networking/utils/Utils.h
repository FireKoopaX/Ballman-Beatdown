#ifndef INCLUDED_networking_utils_Utils
#define INCLUDED_networking_utils_Utils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_2401d5b9da738adc_9_new)
HX_DECLARE_CLASS2(networking,utils,Utils)

namespace networking{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES Utils_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Utils_obj OBJ_;
		Utils_obj();

	public:
		enum { _hx_ClassId = 0x25454eb4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="networking.utils.Utils")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"networking.utils.Utils"); }

		inline static ::hx::ObjectPtr< Utils_obj > __new() {
			::hx::ObjectPtr< Utils_obj > __this = new Utils_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Utils_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Utils_obj *__this = (Utils_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Utils_obj), false, "networking.utils.Utils"));
			*(void **)__this = Utils_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_2401d5b9da738adc_9_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Utils_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Utils",11,1a,0c,3e); }

		static ::String guid();
		static ::Dynamic guid_dyn();

		static ::String s4();
		static ::Dynamic s4_dyn();

};

} // end namespace networking
} // end namespace utils

#endif /* INCLUDED_networking_utils_Utils */ 
