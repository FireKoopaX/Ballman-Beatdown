#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_networking_wrappers_SocketWrapper
#include <networking/wrappers/SocketWrapper.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b5b274fa9513d41e_20_new,"networking.wrappers.SocketWrapper","new",0x78288bbe,"networking.wrappers.SocketWrapper.new","networking/wrappers/SocketWrapper.hx",20,0xbb7aed52)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b274fa9513d41e_57_connect,"networking.wrappers.SocketWrapper","connect",0x1578fe48,"networking.wrappers.SocketWrapper.connect","networking/wrappers/SocketWrapper.hx",57,0xbb7aed52)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b274fa9513d41e_101_close,"networking.wrappers.SocketWrapper","close",0xeb63e696,"networking.wrappers.SocketWrapper.close","networking/wrappers/SocketWrapper.hx",101,0xbb7aed52)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b274fa9513d41e_119_accept,"networking.wrappers.SocketWrapper","accept",0x08bac66a,"networking.wrappers.SocketWrapper.accept","networking/wrappers/SocketWrapper.hx",119,0xbb7aed52)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b274fa9513d41e_140_listen,"networking.wrappers.SocketWrapper","listen",0xedadfba9,"networking.wrappers.SocketWrapper.listen","networking/wrappers/SocketWrapper.hx",140,0xbb7aed52)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b274fa9513d41e_153_bind,"networking.wrappers.SocketWrapper","bind",0xa3662c9f,"networking.wrappers.SocketWrapper.bind","networking/wrappers/SocketWrapper.hx",153,0xbb7aed52)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b274fa9513d41e_175_read,"networking.wrappers.SocketWrapper","read",0xadf68238,"networking.wrappers.SocketWrapper.read","networking/wrappers/SocketWrapper.hx",175,0xbb7aed52)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b274fa9513d41e_183_write,"networking.wrappers.SocketWrapper","write",0x735a3bbd,"networking.wrappers.SocketWrapper.write","networking/wrappers/SocketWrapper.hx",183,0xbb7aed52)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b274fa9513d41e_200_writeBytes,"networking.wrappers.SocketWrapper","writeBytes",0x16e88f6e,"networking.wrappers.SocketWrapper.writeBytes","networking/wrappers/SocketWrapper.hx",200,0xbb7aed52)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b274fa9513d41e_215_toString,"networking.wrappers.SocketWrapper","toString",0x3220208e,"networking.wrappers.SocketWrapper.toString","networking/wrappers/SocketWrapper.hx",215,0xbb7aed52)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b274fa9513d41e_238_flush,"networking.wrappers.SocketWrapper","flush",0xa59c31a2,"networking.wrappers.SocketWrapper.flush","networking/wrappers/SocketWrapper.hx",238,0xbb7aed52)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b274fa9513d41e_245_writeUnsignedInt16,"networking.wrappers.SocketWrapper","writeUnsignedInt16",0xfbf7ca62,"networking.wrappers.SocketWrapper.writeUnsignedInt16","networking/wrappers/SocketWrapper.hx",245,0xbb7aed52)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b274fa9513d41e_256_writeString,"networking.wrappers.SocketWrapper","writeString",0xde55c46e,"networking.wrappers.SocketWrapper.writeString","networking/wrappers/SocketWrapper.hx",256,0xbb7aed52)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b274fa9513d41e_270_readUnsignedInt16,"networking.wrappers.SocketWrapper","readUnsignedInt16",0x3deed307,"networking.wrappers.SocketWrapper.readUnsignedInt16","networking/wrappers/SocketWrapper.hx",270,0xbb7aed52)
HX_LOCAL_STACK_FRAME(_hx_pos_b5b274fa9513d41e_283_readString,"networking.wrappers.SocketWrapper","readString",0xcf3a9929,"networking.wrappers.SocketWrapper.readString","networking/wrappers/SocketWrapper.hx",283,0xbb7aed52)
namespace networking{
namespace wrappers{

void SocketWrapper_obj::__construct( ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_b5b274fa9513d41e_20_new)
HXLINE(  22)		this->MAX_DATA_SIZE = 65535;
HXLINE(  42)		if (::hx::IsNotNull( data )) {
HXLINE(  43)			this->_socket = ( ( ::sys::net::Socket)(data) );
            		}
            		else {
HXLINE(  45)			this->_socket =  ::sys::net::Socket_obj::__alloc( HX_CTX );
            		}
HXLINE(  47)		this->connected = false;
HXLINE(  48)		this->_is_server = false;
            	}

Dynamic SocketWrapper_obj::__CreateEmpty() { return new SocketWrapper_obj; }

void *SocketWrapper_obj::_hx_vtable = 0;

Dynamic SocketWrapper_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SocketWrapper_obj > _hx_result = new SocketWrapper_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SocketWrapper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7bccc24c;
}

