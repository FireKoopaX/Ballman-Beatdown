#include <hxcpp.h>

#ifndef INCLUDED_networking_sessions_Session
#include <networking/sessions/Session.h>
#endif
#ifndef INCLUDED_networking_utils_NetworkEvent
#include <networking/utils/NetworkEvent.h>
#endif
#ifndef INCLUDED_networking_utils_NetworkEventsQueue
#include <networking/utils/NetworkEventsQueue.h>
#endif
#ifndef INCLUDED_networking_wrappers_DequeWrapper_networking_utils_NetworkEvent
#include <networking/wrappers/DequeWrapper_networking_utils_NetworkEvent.h>
#endif
#ifndef INCLUDED_networking_wrappers_MutexWrapper
#include <networking/wrappers/MutexWrapper.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_755feef411ac25e4_23_new,"networking.utils.NetworkEventsQueue","new",0x67efda13,"networking.utils.NetworkEventsQueue.new","networking/utils/NetworkEventsQueue.hx",23,0x8bbb6ebb)
HX_LOCAL_STACK_FRAME(_hx_pos_755feef411ac25e4_37_dispatchEvent,"networking.utils.NetworkEventsQueue","dispatchEvent",0x364b0e73,"networking.utils.NetworkEventsQueue.dispatchEvent","networking/utils/NetworkEventsQueue.hx",37,0x8bbb6ebb)
HX_LOCAL_STACK_FRAME(_hx_pos_755feef411ac25e4_44_handleQueuedEvents,"networking.utils.NetworkEventsQueue","handleQueuedEvents",0x994260a1,"networking.utils.NetworkEventsQueue.handleQueuedEvents","networking/utils/NetworkEventsQueue.hx",44,0x8bbb6ebb)
HX_LOCAL_STACK_FRAME(_hx_pos_755feef411ac25e4_55_length,"networking.utils.NetworkEventsQueue","length",0x4a285d13,"networking.utils.NetworkEventsQueue.length","networking/utils/NetworkEventsQueue.hx",55,0x8bbb6ebb)
HX_LOCAL_STACK_FRAME(_hx_pos_755feef411ac25e4_67_popEvent,"networking.utils.NetworkEventsQueue","popEvent",0x29cffa36,"networking.utils.NetworkEventsQueue.popEvent","networking/utils/NetworkEventsQueue.hx",67,0x8bbb6ebb)
HX_LOCAL_STACK_FRAME(_hx_pos_755feef411ac25e4_78_addEvent,"networking.utils.NetworkEventsQueue","addEvent",0x3a26dba6,"networking.utils.NetworkEventsQueue.addEvent","networking/utils/NetworkEventsQueue.hx",78,0x8bbb6ebb)
HX_LOCAL_STACK_FRAME(_hx_pos_755feef411ac25e4_83_incrementCounterBy,"networking.utils.NetworkEventsQueue","incrementCounterBy",0xaed29371,"networking.utils.NetworkEventsQueue.incrementCounterBy","networking/utils/NetworkEventsQueue.hx",83,0x8bbb6ebb)
namespace networking{
namespace utils{

void NetworkEventsQueue_obj::__construct( ::networking::sessions::Session session){
            	HX_GC_STACKFRAME(&_hx_pos_755feef411ac25e4_23_new)
HXLINE(  24)		this->_session = session;
HXLINE(  25)		this->_queue =  ::networking::wrappers::DequeWrapper_networking_utils_NetworkEvent_obj::__alloc( HX_CTX );
HXLINE(  26)		this->_mutex =  ::networking::wrappers::MutexWrapper_obj::__alloc( HX_CTX );
HXLINE(  27)		this->_queue_size = 0;
            	}

Dynamic NetworkEventsQueue_obj::__CreateEmpty() { return new NetworkEventsQueue_obj; }

void *NetworkEventsQueue_obj::_hx_vtable = 0;

Dynamic NetworkEventsQueue_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NetworkEventsQueue_obj > _hx_result = new NetworkEventsQueue_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NetworkEventsQueue_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1cd0af47;
}

void NetworkEventsQueue_obj::dispatchEvent(::String label, ::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_755feef411ac25e4_37_dispatchEvent)
HXDLIN(  37)		this->addEvent( ::networking::utils::NetworkEvent_obj::__alloc( HX_CTX ,label,this->_session,data,null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC2(NetworkEventsQueue_obj,dispatchEvent,(void))

void NetworkEventsQueue_obj::handleQueuedEvents(){
            	HX_STACKFRAME(&_hx_pos_755feef411ac25e4_44_handleQueuedEvents)
HXLINE(  45)		 ::networking::utils::NetworkEvent event;
HXLINE(  46)		while(true){
HXLINE(  46)			 ::networking::utils::NetworkEvent event1 = this->_queue->pop();
HXDLIN(  46)			if (::hx::IsNotNull( event1 )) {
HXLINE(  46)				this->incrementCounterBy(-1);
            			}
HXDLIN(  46)			event = event1;
HXDLIN(  46)			if (!(::hx::IsNotNull( event ))) {
HXLINE(  46)				goto _hx_goto_2;
            			}
HXLINE(  47)			this->_session->dispatchEvent(event);
            		}
            		_hx_goto_2:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetworkEventsQueue_obj,handleQueuedEvents,(void))

int NetworkEventsQueue_obj::length(){
            	HX_STACKFRAME(&_hx_pos_755feef411ac25e4_55_length)
HXLINE(  56)		this->_mutex->acquire();
HXLINE(  57)		int value = this->_queue_size;
HXLINE(  58)		this->_mutex->release();
HXLINE(  59)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetworkEventsQueue_obj,length,return )

 ::networking::utils::NetworkEvent NetworkEventsQueue_obj::popEvent(){
            	HX_STACKFRAME(&_hx_pos_755feef411ac25e4_67_popEvent)
HXLINE(  68)		 ::networking::utils::NetworkEvent event = this->_queue->pop();
HXLINE(  69)		if (::hx::IsNotNull( event )) {
HXLINE(  69)			this->incrementCounterBy(-1);
            		}
HXLINE(  70)		return event;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NetworkEventsQueue_obj,popEvent,return )

void NetworkEventsQueue_obj::addEvent( ::networking::utils::NetworkEvent event){
            	HX_STACKFRAME(&_hx_pos_755feef411ac25e4_78_addEvent)
HXLINE(  79)		this->incrementCounterBy(1);
HXLINE(  80)		this->_queue->add(event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetworkEventsQueue_obj,addEvent,(void))

void NetworkEventsQueue_obj::incrementCounterBy(int value){
            	HX_STACKFRAME(&_hx_pos_755feef411ac25e4_83_incrementCounterBy)
HXLINE(  84)		this->_mutex->acquire();
HXLINE(  85)		 ::networking::utils::NetworkEventsQueue _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  85)		_hx_tmp->_queue_size = (_hx_tmp->_queue_size + value);
HXLINE(  86)		this->_mutex->release();
            	}


HX_DEFINE_DYNAMIC_FUNC1(NetworkEventsQueue_obj,incrementCounterBy,(void))


::hx::ObjectPtr< NetworkEventsQueue_obj > NetworkEventsQueue_obj::__new( ::networking::sessions::Session session) {
	::hx::ObjectPtr< NetworkEventsQueue_obj > __this = new NetworkEventsQueue_obj();
	__this->__construct(session);
	return __this;
}

::hx::ObjectPtr< NetworkEventsQueue_obj > NetworkEventsQueue_obj::__alloc(::hx::Ctx *_hx_ctx, ::networking::sessions::Session session) {
	NetworkEventsQueue_obj *__this = (NetworkEventsQueue_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NetworkEventsQueue_obj), true, "networking.utils.NetworkEventsQueue"));
	*(void **)__this = NetworkEventsQueue_obj::_hx_vtable;
	__this->__construct(session);
	return __this;
}

NetworkEventsQueue_obj::NetworkEventsQueue_obj()
{
}

void NetworkEventsQueue_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NetworkEventsQueue);
	HX_MARK_MEMBER_NAME(_queue,"_queue");
	HX_MARK_MEMBER_NAME(_mutex,"_mutex");
	HX_MARK_MEMBER_NAME(_queue_size,"_queue_size");
	HX_MARK_MEMBER_NAME(_session,"_session");
	HX_MARK_END_CLASS();
}

