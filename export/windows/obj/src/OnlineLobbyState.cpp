#include <hxcpp.h>

#ifndef INCLUDED_OnlineLobbyState
#include <OnlineLobbyState.h>
#endif
#ifndef INCLUDED_SessionData
#include <SessionData.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_35c71ad03c192e71_18_new,"OnlineLobbyState","new",0xc0b6c8a0,"OnlineLobbyState.new","OnlineLobbyState.hx",18,0x50132ad0)
static const int _hx_array_data_26c638ae_1[] = {
	(int)-65536,(int)-16735489,(int)-7936,(int)-16717056,
};
HX_LOCAL_STACK_FRAME(_hx_pos_35c71ad03c192e71_38_create,"OnlineLobbyState","create",0xbc2516bc,"OnlineLobbyState.create","OnlineLobbyState.hx",38,0x50132ad0)
HX_LOCAL_STACK_FRAME(_hx_pos_35c71ad03c192e71_60_update,"OnlineLobbyState","update",0xc71b35c9,"OnlineLobbyState.update","OnlineLobbyState.hx",60,0x50132ad0)
HX_LOCAL_STACK_FRAME(_hx_pos_35c71ad03c192e71_72_updatePlayerCount,"OnlineLobbyState","updatePlayerCount",0x9f387e65,"OnlineLobbyState.updatePlayerCount","OnlineLobbyState.hx",72,0x50132ad0)
HX_LOCAL_STACK_FRAME(_hx_pos_35c71ad03c192e71_85_doPlayerMoveStuff,"OnlineLobbyState","doPlayerMoveStuff",0xfc763377,"OnlineLobbyState.doPlayerMoveStuff","OnlineLobbyState.hx",85,0x50132ad0)
HX_LOCAL_STACK_FRAME(_hx_pos_35c71ad03c192e71_20_boot,"OnlineLobbyState","boot",0xd751c3f2,"OnlineLobbyState.boot","OnlineLobbyState.hx",20,0x50132ad0)
static const int _hx_array_data_26c638ae_8[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_35c71ad03c192e71_22_boot,"OnlineLobbyState","boot",0xd751c3f2,"OnlineLobbyState.boot","OnlineLobbyState.hx",22,0x50132ad0)
HX_LOCAL_STACK_FRAME(_hx_pos_35c71ad03c192e71_23_boot,"OnlineLobbyState","boot",0xd751c3f2,"OnlineLobbyState.boot","OnlineLobbyState.hx",23,0x50132ad0)
HX_LOCAL_STACK_FRAME(_hx_pos_35c71ad03c192e71_31_boot,"OnlineLobbyState","boot",0xd751c3f2,"OnlineLobbyState.boot","OnlineLobbyState.hx",31,0x50132ad0)
static const Float _hx_array_data_26c638ae_12[] = {
	(Float)0,(Float)0,(Float)0,(Float)0,
};

void OnlineLobbyState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_35c71ad03c192e71_18_new)
HXLINE(  35)		this->lastx = ((Float)0);
HXLINE(  34)		this->sx = ((Float)0);
HXLINE(  29)		this->colors = ::Array_obj< int >::fromData( _hx_array_data_26c638ae_1,4);
HXLINE(  18)		super::__construct(MaxSize);
            	}

Dynamic OnlineLobbyState_obj::__CreateEmpty() { return new OnlineLobbyState_obj; }

void *OnlineLobbyState_obj::_hx_vtable = 0;

Dynamic OnlineLobbyState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OnlineLobbyState_obj > _hx_result = new OnlineLobbyState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool OnlineLobbyState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x79ba3dda) {
		if (inClassId<=(int)0x62817b24) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
		} else {
			return inClassId==(int)0x79ba3dda;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void OnlineLobbyState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_35c71ad03c192e71_38_create)