void SocketWrapper_obj::connect(::String host, ::Dynamic port){
            	HX_GC_STACKFRAME(&_hx_pos_b5b274fa9513d41e_57_connect)
HXLINE(  59)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  60)			 ::sys::net::Socket _hx_tmp = this->_socket;
HXDLIN(  60)			_hx_tmp->connect( ::sys::net::Host_obj::__alloc( HX_CTX ,host),( (int)(port) ));
HXLINE(  61)			this->onConnect(null());
HXLINE(  62)			this->connected = true;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  64)				{
HXLINE(  64)					null();
            				}
HXDLIN(  64)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXDLIN(  64)				{
HXLINE(  65)					this->onFailure(e);
HXLINE(  66)					this->connected = false;
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  95)		this->_is_server = false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(SocketWrapper_obj,connect,(void))

void SocketWrapper_obj::close(){
            	HX_STACKFRAME(&_hx_pos_b5b274fa9513d41e_101_close)
HXLINE( 107)		this->_socket->shutdown(true,true);
HXLINE( 109)		this->_socket->close();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SocketWrapper_obj,close,(void))

 ::networking::wrappers::SocketWrapper SocketWrapper_obj::accept(){
            	HX_GC_STACKFRAME(&_hx_pos_b5b274fa9513d41e_119_accept)
HXLINE( 121)		 ::sys::net::Socket sk = this->_socket->accept();
HXLINE( 122)		if (::hx::IsNotNull( sk )) {
HXLINE( 123)			return  ::networking::wrappers::SocketWrapper_obj::__alloc( HX_CTX ,sk);
            		}
            		else {
HXLINE( 125)			return null();
            		}
HXLINE( 122)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SocketWrapper_obj,accept,return )

void SocketWrapper_obj::listen(int connections){
            	HX_STACKFRAME(&_hx_pos_b5b274fa9513d41e_140_listen)
HXDLIN( 140)		this->_socket->listen(connections);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SocketWrapper_obj,listen,(void))

void SocketWrapper_obj::bind(::String host, ::Dynamic port){
            	HX_GC_STACKFRAME(&_hx_pos_b5b274fa9513d41e_153_bind)
HXLINE( 155)		 ::sys::net::Socket _hx_tmp = this->_socket;
HXDLIN( 155)		_hx_tmp->bind( ::sys::net::Host_obj::__alloc( HX_CTX ,host),( (int)(port) ));
HXLINE( 160)		this->_is_server = true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(SocketWrapper_obj,bind,(void))

::String SocketWrapper_obj::read(){
            	HX_STACKFRAME(&_hx_pos_b5b274fa9513d41e_175_read)
HXDLIN( 175)		return this->readString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SocketWrapper_obj,read,return )

void SocketWrapper_obj::write(::String data){
            	HX_STACKFRAME(&_hx_pos_b5b274fa9513d41e_183_write)
HXLINE( 189)		this->writeString(data);
HXLINE( 190)		this->flush();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SocketWrapper_obj,write,(void))

void SocketWrapper_obj::writeBytes( ::haxe::io::Bytes buffer,int length,::hx::Null< int >  __o_offset){
            		int offset = __o_offset.Default(0);
            	HX_STACKFRAME(&_hx_pos_b5b274fa9513d41e_200_writeBytes)
HXLINE( 202)		this->_socket->output->writeBytes(buffer,offset,length);
HXLINE( 203)		this->flush();
            	}


HX_DEFINE_DYNAMIC_FUNC3(SocketWrapper_obj,writeBytes,(void))

::String SocketWrapper_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_b5b274fa9513d41e_215_toString)
HXDLIN( 215)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 217)			if (this->_is_server) {
HXLINE( 218)				 ::Dynamic host = this->_socket->host();
HXLINE( 219)				::String _hx_tmp = ((HX_("",00,00,00,00) + ::Std_obj::string( ::Dynamic(host->__Field(HX_("host",68,cf,12,45),::hx::paccDynamic)))) + HX_(":",3a,00,00,00));
HXDLIN( 219)				return ( (::String)((_hx_tmp + host->__Field(HX_("port",81,83,5c,4a),::hx::paccDynamic))) );
            			}
            			else {
HXLINE( 222)				 ::Dynamic peer = this->_socket->peer();
HXLINE( 223)				::String _hx_tmp = ((HX_("",00,00,00,00) + ::Std_obj::string( ::Dynamic(peer->__Field(HX_("host",68,cf,12,45),::hx::paccDynamic)))) + HX_(":",3a,00,00,00));
HXDLIN( 223)				return ( (::String)((_hx_tmp + peer->__Field(HX_("port",81,83,5c,4a),::hx::paccDynamic))) );
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 229)				{
HXLINE( 229)					null();
            				}
