#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_9_new,"flixel.input.keyboard.FlxKeyList","new",0xfff37fce,"flixel.input.keyboard.FlxKeyList.new","flixel/input/keyboard/FlxKeyList.hx",9,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_14_get_A,"flixel.input.keyboard.FlxKeyList","get_A",0x7bdd8c06,"flixel.input.keyboard.FlxKeyList.get_A","flixel/input/keyboard/FlxKeyList.hx",14,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_19_get_B,"flixel.input.keyboard.FlxKeyList","get_B",0x7bdd8c07,"flixel.input.keyboard.FlxKeyList.get_B","flixel/input/keyboard/FlxKeyList.hx",19,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_24_get_C,"flixel.input.keyboard.FlxKeyList","get_C",0x7bdd8c08,"flixel.input.keyboard.FlxKeyList.get_C","flixel/input/keyboard/FlxKeyList.hx",24,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_29_get_D,"flixel.input.keyboard.FlxKeyList","get_D",0x7bdd8c09,"flixel.input.keyboard.FlxKeyList.get_D","flixel/input/keyboard/FlxKeyList.hx",29,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_34_get_E,"flixel.input.keyboard.FlxKeyList","get_E",0x7bdd8c0a,"flixel.input.keyboard.FlxKeyList.get_E","flixel/input/keyboard/FlxKeyList.hx",34,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_39_get_F,"flixel.input.keyboard.FlxKeyList","get_F",0x7bdd8c0b,"flixel.input.keyboard.FlxKeyList.get_F","flixel/input/keyboard/FlxKeyList.hx",39,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_44_get_G,"flixel.input.keyboard.FlxKeyList","get_G",0x7bdd8c0c,"flixel.input.keyboard.FlxKeyList.get_G","flixel/input/keyboard/FlxKeyList.hx",44,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_49_get_H,"flixel.input.keyboard.FlxKeyList","get_H",0x7bdd8c0d,"flixel.input.keyboard.FlxKeyList.get_H","flixel/input/keyboard/FlxKeyList.hx",49,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_54_get_I,"flixel.input.keyboard.FlxKeyList","get_I",0x7bdd8c0e,"flixel.input.keyboard.FlxKeyList.get_I","flixel/input/keyboard/FlxKeyList.hx",54,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_59_get_J,"flixel.input.keyboard.FlxKeyList","get_J",0x7bdd8c0f,"flixel.input.keyboard.FlxKeyList.get_J","flixel/input/keyboard/FlxKeyList.hx",59,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_64_get_K,"flixel.input.keyboard.FlxKeyList","get_K",0x7bdd8c10,"flixel.input.keyboard.FlxKeyList.get_K","flixel/input/keyboard/FlxKeyList.hx",64,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_69_get_L,"flixel.input.keyboard.FlxKeyList","get_L",0x7bdd8c11,"flixel.input.keyboard.FlxKeyList.get_L","flixel/input/keyboard/FlxKeyList.hx",69,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_74_get_M,"flixel.input.keyboard.FlxKeyList","get_M",0x7bdd8c12,"flixel.input.keyboard.FlxKeyList.get_M","flixel/input/keyboard/FlxKeyList.hx",74,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_79_get_N,"flixel.input.keyboard.FlxKeyList","get_N",0x7bdd8c13,"flixel.input.keyboard.FlxKeyList.get_N","flixel/input/keyboard/FlxKeyList.hx",79,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_84_get_O,"flixel.input.keyboard.FlxKeyList","get_O",0x7bdd8c14,"flixel.input.keyboard.FlxKeyList.get_O","flixel/input/keyboard/FlxKeyList.hx",84,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_89_get_P,"flixel.input.keyboard.FlxKeyList","get_P",0x7bdd8c15,"flixel.input.keyboard.FlxKeyList.get_P","flixel/input/keyboard/FlxKeyList.hx",89,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_94_get_Q,"flixel.input.keyboard.FlxKeyList","get_Q",0x7bdd8c16,"flixel.input.keyboard.FlxKeyList.get_Q","flixel/input/keyboard/FlxKeyList.hx",94,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_99_get_R,"flixel.input.keyboard.FlxKeyList","get_R",0x7bdd8c17,"flixel.input.keyboard.FlxKeyList.get_R","flixel/input/keyboard/FlxKeyList.hx",99,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_104_get_S,"flixel.input.keyboard.FlxKeyList","get_S",0x7bdd8c18,"flixel.input.keyboard.FlxKeyList.get_S","flixel/input/keyboard/FlxKeyList.hx",104,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_109_get_T,"flixel.input.keyboard.FlxKeyList","get_T",0x7bdd8c19,"flixel.input.keyboard.FlxKeyList.get_T","flixel/input/keyboard/FlxKeyList.hx",109,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_114_get_U,"flixel.input.keyboard.FlxKeyList","get_U",0x7bdd8c1a,"flixel.input.keyboard.FlxKeyList.get_U","flixel/input/keyboard/FlxKeyList.hx",114,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_119_get_V,"flixel.input.keyboard.FlxKeyList","get_V",0x7bdd8c1b,"flixel.input.keyboard.FlxKeyList.get_V","flixel/input/keyboard/FlxKeyList.hx",119,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_124_get_W,"flixel.input.keyboard.FlxKeyList","get_W",0x7bdd8c1c,"flixel.input.keyboard.FlxKeyList.get_W","flixel/input/keyboard/FlxKeyList.hx",124,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_129_get_X,"flixel.input.keyboard.FlxKeyList","get_X",0x7bdd8c1d,"flixel.input.keyboard.FlxKeyList.get_X","flixel/input/keyboard/FlxKeyList.hx",129,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_134_get_Y,"flixel.input.keyboard.FlxKeyList","get_Y",0x7bdd8c1e,"flixel.input.keyboard.FlxKeyList.get_Y","flixel/input/keyboard/FlxKeyList.hx",134,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_139_get_Z,"flixel.input.keyboard.FlxKeyList","get_Z",0x7bdd8c1f,"flixel.input.keyboard.FlxKeyList.get_Z","flixel/input/keyboard/FlxKeyList.hx",139,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_144_get_ZERO,"flixel.input.keyboard.FlxKeyList","get_ZERO",0x2ad43483,"flixel.input.keyboard.FlxKeyList.get_ZERO","flixel/input/keyboard/FlxKeyList.hx",144,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_149_get_ONE,"flixel.input.keyboard.FlxKeyList","get_ONE",0x5767fd4b,"flixel.input.keyboard.FlxKeyList.get_ONE","flixel/input/keyboard/FlxKeyList.hx",149,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_154_get_TWO,"flixel.input.keyboard.FlxKeyList","get_TWO",0x576bd071,"flixel.input.keyboard.FlxKeyList.get_TWO","flixel/input/keyboard/FlxKeyList.hx",154,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_159_get_THREE,"flixel.input.keyboard.FlxKeyList","get_THREE",0xdc6dde83,"flixel.input.keyboard.FlxKeyList.get_THREE","flixel/input/keyboard/FlxKeyList.hx",159,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_164_get_FOUR,"flixel.input.keyboard.FlxKeyList","get_FOUR",0x1da38941,"flixel.input.keyboard.FlxKeyList.get_FOUR","flixel/input/keyboard/FlxKeyList.hx",164,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_169_get_FIVE,"flixel.input.keyboard.FlxKeyList","get_FIVE",0x1d9efc8d,"flixel.input.keyboard.FlxKeyList.get_FIVE","flixel/input/keyboard/FlxKeyList.hx",169,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_174_get_SIX,"flixel.input.keyboard.FlxKeyList","get_SIX",0x576b0207,"flixel.input.keyboard.FlxKeyList.get_SIX","flixel/input/keyboard/FlxKeyList.hx",174,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_179_get_SEVEN,"flixel.input.keyboard.FlxKeyList","get_SEVEN",0x470eaf32,"flixel.input.keyboard.FlxKeyList.get_SEVEN","flixel/input/keyboard/FlxKeyList.hx",179,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_184_get_EIGHT,"flixel.input.keyboard.FlxKeyList","get_EIGHT",0x3a0c0b74,"flixel.input.keyboard.FlxKeyList.get_EIGHT","flixel/input/keyboard/FlxKeyList.hx",184,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_189_get_NINE,"flixel.input.keyboard.FlxKeyList","get_NINE",0x22e8aa8d,"flixel.input.keyboard.FlxKeyList.get_NINE","flixel/input/keyboard/FlxKeyList.hx",189,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_194_get_PAGEUP,"flixel.input.keyboard.FlxKeyList","get_PAGEUP",0x5b340885,"flixel.input.keyboard.FlxKeyList.get_PAGEUP","flixel/input/keyboard/FlxKeyList.hx",194,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_199_get_PAGEDOWN,"flixel.input.keyboard.FlxKeyList","get_PAGEDOWN",0x8b6ddd0c,"flixel.input.keyboard.FlxKeyList.get_PAGEDOWN","flixel/input/keyboard/FlxKeyList.hx",199,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_204_get_HOME,"flixel.input.keyboard.FlxKeyList","get_HOME",0x1ef5ef7a,"flixel.input.keyboard.FlxKeyList.get_HOME","flixel/input/keyboard/FlxKeyList.hx",204,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_209_get_END,"flixel.input.keyboard.FlxKeyList","get_END",0x576066c0,"flixel.input.keyboard.FlxKeyList.get_END","flixel/input/keyboard/FlxKeyList.hx",209,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_214_get_INSERT,"flixel.input.keyboard.FlxKeyList","get_INSERT",0x12d89954,"flixel.input.keyboard.FlxKeyList.get_INSERT","flixel/input/keyboard/FlxKeyList.hx",214,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_219_get_ESCAPE,"flixel.input.keyboard.FlxKeyList","get_ESCAPE",0x4fd5999c,"flixel.input.keyboard.FlxKeyList.get_ESCAPE","flixel/input/keyboard/FlxKeyList.hx",219,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_224_get_MINUS,"flixel.input.keyboard.FlxKeyList","get_MINUS",0xd5460a95,"flixel.input.keyboard.FlxKeyList.get_MINUS","flixel/input/keyboard/FlxKeyList.hx",224,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_229_get_PLUS,"flixel.input.keyboard.FlxKeyList","get_PLUS",0x243d64b5,"flixel.input.keyboard.FlxKeyList.get_PLUS","flixel/input/keyboard/FlxKeyList.hx",229,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_234_get_DELETE,"flixel.input.keyboard.FlxKeyList","get_DELETE",0xdfd41646,"flixel.input.keyboard.FlxKeyList.get_DELETE","flixel/input/keyboard/FlxKeyList.hx",234,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_239_get_BACKSPACE,"flixel.input.keyboard.FlxKeyList","get_BACKSPACE",0x4ee94de4,"flixel.input.keyboard.FlxKeyList.get_BACKSPACE","flixel/input/keyboard/FlxKeyList.hx",239,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_244_get_LBRACKET,"flixel.input.keyboard.FlxKeyList","get_LBRACKET",0xe7dfe217,"flixel.input.keyboard.FlxKeyList.get_LBRACKET","flixel/input/keyboard/FlxKeyList.hx",244,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_249_get_RBRACKET,"flixel.input.keyboard.FlxKeyList","get_RBRACKET",0x3f0e8ed1,"flixel.input.keyboard.FlxKeyList.get_RBRACKET","flixel/input/keyboard/FlxKeyList.hx",249,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_254_get_BACKSLASH,"flixel.input.keyboard.FlxKeyList","get_BACKSLASH",0x4c44815b,"flixel.input.keyboard.FlxKeyList.get_BACKSLASH","flixel/input/keyboard/FlxKeyList.hx",254,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_259_get_CAPSLOCK,"flixel.input.keyboard.FlxKeyList","get_CAPSLOCK",0x51fa1367,"flixel.input.keyboard.FlxKeyList.get_CAPSLOCK","flixel/input/keyboard/FlxKeyList.hx",259,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_264_get_SCROLL_LOCK,"flixel.input.keyboard.FlxKeyList","get_SCROLL_LOCK",0xb60900a2,"flixel.input.keyboard.FlxKeyList.get_SCROLL_LOCK","flixel/input/keyboard/FlxKeyList.hx",264,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_269_get_NUMLOCK,"flixel.input.keyboard.FlxKeyList","get_NUMLOCK",0x974f1696,"flixel.input.keyboard.FlxKeyList.get_NUMLOCK","flixel/input/keyboard/FlxKeyList.hx",269,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_274_get_SEMICOLON,"flixel.input.keyboard.FlxKeyList","get_SEMICOLON",0xd1d0ded6,"flixel.input.keyboard.FlxKeyList.get_SEMICOLON","flixel/input/keyboard/FlxKeyList.hx",274,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_279_get_QUOTE,"flixel.input.keyboard.FlxKeyList","get_QUOTE",0x2acfad61,"flixel.input.keyboard.FlxKeyList.get_QUOTE","flixel/input/keyboard/FlxKeyList.hx",279,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_284_get_ENTER,"flixel.input.keyboard.FlxKeyList","get_ENTER",0x3d63f73d,"flixel.input.keyboard.FlxKeyList.get_ENTER","flixel/input/keyboard/FlxKeyList.hx",284,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_289_get_SHIFT,"flixel.input.keyboard.FlxKeyList","get_SHIFT",0x490076a7,"flixel.input.keyboard.FlxKeyList.get_SHIFT","flixel/input/keyboard/FlxKeyList.hx",289,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_294_get_COMMA,"flixel.input.keyboard.FlxKeyList","get_COMMA",0x173abbfa,"flixel.input.keyboard.FlxKeyList.get_COMMA","flixel/input/keyboard/FlxKeyList.hx",294,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_299_get_PERIOD,"flixel.input.keyboard.FlxKeyList","get_PERIOD",0xb016b71c,"flixel.input.keyboard.FlxKeyList.get_PERIOD","flixel/input/keyboard/FlxKeyList.hx",299,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_304_get_SLASH,"flixel.input.keyboard.FlxKeyList","get_SLASH",0x4b9f4a62,"flixel.input.keyboard.FlxKeyList.get_SLASH","flixel/input/keyboard/FlxKeyList.hx",304,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_309_get_GRAVEACCENT,"flixel.input.keyboard.FlxKeyList","get_GRAVEACCENT",0xd01c3774,"flixel.input.keyboard.FlxKeyList.get_GRAVEACCENT","flixel/input/keyboard/FlxKeyList.hx",309,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_314_get_CONTROL,"flixel.input.keyboard.FlxKeyList","get_CONTROL",0x00716cc2,"flixel.input.keyboard.FlxKeyList.get_CONTROL","flixel/input/keyboard/FlxKeyList.hx",314,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_319_get_ALT,"flixel.input.keyboard.FlxKeyList","get_ALT",0x575d5c0e,"flixel.input.keyboard.FlxKeyList.get_ALT","flixel/input/keyboard/FlxKeyList.hx",319,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_324_get_SPACE,"flixel.input.keyboard.FlxKeyList","get_SPACE",0x4e4416eb,"flixel.input.keyboard.FlxKeyList.get_SPACE","flixel/input/keyboard/FlxKeyList.hx",324,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_329_get_UP,"flixel.input.keyboard.FlxKeyList","get_UP",0xe5fd0af6,"flixel.input.keyboard.FlxKeyList.get_UP","flixel/input/keyboard/FlxKeyList.hx",329,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_334_get_DOWN,"flixel.input.keyboard.FlxKeyList","get_DOWN",0x1c511dbd,"flixel.input.keyboard.FlxKeyList.get_DOWN","flixel/input/keyboard/FlxKeyList.hx",334,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_339_get_LEFT,"flixel.input.keyboard.FlxKeyList","get_LEFT",0x21932d62,"flixel.input.keyboard.FlxKeyList.get_LEFT","flixel/input/keyboard/FlxKeyList.hx",339,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_344_get_RIGHT,"flixel.input.keyboard.FlxKeyList","get_RIGHT",0xb6419601,"flixel.input.keyboard.FlxKeyList.get_RIGHT","flixel/input/keyboard/FlxKeyList.hx",344,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_349_get_TAB,"flixel.input.keyboard.FlxKeyList","get_TAB",0x576bbd3a,"flixel.input.keyboard.FlxKeyList.get_TAB","flixel/input/keyboard/FlxKeyList.hx",349,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_354_get_WINDOWS,"flixel.input.keyboard.FlxKeyList","get_WINDOWS",0xcf64dfe8,"flixel.input.keyboard.FlxKeyList.get_WINDOWS","flixel/input/keyboard/FlxKeyList.hx",354,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_359_get_MENU,"flixel.input.keyboard.FlxKeyList","get_MENU",0x223c6afa,"flixel.input.keyboard.FlxKeyList.get_MENU","flixel/input/keyboard/FlxKeyList.hx",359,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_364_get_PRINTSCREEN,"flixel.input.keyboard.FlxKeyList","get_PRINTSCREEN",0xd1fe533e,"flixel.input.keyboard.FlxKeyList.get_PRINTSCREEN","flixel/input/keyboard/FlxKeyList.hx",364,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_369_get_BREAK,"flixel.input.keyboard.FlxKeyList","get_BREAK",0x85c9aee4,"flixel.input.keyboard.FlxKeyList.get_BREAK","flixel/input/keyboard/FlxKeyList.hx",369,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_374_get_F1,"flixel.input.keyboard.FlxKeyList","get_F1",0xe5fcfdc6,"flixel.input.keyboard.FlxKeyList.get_F1","flixel/input/keyboard/FlxKeyList.hx",374,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_379_get_F2,"flixel.input.keyboard.FlxKeyList","get_F2",0xe5fcfdc7,"flixel.input.keyboard.FlxKeyList.get_F2","flixel/input/keyboard/FlxKeyList.hx",379,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_384_get_F3,"flixel.input.keyboard.FlxKeyList","get_F3",0xe5fcfdc8,"flixel.input.keyboard.FlxKeyList.get_F3","flixel/input/keyboard/FlxKeyList.hx",384,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_389_get_F4,"flixel.input.keyboard.FlxKeyList","get_F4",0xe5fcfdc9,"flixel.input.keyboard.FlxKeyList.get_F4","flixel/input/keyboard/FlxKeyList.hx",389,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_394_get_F5,"flixel.input.keyboard.FlxKeyList","get_F5",0xe5fcfdca,"flixel.input.keyboard.FlxKeyList.get_F5","flixel/input/keyboard/FlxKeyList.hx",394,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_399_get_F6,"flixel.input.keyboard.FlxKeyList","get_F6",0xe5fcfdcb,"flixel.input.keyboard.FlxKeyList.get_F6","flixel/input/keyboard/FlxKeyList.hx",399,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_404_get_F7,"flixel.input.keyboard.FlxKeyList","get_F7",0xe5fcfdcc,"flixel.input.keyboard.FlxKeyList.get_F7","flixel/input/keyboard/FlxKeyList.hx",404,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_409_get_F8,"flixel.input.keyboard.FlxKeyList","get_F8",0xe5fcfdcd,"flixel.input.keyboard.FlxKeyList.get_F8","flixel/input/keyboard/FlxKeyList.hx",409,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_414_get_F9,"flixel.input.keyboard.FlxKeyList","get_F9",0xe5fcfdce,"flixel.input.keyboard.FlxKeyList.get_F9","flixel/input/keyboard/FlxKeyList.hx",414,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_419_get_F10,"flixel.input.keyboard.FlxKeyList","get_F10",0x57610faa,"flixel.input.keyboard.FlxKeyList.get_F10","flixel/input/keyboard/FlxKeyList.hx",419,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_424_get_F11,"flixel.input.keyboard.FlxKeyList","get_F11",0x57610fab,"flixel.input.keyboard.FlxKeyList.get_F11","flixel/input/keyboard/FlxKeyList.hx",424,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_429_get_F12,"flixel.input.keyboard.FlxKeyList","get_F12",0x57610fac,"flixel.input.keyboard.FlxKeyList.get_F12","flixel/input/keyboard/FlxKeyList.hx",429,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_434_get_NUMPADONE,"flixel.input.keyboard.FlxKeyList","get_NUMPADONE",0xe4b03e5e,"flixel.input.keyboard.FlxKeyList.get_NUMPADONE","flixel/input/keyboard/FlxKeyList.hx",434,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_439_get_NUMPADTWO,"flixel.input.keyboard.FlxKeyList","get_NUMPADTWO",0xe4b41184,"flixel.input.keyboard.FlxKeyList.get_NUMPADTWO","flixel/input/keyboard/FlxKeyList.hx",439,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_444_get_NUMPADTHREE,"flixel.input.keyboard.FlxKeyList","get_NUMPADTHREE",0x7d16ca56,"flixel.input.keyboard.FlxKeyList.get_NUMPADTHREE","flixel/input/keyboard/FlxKeyList.hx",444,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_449_get_NUMPADFOUR,"flixel.input.keyboard.FlxKeyList","get_NUMPADFOUR",0x2f9438ce,"flixel.input.keyboard.FlxKeyList.get_NUMPADFOUR","flixel/input/keyboard/FlxKeyList.hx",449,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_454_get_NUMPADFIVE,"flixel.input.keyboard.FlxKeyList","get_NUMPADFIVE",0x2f8fac1a,"flixel.input.keyboard.FlxKeyList.get_NUMPADFIVE","flixel/input/keyboard/FlxKeyList.hx",454,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_459_get_NUMPADSIX,"flixel.input.keyboard.FlxKeyList","get_NUMPADSIX",0xe4b3431a,"flixel.input.keyboard.FlxKeyList.get_NUMPADSIX","flixel/input/keyboard/FlxKeyList.hx",459,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_464_get_NUMPADSEVEN,"flixel.input.keyboard.FlxKeyList","get_NUMPADSEVEN",0xe7b79b05,"flixel.input.keyboard.FlxKeyList.get_NUMPADSEVEN","flixel/input/keyboard/FlxKeyList.hx",464,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_469_get_NUMPADEIGHT,"flixel.input.keyboard.FlxKeyList","get_NUMPADEIGHT",0xdab4f747,"flixel.input.keyboard.FlxKeyList.get_NUMPADEIGHT","flixel/input/keyboard/FlxKeyList.hx",469,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_474_get_NUMPADNINE,"flixel.input.keyboard.FlxKeyList","get_NUMPADNINE",0x34d95a1a,"flixel.input.keyboard.FlxKeyList.get_NUMPADNINE","flixel/input/keyboard/FlxKeyList.hx",474,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_479_get_NUMPADZERO,"flixel.input.keyboard.FlxKeyList","get_NUMPADZERO",0x3cc4e410,"flixel.input.keyboard.FlxKeyList.get_NUMPADZERO","flixel/input/keyboard/FlxKeyList.hx",479,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_484_get_NUMPADMINUS,"flixel.input.keyboard.FlxKeyList","get_NUMPADMINUS",0x75eef668,"flixel.input.keyboard.FlxKeyList.get_NUMPADMINUS","flixel/input/keyboard/FlxKeyList.hx",484,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_489_get_NUMPADPLUS,"flixel.input.keyboard.FlxKeyList","get_NUMPADPLUS",0x362e1442,"flixel.input.keyboard.FlxKeyList.get_NUMPADPLUS","flixel/input/keyboard/FlxKeyList.hx",489,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_494_get_NUMPADPERIOD,"flixel.input.keyboard.FlxKeyList","get_NUMPADPERIOD",0xa33c23e9,"flixel.input.keyboard.FlxKeyList.get_NUMPADPERIOD","flixel/input/keyboard/FlxKeyList.hx",494,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_499_get_NUMPADMULTIPLY,"flixel.input.keyboard.FlxKeyList","get_NUMPADMULTIPLY",0xde92130c,"flixel.input.keyboard.FlxKeyList.get_NUMPADMULTIPLY","flixel/input/keyboard/FlxKeyList.hx",499,0xb04d5f03)
HX_LOCAL_STACK_FRAME(_hx_pos_6dd8cea91f1ea6da_504_get_NUMPADSLASH,"flixel.input.keyboard.FlxKeyList","get_NUMPADSLASH",0xec483635,"flixel.input.keyboard.FlxKeyList.get_NUMPADSLASH","flixel/input/keyboard/FlxKeyList.hx",504,0xb04d5f03)
namespace flixel{
namespace input{
namespace keyboard{

void FlxKeyList_obj::__construct(int status, ::flixel::input::FlxKeyManager keyManager){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_9_new)
HXDLIN(   9)		super::__construct(status,keyManager);
            	}

Dynamic FlxKeyList_obj::__CreateEmpty() { return new FlxKeyList_obj; }

void *FlxKeyList_obj::_hx_vtable = 0;

Dynamic FlxKeyList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxKeyList_obj > _hx_result = new FlxKeyList_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxKeyList_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23ee7f5c) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x23ee7f5c;
	} else {
		return inClassId==(int)0x7e9b8150;
	}
}