void NetworkEventsQueue_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_queue,"_queue");
	HX_VISIT_MEMBER_NAME(_mutex,"_mutex");
	HX_VISIT_MEMBER_NAME(_queue_size,"_queue_size");
	HX_VISIT_MEMBER_NAME(_session,"_session");
}

::hx::Val NetworkEventsQueue_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_queue") ) { return ::hx::Val( _queue ); }
		if (HX_FIELD_EQ(inName,"_mutex") ) { return ::hx::Val( _mutex ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_session") ) { return ::hx::Val( _session ); }
		if (HX_FIELD_EQ(inName,"popEvent") ) { return ::hx::Val( popEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"addEvent") ) { return ::hx::Val( addEvent_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_queue_size") ) { return ::hx::Val( _queue_size ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return ::hx::Val( dispatchEvent_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"handleQueuedEvents") ) { return ::hx::Val( handleQueuedEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"incrementCounterBy") ) { return ::hx::Val( incrementCounterBy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NetworkEventsQueue_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_queue") ) { _queue=inValue.Cast<  ::networking::wrappers::DequeWrapper_networking_utils_NetworkEvent >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mutex") ) { _mutex=inValue.Cast<  ::networking::wrappers::MutexWrapper >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_session") ) { _session=inValue.Cast<  ::networking::sessions::Session >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_queue_size") ) { _queue_size=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NetworkEventsQueue_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_queue",d2,d4,d1,59));
	outFields->push(HX_("_mutex",c0,d6,42,0c));
	outFields->push(HX_("_queue_size",8e,2e,64,0f));
	outFields->push(HX_("_session",d7,70,50,cd));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NetworkEventsQueue_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::networking::wrappers::DequeWrapper_networking_utils_NetworkEvent */ ,(int)offsetof(NetworkEventsQueue_obj,_queue),HX_("_queue",d2,d4,d1,59)},
	{::hx::fsObject /*  ::networking::wrappers::MutexWrapper */ ,(int)offsetof(NetworkEventsQueue_obj,_mutex),HX_("_mutex",c0,d6,42,0c)},
	{::hx::fsInt,(int)offsetof(NetworkEventsQueue_obj,_queue_size),HX_("_queue_size",8e,2e,64,0f)},
	{::hx::fsObject /*  ::networking::sessions::Session */ ,(int)offsetof(NetworkEventsQueue_obj,_session),HX_("_session",d7,70,50,cd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NetworkEventsQueue_obj_sStaticStorageInfo = 0;
#endif

static ::String NetworkEventsQueue_obj_sMemberFields[] = {
	HX_("_queue",d2,d4,d1,59),
	HX_("_mutex",c0,d6,42,0c),
	HX_("_queue_size",8e,2e,64,0f),
	HX_("_session",d7,70,50,cd),
	HX_("dispatchEvent",00,c7,64,c6),
	HX_("handleQueuedEvents",f4,88,3f,19),
	HX_("length",e6,94,07,9f),
	HX_("popEvent",c9,0c,cb,de),
	HX_("addEvent",39,ee,21,ef),
	HX_("incrementCounterBy",c4,bb,cf,2e),
	::String(null()) };

::hx::Class NetworkEventsQueue_obj::__mClass;

void NetworkEventsQueue_obj::__register()
{
	NetworkEventsQueue_obj _hx_dummy;
	NetworkEventsQueue_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("networking.utils.NetworkEventsQueue",a1,d4,b6,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NetworkEventsQueue_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NetworkEventsQueue_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NetworkEventsQueue_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NetworkEventsQueue_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace networking
} // end namespace utils
