#ifndef INCLUDED_SessionData
#define INCLUDED_SessionData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(SessionData)
HX_DECLARE_CLASS2(networking,sessions,Session)
HX_DECLARE_CLASS2(networking,utils,NetworkEvent)
HX_DECLARE_CLASS2(networking,utils,NetworkMode)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES SessionData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SessionData_obj OBJ_;
		SessionData_obj();

	public:
		enum { _hx_ClassId = 0x060b4068 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="SessionData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"SessionData"); }

		inline static ::hx::ObjectPtr< SessionData_obj > __new() {
			::hx::ObjectPtr< SessionData_obj > __this = new SessionData_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SessionData_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SessionData_obj *__this = (SessionData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SessionData_obj), false, "SessionData"));
			*(void **)__this = SessionData_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SessionData_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SessionData",80,94,d4,0c); }

		static  ::networking::sessions::Session _session;
		static void start( ::networking::utils::NetworkMode mode, ::Dynamic params);
		static ::Dynamic start_dyn();

		static void onMessageRecieved( ::networking::utils::NetworkEvent e);
		static ::Dynamic onMessageRecieved_dyn();

		static void onConnected( ::networking::utils::NetworkEvent e);
		static ::Dynamic onConnected_dyn();

		static void onDisconnect( ::networking::utils::NetworkEvent e);
		static ::Dynamic onDisconnect_dyn();

		static void handlePlayerShit(::String type,int player);
		static ::Dynamic handlePlayerShit_dyn();

};


#endif /* INCLUDED_SessionData */ 
