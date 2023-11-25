#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#define INCLUDED_openfl_display_DisplayObjectContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES DisplayObjectContainer_obj : public  ::openfl::display::InteractiveObject_obj
{
	public:
		typedef  ::openfl::display::InteractiveObject_obj super;
		typedef DisplayObjectContainer_obj OBJ_;
		DisplayObjectContainer_obj();

	public:
		enum { _hx_ClassId = 0x4af7dd8e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.DisplayObjectContainer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.DisplayObjectContainer"); }
		static ::hx::ObjectPtr< DisplayObjectContainer_obj > __new();
		static ::hx::ObjectPtr< DisplayObjectContainer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DisplayObjectContainer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DisplayObjectContainer",80,f2,98,ea); }

		bool mouseChildren;
		 ::openfl::_Vector::ObjectVector _hx___removedChildren;
		bool _hx___tabChildren;
		virtual  ::openfl::display::DisplayObject addChild( ::openfl::display::DisplayObject child);
		::Dynamic addChild_dyn();

		virtual  ::openfl::display::DisplayObject addChildAt( ::openfl::display::DisplayObject child,int index);
		::Dynamic addChildAt_dyn();

		bool areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point);
		::Dynamic areInaccessibleObjectsUnderPoint_dyn();

		bool contains( ::openfl::display::DisplayObject child);
		::Dynamic contains_dyn();

		 ::openfl::display::DisplayObject getChildAt(int index);
		::Dynamic getChildAt_dyn();

		 ::openfl::display::DisplayObject getChildByName(::String name);
		::Dynamic getChildByName_dyn();

		int getChildIndex( ::openfl::display::DisplayObject child);
		::Dynamic getChildIndex_dyn();

		::Array< ::Dynamic> getObjectsUnderPoint( ::openfl::geom::Point point);
		::Dynamic getObjectsUnderPoint_dyn();

		virtual  ::openfl::display::DisplayObject removeChild( ::openfl::display::DisplayObject child);
		::Dynamic removeChild_dyn();

		virtual  ::openfl::display::DisplayObject removeChildAt(int index);
		::Dynamic removeChildAt_dyn();

		void removeChildren(::hx::Null< int >  beginIndex,::hx::Null< int >  endIndex);
		::Dynamic removeChildren_dyn();

		 ::openfl::display::DisplayObject resolve(::String fieldName);
		::Dynamic resolve_dyn();

		virtual void setChildIndex( ::openfl::display::DisplayObject child,int index);
		::Dynamic setChildIndex_dyn();

		void stopAllMovieClips();
		::Dynamic stopAllMovieClips_dyn();

		void swapChildren( ::openfl::display::DisplayObject child1, ::openfl::display::DisplayObject child2);
		::Dynamic swapChildren_dyn();

		void swapChildrenAt(int index1,int index2);
		::Dynamic swapChildrenAt_dyn();

		void _hx___cleanup();

		void _hx___cleanupRemovedChildren();
		::Dynamic _hx___cleanupRemovedChildren_dyn();

		void _hx___dispatchChildren( ::openfl::events::Event event);

		virtual void _hx___enterFrame(int deltaTime);

		void _hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);

		void _hx___getFilterBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);

		void _hx___getRenderBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);

		virtual bool _hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject);

		virtual bool _hx___hitTestMask(Float x,Float y);

		void _hx___readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData,bool recurse);

		void _hx___setStageReference( ::openfl::display::Stage stage);

		void _hx___setWorldTransformInvalid();

		virtual void _hx___stopAllMovieClips();

		virtual void _hx___tabTest(::Array< ::Dynamic> stack);

		virtual void _hx___update(bool transformOnly,bool updateChildren);

		int get_numChildren();
		::Dynamic get_numChildren_dyn();

		bool get_tabChildren();
		::Dynamic get_tabChildren_dyn();

		bool set_tabChildren(bool value);
		::Dynamic set_tabChildren_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_DisplayObjectContainer */ 
