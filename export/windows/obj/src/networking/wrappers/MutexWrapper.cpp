#include <hxcpp.h>

#ifndef INCLUDED_networking_wrappers_MutexWrapper
#include <networking/wrappers/MutexWrapper.h>
#endif
#ifndef INCLUDED_sys_thread_Mutex
#include <sys/thread/Mutex.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_83b417470a195632_26_new,"networking.wrappers.MutexWrapper","new",0x4a500b1a,"networking.wrappers.MutexWrapper.new","networking/wrappers/MutexWrapper.hx",26,0x8156b9b6)
HX_LOCAL_STACK_FRAME(_hx_pos_83b417470a195632_35_acquire,"networking.wrappers.MutexWrapper","acquire",0x030d6b90,"networking.wrappers.MutexWrapper.acquire","networking/wrappers/MutexWrapper.hx",35,0x8156b9b6)
HX_LOCAL_STACK_FRAME(_hx_pos_83b417470a195632_46_release,"networking.wrappers.MutexWrapper","release",0xa716a581,"networking.wrappers.MutexWrapper.release","networking/wrappers/MutexWrapper.hx",46,0x8156b9b6)
namespace networking{
namespace wrappers{

void MutexWrapper_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_83b417470a195632_26_new)
HXDLIN(  26)		this->_mutex =  ::sys::thread::Mutex_obj::__alloc( HX_CTX );
            	}

Dynamic MutexWrapper_obj::__CreateEmpty() { return new MutexWrapper_obj; }

void *MutexWrapper_obj::_hx_vtable = 0;

Dynamic MutexWrapper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MutexWrapper_obj > _hx_result = new MutexWrapper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MutexWrapper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24d05d70;
}

void MutexWrapper_obj::acquire(){
            	HX_STACKFRAME(&_hx_pos_83b417470a195632_35_acquire)
HXDLIN(  35)		this->_mutex->acquire();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MutexWrapper_obj,acquire,(void))

void MutexWrapper_obj::release(){
            	HX_STACKFRAME(&_hx_pos_83b417470a195632_46_release)
HXDLIN(  46)		this->_mutex->release();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MutexWrapper_obj,release,(void))


::hx::ObjectPtr< MutexWrapper_obj > MutexWrapper_obj::__new() {
	::hx::ObjectPtr< MutexWrapper_obj > __this = new MutexWrapper_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MutexWrapper_obj > MutexWrapper_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MutexWrapper_obj *__this = (MutexWrapper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MutexWrapper_obj), true, "networking.wrappers.MutexWrapper"));
	*(void **)__this = MutexWrapper_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MutexWrapper_obj::MutexWrapper_obj()
{
}

void MutexWrapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MutexWrapper);
	HX_MARK_MEMBER_NAME(_mutex,"_mutex");
	HX_MARK_END_CLASS();
}

void MutexWrapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_mutex,"_mutex");
}

::hx::Val MutexWrapper_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_mutex") ) { return ::hx::Val( _mutex ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"acquire") ) { return ::hx::Val( acquire_dyn() ); }
		if (HX_FIELD_EQ(inName,"release") ) { return ::hx::Val( release_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MutexWrapper_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_mutex") ) { _mutex=inValue.Cast<  ::sys::thread::Mutex >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MutexWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_mutex",c0,d6,42,0c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MutexWrapper_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::sys::thread::Mutex */ ,(int)offsetof(MutexWrapper_obj,_mutex),HX_("_mutex",c0,d6,42,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MutexWrapper_obj_sStaticStorageInfo = 0;
#endif

static ::String MutexWrapper_obj_sMemberFields[] = {
	HX_("_mutex",c0,d6,42,0c),
	HX_("acquire",d6,4b,e4,b4),
	HX_("release",c7,85,ed,58),
	::String(null()) };

::hx::Class MutexWrapper_obj::__mClass;

void MutexWrapper_obj::__register()
{
	MutexWrapper_obj _hx_dummy;
	MutexWrapper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.wrappers.MutexWrapper",28,36,3a,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MutexWrapper_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MutexWrapper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MutexWrapper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MutexWrapper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace networking
} // end namespace wrappers
