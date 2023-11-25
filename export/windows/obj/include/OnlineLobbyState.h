#ifndef INCLUDED_OnlineLobbyState
#define INCLUDED_OnlineLobbyState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(OnlineLobbyState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES OnlineLobbyState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef OnlineLobbyState_obj OBJ_;
		OnlineLobbyState_obj();

	public:
		enum { _hx_ClassId = 0x79ba3dda };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="OnlineLobbyState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"OnlineLobbyState"); }
		static ::hx::ObjectPtr< OnlineLobbyState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< OnlineLobbyState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OnlineLobbyState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OnlineLobbyState",ae,38,c6,26); }

		static void __boot();
		static ::Array< int > playerList;
		static int yourPlayerID;
		static bool setplayerid;
		static ::Array< Float > playerx;
		 ::flixel::group::FlxTypedSpriteGroup fartgroup;
		 ::flixel::text::FlxText debugText;
		::Array< int > colors;
		Float sx;
		Float lastx;
		void create();

		void update(Float elapsed);

		void updatePlayerCount();
		::Dynamic updatePlayerCount_dyn();

		void doPlayerMoveStuff();
		::Dynamic doPlayerMoveStuff_dyn();

};


#endif /* INCLUDED_OnlineLobbyState */ 
