#ifndef INCLUDED_flixel_input_gamepad_mappings_WiiRemoteMapping
#define INCLUDED_flixel_input_gamepad_mappings_WiiRemoteMapping

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAttachment)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,FlxGamepadMapping)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,WiiRemoteMapping)

namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{


class HXCPP_CLASS_ATTRIBUTES WiiRemoteMapping_obj : public  ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj
{
	public:
		typedef  ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj super;
		typedef WiiRemoteMapping_obj OBJ_;
		WiiRemoteMapping_obj();

	public:
		enum { _hx_ClassId = 0x04ee1c6d };

		void __construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.mappings.WiiRemoteMapping")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.gamepad.mappings.WiiRemoteMapping"); }
		static ::hx::ObjectPtr< WiiRemoteMapping_obj > __new( ::flixel::input::gamepad::FlxGamepadAttachment attachment);
		static ::hx::ObjectPtr< WiiRemoteMapping_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WiiRemoteMapping_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WiiRemoteMapping",b1,06,ec,64); }

		static ::String getWiiInputLabel(int id, ::flixel::input::gamepad::FlxGamepadAttachment attachment);
		static ::Dynamic getWiiInputLabel_dyn();

		static ::String getLabelClassicController(int ID);
		static ::Dynamic getLabelClassicController_dyn();

		static ::String getLabelNunchuk(int ID);
		static ::Dynamic getLabelNunchuk_dyn();

		static ::String getLabelDefault(int ID);
		static ::Dynamic getLabelDefault_dyn();

		void initValues();

		int getID(int rawID);

		int getIDClassicController(int rawID);
		::Dynamic getIDClassicController_dyn();

		int getIDNunchuk(int rawID);
		::Dynamic getIDNunchuk_dyn();

		int getIDDefault(int rawID);
		::Dynamic getIDDefault_dyn();

		int getRawID(int ID);

		int getRawClassicController(int ID);
		::Dynamic getRawClassicController_dyn();

		int getRawNunchuk(int ID);
		::Dynamic getRawNunchuk_dyn();

		int getRawDefault(int ID);
		::Dynamic getRawDefault_dyn();

		bool isAxisForMotion(int ID);

		bool isAxisFlipped(int axisID);

		 ::flixel::input::gamepad::FlxGamepadAttachment set_attachment( ::flixel::input::gamepad::FlxGamepadAttachment attachment);

		::String getInputLabel(int id);

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings

#endif /* INCLUDED_flixel_input_gamepad_mappings_WiiRemoteMapping */ 
