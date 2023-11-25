#include <hxcpp.h>

#ifndef INCLUDED_networking_wrappers_MutexWrapper
#include <networking/wrappers/MutexWrapper.h>
#endif
#ifndef INCLUDED_networking_wrappers_ThreadWrapper
#include <networking/wrappers/ThreadWrapper.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_78afa6ba6da73547_46_new,"networking.wrappers.ThreadWrapper","new",0x8080d607,"networking.wrappers.ThreadWrapper.new","networking/wrappers/ThreadWrapper.hx",46,0x208a3f29)
HX_LOCAL_STACK_FRAME(_hx_pos_78afa6ba6da73547_72_stop,"networking.wrappers.ThreadWrapper","stop",0xf393dc7b,"networking.wrappers.ThreadWrapper.stop","networking/wrappers/ThreadWrapper.hx",72,0x208a3f29)
HX_LOCAL_STACK_FRAME(_hx_pos_78afa6ba6da73547_84_handler,"networking.wrappers.ThreadWrapper","handler",0x095414f1,"networking.wrappers.ThreadWrapper.handler","networking/wrappers/ThreadWrapper.hx",84,0x208a3f29)
HX_LOCAL_STACK_FRAME(_hx_pos_78afa6ba6da73547_87_handlerLogic,"networking.wrappers.ThreadWrapper","handlerLogic",0x3186aaad,"networking.wrappers.ThreadWrapper.handlerLogic","networking/wrappers/ThreadWrapper.hx",87,0x208a3f29)
namespace networking{
namespace wrappers{

void ThreadWrapper_obj::__construct( ::Dynamic on_start, ::Dynamic on_loop, ::Dynamic on_stop){
            	HX_GC_STACKFRAME(&_hx_pos_78afa6ba6da73547_46_new)
HXLINE(  47)		this->_on_start = on_start;
HXLINE(  48)		this->_on_loop = on_loop;
HXLINE(  49)		this->_on_stop = on_stop;
HXLINE(  50)		this->_active = true;
HXLINE(  51)		this->_mutex =  ::networking::wrappers::MutexWrapper_obj::__alloc( HX_CTX );
HXLINE(  54)		::sys::thread::_Thread::HaxeThread_obj::create(this->handler_dyn(),false);
            	}

Dynamic ThreadWrapper_obj::__CreateEmpty() { return new ThreadWrapper_obj; }

void *ThreadWrapper_obj::_hx_vtable = 0;

Dynamic ThreadWrapper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ThreadWrapper_obj > _hx_result = new ThreadWrapper_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ThreadWrapper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x21adf415;
}

void ThreadWrapper_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_78afa6ba6da73547_72_stop)
HXLINE(  73)		this->_mutex->acquire();
HXLINE(  74)		this->_active = false;
HXLINE(  75)		this->_mutex->release();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ThreadWrapper_obj,stop,(void))

void ThreadWrapper_obj::handler(){
            	HX_STACKFRAME(&_hx_pos_78afa6ba6da73547_84_handler)
HXDLIN(  84)		this->handlerLogic();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ThreadWrapper_obj,handler,(void))

void ThreadWrapper_obj::handlerLogic(){
            	HX_STACKFRAME(&_hx_pos_78afa6ba6da73547_87_handlerLogic)
HXLINE( 111)		bool success = true;
HXLINE( 112)		if (::hx::IsNotNull( this->_on_start )) {
HXLINE( 112)			success = ( (bool)(this->_on_start()) );
            		}
HXLINE( 113)		if (!(success)) {
HXLINE( 113)			return;
            		}
HXLINE( 115)		while(true){
HXLINE( 116)			this->_mutex->acquire();
HXLINE( 117)			if (!(this->_active)) {
HXLINE( 118)				this->_mutex->release();
HXLINE( 119)				goto _hx_goto_3;
            			}
HXLINE( 121)			this->_mutex->release();
HXLINE( 123)			if (!(( (bool)(this->_on_loop()) ))) {
HXLINE( 123)				goto _hx_goto_3;
            			}
            		}
            		_hx_goto_3:;
HXLINE( 125)		if (::hx::IsNotNull( this->_on_stop )) {
HXLINE( 125)			this->_on_stop();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ThreadWrapper_obj,handlerLogic,(void))


::hx::ObjectPtr< ThreadWrapper_obj > ThreadWrapper_obj::__new( ::Dynamic on_start, ::Dynamic on_loop, ::Dynamic on_stop) {
	::hx::ObjectPtr< ThreadWrapper_obj > __this = new ThreadWrapper_obj();
	__this->__construct(on_start,on_loop,on_stop);
	return __this;
}

::hx::ObjectPtr< ThreadWrapper_obj > ThreadWrapper_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic on_start, ::Dynamic on_loop, ::Dynamic on_stop) {
	ThreadWrapper_obj *__this = (ThreadWrapper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ThreadWrapper_obj), true, "networking.wrappers.ThreadWrapper"));
	*(void **)__this = ThreadWrapper_obj::_hx_vtable;
	__this->__construct(on_start,on_loop,on_stop);
	return __this;
}

