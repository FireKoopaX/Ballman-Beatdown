#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_networking_utils_Utils
#include <networking/utils/Utils.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2401d5b9da738adc_9_new,"networking.utils.Utils","new",0xe57c478c,"networking.utils.Utils.new","networking/utils/Utils.hx",9,0x8b64f626)
HX_LOCAL_STACK_FRAME(_hx_pos_2401d5b9da738adc_17_guid,"networking.utils.Utils","guid",0xe2adecdd,"networking.utils.Utils.guid","networking/utils/Utils.hx",17,0x8b64f626)
HX_LOCAL_STACK_FRAME(_hx_pos_2401d5b9da738adc_21_s4,"networking.utils.Utils","s4",0x2377f6b5,"networking.utils.Utils.s4","networking/utils/Utils.hx",21,0x8b64f626)
namespace networking{
namespace utils{

void Utils_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2401d5b9da738adc_9_new)
            	}

Dynamic Utils_obj::__CreateEmpty() { return new Utils_obj; }

void *Utils_obj::_hx_vtable = 0;

Dynamic Utils_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Utils_obj > _hx_result = new Utils_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Utils_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25454eb4;
}

::String Utils_obj::guid(){
            	HX_STACKFRAME(&_hx_pos_2401d5b9da738adc_17_guid)
HXDLIN(  17)		::String _hx_tmp = ::networking::utils::Utils_obj::s4();
HXDLIN(  17)		::String _hx_tmp1 = ((_hx_tmp + ::networking::utils::Utils_obj::s4()) + HX_("-",2d,00,00,00));
HXDLIN(  17)		::String _hx_tmp2 = ((_hx_tmp1 + ::networking::utils::Utils_obj::s4()) + HX_("-",2d,00,00,00));
HXDLIN(  17)		::String _hx_tmp3 = ((_hx_tmp2 + ::networking::utils::Utils_obj::s4()) + HX_("-",2d,00,00,00));
HXDLIN(  17)		::String _hx_tmp4 = ((_hx_tmp3 + ::networking::utils::Utils_obj::s4()) + HX_("-",2d,00,00,00));
HXDLIN(  17)		::String _hx_tmp5 = (_hx_tmp4 + ::networking::utils::Utils_obj::s4());
HXDLIN(  17)		::String _hx_tmp6 = (_hx_tmp5 + ::networking::utils::Utils_obj::s4());
HXDLIN(  17)		return (_hx_tmp6 + ::networking::utils::Utils_obj::s4());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,guid,return )

::String Utils_obj::s4(){
            	HX_STACKFRAME(&_hx_pos_2401d5b9da738adc_21_s4)
HXDLIN(  21)		return ::StringTools_obj::hex(::Math_obj::floor(((1 + ::Math_obj::random()) * ( (Float)(65536) ))),null()).substr(1,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Utils_obj,s4,return )


Utils_obj::Utils_obj()
{
}

bool Utils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"s4") ) { outValue = s4_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { outValue = guid_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Utils_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Utils_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Utils_obj::__mClass;

static ::String Utils_obj_sStaticFields[] = {
	HX_("guid",89,1d,6e,44),
	HX_("s4",61,64,00,00),
	::String(null())
};

void Utils_obj::__register()
{
	Utils_obj _hx_dummy;
	Utils_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.utils.Utils",9a,d1,ce,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utils_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Utils_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Utils_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Utils_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Utils_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace networking
} // end namespace utils
