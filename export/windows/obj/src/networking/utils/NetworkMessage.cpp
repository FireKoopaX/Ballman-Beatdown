#include <hxcpp.h>

#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_networking_sessions_items_ClientObject
#include <networking/sessions/items/ClientObject.h>
#endif
#ifndef INCLUDED_networking_sessions_items_ServerObject
#include <networking/sessions/items/ServerObject.h>
#endif
#ifndef INCLUDED_networking_utils_NetworkMessage
#include <networking/utils/NetworkMessage.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ab1610fe4b5ce77e_75_new,"networking.utils.NetworkMessage","new",0xeba44722,"networking.utils.NetworkMessage.new","networking/utils/NetworkMessage.hx",75,0x0ee5418c)
HX_LOCAL_STACK_FRAME(_hx_pos_ab1610fe4b5ce77e_82_toMessage,"networking.utils.NetworkMessage","toMessage",0x78f661ce,"networking.utils.NetworkMessage.toMessage","networking/utils/NetworkMessage.hx",82,0x0ee5418c)
HX_LOCAL_STACK_FRAME(_hx_pos_ab1610fe4b5ce77e_39_createRaw,"networking.utils.NetworkMessage","createRaw",0xf935a08e,"networking.utils.NetworkMessage.createRaw","networking/utils/NetworkMessage.hx",39,0x0ee5418c)
HX_LOCAL_STACK_FRAME(_hx_pos_ab1610fe4b5ce77e_51_create,"networking.utils.NetworkMessage","create",0x0228157a,"networking.utils.NetworkMessage.create","networking/utils/NetworkMessage.hx",51,0x0ee5418c)
HX_LOCAL_STACK_FRAME(_hx_pos_ab1610fe4b5ce77e_61_serialize,"networking.utils.NetworkMessage","serialize",0xa4435222,"networking.utils.NetworkMessage.serialize","networking/utils/NetworkMessage.hx",61,0x0ee5418c)
HX_LOCAL_STACK_FRAME(_hx_pos_ab1610fe4b5ce77e_71_parse,"networking.utils.NetworkMessage","parse",0x76c2bb75,"networking.utils.NetworkMessage.parse","networking/utils/NetworkMessage.hx",71,0x0ee5418c)
namespace networking{
namespace utils{

void NetworkMessage_obj::__construct( ::networking::sessions::items::ServerObject server_info, ::networking::sessions::items::ClientObject client_info, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_ab1610fe4b5ce77e_75_new)
HXLINE(  76)		this->server = server_info;
HXLINE(  77)		this->client = client_info;
HXLINE(  78)		 ::Dynamic _hx_tmp;
HXDLIN(  78)		if (::hx::IsNotNull( data )) {
HXLINE(  78)			_hx_tmp = data;
            		}
            		else {
HXLINE(  78)			_hx_tmp =  ::Dynamic(::hx::Anon_obj::Create(0));
            		}
HXDLIN(  78)		this->data = _hx_tmp;
            	}

Dynamic NetworkMessage_obj::__CreateEmpty() { return new NetworkMessage_obj; }

void *NetworkMessage_obj::_hx_vtable = 0;

Dynamic NetworkMessage_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NetworkMessage_obj > _hx_result = new NetworkMessage_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool NetworkMessage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x187e6a0e;
}

 ::Dynamic NetworkMessage_obj::toMessage(){
            	HX_STACKFRAME(&_hx_pos_ab1610fe4b5ce77e_82_toMessage)
HXDLIN(  82)		 ::Dynamic _hx_tmp;
HXDLIN(  82)		if (::hx::IsNotNull( this->client )) {
HXDLIN(  82)			_hx_tmp = this->client->get_object();
            		}
            		else {
HXDLIN(  82)			_hx_tmp = null();
            		}
HXDLIN(  82)		 ::Dynamic _hx_tmp1;
HXDLIN(  82)		if (::hx::IsNotNull( this->server )) {
HXDLIN(  82)			_hx_tmp1 = this->server->get_object();
            		}
            		else {
HXDLIN(  82)			_hx_tmp1 = null();
            		}
HXDLIN(  82)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("metadata",6f,e7,19,40), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("client",4b,ca,4f,0a),_hx_tmp)
            				->setFixed(1,HX_("server",c3,4a,37,6e),_hx_tmp1)))
            			->setFixed(1,HX_("data",2a,56,63,42),this->data));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetworkMessage_obj,toMessage,return )

 ::Dynamic NetworkMessage_obj::createRaw( ::networking::sessions::items::ServerObject server, ::networking::sessions::items::ClientObject client, ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_ab1610fe4b5ce77e_39_createRaw)
HXDLIN(  39)		return  ::networking::utils::NetworkMessage_obj::__alloc( HX_CTX ,server,client,data)->toMessage();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NetworkMessage_obj,createRaw,return )

