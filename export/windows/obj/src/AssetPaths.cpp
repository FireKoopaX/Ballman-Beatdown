#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a71b198b2cf5b646_138_boot,"AssetPaths","boot",0x7f6e2362,"AssetPaths.boot","flixel/system/macros/FlxAssetPaths.hx",138,0x71054749)

void AssetPaths_obj::__construct() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return new AssetPaths_obj; }

void *AssetPaths_obj::_hx_vtable = 0;

Dynamic AssetPaths_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetPaths_obj > _hx_result = new AssetPaths_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetPaths_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78a931fe;
}

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::Crang__ttf;

::String AssetPaths_obj::banger_logo__png;

::String AssetPaths_obj::firekoopa__png;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::joinlobby__png;

::String AssetPaths_obj::logo__png;

::String AssetPaths_obj::makelobby__png;

::String AssetPaths_obj::menubg__png;

::String AssetPaths_obj::multiplayer__png;

::String AssetPaths_obj::singleplayer__png;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::select_your_fighter__ogg;

::String AssetPaths_obj::sounds_go_here__txt;


AssetPaths_obj::AssetPaths_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AssetPaths_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo AssetPaths_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &AssetPaths_obj::data_goes_here__txt,HX_("data_goes_here__txt",ec,22,23,e8)},
	{::hx::fsString,(void *) &AssetPaths_obj::Crang__ttf,HX_("Crang__ttf",7b,5c,4b,ee)},
	{::hx::fsString,(void *) &AssetPaths_obj::banger_logo__png,HX_("banger_logo__png",64,70,91,f3)},
	{::hx::fsString,(void *) &AssetPaths_obj::firekoopa__png,HX_("firekoopa__png",43,a2,e1,da)},
	{::hx::fsString,(void *) &AssetPaths_obj::images_go_here__txt,HX_("images_go_here__txt",70,18,1f,93)},
	{::hx::fsString,(void *) &AssetPaths_obj::joinlobby__png,HX_("joinlobby__png",1d,a2,4f,eb)},
	{::hx::fsString,(void *) &AssetPaths_obj::logo__png,HX_("logo__png",3e,5a,a9,d9)},
	{::hx::fsString,(void *) &AssetPaths_obj::makelobby__png,HX_("makelobby__png",21,d5,7d,5e)},
	{::hx::fsString,(void *) &AssetPaths_obj::menubg__png,HX_("menubg__png",e5,99,09,90)},
	{::hx::fsString,(void *) &AssetPaths_obj::multiplayer__png,HX_("multiplayer__png",af,78,40,00)},
	{::hx::fsString,(void *) &AssetPaths_obj::singleplayer__png,HX_("singleplayer__png",00,89,c1,a1)},
	{::hx::fsString,(void *) &AssetPaths_obj::music_goes_here__txt,HX_("music_goes_here__txt",d1,aa,c8,0f)},
	{::hx::fsString,(void *) &AssetPaths_obj::select_your_fighter__ogg,HX_("select_your_fighter__ogg",db,31,f1,f7)},
	{::hx::fsString,(void *) &AssetPaths_obj::sounds_go_here__txt,HX_("sounds_go_here__txt",e4,a8,cb,02)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void AssetPaths_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::Crang__ttf,"Crang__ttf");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::banger_logo__png,"banger_logo__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::firekoopa__png,"firekoopa__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::joinlobby__png,"joinlobby__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::logo__png,"logo__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::makelobby__png,"makelobby__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::menubg__png,"menubg__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::multiplayer__png,"multiplayer__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::singleplayer__png,"singleplayer__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::select_your_fighter__ogg,"select_your_fighter__ogg");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetPaths_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::Crang__ttf,"Crang__ttf");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::banger_logo__png,"banger_logo__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::firekoopa__png,"firekoopa__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::joinlobby__png,"joinlobby__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::logo__png,"logo__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::makelobby__png,"makelobby__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::menubg__png,"menubg__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::multiplayer__png,"multiplayer__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::singleplayer__png,"singleplayer__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::select_your_fighter__ogg,"select_your_fighter__ogg");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#endif

::hx::Class AssetPaths_obj::__mClass;

static ::String AssetPaths_obj_sStaticFields[] = {
	HX_("data_goes_here__txt",ec,22,23,e8),
	HX_("Crang__ttf",7b,5c,4b,ee),
	HX_("banger_logo__png",64,70,91,f3),
	HX_("firekoopa__png",43,a2,e1,da),
	HX_("images_go_here__txt",70,18,1f,93),
	HX_("joinlobby__png",1d,a2,4f,eb),
	HX_("logo__png",3e,5a,a9,d9),
	HX_("makelobby__png",21,d5,7d,5e),
	HX_("menubg__png",e5,99,09,90),
	HX_("multiplayer__png",af,78,40,00),
	HX_("singleplayer__png",00,89,c1,a1),
	HX_("music_goes_here__txt",d1,aa,c8,0f),
	HX_("select_your_fighter__ogg",db,31,f1,f7),
	HX_("sounds_go_here__txt",e4,a8,cb,02),
	::String(null())
};

void AssetPaths_obj::__register()
{
	AssetPaths_obj _hx_dummy;
	AssetPaths_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AssetPaths",3e,0f,e6,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetPaths_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AssetPaths_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AssetPaths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetPaths_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetPaths_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetPaths_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AssetPaths_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		data_goes_here__txt = HX_("assets/data/data-goes-here.txt",5f,4b,b2,8e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		Crang__ttf = HX_("assets/fonts/Crang.ttf",4c,da,b0,7b);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		banger_logo__png = HX_("assets/images/banger_logo.png",75,df,72,9e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		firekoopa__png = HX_("assets/images/firekoopa.png",36,c7,06,fc);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		images_go_here__txt = HX_("assets/images/images-go-here.txt",0d,1d,45,a6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		joinlobby__png = HX_("assets/images/joinlobby.png",9c,00,4b,c7);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		logo__png = HX_("assets/images/logo.png",d1,c8,3b,1e);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		makelobby__png = HX_("assets/images/makelobby.png",18,1a,33,3f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		menubg__png = HX_("assets/images/menubg.png",ca,bb,c7,79);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		multiplayer__png = HX_("assets/images/multiplayer.png",8a,a9,54,57);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		singleplayer__png = HX_("assets/images/singleplayer.png",4f,4b,d2,b5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		music_goes_here__txt = HX_("assets/music/music-goes-here.txt",6b,32,60,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		select_your_fighter__ogg = HX_("assets/music/select_your_fighter.ogg",3f,5d,53,3a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_a71b198b2cf5b646_138_boot)
HXDLIN( 138)		sounds_go_here__txt = HX_("assets/sounds/sounds-go-here.txt",8d,b6,3d,a7);
            	}
}

