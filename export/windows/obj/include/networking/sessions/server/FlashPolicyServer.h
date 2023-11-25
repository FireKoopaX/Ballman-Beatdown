#ifndef INCLUDED_networking_sessions_server_FlashPolicyServer
#define INCLUDED_networking_sessions_server_FlashPolicyServer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(networking,sessions,server,FlashPolicyServer)
HX_DECLARE_CLASS3(networking,sessions,server,Server)
HX_DECLARE_CLASS2(networking,wrappers,SocketWrapper)
HX_DECLARE_CLASS2(networking,wrappers,ThreadWrapper)

namespace networking{
namespace sessions{
namespace server{


class HXCPP_CLASS_ATTRIBUTES FlashPolicyServer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlashPolicyServer_obj OBJ_;
		FlashPolicyServer_obj();

	public:
		enum { _hx_ClassId = 0x6b411c8d };

		void __construct( ::networking::sessions::server::Server server, ::Dynamic port);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="networking.sessions.server.FlashPolicyServer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"networking.sessions.server.FlashPolicyServer"); }
		static ::hx::ObjectPtr< FlashPolicyServer_obj > __new( ::networking::sessions::server::Server server, ::Dynamic port);
		static ::hx::ObjectPtr< FlashPolicyServer_obj > __alloc(::hx::Ctx *_hx_ctx, ::networking::sessions::server::Server server, ::Dynamic port);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlashPolicyServer_obj();

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
		::String __ToString() const { return HX_("FlashPolicyServer",05,26,08,8e); }

		static void __boot();
		static  ::Dynamic PORT;
		 ::Dynamic _port;
		 ::networking::wrappers::SocketWrapper _socket;
		 ::networking::sessions::server::Server _server;
		 ::networking::wrappers::ThreadWrapper _thread;
		void run();
		::Dynamic run_dyn();

		void stop();
		::Dynamic stop_dyn();

		bool startServer();
		::Dynamic startServer_dyn();

		bool loopServer();
		::Dynamic loopServer_dyn();

};

} // end namespace networking
} // end namespace sessions
} // end namespace server

#endif /* INCLUDED_networking_sessions_server_FlashPolicyServer */ 
