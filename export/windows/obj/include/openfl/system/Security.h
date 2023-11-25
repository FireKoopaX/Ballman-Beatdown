#ifndef INCLUDED_openfl_system_Security
#define INCLUDED_openfl_system_Security

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_hx_system,Security)

namespace openfl{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES Security_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Security_obj OBJ_;
		Security_obj();

	public:
		enum { _hx_ClassId = 0x533dae5f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.system.Security")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.system.Security"); }

		inline static ::hx::ObjectPtr< Security_obj > __new() {
			::hx::ObjectPtr< Security_obj > __this = new Security_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Security_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Security_obj *__this = (Security_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Security_obj), false, "openfl.system.Security"));
			*(void **)__this = Security_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Security_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Security",e0,d6,33,32); }

		static void __boot();
		static ::String LOCAL_TRUSTED;
		static ::String LOCAL_WITH_FILE;
		static ::String LOCAL_WITH_NETWORK;
		static ::String REMOTE;
		static bool disableAVM1Loading;
		static bool exactSettings;
		static ::String sandboxType;
		static void allowDomain( ::Dynamic p1, ::Dynamic p2, ::Dynamic p3, ::Dynamic p4, ::Dynamic p5);
		static ::Dynamic allowDomain_dyn();

		static void allowInsecureDomain( ::Dynamic p1, ::Dynamic p2, ::Dynamic p3, ::Dynamic p4, ::Dynamic p5);
		static ::Dynamic allowInsecureDomain_dyn();

		static void loadPolicyFile(::String url);
		static ::Dynamic loadPolicyFile_dyn();

};

} // end namespace openfl
} // end namespace system

#endif /* INCLUDED_openfl_system_Security */ 
