#include <hxcpp.h>

#ifndef INCLUDED_OnlineLobbyState
#include <OnlineLobbyState.h>
#endif
#ifndef INCLUDED_SessionData
#include <SessionData.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_networking_Network
#include <networking/Network.h>
#endif
#ifndef INCLUDED_networking_sessions_Session
#include <networking/sessions/Session.h>
#endif
#ifndef INCLUDED_networking_utils_NetworkEvent
#include <networking/utils/NetworkEvent.h>
#endif
#ifndef INCLUDED_networking_utils_NetworkMode
#include <networking/utils/NetworkMode.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4a3ab1ad138a1120_17_start,"SessionData","start",0x7fad01f4,"SessionData.start","SessionData.hx",17,0xd7fe7e3e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a3ab1ad138a1120_28_onMessageRecieved,"SessionData","onMessageRecieved",0x8419afc3,"SessionData.onMessageRecieved","SessionData.hx",28,0xd7fe7e3e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a3ab1ad138a1120_64_onConnected,"SessionData","onConnected",0xb940ccbc,"SessionData.onConnected","SessionData.hx",64,0xd7fe7e3e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a3ab1ad138a1120_84_onDisconnect,"SessionData","onDisconnect",0xd3a72f09,"SessionData.onDisconnect","SessionData.hx",84,0xd7fe7e3e)
HX_LOCAL_STACK_FRAME(_hx_pos_4a3ab1ad138a1120_100_handlePlayerShit,"SessionData","handlePlayerShit",0x43676d37,"SessionData.handlePlayerShit","SessionData.hx",100,0xd7fe7e3e)

void SessionData_obj::__construct() { }

Dynamic SessionData_obj::__CreateEmpty() { return new SessionData_obj; }

void *SessionData_obj::_hx_vtable = 0;

Dynamic SessionData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SessionData_obj > _hx_result = new SessionData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SessionData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x060b4068;
}

 ::networking::sessions::Session SessionData_obj::_session;

void SessionData_obj::start( ::networking::utils::NetworkMode mode, ::Dynamic params){
            	HX_STACKFRAME(&_hx_pos_4a3ab1ad138a1120_17_start)
HXLINE(  18)		::SessionData_obj::_session = ::networking::Network_obj::registerSession(mode,params);
HXLINE(  20)		::SessionData_obj::_session->addEventListener(HX_("NETWORK_EVENT_CONNECTED",f3,a1,8c,f2),::SessionData_obj::onConnected_dyn(),null(),null(),null());
HXLINE(  21)		::SessionData_obj::_session->addEventListener(HX_("NETWORK_EVENT_MESSAGE_RECEIVED",ef,63,8e,0b),::SessionData_obj::onMessageRecieved_dyn(),null(),null(),null());
HXLINE(  22)		::SessionData_obj::_session->addEventListener(HX_("NETWORK_EVENT_DISCONNECTED",b1,be,61,c5),::SessionData_obj::onDisconnect_dyn(),null(),null(),null());
HXLINE(  24)		::SessionData_obj::_session->start();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SessionData_obj,start,(void))

