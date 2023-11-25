#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxTileFrames
#include <flixel/graphics/frames/FlxTileFrames.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTileblock
#include <flixel/tile/FlxTileblock.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxBasePoint
#include <flixel/util/FlxPool_flixel_math_FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ca22d206eb905d85_30_new,"flixel.tile.FlxTileblock","new",0x8f1d69cd,"flixel.tile.FlxTileblock.new","flixel/tile/FlxTileblock.hx",30,0xecdf1de3)
HX_LOCAL_STACK_FRAME(_hx_pos_ca22d206eb905d85_39_destroy,"flixel.tile.FlxTileblock","destroy",0x5d3d80e7,"flixel.tile.FlxTileblock.destroy","flixel/tile/FlxTileblock.hx",39,0xecdf1de3)
HX_LOCAL_STACK_FRAME(_hx_pos_ca22d206eb905d85_52_loadFrames,"flixel.tile.FlxTileblock","loadFrames",0xaeb6fc9f,"flixel.tile.FlxTileblock.loadFrames","flixel/tile/FlxTileblock.hx",52,0xecdf1de3)
HX_LOCAL_STACK_FRAME(_hx_pos_ca22d206eb905d85_133_loadTiles,"flixel.tile.FlxTileblock","loadTiles",0x7f9232ac,"flixel.tile.FlxTileblock.loadTiles","flixel/tile/FlxTileblock.hx",133,0xecdf1de3)
HX_LOCAL_STACK_FRAME(_hx_pos_ca22d206eb905d85_162_setTile,"flixel.tile.FlxTileblock","setTile",0x4b385fdd,"flixel.tile.FlxTileblock.setTile","flixel/tile/FlxTileblock.hx",162,0xecdf1de3)
namespace flixel{
namespace tile{

void FlxTileblock_obj::__construct(int X,int Y,int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_ca22d206eb905d85_30_new)
HXLINE(  31)		super::__construct(X,Y,null());
HXLINE(  32)		this->makeGraphic(Width,Height,0,true,null());
HXLINE(  33)		this->set_active(false);
HXLINE(  34)		this->set_immovable(true);
HXLINE(  35)		this->set_moves(false);
            	}

Dynamic FlxTileblock_obj::__CreateEmpty() { return new FlxTileblock_obj; }

void *FlxTileblock_obj::_hx_vtable = 0;

Dynamic FlxTileblock_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTileblock_obj > _hx_result = new FlxTileblock_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxTileblock_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x2b935cf7) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2b935cf7;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxTileblock_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ca22d206eb905d85_39_destroy)
HXLINE(  40)		this->tileSprite = ( ( ::flixel::FlxSprite)(::flixel::util::FlxDestroyUtil_obj::destroy(this->tileSprite)) );
HXLINE(  41)		this->super::destroy();
            	}


 ::flixel::tile::FlxTileblock FlxTileblock_obj::loadFrames( ::flixel::graphics::frames::FlxTileFrames tileFrames,::hx::Null< int >  __o_empties){
            		int empties = __o_empties.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_ca22d206eb905d85_52_loadFrames)
