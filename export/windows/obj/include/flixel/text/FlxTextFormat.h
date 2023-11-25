#ifndef INCLUDED_flixel_text_FlxTextFormat
#define INCLUDED_flixel_text_FlxTextFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,text,FlxTextFormat)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace flixel{
namespace text{


class HXCPP_CLASS_ATTRIBUTES FlxTextFormat_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxTextFormat_obj OBJ_;
		FlxTextFormat_obj();

	public:
		enum { _hx_ClassId = 0x184412c5 };

		void __construct( ::Dynamic FontColor, ::Dynamic Bold, ::Dynamic Italic, ::Dynamic BorderColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.text.FlxTextFormat")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.text.FlxTextFormat"); }
		static ::hx::ObjectPtr< FlxTextFormat_obj > __new( ::Dynamic FontColor, ::Dynamic Bold, ::Dynamic Italic, ::Dynamic BorderColor);
		static ::hx::ObjectPtr< FlxTextFormat_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic FontColor, ::Dynamic Bold, ::Dynamic Italic, ::Dynamic BorderColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTextFormat_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTextFormat",b6,ea,d6,62); }

		int leading;
		int borderColor;
		 ::openfl::text::TextFormat format;
		int set_leading(int value);
		::Dynamic set_leading_dyn();

};

} // end namespace flixel
} // end namespace text

#endif /* INCLUDED_flixel_text_FlxTextFormat */ 
