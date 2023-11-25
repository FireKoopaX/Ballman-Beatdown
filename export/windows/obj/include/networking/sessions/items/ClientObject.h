#ifndef INCLUDED_networking_sessions_items_ClientObject
#define INCLUDED_networking_sessions_items_ClientObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(networking,sessions,Session)
HX_DECLARE_CLASS3(networking,sessions,items,ClientObject)
HX_DECLARE_CLASS3(networking,sessions,server,Server)
HX_DECLARE_CLASS2(networking,wrappers,SocketWrapper)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace networking{
namespace sessions{
namespace items{


class HXCPP_CLASS_ATTRIBUTES ClientObject_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ClientObject_obj OBJ_;
		ClientObject_obj();

	public:
		enum { _hx_ClassId = 0x7ddbf635 };

		void __construct( ::networking::sessions::Session session,::String uuid, ::networking::sessions::server::Server sv, ::networking::wrappers::SocketWrapper skt);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="networking.sessions.items.ClientObject")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"networking.sessions.items.ClientObject"); }
		static ::hx::ObjectPtr< ClientObject_obj > __new( ::networking::sessions::Session session,::String uuid, ::networking::sessions::server::Server sv, ::networking::wrappers::SocketWrapper skt);
		static ::hx::ObjectPtr< ClientObject_obj > __alloc(::hx::Ctx *_hx_ctx, ::networking::sessions::Session session,::String uuid, ::networking::sessions::server::Server sv, ::networking::wrappers::SocketWrapper skt);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ClientObject_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ClientObject",8a,53,f3,5f); }

		 ::networking::wrappers::SocketWrapper socket;
		 ::networking::sessions::server::Server server;
		bool active;
		::String uuid;
		 ::Dynamic object;
		::String _peer_str;
		 ::networking::sessions::Session _session;
		virtual ::String toString();
		::Dynamic toString_dyn();

		void update(::String uuid);
		::Dynamic update_dyn();

		virtual bool initializeSocket(::String ip, ::Dynamic port, ::Dynamic on_connect, ::Dynamic on_failure);
		::Dynamic initializeSocket_dyn();

		bool destroySocket();
		::Dynamic destroySocket_dyn();

		void load();
		::Dynamic load_dyn();

		virtual bool send( ::Dynamic msg);
		::Dynamic send_dyn();

		void read();
		::Dynamic read_dyn();

		void trigger(::String verb, ::Dynamic data);
		::Dynamic trigger_dyn();

		void generateUuid();
		::Dynamic generateUuid_dyn();

		 ::Dynamic get_object();
		::Dynamic get_object_dyn();

		bool get_active();
		::Dynamic get_active_dyn();

};

} // end namespace networking
} // end namespace sessions
} // end namespace items

#endif /* INCLUDED_networking_sessions_items_ClientObject */ 