::String NetworkMessage_obj::create( ::networking::sessions::items::ServerObject server, ::networking::sessions::items::ClientObject client, ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_ab1610fe4b5ce77e_51_create)
HXDLIN(  51)		 ::Dynamic obj = ::networking::utils::NetworkMessage_obj::createRaw(server,client,data);
HXDLIN(  51)		 ::haxe::Serializer handler =  ::haxe::Serializer_obj::__alloc( HX_CTX );
HXDLIN(  51)		handler->serialize(obj);
HXDLIN(  51)		return handler->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NetworkMessage_obj,create,return )

::String NetworkMessage_obj::serialize( ::Dynamic obj){
            	HX_GC_STACKFRAME(&_hx_pos_ab1610fe4b5ce77e_61_serialize)
HXDLIN(  61)		 ::haxe::Serializer handler =  ::haxe::Serializer_obj::__alloc( HX_CTX );
HXDLIN(  61)		handler->serialize(obj);
HXDLIN(  61)		return handler->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NetworkMessage_obj,serialize,return )

 ::Dynamic NetworkMessage_obj::parse(::String obj){
            	HX_GC_STACKFRAME(&_hx_pos_ab1610fe4b5ce77e_71_parse)
HXDLIN(  71)		 ::haxe::Unserializer handler =  ::haxe::Unserializer_obj::__alloc( HX_CTX ,obj);
HXDLIN(  71)		return handler->unserialize();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NetworkMessage_obj,parse,return )


::hx::ObjectPtr< NetworkMessage_obj > NetworkMessage_obj::__new( ::networking::sessions::items::ServerObject server_info, ::networking::sessions::items::ClientObject client_info, ::Dynamic data) {
	::hx::ObjectPtr< NetworkMessage_obj > __this = new NetworkMessage_obj();
	__this->__construct(server_info,client_info,data);
	return __this;
}

::hx::ObjectPtr< NetworkMessage_obj > NetworkMessage_obj::__alloc(::hx::Ctx *_hx_ctx, ::networking::sessions::items::ServerObject server_info, ::networking::sessions::items::ClientObject client_info, ::Dynamic data) {
	NetworkMessage_obj *__this = (NetworkMessage_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NetworkMessage_obj), true, "networking.utils.NetworkMessage"));
	*(void **)__this = NetworkMessage_obj::_hx_vtable;
	__this->__construct(server_info,client_info,data);
	return __this;
}

NetworkMessage_obj::NetworkMessage_obj()
{
}

void NetworkMessage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NetworkMessage);
	HX_MARK_MEMBER_NAME(server,"server");
	HX_MARK_MEMBER_NAME(client,"client");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void NetworkMessage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(server,"server");
	HX_VISIT_MEMBER_NAME(client,"client");
	HX_VISIT_MEMBER_NAME(data,"data");
}

::hx::Val NetworkMessage_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"server") ) { return ::hx::Val( server ); }
		if (HX_FIELD_EQ(inName,"client") ) { return ::hx::Val( client ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toMessage") ) { return ::hx::Val( toMessage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NetworkMessage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"createRaw") ) { outValue = createRaw_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"serialize") ) { outValue = serialize_dyn(); return true; }
	}
	return false;
}

::hx::Val NetworkMessage_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"server") ) { server=inValue.Cast<  ::networking::sessions::items::ServerObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"client") ) { client=inValue.Cast<  ::networking::sessions::items::ClientObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NetworkMessage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("server",c3,4a,37,6e));
	outFields->push(HX_("client",4b,ca,4f,0a));
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NetworkMessage_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::networking::sessions::items::ServerObject */ ,(int)offsetof(NetworkMessage_obj,server),HX_("server",c3,4a,37,6e)},
	{::hx::fsObject /*  ::networking::sessions::items::ClientObject */ ,(int)offsetof(NetworkMessage_obj,client),HX_("client",4b,ca,4f,0a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NetworkMessage_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NetworkMessage_obj_sStaticStorageInfo = 0;
#endif

static ::String NetworkMessage_obj_sMemberFields[] = {
	HX_("server",c3,4a,37,6e),
	HX_("client",4b,ca,4f,0a),
	HX_("data",2a,56,63,42),
	HX_("toMessage",8c,6d,a5,c9),
	::String(null()) };

::hx::Class NetworkMessage_obj::__mClass;

static ::String NetworkMessage_obj_sStaticFields[] = {
	HX_("createRaw",4c,ac,e4,49),
	HX_("create",fc,66,0f,7c),
	HX_("serialize",e0,5d,f2,f4),
	HX_("parse",33,90,55,bd),
	::String(null())
};

void NetworkMessage_obj::__register()
{
	NetworkMessage_obj _hx_dummy;
	NetworkMessage_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.utils.NetworkMessage",30,ce,ad,c3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NetworkMessage_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NetworkMessage_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NetworkMessage_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NetworkMessage_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NetworkMessage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NetworkMessage_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace networking
} // end namespace utils
