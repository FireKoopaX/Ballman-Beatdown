#include <hxcpp.h>

#ifndef INCLUDED_openfl_system_Security
#include <openfl/system/Security.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_41a22e0363c7e289_323_allowDomain,"openfl.system.Security","allowDomain",0x33a54620,"openfl.system.Security.allowDomain","openfl/system/Security.hx",323,0xcc67a7dd)
HX_LOCAL_STACK_FRAME(_hx_pos_41a22e0363c7e289_477_allowInsecureDomain,"openfl.system.Security","allowInsecureDomain",0xdc7fa95c,"openfl.system.Security.allowInsecureDomain","openfl/system/Security.hx",477,0xcc67a7dd)
HX_LOCAL_STACK_FRAME(_hx_pos_41a22e0363c7e289_576_loadPolicyFile,"openfl.system.Security","loadPolicyFile",0xc7c3bbc1,"openfl.system.Security.loadPolicyFile","openfl/system/Security.hx",576,0xcc67a7dd)
HX_LOCAL_STACK_FRAME(_hx_pos_41a22e0363c7e289_30_boot,"openfl.system.Security","boot",0x7b30a45f,"openfl.system.Security.boot","openfl/system/Security.hx",30,0xcc67a7dd)
HX_LOCAL_STACK_FRAME(_hx_pos_41a22e0363c7e289_40_boot,"openfl.system.Security","boot",0x7b30a45f,"openfl.system.Security.boot","openfl/system/Security.hx",40,0xcc67a7dd)
HX_LOCAL_STACK_FRAME(_hx_pos_41a22e0363c7e289_48_boot,"openfl.system.Security","boot",0x7b30a45f,"openfl.system.Security.boot","openfl/system/Security.hx",48,0xcc67a7dd)
HX_LOCAL_STACK_FRAME(_hx_pos_41a22e0363c7e289_54_boot,"openfl.system.Security","boot",0x7b30a45f,"openfl.system.Security.boot","openfl/system/Security.hx",54,0xcc67a7dd)
namespace openfl{
namespace _hx_system{

void Security_obj::__construct() { }

Dynamic Security_obj::__CreateEmpty() { return new Security_obj; }

void *Security_obj::_hx_vtable = 0;

Dynamic Security_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Security_obj > _hx_result = new Security_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Security_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x533dae5f;
}

::String Security_obj::LOCAL_TRUSTED;

::String Security_obj::LOCAL_WITH_FILE;

::String Security_obj::LOCAL_WITH_NETWORK;

::String Security_obj::REMOTE;

bool Security_obj::disableAVM1Loading;

bool Security_obj::exactSettings;

::String Security_obj::sandboxType;

void Security_obj::allowDomain( ::Dynamic p1, ::Dynamic p2, ::Dynamic p3, ::Dynamic p4, ::Dynamic p5){
            	HX_STACKFRAME(&_hx_pos_41a22e0363c7e289_323_allowDomain)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Security_obj,allowDomain,(void))

void Security_obj::allowInsecureDomain( ::Dynamic p1, ::Dynamic p2, ::Dynamic p3, ::Dynamic p4, ::Dynamic p5){
            	HX_STACKFRAME(&_hx_pos_41a22e0363c7e289_477_allowInsecureDomain)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Security_obj,allowInsecureDomain,(void))

void Security_obj::loadPolicyFile(::String url){
            	HX_STACKFRAME(&_hx_pos_41a22e0363c7e289_576_loadPolicyFile)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Security_obj,loadPolicyFile,(void))


Security_obj::Security_obj()
{
}

bool Security_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"sandboxType") ) { outValue = ( sandboxType ); return true; }
		if (HX_FIELD_EQ(inName,"allowDomain") ) { outValue = allowDomain_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"exactSettings") ) { outValue = ( exactSettings ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"loadPolicyFile") ) { outValue = loadPolicyFile_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"disableAVM1Loading") ) { outValue = ( disableAVM1Loading ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"allowInsecureDomain") ) { outValue = allowInsecureDomain_dyn(); return true; }
	}
	return false;
}