void SessionData_obj::onMessageRecieved( ::networking::utils::NetworkEvent e){
            	HX_STACKFRAME(&_hx_pos_4a3ab1ad138a1120_28_onMessageRecieved)
HXLINE(  29)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  29)		::String _hx_tmp1 = (HX_("message ",79,d8,fd,34) + ::Std_obj::string(::SessionData_obj::_session->mode));
HXDLIN(  29)		_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/SessionData.hx",32,50,98,a1),29,HX_("SessionData",80,94,d4,0c),HX_("onMessageRecieved",31,0f,11,4e)));
HXLINE(  30)		switch((int)(::SessionData_obj::_session->mode->_hx_getIndex())){
            			case (int)0: {
HXLINE(  33)				::String _hx_switch_0 = e->get_verb();
            				if (  (_hx_switch_0==HX_("disconnect",5c,64,44,69)) ){
HXLINE(  39)					::OnlineLobbyState_obj::playerList->remove(0);
HXDLIN(  39)					goto _hx_goto_1;
            				}
            				if (  (_hx_switch_0==HX_("playerJoin",eb,0f,27,a9)) ){
HXLINE(  36)					::haxe::Log_obj::trace(HX_("pushed server",4a,07,b8,c4),::hx::SourceInfo(HX_("source/SessionData.hx",32,50,98,a1),36,HX_("SessionData",80,94,d4,0c),HX_("onMessageRecieved",31,0f,11,4e)));
HXLINE(  37)					::OnlineLobbyState_obj::playerList->push(0);
HXLINE(  35)					goto _hx_goto_1;
            				}
            				_hx_goto_1:;
            			}
            			break;
            			case (int)1: {
HXLINE(  42)				if ((e->get_verb() == HX_("updatePC",3c,20,fa,77))) {
HXLINE(  45)					::Array< int > _hx_tmp = ::OnlineLobbyState_obj::playerList;
HXDLIN(  45)					_hx_tmp->resize(( (int)((e->get_data()->__Field(HX_("val",e1,de,59,00),::hx::paccDynamic) + 1)) ));
HXLINE(  47)					if (!(::OnlineLobbyState_obj::setplayerid)) {
HXLINE(  49)						::OnlineLobbyState_obj::yourPlayerID = ( (int)(e->get_data()->__Field(HX_("val",e1,de,59,00),::hx::paccDynamic)) );
HXLINE(  50)						::OnlineLobbyState_obj::setplayerid = true;
            					}
            				}
            			}
            			break;
            		}
HXLINE(  55)		if ((e->get_verb() == HX_("playerMove",12,bf,22,ab))) {
HXLINE(  58)			::OnlineLobbyState_obj::playerx[( (int)(e->get_data()->__Field(HX_("p",70,00,00,00),::hx::paccDynamic)) )] = ( (Float)(e->get_data()->__Field(HX_("tx",84,65,00,00),::hx::paccDynamic)) );
HXLINE(  59)			::haxe::Log_obj::trace(HX_("got move player message",63,69,51,2b),::hx::SourceInfo(HX_("source/SessionData.hx",32,50,98,a1),59,HX_("SessionData",80,94,d4,0c),HX_("onMessageRecieved",31,0f,11,4e)));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SessionData_obj,onMessageRecieved,(void))

void SessionData_obj::onConnected( ::networking::utils::NetworkEvent e){
            	HX_STACKFRAME(&_hx_pos_4a3ab1ad138a1120_64_onConnected)
HXLINE(  65)		::SessionData_obj::_session->send( ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("verb",9f,34,4c,4e),HX_("playerJoin",eb,0f,27,a9))));
HXLINE(  67)		switch((int)(::SessionData_obj::_session->mode->_hx_getIndex())){
            			case (int)0: {
HXLINE(  70)				::SessionData_obj::_session->send( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("val",e1,de,59,00),::OnlineLobbyState_obj::playerList->length)
            					->setFixed(1,HX_("verb",9f,34,4c,4e),HX_("updatePC",3c,20,fa,77))));
HXLINE(  71)				::haxe::Log_obj::trace(HX_("Server connected!",55,2b,0c,fc),::hx::SourceInfo(HX_("source/SessionData.hx",32,50,98,a1),71,HX_("SessionData",80,94,d4,0c),HX_("onConnected",aa,c5,39,c5)));
HXLINE(  72)				::OnlineLobbyState_obj::yourPlayerID = 0;
HXLINE(  74)				{
HXLINE(  74)					int _g = 0;
HXDLIN(  74)					int _g1 = ::OnlineLobbyState_obj::playerList->length;
HXDLIN(  74)					while((_g < _g1)){
HXLINE(  74)						_g = (_g + 1);
HXDLIN(  74)						int i = (_g - 1);
HXLINE(  76)						::SessionData_obj::_session->send( ::Dynamic(::hx::Anon_obj::Create(3)
            							->setFixed(0,HX_("p",70,00,00,00),i)
            							->setFixed(1,HX_("tx",84,65,00,00),::OnlineLobbyState_obj::playerx->__get(i))
            							->setFixed(2,HX_("verb",9f,34,4c,4e),HX_("playerMove",12,bf,22,ab))));
            					}
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(  79)				::haxe::Log_obj::trace(HX_("Client connected!",cd,48,08,0c),::hx::SourceInfo(HX_("source/SessionData.hx",32,50,98,a1),79,HX_("SessionData",80,94,d4,0c),HX_("onConnected",aa,c5,39,c5)));
            			}
            			break;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SessionData_obj,onConnected,(void))