HXLINE(  39)		this->fartgroup =  ::flixel::group::FlxTypedSpriteGroup_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  40)		this->add(this->fartgroup);
HXLINE(  42)		{
HXLINE(  43)			{
HXLINE(  44)				 ::flixel::FlxSprite playerSQ =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  44)				 ::flixel::FlxSprite playerSQ1 = playerSQ->makeGraphic(200,200,this->colors->__get(0),null(),null());
HXLINE(  45)				playerSQ1->set_x(( (Float)(0) ));
HXLINE(  46)				::OnlineLobbyState_obj::playerx[0] = playerSQ1->x;
HXLINE(  47)				playerSQ1->ID = 0;
HXLINE(  48)				{
HXLINE(  48)					int axes = 16;
HXDLIN(  48)					bool _hx_tmp;
HXDLIN(  48)					if ((axes != 1)) {
HXLINE(  48)						_hx_tmp = (axes == 17);
            					}
            					else {
HXLINE(  48)						_hx_tmp = true;
            					}
HXDLIN(  48)					if (_hx_tmp) {
HXLINE(  48)						int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  48)						playerSQ1->set_x(((( (Float)(_hx_tmp) ) - playerSQ1->get_width()) / ( (Float)(2) )));
            					}
HXDLIN(  48)					bool _hx_tmp1;
HXDLIN(  48)					if ((axes != 16)) {
HXLINE(  48)						_hx_tmp1 = (axes == 17);
            					}
            					else {
HXLINE(  48)						_hx_tmp1 = true;
            					}
HXDLIN(  48)					if (_hx_tmp1) {
HXLINE(  48)						int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  48)						playerSQ1->set_y(((( (Float)(_hx_tmp) ) - playerSQ1->get_height()) / ( (Float)(2) )));
            					}
            				}
HXLINE(  49)				this->fartgroup->add(playerSQ1).StaticCast<  ::flixel::FlxSprite >();
            			}
HXLINE(  43)			{
HXLINE(  44)				 ::flixel::FlxSprite playerSQ2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  44)				 ::flixel::FlxSprite playerSQ3 = playerSQ2->makeGraphic(200,200,this->colors->__get(1),null(),null());
HXLINE(  45)				playerSQ3->set_x(( (Float)(300) ));
HXLINE(  46)				::OnlineLobbyState_obj::playerx[1] = playerSQ3->x;
HXLINE(  47)				playerSQ3->ID = 1;
HXLINE(  48)				{
HXLINE(  48)					int axes1 = 16;
HXDLIN(  48)					bool _hx_tmp2;
HXDLIN(  48)					if ((axes1 != 1)) {
HXLINE(  48)						_hx_tmp2 = (axes1 == 17);
            					}
            					else {
HXLINE(  48)						_hx_tmp2 = true;
            					}
HXDLIN(  48)					if (_hx_tmp2) {
HXLINE(  48)						int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  48)						playerSQ3->set_x(((( (Float)(_hx_tmp) ) - playerSQ3->get_width()) / ( (Float)(2) )));
            					}
HXDLIN(  48)					bool _hx_tmp3;
HXDLIN(  48)					if ((axes1 != 16)) {
HXLINE(  48)						_hx_tmp3 = (axes1 == 17);
            					}
            					else {
HXLINE(  48)						_hx_tmp3 = true;
            					}
HXDLIN(  48)					if (_hx_tmp3) {
HXLINE(  48)						int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  48)						playerSQ3->set_y(((( (Float)(_hx_tmp) ) - playerSQ3->get_height()) / ( (Float)(2) )));
            					}
            				}
HXLINE(  49)				this->fartgroup->add(playerSQ3).StaticCast<  ::flixel::FlxSprite >();
            			}
HXLINE(  43)			{
HXLINE(  44)				 ::flixel::FlxSprite playerSQ4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  44)				 ::flixel::FlxSprite playerSQ5 = playerSQ4->makeGraphic(200,200,this->colors->__get(2),null(),null());
HXLINE(  45)				playerSQ5->set_x(( (Float)(600) ));
HXLINE(  46)				::OnlineLobbyState_obj::playerx[2] = playerSQ5->x;
HXLINE(  47)				playerSQ5->ID = 2;
HXLINE(  48)				{
HXLINE(  48)					int axes2 = 16;
HXDLIN(  48)					bool _hx_tmp4;
HXDLIN(  48)					if ((axes2 != 1)) {
HXLINE(  48)						_hx_tmp4 = (axes2 == 17);
            					}
            					else {
HXLINE(  48)						_hx_tmp4 = true;
            					}
HXDLIN(  48)					if (_hx_tmp4) {
HXLINE(  48)						int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  48)						playerSQ5->set_x(((( (Float)(_hx_tmp) ) - playerSQ5->get_width()) / ( (Float)(2) )));
            					}
HXDLIN(  48)					bool _hx_tmp5;
HXDLIN(  48)					if ((axes2 != 16)) {
HXLINE(  48)						_hx_tmp5 = (axes2 == 17);
            					}
            					else {
HXLINE(  48)						_hx_tmp5 = true;
            					}