bool Security_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"sandboxType") ) { sandboxType=ioValue.Cast< ::String >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"exactSettings") ) { exactSettings=ioValue.Cast< bool >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"disableAVM1Loading") ) { disableAVM1Loading=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Security_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Security_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Security_obj::LOCAL_TRUSTED,HX_("LOCAL_TRUSTED",a3,a9,34,fc)},
	{::hx::fsString,(void *) &Security_obj::LOCAL_WITH_FILE,HX_("LOCAL_WITH_FILE",61,07,8e,2e)},
	{::hx::fsString,(void *) &Security_obj::LOCAL_WITH_NETWORK,HX_("LOCAL_WITH_NETWORK",c9,04,63,19)},
	{::hx::fsString,(void *) &Security_obj::REMOTE,HX_("REMOTE",86,46,0b,b7)},
	{::hx::fsBool,(void *) &Security_obj::disableAVM1Loading,HX_("disableAVM1Loading",1b,73,1f,44)},
	{::hx::fsBool,(void *) &Security_obj::exactSettings,HX_("exactSettings",c2,b2,12,82)},
	{::hx::fsString,(void *) &Security_obj::sandboxType,HX_("sandboxType",a1,8a,5d,58)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Security_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Security_obj::LOCAL_TRUSTED,"LOCAL_TRUSTED");
	HX_MARK_MEMBER_NAME(Security_obj::LOCAL_WITH_FILE,"LOCAL_WITH_FILE");
	HX_MARK_MEMBER_NAME(Security_obj::LOCAL_WITH_NETWORK,"LOCAL_WITH_NETWORK");
	HX_MARK_MEMBER_NAME(Security_obj::REMOTE,"REMOTE");
	HX_MARK_MEMBER_NAME(Security_obj::disableAVM1Loading,"disableAVM1Loading");
	HX_MARK_MEMBER_NAME(Security_obj::exactSettings,"exactSettings");
	HX_MARK_MEMBER_NAME(Security_obj::sandboxType,"sandboxType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Security_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Security_obj::LOCAL_TRUSTED,"LOCAL_TRUSTED");
	HX_VISIT_MEMBER_NAME(Security_obj::LOCAL_WITH_FILE,"LOCAL_WITH_FILE");
	HX_VISIT_MEMBER_NAME(Security_obj::LOCAL_WITH_NETWORK,"LOCAL_WITH_NETWORK");
	HX_VISIT_MEMBER_NAME(Security_obj::REMOTE,"REMOTE");
	HX_VISIT_MEMBER_NAME(Security_obj::disableAVM1Loading,"disableAVM1Loading");
	HX_VISIT_MEMBER_NAME(Security_obj::exactSettings,"exactSettings");
	HX_VISIT_MEMBER_NAME(Security_obj::sandboxType,"sandboxType");
};

#endif

::hx::Class Security_obj::__mClass;

static ::String Security_obj_sStaticFields[] = {
	HX_("LOCAL_TRUSTED",a3,a9,34,fc),
	HX_("LOCAL_WITH_FILE",61,07,8e,2e),
	HX_("LOCAL_WITH_NETWORK",c9,04,63,19),
	HX_("REMOTE",86,46,0b,b7),
	HX_("disableAVM1Loading",1b,73,1f,44),
	HX_("exactSettings",c2,b2,12,82),
	HX_("sandboxType",a1,8a,5d,58),
	HX_("allowDomain",ad,56,f8,74),
	HX_("allowInsecureDomain",e9,8e,59,6e),
	HX_("loadPolicyFile",54,c1,ed,cc),
	::String(null())
};

void Security_obj::__register()
{
	Security_obj _hx_dummy;
	Security_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.system.Security",61,2f,cd,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Security_obj::__GetStatic;
	__mClass->mSetStaticField = &Security_obj::__SetStatic;
	__mClass->mMarkFunc = Security_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Security_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Security_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Security_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Security_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Security_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Security_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_41a22e0363c7e289_30_boot)
HXDLIN(  30)		LOCAL_TRUSTED = HX_("localTrusted",cc,e9,b7,ec);
            	}
{
            	HX_STACKFRAME(&_hx_pos_41a22e0363c7e289_40_boot)
HXDLIN(  40)		LOCAL_WITH_FILE = HX_("localWithFile",2d,54,62,8f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_41a22e0363c7e289_48_boot)
HXDLIN(  48)		LOCAL_WITH_NETWORK = HX_("localWithNetwork",9d,23,36,b8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_41a22e0363c7e289_54_boot)
HXDLIN(  54)		REMOTE = HX_("remote",86,9a,88,04);
            	}
}

} // end namespace openfl
} // end namespace system