bool FlxKeyList_obj::get_A(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_14_get_A)
HXDLIN(  14)		return this->keyManager->checkStatusUnsafe(65,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_A,return )

bool FlxKeyList_obj::get_B(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_19_get_B)
HXDLIN(  19)		return this->keyManager->checkStatusUnsafe(66,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_B,return )

bool FlxKeyList_obj::get_C(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_24_get_C)
HXDLIN(  24)		return this->keyManager->checkStatusUnsafe(67,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_C,return )

bool FlxKeyList_obj::get_D(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_29_get_D)
HXDLIN(  29)		return this->keyManager->checkStatusUnsafe(68,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_D,return )

bool FlxKeyList_obj::get_E(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_34_get_E)
HXDLIN(  34)		return this->keyManager->checkStatusUnsafe(69,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_E,return )

bool FlxKeyList_obj::get_F(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_39_get_F)
HXDLIN(  39)		return this->keyManager->checkStatusUnsafe(70,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F,return )

bool FlxKeyList_obj::get_G(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_44_get_G)
HXDLIN(  44)		return this->keyManager->checkStatusUnsafe(71,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_G,return )

bool FlxKeyList_obj::get_H(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_49_get_H)
HXDLIN(  49)		return this->keyManager->checkStatusUnsafe(72,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_H,return )

