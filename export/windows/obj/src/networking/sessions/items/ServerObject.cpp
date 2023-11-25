#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_networking_sessions_Session
#include <networking/sessions/Session.h>
#endif
#ifndef INCLUDED_networking_sessions_items_ClientObject
#include <networking/sessions/items/ClientObject.h>
#endif
#ifndef INCLUDED_networking_sessions_items_ServerObject
#include <networking/sessions/items/ServerObject.h>
#endif
#ifndef INCLUDED_networking_sessions_server_Server
#include <networking/sessions/server/Server.h>
#endif
#ifndef INCLUDED_networking_wrappers_SocketWrapper
#include <networking/wrappers/SocketWrapper.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6582e4d296f1e392_23_new,"networking.sessions.items.ServerObject","new",0xd8c3e299,"networking.sessions.items.ServerObject.new","networking/sessions/items/ServerObject.hx",23,0x4a869836)
HX_LOCAL_STACK_FRAME(_hx_pos_6582e4d296f1e392_33_toString,"networking.sessions.items.ServerObject","toString",0x00d50fd3,"networking.sessions.items.ServerObject.toString","networking/sessions/items/ServerObject.hx",33,0x4a869836)
HX_LOCAL_STACK_FRAME(_hx_pos_6582e4d296f1e392_43_send,"networking.sessions.items.ServerObject","send",0xd5f06cef,"networking.sessions.items.ServerObject.send","networking/sessions/items/ServerObject.hx",43,0x4a869836)
HX_LOCAL_STACK_FRAME(_hx_pos_6582e4d296f1e392_56_initializeSocket,"networking.sessions.items.ServerObject","initializeSocket",0xca4a4b4a,"networking.sessions.items.ServerObject.initializeSocket","networking/sessions/items/ServerObject.hx",56,0x4a869836)
namespace networking{
namespace sessions{
namespace items{

void ServerObject_obj::__construct( ::networking::sessions::Session session,::String uuid, ::networking::sessions::server::Server sv){
            	HX_STACKFRAME(&_hx_pos_6582e4d296f1e392_23_new)
HXLINE(  24)		super::__construct(session,uuid,sv,null());
HXLINE(  25)		this->generateUuid();
            	}

Dynamic ServerObject_obj::__CreateEmpty() { return new ServerObject_obj; }

void *ServerObject_obj::_hx_vtable = 0;

Dynamic ServerObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ServerObject_obj > _hx_result = new ServerObject_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ServerObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2287e2c9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2287e2c9;
	} else {
		return inClassId==(int)0x7ddbf635;
	}
}

::String ServerObject_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_6582e4d296f1e392_33_toString)
HXDLIN(  33)		return ((HX_("",00,00,00,00) + this->uuid) + HX_(" (local)",66,46,68,ff));
            	}


bool ServerObject_obj::send( ::Dynamic msg){
            	HX_STACKFRAME(&_hx_pos_6582e4d296f1e392_43_send)
HXDLIN(  43)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Method not implemented",16,77,54,71)));
HXDLIN(  43)		return false;
            	}


bool ServerObject_obj::initializeSocket(::String ip, ::Dynamic port, ::Dynamic on_connect, ::Dynamic on_failure){
            	HX_GC_STACKFRAME(&_hx_pos_6582e4d296f1e392_56_initializeSocket)
HXLINE(  57)		if (::hx::IsNotNull( this->socket )) {
HXLINE(  57)			return false;
            		}
HXLINE(  59)		this->socket =  ::networking::wrappers::SocketWrapper_obj::__alloc( HX_CTX ,null());
HXLINE(  60)		this->socket->bind(ip,port);
HXLINE(  61)		this->socket->listen(200);
HXLINE(  63)		return true;
            	}



::hx::ObjectPtr< ServerObject_obj > ServerObject_obj::__new( ::networking::sessions::Session session,::String uuid, ::networking::sessions::server::Server sv) {
	::hx::ObjectPtr< ServerObject_obj > __this = new ServerObject_obj();
	__this->__construct(session,uuid,sv);
	return __this;
}

::hx::ObjectPtr< ServerObject_obj > ServerObject_obj::__alloc(::hx::Ctx *_hx_ctx, ::networking::sessions::Session session,::String uuid, ::networking::sessions::server::Server sv) {
	ServerObject_obj *__this = (ServerObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ServerObject_obj), true, "networking.sessions.items.ServerObject"));
	*(void **)__this = ServerObject_obj::_hx_vtable;
	__this->__construct(session,uuid,sv);
	return __this;
}

ServerObject_obj::ServerObject_obj()
{
}

::hx::Val ServerObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"send") ) { return ::hx::Val( send_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"initializeSocket") ) { return ::hx::Val( initializeSocket_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ServerObject_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ServerObject_obj_sStaticStorageInfo = 0;
#endif

static ::String ServerObject_obj_sMemberFields[] = {
	HX_("toString",ac,d0,6e,38),
	HX_("send",48,8d,50,4c),
	HX_("initializeSocket",23,0d,46,a0),
	::String(null()) };

::hx::Class ServerObject_obj::__mClass;

void ServerObject_obj::__register()
{
	ServerObject_obj _hx_dummy;
	ServerObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.sessions.items.ServerObject",27,a2,6e,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ServerObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ServerObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ServerObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ServerObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace networking
} // end namespace sessions
} // end namespace items
