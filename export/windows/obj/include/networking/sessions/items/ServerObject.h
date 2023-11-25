#ifndef INCLUDED_networking_sessions_items_ServerObject
#define INCLUDED_networking_sessions_items_ServerObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_networking_sessions_items_ClientObject
#include <networking/sessions/items/ClientObject.h>
#endif
HX_DECLARE_CLASS2(networking,sessions,Session)
HX_DECLARE_CLASS3(networking,sessions,items,ClientObject)
HX_DECLARE_CLASS3(networking,sessions,items,ServerObject)
HX_DECLARE_CLASS3(networking,sessions,server,Server)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace networking{
namespace sessions{
namespace items{


class HXCPP_CLASS_ATTRIBUTES ServerObject_obj : public  ::networking::sessions::items::ClientObject_obj
{
	public:
		typedef  ::networking::sessions::items::ClientObject_obj super;
		typedef ServerObject_obj OBJ_;
		ServerObject_obj();

	public:
		enum { _hx_ClassId = 0x2287e2c9 };

		void __construct( ::networking::sessions::Session session,::String uuid, ::networking::sessions::server::Server sv);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="networking.sessions.items.ServerObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"networking.sessions.items.ServerObject"); }
		static ::hx::ObjectPtr< ServerObject_obj > __new( ::networking::sessions::Session session,::String uuid, ::networking::sessions::server::Server sv);
		static ::hx::ObjectPtr< ServerObject_obj > __alloc(::hx::Ctx *_hx_ctx, ::networking::sessions::Session session,::String uuid, ::networking::sessions::server::Server sv);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ServerObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ServerObject",02,7e,8a,64); }

		virtual ::String toString();

		bool send( ::Dynamic msg);

		bool initializeSocket(::String ip, ::Dynamic port, ::Dynamic on_connect, ::Dynamic on_failure);

};

} // end namespace networking
} // end namespace sessions
} // end namespace items

#endif /* INCLUDED_networking_sessions_items_ServerObject */ 
