#include <hxcpp.h>

#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_6_image,"Paths","image",0xc392f1fb,"Paths.image","Paths.hx",6,0x309ea470)
HX_LOCAL_STACK_FRAME(_hx_pos_d75e02b628d1544a_15_music,"Paths","music",0x1684a345,"Paths.music","Paths.hx",15,0x309ea470)

void Paths_obj::__construct() { }

Dynamic Paths_obj::__CreateEmpty() { return new Paths_obj; }

void *Paths_obj::_hx_vtable = 0;

Dynamic Paths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Paths_obj > _hx_result = new Paths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Paths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x44c8e46a;
}

::String Paths_obj::image(::String file){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_6_image)
HXLINE(   7)		if (::sys::FileSystem_obj::exists(((HX_("assets/images/",ab,47,cb,9f) + file) + HX_(".png",3b,2d,bd,1e)))) {
HXLINE(   8)			return ((HX_("assets/images/",ab,47,cb,9f) + file) + HX_(".png",3b,2d,bd,1e));
            		}
            		else {
HXLINE(  10)			::haxe::Log_obj::trace(((HX_("hey man ",0a,ac,cd,ba) + file) + HX_(" is returning null!!!!",cb,45,49,83)),::hx::SourceInfo(HX_("source/Paths.hx",64,c7,bd,1c),10,HX_("Paths",0e,7b,84,50),HX_("image",5b,1f,69,bd)));
            		}
HXLINE(  11)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Paths_obj,image,return )

::String Paths_obj::music(::String file,::String SOUND_EXT){
            	HX_STACKFRAME(&_hx_pos_d75e02b628d1544a_15_music)
HXLINE(  16)		if (::sys::FileSystem_obj::exists((((HX_("assets/music/",36,ab,d2,e0) + file) + HX_(".",2e,00,00,00)) + SOUND_EXT))) {
HXLINE(  17)			return (((HX_("assets/music/",36,ab,d2,e0) + file) + HX_(".",2e,00,00,00)) + SOUND_EXT);
            		}
            		else {
HXLINE(  19)			::haxe::Log_obj::trace(((HX_("hey man ",0a,ac,cd,ba) + file) + HX_(" is returning null!!!!",cb,45,49,83)),::hx::SourceInfo(HX_("source/Paths.hx",64,c7,bd,1c),19,HX_("Paths",0e,7b,84,50),HX_("music",a5,d0,5a,10)));
            		}
HXLINE(  20)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Paths_obj,music,return )


Paths_obj::Paths_obj()
{
}

bool Paths_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { outValue = image_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"music") ) { outValue = music_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Paths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Paths_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Paths_obj::__mClass;

static ::String Paths_obj_sStaticFields[] = {
	HX_("image",5b,1f,69,bd),
	HX_("music",a5,d0,5a,10),
	::String(null())
};

void Paths_obj::__register()
{
	Paths_obj _hx_dummy;
	Paths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Paths",0e,7b,84,50);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Paths_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Paths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Paths_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Paths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Paths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