void SessionData_obj::onDisconnect( ::networking::utils::NetworkEvent e){
            	HX_STACKFRAME(&_hx_pos_4a3ab1ad138a1120_84_onDisconnect)
HXLINE(  85)		::SessionData_obj::_session->send( ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("verb",9f,34,4c,4e),HX_("disconnect",5c,64,44,69))));
HXLINE(  87)		::haxe::Log_obj::trace(HX_("butt",13,16,20,41),::hx::SourceInfo(HX_("source/SessionData.hx",32,50,98,a1),87,HX_("SessionData",80,94,d4,0c),HX_("onDisconnect",5b,06,88,41)));
HXLINE(  88)		switch((int)(::SessionData_obj::_session->mode->_hx_getIndex())){
            			case (int)0: {
HXLINE(  91)				::OnlineLobbyState_obj::playerList->remove(0);
HXLINE(  92)				::SessionData_obj::_session->send( ::Dynamic(::hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("val",e1,de,59,00),::OnlineLobbyState_obj::playerList->length)
            					->setFixed(1,HX_("verb",9f,34,4c,4e),HX_("updatePC",3c,20,fa,77))));
            			}
            			break;
            			case (int)1: {
HXLINE(  94)				::haxe::Log_obj::trace(HX_("negro thompson",e7,14,31,ff),::hx::SourceInfo(HX_("source/SessionData.hx",32,50,98,a1),94,HX_("SessionData",80,94,d4,0c),HX_("onDisconnect",5b,06,88,41)));
            			}
            			break;
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SessionData_obj,onDisconnect,(void))

void SessionData_obj::handlePlayerShit(::String type,int player){
            	HX_STACKFRAME(&_hx_pos_4a3ab1ad138a1120_100_handlePlayerShit)
HXDLIN( 100)		if ((type == HX_("move",11,e3,60,48))) {
HXLINE( 103)			::SessionData_obj::_session->send( ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("p",70,00,00,00),player)
            				->setFixed(1,HX_("tx",84,65,00,00),::OnlineLobbyState_obj::playerx->__get(player))
            				->setFixed(2,HX_("verb",9f,34,4c,4e),HX_("playerMove",12,bf,22,ab))));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SessionData_obj,handlePlayerShit,(void))


SessionData_obj::SessionData_obj()
{
}

bool SessionData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_session") ) { outValue = ( _session ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onConnected") ) { outValue = onConnected_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { outValue = onDisconnect_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"handlePlayerShit") ) { outValue = handlePlayerShit_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"onMessageRecieved") ) { outValue = onMessageRecieved_dyn(); return true; }
	}
	return false;
}

bool SessionData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_session") ) { _session=ioValue.Cast<  ::networking::sessions::Session >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SessionData_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo SessionData_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::networking::sessions::Session */ ,(void *) &SessionData_obj::_session,HX_("_session",d7,70,50,cd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void SessionData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SessionData_obj::_session,"_session");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SessionData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SessionData_obj::_session,"_session");
};

#endif

::hx::Class SessionData_obj::__mClass;

static ::String SessionData_obj_sStaticFields[] = {
	HX_("_session",d7,70,50,cd),
	HX_("start",62,74,0b,84),
	HX_("onMessageRecieved",31,0f,11,4e),
	HX_("onConnected",aa,c5,39,c5),
	HX_("onDisconnect",5b,06,88,41),
	HX_("handlePlayerShit",89,55,db,7e),
	::String(null())
};

void SessionData_obj::__register()
{
	SessionData_obj _hx_dummy;
	SessionData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("SessionData",80,94,d4,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SessionData_obj::__GetStatic;
	__mClass->mSetStaticField = &SessionData_obj::__SetStatic;
	__mClass->mMarkFunc = SessionData_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SessionData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SessionData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SessionData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SessionData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SessionData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

