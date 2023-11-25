#ifndef INCLUDED_lime_graphics__FlashRenderContext_FlashRenderContext_Impl_
#define INCLUDED_lime_graphics__FlashRenderContext_FlashRenderContext_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS3(lime,graphics,_FlashRenderContext,FlashRenderContext_Impl_)

namespace lime{
namespace graphics{
namespace _FlashRenderContext{


class HXCPP_CLASS_ATTRIBUTES FlashRenderContext_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlashRenderContext_Impl__obj OBJ_;
		FlashRenderContext_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4dcc3cf1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics._FlashRenderContext.FlashRenderContext_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics._FlashRenderContext.FlashRenderContext_Impl_"); }

		inline static ::hx::ObjectPtr< FlashRenderContext_Impl__obj > __new() {
			::hx::ObjectPtr< FlashRenderContext_Impl__obj > __this = new FlashRenderContext_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlashRenderContext_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlashRenderContext_Impl__obj *__this = (FlashRenderContext_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlashRenderContext_Impl__obj), false, "lime.graphics._FlashRenderContext.FlashRenderContext_Impl_"));
			*(void **)__this = FlashRenderContext_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlashRenderContext_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlashRenderContext_Impl_",e9,02,1e,d6); }

		static  ::Dynamic fromRenderContext( ::lime::graphics::RenderContext context);
		static ::Dynamic fromRenderContext_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace _FlashRenderContext

#endif /* INCLUDED_lime_graphics__FlashRenderContext_FlashRenderContext_Impl_ */ 
