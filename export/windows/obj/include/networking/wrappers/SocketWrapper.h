#ifndef INCLUDED_networking_wrappers_SocketWrapper
#define INCLUDED_networking_wrappers_SocketWrapper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(networking,wrappers,SocketWrapper)
HX_DECLARE_CLASS2(sys,net,Socket)

namespace networking{
namespace wrappers{


class HXCPP_CLASS_ATTRIBUTES SocketWrapper_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SocketWrapper_obj OBJ_;
		SocketWrapper_obj();

	public:
		enum { _hx_ClassId = 0x7bccc24c };

		void __construct( ::Dynamic data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="networking.wrappers.SocketWrapper")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"networking.wrappers.SocketWrapper"); }
		static ::hx::ObjectPtr< SocketWrapper_obj > __new( ::Dynamic data);
		static ::hx::ObjectPtr< SocketWrapper_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SocketWrapper_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SocketWrapper",c0,ed,5c,53); }

		int MAX_DATA_SIZE;
		 ::Dynamic onConnect;
		Dynamic onConnect_dyn() { return onConnect;}
		 ::Dynamic onFailure;
		Dynamic onFailure_dyn() { return onFailure;}
		bool connected;
		 ::sys::net::Socket _socket;
		bool _is_server;
		void connect(::String host, ::Dynamic port);
		::Dynamic connect_dyn();

		void close();
		::Dynamic close_dyn();

		 ::networking::wrappers::SocketWrapper accept();
		::Dynamic accept_dyn();

		void listen(int connections);
		::Dynamic listen_dyn();

		void bind(::String host, ::Dynamic port);
		::Dynamic bind_dyn();

		::String read();
		::Dynamic read_dyn();

		void write(::String data);
		::Dynamic write_dyn();

		void writeBytes( ::haxe::io::Bytes buffer,int length,::hx::Null< int >  offset);
		::Dynamic writeBytes_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void flush();
		::Dynamic flush_dyn();

		void writeUnsignedInt16(int x);
		::Dynamic writeUnsignedInt16_dyn();

		void writeString(::String s);
		::Dynamic writeString_dyn();

		int readUnsignedInt16();
		::Dynamic readUnsignedInt16_dyn();

		::String readString();
		::Dynamic readString_dyn();

};

} // end namespace networking
} // end namespace wrappers

#endif /* INCLUDED_networking_wrappers_SocketWrapper */ 
