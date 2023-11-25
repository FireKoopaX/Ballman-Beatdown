#ifndef INCLUDED_networking_utils_NetworkLogger
#define INCLUDED_networking_utils_NetworkLogger

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_6a4b3a9cdbde7f2a_31_new)
HX_DECLARE_CLASS2(networking,utils,NetworkEvent)
HX_DECLARE_CLASS2(networking,utils,NetworkLogger)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace networking{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES NetworkLogger_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NetworkLogger_obj OBJ_;
		NetworkLogger_obj();

	public:
		enum { _hx_ClassId = 0x7b6f2561 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="networking.utils.NetworkLogger")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"networking.utils.NetworkLogger"); }

		inline static ::hx::ObjectPtr< NetworkLogger_obj > __new() {
			::hx::ObjectPtr< NetworkLogger_obj > __this = new NetworkLogger_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NetworkLogger_obj > __alloc(::hx::Ctx *_hx_ctx) {
			NetworkLogger_obj *__this = (NetworkLogger_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NetworkLogger_obj), false, "networking.utils.NetworkLogger"));
			*(void **)__this = NetworkLogger_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_6a4b3a9cdbde7f2a_31_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NetworkLogger_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NetworkLogger",be,15,2c,da); }

		static void error( ::Dynamic exception);
		static ::Dynamic error_dyn();

		static void event( ::networking::utils::NetworkEvent event);
		static ::Dynamic event_dyn();

		static void log(::String msg,::String level);
		static ::Dynamic log_dyn();

};

} // end namespace networking
} // end namespace utils

#endif /* INCLUDED_networking_utils_NetworkLogger */ 