bool FlxKeyList_obj::get_I(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_54_get_I)
HXDLIN(  54)		return this->keyManager->checkStatusUnsafe(73,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_I,return )

bool FlxKeyList_obj::get_J(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_59_get_J)
HXDLIN(  59)		return this->keyManager->checkStatusUnsafe(74,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_J,return )

bool FlxKeyList_obj::get_K(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_64_get_K)
HXDLIN(  64)		return this->keyManager->checkStatusUnsafe(75,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_K,return )

bool FlxKeyList_obj::get_L(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_69_get_L)
HXDLIN(  69)		return this->keyManager->checkStatusUnsafe(76,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_L,return )

bool FlxKeyList_obj::get_M(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_74_get_M)
HXDLIN(  74)		return this->keyManager->checkStatusUnsafe(77,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_M,return )

bool FlxKeyList_obj::get_N(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_79_get_N)
HXDLIN(  79)		return this->keyManager->checkStatusUnsafe(78,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_N,return )

bool FlxKeyList_obj::get_O(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_84_get_O)
HXDLIN(  84)		return this->keyManager->checkStatusUnsafe(79,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_O,return )

bool FlxKeyList_obj::get_P(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_89_get_P)
HXDLIN(  89)		return this->keyManager->checkStatusUnsafe(80,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_P,return )