ThreadWrapper_obj::ThreadWrapper_obj()
{
}

void ThreadWrapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ThreadWrapper);
	HX_MARK_MEMBER_NAME(_active,"_active");
	HX_MARK_MEMBER_NAME(_mutex,"_mutex");
	HX_MARK_MEMBER_NAME(_on_start,"_on_start");
	HX_MARK_MEMBER_NAME(_on_loop,"_on_loop");
	HX_MARK_MEMBER_NAME(_on_stop,"_on_stop");
	HX_MARK_END_CLASS();
}

void ThreadWrapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_active,"_active");
	HX_VISIT_MEMBER_NAME(_mutex,"_mutex");
	HX_VISIT_MEMBER_NAME(_on_start,"_on_start");
	HX_VISIT_MEMBER_NAME(_on_loop,"_on_loop");
	HX_VISIT_MEMBER_NAME(_on_stop,"_on_stop");
}

::hx::Val ThreadWrapper_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_mutex") ) { return ::hx::Val( _mutex ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_active") ) { return ::hx::Val( _active ); }
		if (HX_FIELD_EQ(inName,"handler") ) { return ::hx::Val( handler_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_on_loop") ) { return ::hx::Val( _on_loop ); }
		if (HX_FIELD_EQ(inName,"_on_stop") ) { return ::hx::Val( _on_stop ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_on_start") ) { return ::hx::Val( _on_start ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"handlerLogic") ) { return ::hx::Val( handlerLogic_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ThreadWrapper_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_mutex") ) { _mutex=inValue.Cast<  ::networking::wrappers::MutexWrapper >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_active") ) { _active=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_on_loop") ) { _on_loop=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_on_stop") ) { _on_stop=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_on_start") ) { _on_start=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ThreadWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_active",65,53,bd,84));
	outFields->push(HX_("_mutex",c0,d6,42,0c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ThreadWrapper_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(ThreadWrapper_obj,_active),HX_("_active",65,53,bd,84)},
	{::hx::fsObject /*  ::networking::wrappers::MutexWrapper */ ,(int)offsetof(ThreadWrapper_obj,_mutex),HX_("_mutex",c0,d6,42,0c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ThreadWrapper_obj,_on_start),HX_("_on_start",61,35,a1,72)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ThreadWrapper_obj,_on_loop),HX_("_on_loop",45,4a,91,37)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ThreadWrapper_obj,_on_stop),HX_("_on_stop",e3,93,35,3c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ThreadWrapper_obj_sStaticStorageInfo = 0;
#endif

static ::String ThreadWrapper_obj_sMemberFields[] = {
	HX_("_active",65,53,bd,84),
	HX_("_mutex",c0,d6,42,0c),
	HX_("_on_start",61,35,a1,72),
	HX_("_on_loop",45,4a,91,37),
	HX_("_on_stop",e3,93,35,3c),
	HX_("stop",02,f0,5b,4c),
	HX_("handler",ca,af,d5,45),
	HX_("handlerLogic",34,1d,68,ba),
	::String(null()) };

::hx::Class ThreadWrapper_obj::__mClass;

void ThreadWrapper_obj::__register()
{
	ThreadWrapper_obj _hx_dummy;
	ThreadWrapper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.wrappers.ThreadWrapper",95,c6,b5,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ThreadWrapper_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ThreadWrapper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ThreadWrapper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ThreadWrapper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace networking
} // end namespace wrappers
