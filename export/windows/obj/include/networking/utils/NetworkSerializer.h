#ifndef INCLUDED_networking_utils_NetworkSerializer
#define INCLUDED_networking_utils_NetworkSerializer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c196f18c0503cb78_12_new)
HX_DECLARE_CLASS2(networking,utils,NetworkSerializer)

namespace networking{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES NetworkSerializer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NetworkSerializer_obj OBJ_;
		NetworkSerializer_obj();

	public:
		enum { _hx_ClassId = 0x112451e3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="networking.utils.NetworkSerializer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"networking.utils.NetworkSerializer"); }

		inline static ::hx::ObjectPtr< NetworkSerializer_obj > __new() {
			::hx::ObjectPtr< NetworkSerializer_obj > __this = new NetworkSerializer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NetworkSerializer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NetworkSerializer_obj *__this = (NetworkSerializer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NetworkSerializer_obj), false, "networking.utils.NetworkSerializer"));
			*(void **)__this = NetworkSerializer_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c196f18c0503cb78_12_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NetworkSerializer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NetworkSerializer",c0,34,5d,35); }

		static ::String serialize( ::Dynamic obj);
		static ::Dynamic serialize_dyn();

		static  ::Dynamic unserialize(::String obj);
		static ::Dynamic unserialize_dyn();

};

} // end namespace networking
} // end namespace utils

#endif /* INCLUDED_networking_utils_NetworkSerializer */ 
