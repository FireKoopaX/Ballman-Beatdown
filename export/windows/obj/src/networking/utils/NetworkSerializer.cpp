#include <hxcpp.h>

#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_networking_utils_NetworkSerializer
#include <networking/utils/NetworkSerializer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c196f18c0503cb78_12_new,"networking.utils.NetworkSerializer","new",0x4c0e4f3b,"networking.utils.NetworkSerializer.new","networking/utils/NetworkSerializer.hx",12,0xe9c8d457)
HX_LOCAL_STACK_FRAME(_hx_pos_c196f18c0503cb78_20_serialize,"networking.utils.NetworkSerializer","serialize",0xeb7bf2fb,"networking.utils.NetworkSerializer.serialize","networking/utils/NetworkSerializer.hx",20,0xe9c8d457)
HX_LOCAL_STACK_FRAME(_hx_pos_c196f18c0503cb78_32_unserialize,"networking.utils.NetworkSerializer","unserialize",0x56863642,"networking.utils.NetworkSerializer.unserialize","networking/utils/NetworkSerializer.hx",32,0xe9c8d457)
namespace networking{
namespace utils{

void NetworkSerializer_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c196f18c0503cb78_12_new)
            	}

Dynamic NetworkSerializer_obj::__CreateEmpty() { return new NetworkSerializer_obj; }

void *NetworkSerializer_obj::_hx_vtable = 0;

Dynamic NetworkSerializer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NetworkSerializer_obj > _hx_result = new NetworkSerializer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NetworkSerializer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x112451e3;
}

::String NetworkSerializer_obj::serialize( ::Dynamic obj){
            	HX_GC_STACKFRAME(&_hx_pos_c196f18c0503cb78_20_serialize)
HXLINE(  21)		 ::haxe::Serializer handler =  ::haxe::Serializer_obj::__alloc( HX_CTX );
HXLINE(  22)		handler->serialize(obj);
HXLINE(  23)		return handler->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NetworkSerializer_obj,serialize,return )

 ::Dynamic NetworkSerializer_obj::unserialize(::String obj){
            	HX_GC_STACKFRAME(&_hx_pos_c196f18c0503cb78_32_unserialize)
HXLINE(  33)		 ::haxe::Unserializer handler =  ::haxe::Unserializer_obj::__alloc( HX_CTX ,obj);
HXLINE(  34)		return handler->unserialize();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NetworkSerializer_obj,unserialize,return )


NetworkSerializer_obj::NetworkSerializer_obj()
{
}

bool NetworkSerializer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"serialize") ) { outValue = serialize_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"unserialize") ) { outValue = unserialize_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *NetworkSerializer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *NetworkSerializer_obj_sStaticStorageInfo = 0;
#endif

::hx::Class NetworkSerializer_obj::__mClass;

static ::String NetworkSerializer_obj_sStaticFields[] = {
	HX_("serialize",e0,5d,f2,f4),
	HX_("unserialize",67,e4,98,7a),
	::String(null())
};

void NetworkSerializer_obj::__register()
{
	NetworkSerializer_obj _hx_dummy;
	NetworkSerializer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.utils.NetworkSerializer",c9,95,d9,dc);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NetworkSerializer_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NetworkSerializer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< NetworkSerializer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NetworkSerializer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NetworkSerializer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace networking
} // end namespace utils