HXDLIN( 229)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 230)				{
HXLINE( 230)					::String msg = ( (::String)(e) );
HXDLIN( 230)					{
HXLINE( 230)						::String level = HX_("ERROR",a8,03,18,f1);
HXDLIN( 230)						if (::hx::IsNull( level )) {
HXLINE( 230)							level = HX_("INFO",6e,00,7c,30);
            						}
HXDLIN( 230)						::haxe::Log_obj::trace((((HX_("# NETWORK ",6f,67,50,2d) + level) + HX_(" -- $ -- ",24,9e,72,56)) + msg),::hx::SourceInfo(HX_("networking/utils/NetworkLogger.hx",99,c5,fb,66),64,HX_("networking.utils.NetworkLogger",47,fe,2e,80),HX_("log",84,54,52,00)));
            					}
            				}
HXLINE( 231)				return HX_("?:?",c4,00,30,00);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 215)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SocketWrapper_obj,toString,return )

void SocketWrapper_obj::flush(){
            	HX_STACKFRAME(&_hx_pos_b5b274fa9513d41e_238_flush)
HXDLIN( 238)		this->_socket->output->flush();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SocketWrapper_obj,flush,(void))

void SocketWrapper_obj::writeUnsignedInt16(int x){
            	HX_STACKFRAME(&_hx_pos_b5b274fa9513d41e_245_writeUnsignedInt16)
HXLINE( 247)		this->_socket->output->writeByte((::hx::UShr(x,8) & 255));
HXLINE( 248)		this->_socket->output->writeByte((x & 255));
            	}


HX_DEFINE_DYNAMIC_FUNC1(SocketWrapper_obj,writeUnsignedInt16,(void))

void SocketWrapper_obj::writeString(::String s){
            	HX_STACKFRAME(&_hx_pos_b5b274fa9513d41e_256_writeString)
HXLINE( 257)		if ((s.length > this->MAX_DATA_SIZE)) {
HXLINE( 258)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("String data is too big - ",8e,d8,a0,d8) + s.length) + HX_(" bytes (",13,99,49,80)) + this->MAX_DATA_SIZE) + HX_(" bytes max)",fa,d0,70,6f))));
            		}
HXLINE( 260)		this->writeUnsignedInt16(s.length);
HXLINE( 263)		this->_socket->output->writeString(s,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(SocketWrapper_obj,writeString,(void))

int SocketWrapper_obj::readUnsignedInt16(){
            	HX_STACKFRAME(&_hx_pos_b5b274fa9513d41e_270_readUnsignedInt16)
HXLINE( 272)		int byte1 = (this->_socket->input->readByte() & 255);
HXLINE( 273)		int byte2 = (this->_socket->input->readByte() & 255);
HXLINE( 279)		return ((byte1 << 8) | byte2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SocketWrapper_obj,readUnsignedInt16,return )

::String SocketWrapper_obj::readString(){
            	HX_STACKFRAME(&_hx_pos_b5b274fa9513d41e_283_readString)
HXLINE( 284)		int len = this->readUnsignedInt16();
HXLINE( 287)		return this->_socket->input->readString(len,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SocketWrapper_obj,readString,return )


::hx::ObjectPtr< SocketWrapper_obj > SocketWrapper_obj::__new( ::Dynamic data) {
	::hx::ObjectPtr< SocketWrapper_obj > __this = new SocketWrapper_obj();
	__this->__construct(data);
	return __this;
}

::hx::ObjectPtr< SocketWrapper_obj > SocketWrapper_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic data) {
	SocketWrapper_obj *__this = (SocketWrapper_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SocketWrapper_obj), true, "networking.wrappers.SocketWrapper"));
	*(void **)__this = SocketWrapper_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

SocketWrapper_obj::SocketWrapper_obj()
{
}

void SocketWrapper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SocketWrapper);
	HX_MARK_MEMBER_NAME(MAX_DATA_SIZE,"MAX_DATA_SIZE");
	HX_MARK_MEMBER_NAME(onConnect,"onConnect");
	HX_MARK_MEMBER_NAME(onFailure,"onFailure");
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(_socket,"_socket");
	HX_MARK_MEMBER_NAME(_is_server,"_is_server");
	HX_MARK_END_CLASS();
}

