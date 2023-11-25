#ifndef INCLUDED_TitleMenuState
#define INCLUDED_TitleMenuState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(TitleMenuState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES TitleMenuState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef TitleMenuState_obj OBJ_;
		TitleMenuState_obj();

	public:
		enum { _hx_ClassId = 0x25694e1a };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TitleMenuState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"TitleMenuState"); }
		static ::hx::ObjectPtr< TitleMenuState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< TitleMenuState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TitleMenuState_obj();

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
		::String __ToString() const { return HX_("TitleMenuState",5a,cb,7d,43); }

		static void __boot();
		static bool skipIntro;
		 ::flixel::FlxSprite menubg;
		int curSelected;
		 ::flixel::group::FlxTypedSpriteGroup buttons;
		::cpp::VirtualArray buttonList;
		bool selectedsum;
		 ::flixel::FlxSprite logo;
		 ::flixel::group::FlxTypedSpriteGroup frontgroup;
		 ::flixel::group::FlxTypedSpriteGroup normgroup;
		void create();

		void update(Float elapsed);

		void changeSelection(int bal);
		::Dynamic changeSelection_dyn();

		void doCutscene();
		::Dynamic doCutscene_dyn();

		void docooltransition(int thing);
		::Dynamic docooltransition_dyn();

};


#endif /* INCLUDED_TitleMenuState */ 
