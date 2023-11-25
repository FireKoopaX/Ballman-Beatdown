#ifndef INCLUDED_networking_Network
#define INCLUDED_networking_Network

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ca81605dc7339956_27_new)
HX_DECLARE_CLASS1(networking,Network)
HX_DECLARE_CLASS2(networking,sessions,Session)
HX_DECLARE_CLASS2(networking,utils,NetworkMode)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace networking{


class HXCPP_CLASS_ATTRIBUTES Network_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Network_obj OBJ_;
		Network_obj();

	public:
		enum { _hx_ClassId = 0x39ae89d2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="networking.Network")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"networking.Network"); }

		inline static ::hx::ObjectPtr< Network_obj > __new() {
			::hx::ObjectPtr< Network_obj > __this = new Network_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Network_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Network_obj *__this = (Network_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Network_obj), false, "networking.Network"));
			*(void **)__this = Network_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ca81605dc7339956_27_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Network_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Network",8e,ec,0d,27); }

		static void __boot();
		static ::Array< ::Dynamic> sessions;
		static  ::networking::sessions::Session registerSession( ::networking::utils::NetworkMode mode, ::Dynamic params);
		static ::Dynamic registerSession_dyn();

		static bool destroySession( ::networking::sessions::Session session,::hx::Null< bool >  auto_stop);
		static ::Dynamic destroySession_dyn();

};

} // end namespace networking

#endif /* INCLUDED_networking_Network */ 