bool FlxKeyList_obj::get_Q(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_94_get_Q)
HXDLIN(  94)		return this->keyManager->checkStatusUnsafe(81,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_Q,return )

bool FlxKeyList_obj::get_R(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_99_get_R)
HXDLIN(  99)		return this->keyManager->checkStatusUnsafe(82,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_R,return )

bool FlxKeyList_obj::get_S(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_104_get_S)
HXDLIN( 104)		return this->keyManager->checkStatusUnsafe(83,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_S,return )

bool FlxKeyList_obj::get_T(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_109_get_T)
HXDLIN( 109)		return this->keyManager->checkStatusUnsafe(84,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_T,return )

bool FlxKeyList_obj::get_U(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_114_get_U)
HXDLIN( 114)		return this->keyManager->checkStatusUnsafe(85,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_U,return )

bool FlxKeyList_obj::get_V(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_119_get_V)
HXDLIN( 119)		return this->keyManager->checkStatusUnsafe(86,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_V,return )

bool FlxKeyList_obj::get_W(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_124_get_W)
HXDLIN( 124)		return this->keyManager->checkStatusUnsafe(87,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_W,return )

bool FlxKeyList_obj::get_X(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_129_get_X)
HXDLIN( 129)		return this->keyManager->checkStatusUnsafe(88,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_X,return )

bool FlxKeyList_obj::get_Y(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_134_get_Y)
HXDLIN( 134)		return this->keyManager->checkStatusUnsafe(89,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_Y,return )

bool FlxKeyList_obj::get_Z(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_139_get_Z)
HXDLIN( 139)		return this->keyManager->checkStatusUnsafe(90,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_Z,return )

bool FlxKeyList_obj::get_ZERO(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_144_get_ZERO)
HXDLIN( 144)		return this->keyManager->checkStatusUnsafe(48,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ZERO,return )

bool FlxKeyList_obj::get_ONE(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_149_get_ONE)
HXDLIN( 149)		return this->keyManager->checkStatusUnsafe(49,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ONE,return )

bool FlxKeyList_obj::get_TWO(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_154_get_TWO)
HXDLIN( 154)		return this->keyManager->checkStatusUnsafe(50,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_TWO,return )

bool FlxKeyList_obj::get_THREE(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_159_get_THREE)
HXDLIN( 159)		return this->keyManager->checkStatusUnsafe(51,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_THREE,return )

bool FlxKeyList_obj::get_FOUR(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_164_get_FOUR)
HXDLIN( 164)		return this->keyManager->checkStatusUnsafe(52,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_FOUR,return )

bool FlxKeyList_obj::get_FIVE(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_169_get_FIVE)
HXDLIN( 169)		return this->keyManager->checkStatusUnsafe(53,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_FIVE,return )

bool FlxKeyList_obj::get_SIX(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_174_get_SIX)
HXDLIN( 174)		return this->keyManager->checkStatusUnsafe(54,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SIX,return )

bool FlxKeyList_obj::get_SEVEN(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_179_get_SEVEN)
HXDLIN( 179)		return this->keyManager->checkStatusUnsafe(55,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SEVEN,return )

bool FlxKeyList_obj::get_EIGHT(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_184_get_EIGHT)
HXDLIN( 184)		return this->keyManager->checkStatusUnsafe(56,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_EIGHT,return )

bool FlxKeyList_obj::get_NINE(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_189_get_NINE)
HXDLIN( 189)		return this->keyManager->checkStatusUnsafe(57,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NINE,return )

bool FlxKeyList_obj::get_PAGEUP(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_194_get_PAGEUP)
HXDLIN( 194)		return this->keyManager->checkStatusUnsafe(33,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PAGEUP,return )

bool FlxKeyList_obj::get_PAGEDOWN(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_199_get_PAGEDOWN)
HXDLIN( 199)		return this->keyManager->checkStatusUnsafe(34,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PAGEDOWN,return )

bool FlxKeyList_obj::get_HOME(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_204_get_HOME)
HXDLIN( 204)		return this->keyManager->checkStatusUnsafe(36,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_HOME,return )

bool FlxKeyList_obj::get_END(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_209_get_END)
HXDLIN( 209)		return this->keyManager->checkStatusUnsafe(35,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_END,return )

bool FlxKeyList_obj::get_INSERT(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_214_get_INSERT)
HXDLIN( 214)		return this->keyManager->checkStatusUnsafe(45,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_INSERT,return )

bool FlxKeyList_obj::get_ESCAPE(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_219_get_ESCAPE)
HXDLIN( 219)		return this->keyManager->checkStatusUnsafe(27,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ESCAPE,return )

bool FlxKeyList_obj::get_MINUS(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_224_get_MINUS)
HXDLIN( 224)		return this->keyManager->checkStatusUnsafe(189,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_MINUS,return )

bool FlxKeyList_obj::get_PLUS(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_229_get_PLUS)
HXDLIN( 229)		return this->keyManager->checkStatusUnsafe(187,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PLUS,return )

bool FlxKeyList_obj::get_DELETE(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_234_get_DELETE)
HXDLIN( 234)		return this->keyManager->checkStatusUnsafe(46,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_DELETE,return )

bool FlxKeyList_obj::get_BACKSPACE(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_239_get_BACKSPACE)
HXDLIN( 239)		return this->keyManager->checkStatusUnsafe(8,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_BACKSPACE,return )

bool FlxKeyList_obj::get_LBRACKET(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_244_get_LBRACKET)
HXDLIN( 244)		return this->keyManager->checkStatusUnsafe(219,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_LBRACKET,return )

bool FlxKeyList_obj::get_RBRACKET(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_249_get_RBRACKET)
HXDLIN( 249)		return this->keyManager->checkStatusUnsafe(221,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_RBRACKET,return )

bool FlxKeyList_obj::get_BACKSLASH(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_254_get_BACKSLASH)
HXDLIN( 254)		return this->keyManager->checkStatusUnsafe(220,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_BACKSLASH,return )

bool FlxKeyList_obj::get_CAPSLOCK(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_259_get_CAPSLOCK)
HXDLIN( 259)		return this->keyManager->checkStatusUnsafe(20,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_CAPSLOCK,return )

bool FlxKeyList_obj::get_SCROLL_LOCK(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_264_get_SCROLL_LOCK)
HXDLIN( 264)		return this->keyManager->checkStatusUnsafe(145,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SCROLL_LOCK,return )

bool FlxKeyList_obj::get_NUMLOCK(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_269_get_NUMLOCK)
HXDLIN( 269)		return this->keyManager->checkStatusUnsafe(144,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMLOCK,return )

bool FlxKeyList_obj::get_SEMICOLON(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_274_get_SEMICOLON)
HXDLIN( 274)		return this->keyManager->checkStatusUnsafe(186,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SEMICOLON,return )

bool FlxKeyList_obj::get_QUOTE(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_279_get_QUOTE)
HXDLIN( 279)		return this->keyManager->checkStatusUnsafe(222,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_QUOTE,return )

bool FlxKeyList_obj::get_ENTER(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_284_get_ENTER)
HXDLIN( 284)		return this->keyManager->checkStatusUnsafe(13,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ENTER,return )

bool FlxKeyList_obj::get_SHIFT(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_289_get_SHIFT)
HXDLIN( 289)		return this->keyManager->checkStatusUnsafe(16,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SHIFT,return )

bool FlxKeyList_obj::get_COMMA(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_294_get_COMMA)
HXDLIN( 294)		return this->keyManager->checkStatusUnsafe(188,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_COMMA,return )

bool FlxKeyList_obj::get_PERIOD(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_299_get_PERIOD)
HXDLIN( 299)		return this->keyManager->checkStatusUnsafe(190,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PERIOD,return )

bool FlxKeyList_obj::get_SLASH(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_304_get_SLASH)
HXDLIN( 304)		return this->keyManager->checkStatusUnsafe(191,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SLASH,return )

bool FlxKeyList_obj::get_GRAVEACCENT(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_309_get_GRAVEACCENT)
HXDLIN( 309)		return this->keyManager->checkStatusUnsafe(192,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_GRAVEACCENT,return )

bool FlxKeyList_obj::get_CONTROL(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_314_get_CONTROL)
HXDLIN( 314)		return this->keyManager->checkStatusUnsafe(17,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_CONTROL,return )

