#ifndef INCLUDED_networking_utils_NetworkMode
#define INCLUDED_networking_utils_NetworkMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(networking,utils,NetworkMode)
namespace networking{
namespace utils{


class NetworkMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef NetworkMode_obj OBJ_;

	public:
		NetworkMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("networking.utils.NetworkMode",5a,cf,b6,ed); }
		::String __ToString() const { return HX_("NetworkMode.",fd,63,2d,c9) + _hx_tag; }

		static ::networking::utils::NetworkMode CLIENT;
		static inline ::networking::utils::NetworkMode CLIENT_dyn() { return CLIENT; }
		static ::networking::utils::NetworkMode SERVER;
		static inline ::networking::utils::NetworkMode SERVER_dyn() { return SERVER; }
};

} // end namespace networking
} // end namespace utils

#endif /* INCLUDED_networking_utils_NetworkMode */ 