void SocketWrapper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(MAX_DATA_SIZE,"MAX_DATA_SIZE");
	HX_VISIT_MEMBER_NAME(onConnect,"onConnect");
	HX_VISIT_MEMBER_NAME(onFailure,"onFailure");
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(_socket,"_socket");
	HX_VISIT_MEMBER_NAME(_is_server,"_is_server");
}

::hx::Val SocketWrapper_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return ::hx::Val( bind_dyn() ); }
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"write") ) { return ::hx::Val( write_dyn() ); }
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"accept") ) { return ::hx::Val( accept_dyn() ); }
		if (HX_FIELD_EQ(inName,"listen") ) { return ::hx::Val( listen_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_socket") ) { return ::hx::Val( _socket ); }
		if (HX_FIELD_EQ(inName,"connect") ) { return ::hx::Val( connect_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { return ::hx::Val( onConnect ); }
		if (HX_FIELD_EQ(inName,"onFailure") ) { return ::hx::Val( onFailure ); }
		if (HX_FIELD_EQ(inName,"connected") ) { return ::hx::Val( connected ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_is_server") ) { return ::hx::Val( _is_server ); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return ::hx::Val( writeBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"readString") ) { return ::hx::Val( readString_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeString") ) { return ::hx::Val( writeString_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"MAX_DATA_SIZE") ) { return ::hx::Val( MAX_DATA_SIZE ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedInt16") ) { return ::hx::Val( readUnsignedInt16_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writeUnsignedInt16") ) { return ::hx::Val( writeUnsignedInt16_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SocketWrapper_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_socket") ) { _socket=inValue.Cast<  ::sys::net::Socket >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { onConnect=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onFailure") ) { onFailure=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_is_server") ) { _is_server=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"MAX_DATA_SIZE") ) { MAX_DATA_SIZE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SocketWrapper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("MAX_DATA_SIZE",7b,bd,e9,6e));
	outFields->push(HX_("connected",c9,e2,f6,a2));
	outFields->push(HX_("_socket",52,9d,bd,94));
	outFields->push(HX_("_is_server",79,2d,fe,6e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SocketWrapper_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(SocketWrapper_obj,MAX_DATA_SIZE),HX_("MAX_DATA_SIZE",7b,bd,e9,6e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SocketWrapper_obj,onConnect),HX_("onConnect",8b,f4,2a,ed)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(SocketWrapper_obj,onFailure),HX_("onFailure",eb,28,a5,ee)},
	{::hx::fsBool,(int)offsetof(SocketWrapper_obj,connected),HX_("connected",c9,e2,f6,a2)},
	{::hx::fsObject /*  ::sys::net::Socket */ ,(int)offsetof(SocketWrapper_obj,_socket),HX_("_socket",52,9d,bd,94)},
	{::hx::fsBool,(int)offsetof(SocketWrapper_obj,_is_server),HX_("_is_server",79,2d,fe,6e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SocketWrapper_obj_sStaticStorageInfo = 0;
#endif

static ::String SocketWrapper_obj_sMemberFields[] = {
	HX_("MAX_DATA_SIZE",7b,bd,e9,6e),
	HX_("onConnect",8b,f4,2a,ed),
	HX_("onFailure",eb,28,a5,ee),
	HX_("connected",c9,e2,f6,a2),
	HX_("_socket",52,9d,bd,94),
	HX_("_is_server",79,2d,fe,6e),
	HX_("connect",ea,3b,80,15),
	HX_("close",b8,17,63,48),
	HX_("accept",08,93,06,0b),
	HX_("listen",47,c8,f9,ef),
	HX_("bind",bd,f5,16,41),
	HX_("read",56,4b,a7,4b),
	HX_("write",df,6c,59,d0),
	HX_("writeBytes",0c,03,5a,52),
	HX_("toString",ac,d0,6e,38),
	HX_("flush",c4,62,9b,02),
	HX_("writeUnsignedInt16",00,0c,93,33),
	HX_("writeString",10,7b,29,a6),
	HX_("readUnsignedInt16",29,2f,04,b9),
	HX_("readString",c7,0c,ac,0a),
	::String(null()) };

::hx::Class SocketWrapper_obj::__mClass;

void SocketWrapper_obj::__register()
{
	SocketWrapper_obj _hx_dummy;
	SocketWrapper_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.wrappers.SocketWrapper",cc,94,d4,1b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SocketWrapper_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SocketWrapper_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SocketWrapper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SocketWrapper_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace networking
} // end namespace wrappers