bool FlxKeyList_obj::get_ALT(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_319_get_ALT)
HXDLIN( 319)		return this->keyManager->checkStatusUnsafe(18,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_ALT,return )

bool FlxKeyList_obj::get_SPACE(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_324_get_SPACE)
HXDLIN( 324)		return this->keyManager->checkStatusUnsafe(32,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_SPACE,return )

bool FlxKeyList_obj::get_UP(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_329_get_UP)
HXDLIN( 329)		return this->keyManager->checkStatusUnsafe(38,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_UP,return )

bool FlxKeyList_obj::get_DOWN(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_334_get_DOWN)
HXDLIN( 334)		return this->keyManager->checkStatusUnsafe(40,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_DOWN,return )

bool FlxKeyList_obj::get_LEFT(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_339_get_LEFT)
HXDLIN( 339)		return this->keyManager->checkStatusUnsafe(37,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_LEFT,return )

bool FlxKeyList_obj::get_RIGHT(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_344_get_RIGHT)
HXDLIN( 344)		return this->keyManager->checkStatusUnsafe(39,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_RIGHT,return )

bool FlxKeyList_obj::get_TAB(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_349_get_TAB)
HXDLIN( 349)		return this->keyManager->checkStatusUnsafe(9,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_TAB,return )

bool FlxKeyList_obj::get_WINDOWS(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_354_get_WINDOWS)
HXDLIN( 354)		return this->keyManager->checkStatusUnsafe(15,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_WINDOWS,return )

bool FlxKeyList_obj::get_MENU(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_359_get_MENU)
HXDLIN( 359)		return this->keyManager->checkStatusUnsafe(302,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_MENU,return )

bool FlxKeyList_obj::get_PRINTSCREEN(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_364_get_PRINTSCREEN)
HXDLIN( 364)		return this->keyManager->checkStatusUnsafe(301,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_PRINTSCREEN,return )

bool FlxKeyList_obj::get_BREAK(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_369_get_BREAK)
HXDLIN( 369)		return this->keyManager->checkStatusUnsafe(19,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_BREAK,return )

bool FlxKeyList_obj::get_F1(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_374_get_F1)
HXDLIN( 374)		return this->keyManager->checkStatusUnsafe(112,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F1,return )

bool FlxKeyList_obj::get_F2(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_379_get_F2)
HXDLIN( 379)		return this->keyManager->checkStatusUnsafe(113,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F2,return )

bool FlxKeyList_obj::get_F3(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_384_get_F3)
HXDLIN( 384)		return this->keyManager->checkStatusUnsafe(114,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F3,return )

bool FlxKeyList_obj::get_F4(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_389_get_F4)
HXDLIN( 389)		return this->keyManager->checkStatusUnsafe(115,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F4,return )

bool FlxKeyList_obj::get_F5(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_394_get_F5)
HXDLIN( 394)		return this->keyManager->checkStatusUnsafe(116,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F5,return )

bool FlxKeyList_obj::get_F6(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_399_get_F6)
HXDLIN( 399)		return this->keyManager->checkStatusUnsafe(117,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F6,return )

bool FlxKeyList_obj::get_F7(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_404_get_F7)
HXDLIN( 404)		return this->keyManager->checkStatusUnsafe(118,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F7,return )

bool FlxKeyList_obj::get_F8(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_409_get_F8)
HXDLIN( 409)		return this->keyManager->checkStatusUnsafe(119,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F8,return )

bool FlxKeyList_obj::get_F9(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_414_get_F9)
HXDLIN( 414)		return this->keyManager->checkStatusUnsafe(120,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F9,return )

bool FlxKeyList_obj::get_F10(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_419_get_F10)
HXDLIN( 419)		return this->keyManager->checkStatusUnsafe(121,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F10,return )

bool FlxKeyList_obj::get_F11(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_424_get_F11)
HXDLIN( 424)		return this->keyManager->checkStatusUnsafe(122,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F11,return )

bool FlxKeyList_obj::get_F12(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_429_get_F12)
HXDLIN( 429)		return this->keyManager->checkStatusUnsafe(123,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_F12,return )

bool FlxKeyList_obj::get_NUMPADONE(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_434_get_NUMPADONE)
HXDLIN( 434)		return this->keyManager->checkStatusUnsafe(97,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADONE,return )

bool FlxKeyList_obj::get_NUMPADTWO(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_439_get_NUMPADTWO)
HXDLIN( 439)		return this->keyManager->checkStatusUnsafe(98,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADTWO,return )

bool FlxKeyList_obj::get_NUMPADTHREE(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_444_get_NUMPADTHREE)
HXDLIN( 444)		return this->keyManager->checkStatusUnsafe(99,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADTHREE,return )

bool FlxKeyList_obj::get_NUMPADFOUR(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_449_get_NUMPADFOUR)
HXDLIN( 449)		return this->keyManager->checkStatusUnsafe(100,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADFOUR,return )

bool FlxKeyList_obj::get_NUMPADFIVE(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_454_get_NUMPADFIVE)
HXDLIN( 454)		return this->keyManager->checkStatusUnsafe(101,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADFIVE,return )

bool FlxKeyList_obj::get_NUMPADSIX(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_459_get_NUMPADSIX)
HXDLIN( 459)		return this->keyManager->checkStatusUnsafe(102,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADSIX,return )

bool FlxKeyList_obj::get_NUMPADSEVEN(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_464_get_NUMPADSEVEN)
HXDLIN( 464)		return this->keyManager->checkStatusUnsafe(103,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADSEVEN,return )

bool FlxKeyList_obj::get_NUMPADEIGHT(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_469_get_NUMPADEIGHT)
HXDLIN( 469)		return this->keyManager->checkStatusUnsafe(104,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADEIGHT,return )

bool FlxKeyList_obj::get_NUMPADNINE(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_474_get_NUMPADNINE)
HXDLIN( 474)		return this->keyManager->checkStatusUnsafe(105,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADNINE,return )

bool FlxKeyList_obj::get_NUMPADZERO(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_479_get_NUMPADZERO)
HXDLIN( 479)		return this->keyManager->checkStatusUnsafe(96,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADZERO,return )

bool FlxKeyList_obj::get_NUMPADMINUS(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_484_get_NUMPADMINUS)
HXDLIN( 484)		return this->keyManager->checkStatusUnsafe(109,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADMINUS,return )

bool FlxKeyList_obj::get_NUMPADPLUS(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_489_get_NUMPADPLUS)
HXDLIN( 489)		return this->keyManager->checkStatusUnsafe(107,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADPLUS,return )

bool FlxKeyList_obj::get_NUMPADPERIOD(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_494_get_NUMPADPERIOD)
HXDLIN( 494)		return this->keyManager->checkStatusUnsafe(110,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADPERIOD,return )

bool FlxKeyList_obj::get_NUMPADMULTIPLY(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_499_get_NUMPADMULTIPLY)
HXDLIN( 499)		return this->keyManager->checkStatusUnsafe(106,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADMULTIPLY,return )

bool FlxKeyList_obj::get_NUMPADSLASH(){
            	HX_STACKFRAME(&_hx_pos_6dd8cea91f1ea6da_504_get_NUMPADSLASH)
HXDLIN( 504)		return this->keyManager->checkStatusUnsafe(111,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyList_obj,get_NUMPADSLASH,return )


::hx::ObjectPtr< FlxKeyList_obj > FlxKeyList_obj::__new(int status, ::flixel::input::FlxKeyManager keyManager) {
	::hx::ObjectPtr< FlxKeyList_obj > __this = new FlxKeyList_obj();
	__this->__construct(status,keyManager);
	return __this;
}

::hx::ObjectPtr< FlxKeyList_obj > FlxKeyList_obj::__alloc(::hx::Ctx *_hx_ctx,int status, ::flixel::input::FlxKeyManager keyManager) {
	FlxKeyList_obj *__this = (FlxKeyList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxKeyList_obj), true, "flixel.input.keyboard.FlxKeyList"));
	*(void **)__this = FlxKeyList_obj::_hx_vtable;
	__this->__construct(status,keyManager);
	return __this;
}

FlxKeyList_obj::FlxKeyList_obj()
{
}