HXLINE(  53)		if (::hx::IsNull( tileFrames )) {
HXLINE(  55)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE(  59)		 ::flixel::FlxSprite _hx_tmp;
HXDLIN(  59)		if (::hx::IsNull( this->tileSprite )) {
HXLINE(  59)			_hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
            		}
            		else {
HXLINE(  59)			_hx_tmp = this->tileSprite;
            		}
HXDLIN(  59)		this->tileSprite = _hx_tmp;
HXLINE(  60)		this->tileSprite->set_frames(tileFrames);
HXLINE(  61)		int spriteWidth = ::Std_obj::_hx_int(this->tileSprite->get_width());
HXLINE(  62)		int spriteHeight = ::Std_obj::_hx_int(this->tileSprite->get_height());
HXLINE(  63)		int total = (this->tileSprite->numFrames + empties);
HXLINE(  66)		bool regen = false;
HXLINE(  68)		Float _hx_tmp1 = this->get_width();
HXDLIN(  68)		if ((::hx::Mod(_hx_tmp1,this->tileSprite->get_width()) != 0)) {
HXLINE(  70)			this->set_width(( (Float)((::Std_obj::_hx_int(((this->get_width() / ( (Float)(spriteWidth) )) + 1)) * spriteWidth)) ));
HXLINE(  71)			regen = true;
            		}
HXLINE(  74)		Float _hx_tmp2 = this->get_height();
HXDLIN(  74)		if ((::hx::Mod(_hx_tmp2,this->tileSprite->get_height()) != 0)) {
HXLINE(  76)			this->set_height(( (Float)((::Std_obj::_hx_int(((this->get_height() / ( (Float)(spriteHeight) )) + 1)) * spriteHeight)) ));
HXLINE(  77)			regen = true;
            		}
HXLINE(  80)		if (regen) {
HXLINE(  82)			int _hx_tmp = ::Std_obj::_hx_int(this->get_width());
HXDLIN(  82)			this->makeGraphic(_hx_tmp,::Std_obj::_hx_int(this->get_height()),0,true,null());
            		}
            		else {
HXLINE(  86)			::flixel::util::FlxSpriteUtil_obj::fill(::hx::ObjectPtr<OBJ_>(this),0);
            		}
HXLINE(  90)		int row = 0;
HXLINE(  91)		int column;
HXLINE(  92)		int destinationX;
HXLINE(  93)		int destinationY = 0;
HXLINE(  94)		int widthInTiles = ::Std_obj::_hx_int((this->get_width() / ( (Float)(spriteWidth) )));
HXLINE(  95)		int heightInTiles = ::Std_obj::_hx_int((this->get_height() / ( (Float)(spriteHeight) )));
HXLINE(  97)		while((row < heightInTiles)){
HXLINE(  99)			destinationX = 0;
HXLINE( 100)			column = 0;
HXLINE( 102)			while((column < widthInTiles)){
HXLINE( 104)				if (((::flixel::FlxG_obj::random->_hx_float(null(),null(),null()) * ( (Float)(total) )) > empties)) {
HXLINE( 106)					this->tileSprite->animation->randomFrame();
HXLINE( 107)					this->tileSprite->drawFrame(null());
HXLINE( 108)					this->stamp(this->tileSprite,destinationX,destinationY);
            				}
HXLINE( 111)				destinationX = (destinationX + spriteWidth);
HXLINE( 112)				column = (column + 1);
            			}
HXLINE( 115)			destinationY = (destinationY + spriteHeight);
HXLINE( 116)			row = (row + 1);
            		}
HXLINE( 119)		this->dirty = true;
HXLINE( 120)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTileblock_obj,loadFrames,return )

 ::flixel::tile::FlxTileblock FlxTileblock_obj::loadTiles( ::Dynamic TileGraphic,::hx::Null< int >  __o_TileWidth,::hx::Null< int >  __o_TileHeight,::hx::Null< int >  __o_Empties){
            		int TileWidth = __o_TileWidth.Default(0);
            		int TileHeight = __o_TileHeight.Default(0);
            		int Empties = __o_Empties.Default(0);
            	HX_STACKFRAME(&_hx_pos_ca22d206eb905d85_133_loadTiles)
HXLINE( 134)		if (::hx::IsNull( TileGraphic )) {
HXLINE( 136)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 139)		 ::flixel::graphics::FlxGraphic graph = ::flixel::FlxG_obj::bitmap->add(TileGraphic,null(),null());
HXLINE( 140)		if (::hx::IsNull( graph )) {
HXLINE( 142)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 145)		if ((TileWidth == 0)) {
HXLINE( 147)			TileWidth = graph->height;
HXLINE( 148)			if ((TileWidth > graph->width)) {
HXLINE( 148)				TileWidth = graph->width;
            			}
            		}
HXLINE( 151)		if ((TileHeight == 0)) {
HXLINE( 153)			TileHeight = TileWidth;
HXLINE( 154)			if ((TileHeight > graph->height)) {
HXLINE( 154)				TileHeight = graph->height;
            			}
            		}
HXLINE( 157)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get()->set(TileWidth,TileHeight);
HXDLIN( 157)		point->_inPool = false;
HXDLIN( 157)		 ::flixel::graphics::frames::FlxTileFrames tileFrames = ::flixel::graphics::frames::FlxTileFrames_obj::fromGraphic(graph,point,null(),null());
HXLINE( 158)		return this->loadFrames(tileFrames,Empties);
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTileblock_obj,loadTiles,return )

void FlxTileblock_obj::setTile(int x,int y,int index){
            	HX_STACKFRAME(&_hx_pos_ca22d206eb905d85_162_setTile)
HXLINE( 163)		this->tileSprite->animation->set_frameIndex(index);
HXLINE( 164)		 ::flixel::FlxSprite _hx_tmp = this->tileSprite;
HXDLIN( 164)		int _hx_tmp1 = (x * ::Std_obj::_hx_int(this->tileSprite->get_width()));
HXDLIN( 164)		this->stamp(_hx_tmp,_hx_tmp1,(y * ::Std_obj::_hx_int(this->tileSprite->get_height())));
HXLINE( 165)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTileblock_obj,setTile,(void))


::hx::ObjectPtr< FlxTileblock_obj > FlxTileblock_obj::__new(int X,int Y,int Width,int Height) {
	::hx::ObjectPtr< FlxTileblock_obj > __this = new FlxTileblock_obj();
	__this->__construct(X,Y,Width,Height);
	return __this;
}

::hx::ObjectPtr< FlxTileblock_obj > FlxTileblock_obj::__alloc(::hx::Ctx *_hx_ctx,int X,int Y,int Width,int Height) {
	FlxTileblock_obj *__this = (FlxTileblock_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTileblock_obj), true, "flixel.tile.FlxTileblock"));
	*(void **)__this = FlxTileblock_obj::_hx_vtable;
	__this->__construct(X,Y,Width,Height);
	return __this;
}

FlxTileblock_obj::FlxTileblock_obj()
{
}

void FlxTileblock_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTileblock);
	HX_MARK_MEMBER_NAME(tileSprite,"tileSprite");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTileblock_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileSprite,"tileSprite");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTileblock_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return ::hx::Val( setTile_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadTiles") ) { return ::hx::Val( loadTiles_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileSprite") ) { return ::hx::Val( tileSprite ); }
		if (HX_FIELD_EQ(inName,"loadFrames") ) { return ::hx::Val( loadFrames_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTileblock_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"tileSprite") ) { tileSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTileblock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tileSprite",d3,b1,2c,28));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTileblock_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxTileblock_obj,tileSprite),HX_("tileSprite",d3,b1,2c,28)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTileblock_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTileblock_obj_sMemberFields[] = {
	HX_("tileSprite",d3,b1,2c,28),
	HX_("destroy",fa,2c,86,24),
	HX_("loadFrames",6c,de,b0,61),
	HX_("loadTiles",7f,49,6c,2b),
	HX_("setTile",f0,0b,81,12),
	::String(null()) };

::hx::Class FlxTileblock_obj::__mClass;

void FlxTileblock_obj::__register()
{
	FlxTileblock_obj _hx_dummy;
	FlxTileblock_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tile.FlxTileblock",5b,7f,bf,db);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTileblock_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTileblock_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTileblock_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTileblock_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tile