HXDLIN(  48)					if (_hx_tmp5) {
HXLINE(  48)						int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  48)						playerSQ5->set_y(((( (Float)(_hx_tmp) ) - playerSQ5->get_height()) / ( (Float)(2) )));
            					}
            				}
HXLINE(  49)				this->fartgroup->add(playerSQ5).StaticCast<  ::flixel::FlxSprite >();
            			}
HXLINE(  43)			{
HXLINE(  44)				 ::flixel::FlxSprite playerSQ6 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  44)				 ::flixel::FlxSprite playerSQ7 = playerSQ6->makeGraphic(200,200,this->colors->__get(3),null(),null());
HXLINE(  45)				playerSQ7->set_x(( (Float)(900) ));
HXLINE(  46)				::OnlineLobbyState_obj::playerx[3] = playerSQ7->x;
HXLINE(  47)				playerSQ7->ID = 3;
HXLINE(  48)				{
HXLINE(  48)					int axes3 = 16;
HXDLIN(  48)					bool _hx_tmp6;
HXDLIN(  48)					if ((axes3 != 1)) {
HXLINE(  48)						_hx_tmp6 = (axes3 == 17);
            					}
            					else {
HXLINE(  48)						_hx_tmp6 = true;
            					}
HXDLIN(  48)					if (_hx_tmp6) {
HXLINE(  48)						int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  48)						playerSQ7->set_x(((( (Float)(_hx_tmp) ) - playerSQ7->get_width()) / ( (Float)(2) )));
            					}
HXDLIN(  48)					bool _hx_tmp7;
HXDLIN(  48)					if ((axes3 != 16)) {
HXLINE(  48)						_hx_tmp7 = (axes3 == 17);
            					}
            					else {
HXLINE(  48)						_hx_tmp7 = true;
            					}
HXDLIN(  48)					if (_hx_tmp7) {
HXLINE(  48)						int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  48)						playerSQ7->set_y(((( (Float)(_hx_tmp) ) - playerSQ7->get_height()) / ( (Float)(2) )));
            					}
            				}
HXLINE(  49)				this->fartgroup->add(playerSQ7).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE(  52)		this->debugText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,1280,HX_("Player ",7f,31,66,57),40,true);
HXLINE(  53)		{
HXLINE(  53)			 ::flixel::text::FlxText _this = this->debugText;
HXDLIN(  53)			int axes4 = 17;
HXDLIN(  53)			bool _hx_tmp8;
HXDLIN(  53)			if ((axes4 != 1)) {
HXLINE(  53)				_hx_tmp8 = (axes4 == 17);
            			}
            			else {
HXLINE(  53)				_hx_tmp8 = true;
            			}
HXDLIN(  53)			if (_hx_tmp8) {
HXLINE(  53)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  53)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  53)			bool _hx_tmp9;
HXDLIN(  53)			if ((axes4 != 16)) {
HXLINE(  53)				_hx_tmp9 = (axes4 == 17);
            			}
            			else {
HXLINE(  53)				_hx_tmp9 = true;
            			}
HXDLIN(  53)			if (_hx_tmp9) {
HXLINE(  53)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  53)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  54)		this->add(this->debugText);
HXLINE(  56)		this->super::create();
            	}


void OnlineLobbyState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_35c71ad03c192e71_60_update)
HXLINE(  61)		this->debugText->set_text((HX_("Player ",7f,31,66,57) + (::OnlineLobbyState_obj::yourPlayerID + 1)));
HXLINE(  63)		this->updatePlayerCount();
HXLINE(  65)		this->doPlayerMoveStuff();
HXLINE(  67)		this->super::update(elapsed);
            	}