::hx::Val FlxKeyList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"A") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_A() ); }
		if (HX_FIELD_EQ(inName,"B") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_B() ); }
		if (HX_FIELD_EQ(inName,"C") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_C() ); }
		if (HX_FIELD_EQ(inName,"D") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_D() ); }
		if (HX_FIELD_EQ(inName,"E") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_E() ); }
		if (HX_FIELD_EQ(inName,"F") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_F() ); }
		if (HX_FIELD_EQ(inName,"G") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_G() ); }
		if (HX_FIELD_EQ(inName,"H") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_H() ); }
		if (HX_FIELD_EQ(inName,"I") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_I() ); }
		if (HX_FIELD_EQ(inName,"J") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_J() ); }
		if (HX_FIELD_EQ(inName,"K") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_K() ); }
		if (HX_FIELD_EQ(inName,"L") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_L() ); }
		if (HX_FIELD_EQ(inName,"M") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_M() ); }
		if (HX_FIELD_EQ(inName,"N") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_N() ); }
		if (HX_FIELD_EQ(inName,"O") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_O() ); }
		if (HX_FIELD_EQ(inName,"P") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_P() ); }
		if (HX_FIELD_EQ(inName,"Q") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_Q() ); }
		if (HX_FIELD_EQ(inName,"R") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_R() ); }
		if (HX_FIELD_EQ(inName,"S") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_S() ); }
		if (HX_FIELD_EQ(inName,"T") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_T() ); }
		if (HX_FIELD_EQ(inName,"U") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_U() ); }
		if (HX_FIELD_EQ(inName,"V") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_V() ); }
		if (HX_FIELD_EQ(inName,"W") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_W() ); }
		if (HX_FIELD_EQ(inName,"X") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_X() ); }
		if (HX_FIELD_EQ(inName,"Y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_Y() ); }
		if (HX_FIELD_EQ(inName,"Z") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_Z() ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_UP() ); }
		if (HX_FIELD_EQ(inName,"F1") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_F1() ); }
		if (HX_FIELD_EQ(inName,"F2") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_F2() ); }
		if (HX_FIELD_EQ(inName,"F3") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_F3() ); }
		if (HX_FIELD_EQ(inName,"F4") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_F4() ); }
		if (HX_FIELD_EQ(inName,"F5") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_F5() ); }
		if (HX_FIELD_EQ(inName,"F6") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_F6() ); }
		if (HX_FIELD_EQ(inName,"F7") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_F7() ); }
		if (HX_FIELD_EQ(inName,"F8") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_F8() ); }
		if (HX_FIELD_EQ(inName,"F9") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_F9() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ONE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ONE() ); }
		if (HX_FIELD_EQ(inName,"TWO") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_TWO() ); }
		if (HX_FIELD_EQ(inName,"SIX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_SIX() ); }
		if (HX_FIELD_EQ(inName,"END") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_END() ); }
		if (HX_FIELD_EQ(inName,"ALT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ALT() ); }
		if (HX_FIELD_EQ(inName,"TAB") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_TAB() ); }
		if (HX_FIELD_EQ(inName,"F10") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_F10() ); }
		if (HX_FIELD_EQ(inName,"F11") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_F11() ); }
		if (HX_FIELD_EQ(inName,"F12") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_F12() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ZERO") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ZERO() ); }
		if (HX_FIELD_EQ(inName,"FOUR") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_FOUR() ); }
		if (HX_FIELD_EQ(inName,"FIVE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_FIVE() ); }
		if (HX_FIELD_EQ(inName,"NINE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NINE() ); }
		if (HX_FIELD_EQ(inName,"HOME") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_HOME() ); }
		if (HX_FIELD_EQ(inName,"PLUS") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_PLUS() ); }
		if (HX_FIELD_EQ(inName,"DOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DOWN() ); }
		if (HX_FIELD_EQ(inName,"LEFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LEFT() ); }
		if (HX_FIELD_EQ(inName,"MENU") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_MENU() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_A") ) { return ::hx::Val( get_A_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_B") ) { return ::hx::Val( get_B_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_C") ) { return ::hx::Val( get_C_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_D") ) { return ::hx::Val( get_D_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_E") ) { return ::hx::Val( get_E_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_F") ) { return ::hx::Val( get_F_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_G") ) { return ::hx::Val( get_G_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_H") ) { return ::hx::Val( get_H_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_I") ) { return ::hx::Val( get_I_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_J") ) { return ::hx::Val( get_J_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_K") ) { return ::hx::Val( get_K_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_L") ) { return ::hx::Val( get_L_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_M") ) { return ::hx::Val( get_M_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_N") ) { return ::hx::Val( get_N_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_O") ) { return ::hx::Val( get_O_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_P") ) { return ::hx::Val( get_P_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_Q") ) { return ::hx::Val( get_Q_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_R") ) { return ::hx::Val( get_R_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_S") ) { return ::hx::Val( get_S_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_T") ) { return ::hx::Val( get_T_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_U") ) { return ::hx::Val( get_U_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_V") ) { return ::hx::Val( get_V_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_W") ) { return ::hx::Val( get_W_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_X") ) { return ::hx::Val( get_X_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_Y") ) { return ::hx::Val( get_Y_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_Z") ) { return ::hx::Val( get_Z_dyn() ); }
		if (HX_FIELD_EQ(inName,"THREE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_THREE() ); }
		if (HX_FIELD_EQ(inName,"SEVEN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_SEVEN() ); }
		if (HX_FIELD_EQ(inName,"EIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_EIGHT() ); }
		if (HX_FIELD_EQ(inName,"MINUS") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_MINUS() ); }
		if (HX_FIELD_EQ(inName,"QUOTE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_QUOTE() ); }
		if (HX_FIELD_EQ(inName,"ENTER") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ENTER() ); }
		if (HX_FIELD_EQ(inName,"SHIFT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_SHIFT() ); }
		if (HX_FIELD_EQ(inName,"COMMA") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_COMMA() ); }
		if (HX_FIELD_EQ(inName,"SLASH") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_SLASH() ); }
		if (HX_FIELD_EQ(inName,"SPACE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_SPACE() ); }
		if (HX_FIELD_EQ(inName,"RIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RIGHT() ); }
		if (HX_FIELD_EQ(inName,"BREAK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_BREAK() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"PAGEUP") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_PAGEUP() ); }
		if (HX_FIELD_EQ(inName,"INSERT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_INSERT() ); }
		if (HX_FIELD_EQ(inName,"ESCAPE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ESCAPE() ); }
		if (HX_FIELD_EQ(inName,"DELETE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_DELETE() ); }
		if (HX_FIELD_EQ(inName,"PERIOD") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_PERIOD() ); }
		if (HX_FIELD_EQ(inName,"get_UP") ) { return ::hx::Val( get_UP_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_F1") ) { return ::hx::Val( get_F1_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_F2") ) { return ::hx::Val( get_F2_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_F3") ) { return ::hx::Val( get_F3_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_F4") ) { return ::hx::Val( get_F4_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_F5") ) { return ::hx::Val( get_F5_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_F6") ) { return ::hx::Val( get_F6_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_F7") ) { return ::hx::Val( get_F7_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_F8") ) { return ::hx::Val( get_F8_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_F9") ) { return ::hx::Val( get_F9_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_ONE") ) { return ::hx::Val( get_ONE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_TWO") ) { return ::hx::Val( get_TWO_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_SIX") ) { return ::hx::Val( get_SIX_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_END") ) { return ::hx::Val( get_END_dyn() ); }
		if (HX_FIELD_EQ(inName,"NUMLOCK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMLOCK() ); }
		if (HX_FIELD_EQ(inName,"CONTROL") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_CONTROL() ); }
		if (HX_FIELD_EQ(inName,"get_ALT") ) { return ::hx::Val( get_ALT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_TAB") ) { return ::hx::Val( get_TAB_dyn() ); }
		if (HX_FIELD_EQ(inName,"WINDOWS") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_WINDOWS() ); }
		if (HX_FIELD_EQ(inName,"get_F10") ) { return ::hx::Val( get_F10_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_F11") ) { return ::hx::Val( get_F11_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_F12") ) { return ::hx::Val( get_F12_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_ZERO") ) { return ::hx::Val( get_ZERO_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_FOUR") ) { return ::hx::Val( get_FOUR_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_FIVE") ) { return ::hx::Val( get_FIVE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NINE") ) { return ::hx::Val( get_NINE_dyn() ); }
		if (HX_FIELD_EQ(inName,"PAGEDOWN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_PAGEDOWN() ); }
		if (HX_FIELD_EQ(inName,"get_HOME") ) { return ::hx::Val( get_HOME_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_PLUS") ) { return ::hx::Val( get_PLUS_dyn() ); }
		if (HX_FIELD_EQ(inName,"LBRACKET") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_LBRACKET() ); }
		if (HX_FIELD_EQ(inName,"RBRACKET") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_RBRACKET() ); }
		if (HX_FIELD_EQ(inName,"CAPSLOCK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_CAPSLOCK() ); }
		if (HX_FIELD_EQ(inName,"get_DOWN") ) { return ::hx::Val( get_DOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_LEFT") ) { return ::hx::Val( get_LEFT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_MENU") ) { return ::hx::Val( get_MENU_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_THREE") ) { return ::hx::Val( get_THREE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_SEVEN") ) { return ::hx::Val( get_SEVEN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_EIGHT") ) { return ::hx::Val( get_EIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_MINUS") ) { return ::hx::Val( get_MINUS_dyn() ); }
		if (HX_FIELD_EQ(inName,"BACKSPACE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_BACKSPACE() ); }
		if (HX_FIELD_EQ(inName,"BACKSLASH") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_BACKSLASH() ); }
		if (HX_FIELD_EQ(inName,"SEMICOLON") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_SEMICOLON() ); }
		if (HX_FIELD_EQ(inName,"get_QUOTE") ) { return ::hx::Val( get_QUOTE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ENTER") ) { return ::hx::Val( get_ENTER_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_SHIFT") ) { return ::hx::Val( get_SHIFT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_COMMA") ) { return ::hx::Val( get_COMMA_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_SLASH") ) { return ::hx::Val( get_SLASH_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_SPACE") ) { return ::hx::Val( get_SPACE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RIGHT") ) { return ::hx::Val( get_RIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_BREAK") ) { return ::hx::Val( get_BREAK_dyn() ); }
		if (HX_FIELD_EQ(inName,"NUMPADONE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMPADONE() ); }
		if (HX_FIELD_EQ(inName,"NUMPADTWO") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMPADTWO() ); }
		if (HX_FIELD_EQ(inName,"NUMPADSIX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMPADSIX() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_PAGEUP") ) { return ::hx::Val( get_PAGEUP_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_INSERT") ) { return ::hx::Val( get_INSERT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_ESCAPE") ) { return ::hx::Val( get_ESCAPE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_DELETE") ) { return ::hx::Val( get_DELETE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_PERIOD") ) { return ::hx::Val( get_PERIOD_dyn() ); }
		if (HX_FIELD_EQ(inName,"NUMPADFOUR") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMPADFOUR() ); }
		if (HX_FIELD_EQ(inName,"NUMPADFIVE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMPADFIVE() ); }
		if (HX_FIELD_EQ(inName,"NUMPADNINE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMPADNINE() ); }
		if (HX_FIELD_EQ(inName,"NUMPADZERO") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMPADZERO() ); }
		if (HX_FIELD_EQ(inName,"NUMPADPLUS") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMPADPLUS() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SCROLL_LOCK") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_SCROLL_LOCK() ); }
		if (HX_FIELD_EQ(inName,"get_NUMLOCK") ) { return ::hx::Val( get_NUMLOCK_dyn() ); }
		if (HX_FIELD_EQ(inName,"GRAVEACCENT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_GRAVEACCENT() ); }
		if (HX_FIELD_EQ(inName,"get_CONTROL") ) { return ::hx::Val( get_CONTROL_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_WINDOWS") ) { return ::hx::Val( get_WINDOWS_dyn() ); }
		if (HX_FIELD_EQ(inName,"PRINTSCREEN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_PRINTSCREEN() ); }
		if (HX_FIELD_EQ(inName,"NUMPADTHREE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMPADTHREE() ); }
		if (HX_FIELD_EQ(inName,"NUMPADSEVEN") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMPADSEVEN() ); }
		if (HX_FIELD_EQ(inName,"NUMPADEIGHT") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMPADEIGHT() ); }
		if (HX_FIELD_EQ(inName,"NUMPADMINUS") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMPADMINUS() ); }
		if (HX_FIELD_EQ(inName,"NUMPADSLASH") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMPADSLASH() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_PAGEDOWN") ) { return ::hx::Val( get_PAGEDOWN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_LBRACKET") ) { return ::hx::Val( get_LBRACKET_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_RBRACKET") ) { return ::hx::Val( get_RBRACKET_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_CAPSLOCK") ) { return ::hx::Val( get_CAPSLOCK_dyn() ); }
		if (HX_FIELD_EQ(inName,"NUMPADPERIOD") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMPADPERIOD() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_BACKSPACE") ) { return ::hx::Val( get_BACKSPACE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_BACKSLASH") ) { return ::hx::Val( get_BACKSLASH_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_SEMICOLON") ) { return ::hx::Val( get_SEMICOLON_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NUMPADONE") ) { return ::hx::Val( get_NUMPADONE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NUMPADTWO") ) { return ::hx::Val( get_NUMPADTWO_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NUMPADSIX") ) { return ::hx::Val( get_NUMPADSIX_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_NUMPADFOUR") ) { return ::hx::Val( get_NUMPADFOUR_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NUMPADFIVE") ) { return ::hx::Val( get_NUMPADFIVE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NUMPADNINE") ) { return ::hx::Val( get_NUMPADNINE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NUMPADZERO") ) { return ::hx::Val( get_NUMPADZERO_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NUMPADPLUS") ) { return ::hx::Val( get_NUMPADPLUS_dyn() ); }
		if (HX_FIELD_EQ(inName,"NUMPADMULTIPLY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NUMPADMULTIPLY() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_SCROLL_LOCK") ) { return ::hx::Val( get_SCROLL_LOCK_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_GRAVEACCENT") ) { return ::hx::Val( get_GRAVEACCENT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_PRINTSCREEN") ) { return ::hx::Val( get_PRINTSCREEN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NUMPADTHREE") ) { return ::hx::Val( get_NUMPADTHREE_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NUMPADSEVEN") ) { return ::hx::Val( get_NUMPADSEVEN_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NUMPADEIGHT") ) { return ::hx::Val( get_NUMPADEIGHT_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NUMPADMINUS") ) { return ::hx::Val( get_NUMPADMINUS_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_NUMPADSLASH") ) { return ::hx::Val( get_NUMPADSLASH_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_NUMPADPERIOD") ) { return ::hx::Val( get_NUMPADPERIOD_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_NUMPADMULTIPLY") ) { return ::hx::Val( get_NUMPADMULTIPLY_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

void FlxKeyList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("A",41,00,00,00));
	outFields->push(HX_("B",42,00,00,00));
	outFields->push(HX_("C",43,00,00,00));
	outFields->push(HX_("D",44,00,00,00));
	outFields->push(HX_("E",45,00,00,00));
	outFields->push(HX_("F",46,00,00,00));
	outFields->push(HX_("G",47,00,00,00));
	outFields->push(HX_("H",48,00,00,00));
	outFields->push(HX_("I",49,00,00,00));
	outFields->push(HX_("J",4a,00,00,00));
	outFields->push(HX_("K",4b,00,00,00));
	outFields->push(HX_("L",4c,00,00,00));
	outFields->push(HX_("M",4d,00,00,00));
	outFields->push(HX_("N",4e,00,00,00));
	outFields->push(HX_("O",4f,00,00,00));
	outFields->push(HX_("P",50,00,00,00));
	outFields->push(HX_("Q",51,00,00,00));
	outFields->push(HX_("R",52,00,00,00));
	outFields->push(HX_("S",53,00,00,00));
	outFields->push(HX_("T",54,00,00,00));
	outFields->push(HX_("U",55,00,00,00));
	outFields->push(HX_("V",56,00,00,00));
	outFields->push(HX_("W",57,00,00,00));
	outFields->push(HX_("X",58,00,00,00));
	outFields->push(HX_("Y",59,00,00,00));
	outFields->push(HX_("Z",5a,00,00,00));
	outFields->push(HX_("ZERO",28,d7,b1,3b));
	outFields->push(HX_("ONE",46,36,3c,00));
	outFields->push(HX_("TWO",6c,09,40,00));
	outFields->push(HX_("THREE",3e,8c,7e,8d));
	outFields->push(HX_("FOUR",e6,2b,81,2e));
	outFields->push(HX_("FIVE",32,9f,7c,2e));
	outFields->push(HX_("SIX",02,3b,3f,00));
	outFields->push(HX_("SEVEN",ed,5c,1f,f8));
	outFields->push(HX_("EIGHT",2f,b9,1c,eb));
	outFields->push(HX_("NINE",32,4d,c6,33));
	outFields->push(HX_("PAGEUP",6a,5e,bb,98));
	outFields->push(HX_("PAGEDOWN",31,36,e2,b9));
	outFields->push(HX_("HOME",1f,92,d3,2f));
	outFields->push(HX_("END",bb,9f,34,00));
	outFields->push(HX_("INSERT",39,ef,5f,50));
	outFields->push(HX_("ESCAPE",81,ef,5c,8d));
	outFields->push(HX_("MINUS",50,b8,56,86));
	outFields->push(HX_("PLUS",5a,07,1b,35));
	outFields->push(HX_("DELETE",2b,6c,5b,1d));
	outFields->push(HX_("BACKSPACE",1f,f5,42,c6));
	outFields->push(HX_("LBRACKET",3c,3b,54,16));
	outFields->push(HX_("RBRACKET",f6,e7,82,6d));
	outFields->push(HX_("BACKSLASH",96,28,9e,c3));
	outFields->push(HX_("CAPSLOCK",8c,6c,6e,80));
	outFields->push(HX_("SCROLL_LOCK",9d,2c,87,f4));
	outFields->push(HX_("NUMLOCK",11,e9,32,30));
	outFields->push(HX_("SEMICOLON",11,86,2a,49));
	outFields->push(HX_("QUOTE",1c,5b,e0,db));
	outFields->push(HX_("ENTER",f8,a4,74,ee));
	outFields->push(HX_("SHIFT",62,24,11,fa));
	outFields->push(HX_("COMMA",b5,69,4b,c8));
	outFields->push(HX_("PERIOD",01,0d,9e,ed));
	outFields->push(HX_("SLASH",1d,f8,af,fc));
	outFields->push(HX_("GRAVEACCENT",6f,63,9a,0e));
	outFields->push(HX_("CONTROL",3d,3f,55,99));
	outFields->push(HX_("ALT",09,95,31,00));
	outFields->push(HX_("SPACE",a6,c4,54,ff));
	outFields->push(HX_("UP",5b,4a,00,00));
	outFields->push(HX_("DOWN",62,c0,2e,2d));
	outFields->push(HX_("LEFT",07,d0,70,32));
	outFields->push(HX_("RIGHT",bc,43,52,67));
	outFields->push(HX_("TAB",35,f6,3f,00));
	outFields->push(HX_("WINDOWS",63,b2,48,68));
	outFields->push(HX_("MENU",9f,0d,1a,33));
	outFields->push(HX_("PRINTSCREEN",39,7f,7c,10));
	outFields->push(HX_("BREAK",9f,5c,da,36));
	outFields->push(HX_("F1",2b,3d,00,00));
	outFields->push(HX_("F2",2c,3d,00,00));
	outFields->push(HX_("F3",2d,3d,00,00));
	outFields->push(HX_("F4",2e,3d,00,00));
	outFields->push(HX_("F5",2f,3d,00,00));
	outFields->push(HX_("F6",30,3d,00,00));
	outFields->push(HX_("F7",31,3d,00,00));
	outFields->push(HX_("F8",32,3d,00,00));
	outFields->push(HX_("F9",33,3d,00,00));
	outFields->push(HX_("F10",a5,48,35,00));
	outFields->push(HX_("F11",a6,48,35,00));
	outFields->push(HX_("F12",a7,48,35,00));
	outFields->push(HX_("NUMPADONE",99,e5,09,5c));
	outFields->push(HX_("NUMPADTWO",bf,b8,0d,5c));
	outFields->push(HX_("NUMPADTHREE",51,f6,94,bb));
	outFields->push(HX_("NUMPADFOUR",33,e5,ac,26));
	outFields->push(HX_("NUMPADFIVE",7f,58,a8,26));
	outFields->push(HX_("NUMPADSIX",55,ea,0c,5c));
	outFields->push(HX_("NUMPADSEVEN",00,c7,35,26));
	outFields->push(HX_("NUMPADEIGHT",42,23,33,19));
	outFields->push(HX_("NUMPADNINE",7f,06,f2,2b));
	outFields->push(HX_("NUMPADZERO",75,90,dd,33));
	outFields->push(HX_("NUMPADMINUS",63,22,6d,b4));
	outFields->push(HX_("NUMPADPLUS",a7,c0,46,2d));
	outFields->push(HX_("NUMPADPERIOD",8e,73,24,13));
	outFields->push(HX_("NUMPADMULTIPLY",f1,55,e9,54));
	outFields->push(HX_("NUMPADSLASH",30,62,c6,2a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxKeyList_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxKeyList_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxKeyList_obj_sMemberFields[] = {
	HX_("get_A",18,a5,60,91),
	HX_("get_B",19,a5,60,91),
	HX_("get_C",1a,a5,60,91),
	HX_("get_D",1b,a5,60,91),
	HX_("get_E",1c,a5,60,91),
	HX_("get_F",1d,a5,60,91),
	HX_("get_G",1e,a5,60,91),
	HX_("get_H",1f,a5,60,91),
	HX_("get_I",20,a5,60,91),
	HX_("get_J",21,a5,60,91),
	HX_("get_K",22,a5,60,91),
	HX_("get_L",23,a5,60,91),
	HX_("get_M",24,a5,60,91),
	HX_("get_N",25,a5,60,91),
	HX_("get_O",26,a5,60,91),
	HX_("get_P",27,a5,60,91),
	HX_("get_Q",28,a5,60,91),
	HX_("get_R",29,a5,60,91),
	HX_("get_S",2a,a5,60,91),
	HX_("get_T",2b,a5,60,91),
	HX_("get_U",2c,a5,60,91),
	HX_("get_V",2d,a5,60,91),
	HX_("get_W",2e,a5,60,91),
	HX_("get_X",2f,a5,60,91),
	HX_("get_Y",30,a5,60,91),
	HX_("get_Z",31,a5,60,91),
	HX_("get_ZERO",b1,92,6c,bb),
	HX_("get_ONE",dd,fe,b0,26),
	HX_("get_TWO",03,d2,b4,26),
	HX_("get_THREE",95,e8,27,d1),
	HX_("get_FOUR",6f,e7,3b,ae),
	HX_("get_FIVE",bb,5a,37,ae),
	HX_("get_SIX",99,03,b4,26),
	HX_("get_SEVEN",44,b9,c8,3b),
	HX_("get_EIGHT",86,15,c6,2e),
	HX_("get_NINE",bb,08,81,b3),
	HX_("get_PAGEUP",33,ce,42,89),
	HX_("get_PAGEDOWN",3a,ea,fb,6e),
	HX_("get_HOME",a8,4d,8e,af),
	HX_("get_END",52,68,a9,26),
	HX_("get_INSERT",02,5f,e7,40),
	HX_("get_ESCAPE",4a,5f,e4,7d),
	HX_("get_MINUS",a7,14,00,ca),
	HX_("get_PLUS",e3,c2,d5,b4),
	HX_("get_DELETE",f4,db,e2,0d),
	HX_("get_BACKSPACE",f6,c8,a6,87),
	HX_("get_LBRACKET",45,ef,6d,cb),
	HX_("get_RBRACKET",ff,9b,9c,22),
	HX_("get_BACKSLASH",6d,fc,01,85),
	HX_("get_CAPSLOCK",95,20,88,35),
	HX_("get_SCROLL_LOCK",34,e4,68,b5),
	HX_("get_NUMLOCK",28,49,2d,b6),
	HX_("get_SEMICOLON",e8,59,8e,0a),
	HX_("get_QUOTE",73,b7,89,1f),
	HX_("get_ENTER",4f,01,1e,32),
	HX_("get_SHIFT",b9,80,ba,3d),
	HX_("get_COMMA",0c,c6,f4,0b),
	HX_("get_PERIOD",ca,7c,25,de),
	HX_("get_SLASH",74,54,59,40),
	HX_("get_GRAVEACCENT",06,1b,7c,cf),
	HX_("get_CONTROL",54,9f,4f,1f),
	HX_("get_ALT",a0,5d,a6,26),
	HX_("get_SPACE",fd,20,fe,42),
	HX_("get_UP",a4,e1,2f,a3),
	HX_("get_DOWN",eb,7b,e9,ac),
	HX_("get_LEFT",90,8b,2b,b2),
	HX_("get_RIGHT",13,a0,fb,aa),
	HX_("get_TAB",cc,be,b4,26),
	HX_("get_WINDOWS",7a,12,43,ee),
	HX_("get_MENU",28,c9,d4,b2),
	HX_("get_PRINTSCREEN",d0,36,5e,d1),
	HX_("get_BREAK",f6,b8,83,7a),
	HX_("get_F1",74,d4,2f,a3),
	HX_("get_F2",75,d4,2f,a3),
	HX_("get_F3",76,d4,2f,a3),
	HX_("get_F4",77,d4,2f,a3),
	HX_("get_F5",78,d4,2f,a3),
	HX_("get_F6",79,d4,2f,a3),
	HX_("get_F7",7a,d4,2f,a3),
	HX_("get_F8",7b,d4,2f,a3),
	HX_("get_F9",7c,d4,2f,a3),
	HX_("get_F10",3c,11,aa,26),
	HX_("get_F11",3d,11,aa,26),
	HX_("get_F12",3e,11,aa,26),
	HX_("get_NUMPADONE",70,b9,6d,1d),
	HX_("get_NUMPADTWO",96,8c,71,1d),
	HX_("get_NUMPADTHREE",e8,ad,76,7c),
	HX_("get_NUMPADFOUR",7c,6d,a2,9c),
	HX_("get_NUMPADFIVE",c8,e0,9d,9c),
	HX_("get_NUMPADSIX",2c,be,70,1d),
	HX_("get_NUMPADSEVEN",97,7e,17,e7),
	HX_("get_NUMPADEIGHT",d9,da,14,da),
	HX_("get_NUMPADNINE",c8,8e,e7,a1),
	HX_("get_NUMPADZERO",be,18,d3,a9),
	HX_("get_NUMPADMINUS",fa,d9,4e,75),
	HX_("get_NUMPADPLUS",f0,48,3c,a3),
	HX_("get_NUMPADPERIOD",17,60,c3,17),
	HX_("get_NUMPADMULTIPLY",ba,36,83,f0),
	HX_("get_NUMPADSLASH",c7,19,a8,eb),
	::String(null()) };

::hx::Class FlxKeyList_obj::__mClass;

void FlxKeyList_obj::__register()
{
	FlxKeyList_obj _hx_dummy;
	FlxKeyList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.keyboard.FlxKeyList",dc,40,f0,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxKeyList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxKeyList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxKeyList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxKeyList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace keyboard
