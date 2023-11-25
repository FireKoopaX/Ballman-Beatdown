#include <hxcpp.h>

#ifndef INCLUDED_networking_utils_NetworkMode
#include <networking/utils/NetworkMode.h>
#endif
namespace networking{
namespace utils{

::networking::utils::NetworkMode NetworkMode_obj::CLIENT;

::networking::utils::NetworkMode NetworkMode_obj::SERVER;

bool NetworkMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CLIENT",4b,76,d2,bc)) { outValue = NetworkMode_obj::CLIENT; return true; }
	if (inName==HX_("SERVER",c3,f6,b9,20)) { outValue = NetworkMode_obj::SERVER; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(NetworkMode_obj)

int NetworkMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CLIENT",4b,76,d2,bc)) return 1;
	if (inName==HX_("SERVER",c3,f6,b9,20)) return 0;
	return super::__FindIndex(inName);
}

int NetworkMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CLIENT",4b,76,d2,bc)) return 0;
	if (inName==HX_("SERVER",c3,f6,b9,20)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val NetworkMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CLIENT",4b,76,d2,bc)) return CLIENT;
	if (inName==HX_("SERVER",c3,f6,b9,20)) return SERVER;
	return super::__Field(inName,inCallProp);
}

static ::String NetworkMode_obj_sStaticFields[] = {
	HX_("SERVER",c3,f6,b9,20),
	HX_("CLIENT",4b,76,d2,bc),
	::String(null())
};

::hx::Class NetworkMode_obj::__mClass;

Dynamic __Create_NetworkMode_obj() { return new NetworkMode_obj; }

void NetworkMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("networking.utils.NetworkMode",5a,cf,b6,ed), ::hx::TCanCast< NetworkMode_obj >,NetworkMode_obj_sStaticFields,0,
	&__Create_NetworkMode_obj, &__Create,
	&super::__SGetClass(), &CreateNetworkMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &NetworkMode_obj::__GetStatic;
}

void NetworkMode_obj::__boot()
{
CLIENT = ::hx::CreateConstEnum< NetworkMode_obj >(HX_("CLIENT",4b,76,d2,bc),1);
SERVER = ::hx::CreateConstEnum< NetworkMode_obj >(HX_("SERVER",c3,f6,b9,20),0);
}


} // end namespace networking
} // end namespace utils