void OnlineLobbyState_obj::updatePlayerCount(){
            	HX_STACKFRAME(&_hx_pos_35c71ad03c192e71_72_updatePlayerCount)
HXDLIN(  72)		int _g = 0;
HXDLIN(  72)		int _g1 = this->fartgroup->group->length;
HXDLIN(  72)		while((_g < _g1)){
HXDLIN(  72)			_g = (_g + 1);
HXDLIN(  72)			int i = (_g - 1);
HXLINE(  74)			Dynamic( this->fartgroup->group->members->__get(i)).StaticCast<  ::flixel::FlxSprite >()->set_alpha(( (Float)(0) ));
HXLINE(  75)			Dynamic( this->fartgroup->group->members->__get(i)).StaticCast<  ::flixel::FlxSprite >()->set_x(::OnlineLobbyState_obj::playerx->__get(i));
HXLINE(  77)			if ((Dynamic( this->fartgroup->group->members->__get(i)).StaticCast<  ::flixel::FlxSprite >()->ID <= (::OnlineLobbyState_obj::playerList->length - 1))) {
HXLINE(  79)				Dynamic( this->fartgroup->group->members->__get(i)).StaticCast<  ::flixel::FlxSprite >()->set_alpha(( (Float)(1) ));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(OnlineLobbyState_obj,updatePlayerCount,(void))

void OnlineLobbyState_obj::doPlayerMoveStuff(){
            	HX_STACKFRAME(&_hx_pos_35c71ad03c192e71_85_doPlayerMoveStuff)
HXLINE(  86)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  86)		if (_this->keyManager->checkStatusUnsafe(37,_this->status)) {
HXLINE(  88)			 ::OnlineLobbyState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  88)			_hx_tmp->sx = (_hx_tmp->sx - ((Float)1.5));
            		}
HXLINE(  90)		 ::flixel::input::keyboard::FlxKeyList _this1 = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  90)		if (_this1->keyManager->checkStatusUnsafe(39,_this1->status)) {
HXLINE(  92)			 ::OnlineLobbyState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  92)			_hx_tmp->sx = (_hx_tmp->sx + ((Float)1.5));
            		}
HXLINE(  94)		this->sx = (this->sx * ((Float)0.9));
HXLINE(  96)		::Array< Float > base = ::OnlineLobbyState_obj::playerx;
HXDLIN(  96)		int index = ::OnlineLobbyState_obj::yourPlayerID;
HXDLIN(  96)		base[index] = (base->__get(index) + this->sx);
HXLINE(  98)		if ((this->lastx != ::OnlineLobbyState_obj::playerx->__get(::OnlineLobbyState_obj::yourPlayerID))) {
HXLINE( 100)			::SessionData_obj::handlePlayerShit(HX_("move",11,e3,60,48),::OnlineLobbyState_obj::yourPlayerID);
HXLINE( 101)			this->lastx = ::OnlineLobbyState_obj::playerx->__get(::OnlineLobbyState_obj::yourPlayerID);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(OnlineLobbyState_obj,doPlayerMoveStuff,(void))

::Array< int > OnlineLobbyState_obj::playerList;

int OnlineLobbyState_obj::yourPlayerID;

bool OnlineLobbyState_obj::setplayerid;

::Array< Float > OnlineLobbyState_obj::playerx;


::hx::ObjectPtr< OnlineLobbyState_obj > OnlineLobbyState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< OnlineLobbyState_obj > __this = new OnlineLobbyState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< OnlineLobbyState_obj > OnlineLobbyState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	OnlineLobbyState_obj *__this = (OnlineLobbyState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OnlineLobbyState_obj), true, "OnlineLobbyState"));
	*(void **)__this = OnlineLobbyState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

OnlineLobbyState_obj::OnlineLobbyState_obj()
{
}

void OnlineLobbyState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OnlineLobbyState);
	HX_MARK_MEMBER_NAME(fartgroup,"fartgroup");
	HX_MARK_MEMBER_NAME(debugText,"debugText");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(sx,"sx");
	HX_MARK_MEMBER_NAME(lastx,"lastx");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OnlineLobbyState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fartgroup,"fartgroup");
	HX_VISIT_MEMBER_NAME(debugText,"debugText");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(sx,"sx");
	HX_VISIT_MEMBER_NAME(lastx,"lastx");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OnlineLobbyState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"sx") ) { return ::hx::Val( sx ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lastx") ) { return ::hx::Val( lastx ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { return ::hx::Val( colors ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fartgroup") ) { return ::hx::Val( fartgroup ); }
		if (HX_FIELD_EQ(inName,"debugText") ) { return ::hx::Val( debugText ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updatePlayerCount") ) { return ::hx::Val( updatePlayerCount_dyn() ); }
		if (HX_FIELD_EQ(inName,"doPlayerMoveStuff") ) { return ::hx::Val( doPlayerMoveStuff_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OnlineLobbyState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"playerx") ) { outValue = ( playerx ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playerList") ) { outValue = ( playerList ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setplayerid") ) { outValue = ( setplayerid ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"yourPlayerID") ) { outValue = ( yourPlayerID ); return true; }
	}
	return false;
}

