#ifndef INCLUDED_networking_utils_NetworkMessage
#define INCLUDED_networking_utils_NetworkMessage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(networking,sessions,items,ClientObject)
HX_DECLARE_CLASS3(networking,sessions,items,ServerObject)
HX_DECLARE_CLASS2(networking,utils,NetworkMessage)

namespace networking{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES NetworkMessage_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NetworkMessage_obj OBJ_;
		NetworkMessage_obj();

	public:
		enum { _hx_ClassId = 0x187e6a0e };

		void __construct( ::networking::sessions::items::ServerObject server_info, ::networking::sessions::items::ClientObject client_info, ::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="networking.utils.NetworkMessage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"networking.utils.NetworkMessage"); }
		static ::hx::ObjectPtr< NetworkMessage_obj > __new( ::networking::sessions::items::ServerObject server_info, ::networking::sessions::items::ClientObject client_info, ::Dynamic data);
		static ::hx::ObjectPtr< NetworkMessage_obj > __alloc(::hx::Ctx *_hx_ctx, ::networking::sessions::items::ServerObject server_info, ::networking::sessions::items::ClientObject client_info, ::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NetworkMessage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NetworkMessage",d9,3e,25,27); }

		static  ::Dynamic createRaw( ::networking::sessions::items::ServerObject server, ::networking::sessions::items::ClientObject client, ::Dynamic data);
		static ::Dynamic createRaw_dyn();

		static ::String create( ::networking::sessions::items::ServerObject server, ::networking::sessions::items::ClientObject client, ::Dynamic data);
		static ::Dynamic create_dyn();

		static ::String serialize( ::Dynamic obj);
		static ::Dynamic serialize_dyn();

		static  ::Dynamic parse(::String obj);
		static ::Dynamic parse_dyn();

		 ::networking::sessions::items::ServerObject server;
		 ::networking::sessions::items::ClientObject client;
		 ::Dynamic data;
		 ::Dynamic toMessage();
		::Dynamic toMessage_dyn();

};

} // end namespace networking
} // end namespace utils

#endif /* INCLUDED_networking_utils_NetworkMessage */ 
