#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#define INCLUDED_flixel_system_debug_interaction_Interaction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,interaction,Interaction)
HX_DECLARE_CLASS5(flixel,_hx_system,debug,interaction,tools,Tool)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{


class HXCPP_CLASS_ATTRIBUTES Interaction_obj : public  ::flixel::_hx_system::debug::Window_obj
{
	public:
		typedef  ::flixel::_hx_system::debug::Window_obj super;
		typedef Interaction_obj OBJ_;
		Interaction_obj();

	public:
		enum { _hx_ClassId = 0x5af6f2c8 };

		void __construct( ::openfl::display::Sprite container);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.interaction.Interaction")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.interaction.Interaction"); }
		static ::hx::ObjectPtr< Interaction_obj > __new( ::openfl::display::Sprite container);
		static ::hx::ObjectPtr< Interaction_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Sprite container);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Interaction_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Interaction",b2,cf,8b,20); }

		 ::flixel::_hx_system::debug::interaction::tools::Tool activeTool;
		 ::flixel::group::FlxTypedGroup selectedItems;
		 ::flixel::math::FlxBasePoint flixelPointer;
		bool pointerJustPressed;
		bool pointerJustReleased;
		bool pointerPressed;
		bool shouldDrawItemsSelection;
		 ::openfl::display::Sprite _container;
		 ::openfl::display::Sprite _customCursor;
		::Array< ::Dynamic> _tools;
		int _turn;
		 ::haxe::ds::IntMap _keysDown;
		 ::haxe::ds::IntMap _keysUp;
		bool _wasMouseVisible;
		bool _wasUsingSystemCursor;
		bool _debuggerInteraction;
		 ::flixel::input::FlxPointer _flixelPointer;
		void handleDebuggerVisibilityChanged();
		::Dynamic handleDebuggerVisibilityChanged_dyn();

		void updateMouse( ::openfl::events::MouseEvent event);
		::Dynamic updateMouse_dyn();

		void handleMouseClick( ::openfl::events::MouseEvent event);
		::Dynamic handleMouseClick_dyn();

		bool belongsToDebugger( ::openfl::display::DisplayObject object);
		::Dynamic belongsToDebugger_dyn();

		void handleMouseInDebugger( ::openfl::events::MouseEvent event);
		::Dynamic handleMouseInDebugger_dyn();

		void handleKeyEvent( ::openfl::events::KeyboardEvent event);
		::Dynamic handleKeyEvent_dyn();

		int countToolsWithUIButton();
		::Dynamic countToolsWithUIButton_dyn();

		void addTool( ::flixel::_hx_system::debug::interaction::tools::Tool tool);
		::Dynamic addTool_dyn();

		void destroy();

		bool isActive();
		::Dynamic isActive_dyn();

		void update();

		void postDraw();
		::Dynamic postDraw_dyn();

		 ::openfl::display::Graphics getDebugGraphics();
		::Dynamic getDebugGraphics_dyn();

		void drawItemsSelection();
		::Dynamic drawItemsSelection_dyn();

		 ::flixel::_hx_system::debug::interaction::tools::Tool getTool(::hx::Class className);
		::Dynamic getTool_dyn();

		void toggleVisible();

		void registerCustomCursor(::String name, ::openfl::display::BitmapData icon);
		::Dynamic registerCustomCursor_dyn();

		void updateCustomCursors();
		::Dynamic updateCustomCursors_dyn();

		void saveSystemCursorInfo();
		::Dynamic saveSystemCursorInfo_dyn();

		void restoreSystemCursor();
		::Dynamic restoreSystemCursor_dyn();

		void setActiveTool( ::flixel::_hx_system::debug::interaction::tools::Tool value);
		::Dynamic setActiveTool_dyn();

		void setSystemCursorVisibility(bool status);
		::Dynamic setSystemCursorVisibility_dyn();

		void setToolsCursorVisibility(bool status);
		::Dynamic setToolsCursorVisibility_dyn();

		void clearSelection();
		::Dynamic clearSelection_dyn();

		bool keyPressed(int key);
		::Dynamic keyPressed_dyn();

		bool keyJustPressed(int key);
		::Dynamic keyJustPressed_dyn();

		bool isInUse();
		::Dynamic isInUse_dyn();

		void findItemsWithinState(::Array< ::Dynamic> items, ::flixel::FlxState state, ::flixel::math::FlxRect area);
		::Dynamic findItemsWithinState_dyn();

		void findItemsWithinArea(::Array< ::Dynamic> items,::Array< ::Dynamic> members, ::flixel::math::FlxRect area);
		::Dynamic findItemsWithinArea_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction

#endif /* INCLUDED_flixel_system_debug_interaction_Interaction */ 