::hx::Val OnlineLobbyState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"sx") ) { sx=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lastx") ) { lastx=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fartgroup") ) { fartgroup=inValue.Cast<  ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugText") ) { debugText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OnlineLobbyState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"playerx") ) { playerx=ioValue.Cast< ::Array< Float > >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playerList") ) { playerList=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setplayerid") ) { setplayerid=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"yourPlayerID") ) { yourPlayerID=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void OnlineLobbyState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("fartgroup",62,84,36,38));
	outFields->push(HX_("debugText",a0,70,45,30));
	outFields->push(HX_("colors",b0,c5,86,c6));
	outFields->push(HX_("sx",a5,64,00,00));
	outFields->push(HX_("lastx",62,01,bc,6f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OnlineLobbyState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedSpriteGroup */ ,(int)offsetof(OnlineLobbyState_obj,fartgroup),HX_("fartgroup",62,84,36,38)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OnlineLobbyState_obj,debugText),HX_("debugText",a0,70,45,30)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(OnlineLobbyState_obj,colors),HX_("colors",b0,c5,86,c6)},
	{::hx::fsFloat,(int)offsetof(OnlineLobbyState_obj,sx),HX_("sx",a5,64,00,00)},
	{::hx::fsFloat,(int)offsetof(OnlineLobbyState_obj,lastx),HX_("lastx",62,01,bc,6f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OnlineLobbyState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< int > */ ,(void *) &OnlineLobbyState_obj::playerList,HX_("playerList",5f,f8,74,aa)},
	{::hx::fsInt,(void *) &OnlineLobbyState_obj::yourPlayerID,HX_("yourPlayerID",4f,1e,7a,e7)},
	{::hx::fsBool,(void *) &OnlineLobbyState_obj::setplayerid,HX_("setplayerid",1e,af,02,9f)},
	{::hx::fsObject /* ::Array< Float > */ ,(void *) &OnlineLobbyState_obj::playerx,HX_("playerx",f7,09,15,8a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OnlineLobbyState_obj_sMemberFields[] = {
	HX_("fartgroup",62,84,36,38),
	HX_("debugText",a0,70,45,30),
	HX_("colors",b0,c5,86,c6),
	HX_("sx",a5,64,00,00),
	HX_("lastx",62,01,bc,6f),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("updatePlayerCount",25,96,ab,b5),
	HX_("doPlayerMoveStuff",37,4b,e9,12),
	::String(null()) };

static void OnlineLobbyState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OnlineLobbyState_obj::playerList,"playerList");
	HX_MARK_MEMBER_NAME(OnlineLobbyState_obj::yourPlayerID,"yourPlayerID");
	HX_MARK_MEMBER_NAME(OnlineLobbyState_obj::setplayerid,"setplayerid");
	HX_MARK_MEMBER_NAME(OnlineLobbyState_obj::playerx,"playerx");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OnlineLobbyState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OnlineLobbyState_obj::playerList,"playerList");
	HX_VISIT_MEMBER_NAME(OnlineLobbyState_obj::yourPlayerID,"yourPlayerID");
	HX_VISIT_MEMBER_NAME(OnlineLobbyState_obj::setplayerid,"setplayerid");
	HX_VISIT_MEMBER_NAME(OnlineLobbyState_obj::playerx,"playerx");
};

#endif

::hx::Class OnlineLobbyState_obj::__mClass;

static ::String OnlineLobbyState_obj_sStaticFields[] = {
	HX_("playerList",5f,f8,74,aa),
	HX_("yourPlayerID",4f,1e,7a,e7),
	HX_("setplayerid",1e,af,02,9f),
	HX_("playerx",f7,09,15,8a),
	::String(null())
};

void OnlineLobbyState_obj::__register()
{
	OnlineLobbyState_obj _hx_dummy;
	OnlineLobbyState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("OnlineLobbyState",ae,38,c6,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OnlineLobbyState_obj::__GetStatic;
	__mClass->mSetStaticField = &OnlineLobbyState_obj::__SetStatic;
	__mClass->mMarkFunc = OnlineLobbyState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OnlineLobbyState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OnlineLobbyState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OnlineLobbyState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OnlineLobbyState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OnlineLobbyState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OnlineLobbyState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OnlineLobbyState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_35c71ad03c192e71_20_boot)
HXDLIN(  20)		playerList = ::Array_obj< int >::fromData( _hx_array_data_26c638ae_8,1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_35c71ad03c192e71_22_boot)
HXDLIN(  22)		yourPlayerID = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_35c71ad03c192e71_23_boot)
HXDLIN(  23)		setplayerid = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_35c71ad03c192e71_31_boot)
HXDLIN(  31)		playerx = ::Array_obj< Float >::fromData( _hx_array_data_26c638ae_12,4);
            	}
}

