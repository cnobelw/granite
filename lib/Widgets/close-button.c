
/*FIXME inline pixbuf image data for close button. not sure if it would be better to put it in 
some data folder*/

#include <glib.h>
#include <gtk/gtk.h>

#ifdef __SUNPRO_C
#pragma align 4 (close)
#endif
#ifdef __GNUC__
static const guint8 close_button_data[] __attribute__ ((__aligned__ (4))) = 
#else
static const guint8 close_button_data[] = 
#endif
{ ""
  /* Pixbuf magic (0x47646b50) */
  "GdkP"
  /* length: header (24) + pixel_data (3600) */
  "\0\0\16("
  /* pixdata_type (0x1010002) */
  "\1\1\0\2"
  /* rowstride (120) */
  "\0\0\0x"
  /* width (30) */
  "\0\0\0\36"
  /* height (30) */
  "\0\0\0\36"
  /* pixel_data: */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\0\0"
  "\0\2\0\0\0\2@@@\4""333\5+++\6$$$\7\213\213\213\13\225\225\225\14+++\6"
  "+++\6""333\5@@@\4\0\0\0\2\0\0\0\2\0\0\0\1\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\1\0\0\0\3\0\0\0\5\0\0\0\10'''\15hhh\26\217\217\217\40\207\207"
  "\207$mmm#\216\216\2164\231\231\2317555\35aaa\35\200\200\200\34aaa\25"
  "\25\25\25\14\0\0\0\10\0\0\0\5\0\0\0\3\0\0\0\1\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\0\0\0\4\0\0"
  "\0\7\25\25\25\14FFF\26\221\221\221,\276\276\276J\353\353\353\211\372"
  "\372\372\307\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\373\373\373\317\356\356\356\232\275\275\275MRRR\37\34\34\34"
  "\22\25\25\25\14\0\0\0\7\0\0\0\4\0\0\0\1\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\2\0\0\0\4\0\0\0\11\40\40\40\20UUU\36"
  "\235\235\235<\363\363\363\255\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\377\350\350\350\375\340\340\340\375\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\361\361\361\250"
  "'''!111\32\21\21\21\17\0\0\0\11\0\0\0\4\0\0\0\2\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\1\0\0\0\4\0\0\0\12\34\34\34\22\\\\\\$\261\261"
  "\261N\375\375\375\340\377\377\377\377\372\372\372\376\231\231\231\372"
  "FFF\366\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363555\365\215\215\215\372"
  "\367\367\367\376\377\377\377\377\372\372\372\320\275\275\275Y333\36\17"
  "\17\17\21\0\0\0\12\0\0\0\4\0\0\0\1\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\0"
  "\0\0\4\0\0\0\11\16\16\16\22GGG$\252\252\252Q\377\377\377\371\377\377"
  "\377\377\271\271\271\374\37\37\37\364\0\0\0\363\0\0\0\363\0\0\0\363\0"
  "\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363(((\365\314\314\314\374"
  "\377\377\377\377\377\377\377\377\271\271\271[(((\40\17\17\17\21\0\0\0"
  "\11\0\0\0\4\0\0\0\1\0\0\0\0\0\0\0\0\0\0\0\3\0\0\0\7\0\0\0\17...!\212"
  "\212\212H\374\374\374\341\377\377\377\377\237\237\237\372\3\3\3\363\0"
  "\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363"
  "\0\0\0\363\0\0\0\363\0\0\0\363\3\3\3\363\205\205\205\371\377\377\377"
  "\377\377\377\377\377\227\227\227Q\32\32\32\35\0\0\0\17\0\0\0\7\0\0\0"
  "\3\0\0\0\1\0\0\0\1\0\0\0\5\0\0\0\14\24\24\24\32jjj<\356\356\356\264\377"
  "\377\377\377\271\271\271\374\3\3\3\363\0\0\0\363\0\0\0\363\0\0\0\363"
  "\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363"
  "\0\0\0\363\0\0\0\363\0\0\0\363\226\226\226\372\377\377\377\377\363\363"
  "\363\306\0\0\0*\0\0\0\30\0\0\0\14\0\0\0\5\0\0\0\2\0\0\0\2\0\0\0\10\16"
  "\16\16\22>>>)\240\240\240a\377\377\377\377\365\365\365\375\34\34\34\364"
  "\0\0\0\363\0\0\0\363\0\0\0\363222\365;;;\366\0\0\0\363\0\0\0\363\0\0"
  "\0\363\0\0\0\363\26\26\26\364ccc\370\12\12\12\363\0\0\0\363\0\0\0\363"
  "\6\6\6\363\345\345\345\373\377\377\377\377\301\301\301\177\34\34\34%"
  "\0\0\0\22\0\0\0\10\0\0\0\3\0\0\0\2\0\0\0\13\12\12\12\32UUU<\337\337\337"
  "\241\377\377\377\377\223\223\223\372\0\0\0\363\0\0\0\363\0\0\0\363,,"
  ",\365\377\377\377\377\377\377\377\377\201\201\201\371\0\0\0\363\0\0\0"
  "\363\"\"\"\365\345\345\345\376\377\377\377\377\231\231\231\372\0\0\0"
  "\363\0\0\0\363\0\0\0\363fff\370\377\377\377\377\354\354\354\277\0\0\0"
  ".\0\0\0\31\0\0\0\14\0\0\0\4\0\0\0\3\0\0\0\17\17\17\17\"JJJH\366\366\366"
  "\320\377\377\377\377888\366\0\0\0\363\0\0\0\363\0\0\0\363\37\37\37\364"
  "\366\366\366\377\377\377\377\377\377\377\377\377\201\201\201\371%%%\365"
  "\345\345\345\376\377\377\377\377\377\377\377\377\213\213\213\371\0\0"
  "\0\363\0\0\0\363\0\0\0\363\23\23\23\364\374\374\374\377\377\377\377\377"
  "\20\20\20>\0\0\0!\0\0\0\20\0\0\0\6\0\0\0\4\0\0\0\23\27\27\27,OOOZ\377"
  "\377\377\377\362\362\362\375\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363"
  "\0\0\0\363KKK\366\366\366\366\377\377\377\377\377\377\377\377\377\362"
  "\362\362\376\377\377\377\377\377\377\377\377\256\256\256\373\3\3\3\363"
  "\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\321\321\321\371\377\377\377"
  "\377wwwm\15\15\15(\0\0\0\24\0\0\0\10\0\0\0\5\14\14\14\26+++5dddn\377"
  "\377\377\377\332\332\332\374\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363"
  "\0\0\0\363\0\0\0\363KKK\366\370\370\370\377\377\377\377\377\377\377\377"
  "\377\377\377\377\377\256\256\256\373\3\3\3\363\0\0\0\363\0\0\0\363\0"
  "\0\0\363\0\0\0\363\0\0\0\363\262\262\262\371\377\377\377\377\227\227"
  "\227\211\13\13\13/\0\0\0\27\0\0\0\11\0\0\0\5\12\12\12\31,,,:aaav\377"
  "\377\377\377\325\325\325\374\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363"
  "\0\0\0\363\0\0\0\363(((\365\354\354\354\376\377\377\377\377\377\377\377"
  "\377\377\377\377\377\202\202\202\371\0\0\0\363\0\0\0\363\0\0\0\363\0"
  "\0\0\363\0\0\0\363\0\0\0\363\257\257\257\371\377\377\377\377\225\225"
  "\225\220\0\0\0""2\0\0\0\32\0\0\0\13\0\0\0\5\0\0\0\32\26\26\26:===m\377"
  "\377\377\377\355\355\355\374\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363"
  "\0\0\0\363(((\365\350\350\350\376\377\377\377\377\377\377\377\377\374"
  "\374\374\377\377\377\377\377\377\377\377\377\201\201\201\371\0\0\0\363"
  "\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\311\311\311\367\377\377\377"
  "\377uuu\203\11\11\11""6\0\0\0\33\0\0\0\13\0\0\0\5\0\0\0\32\5\5\5""7!"
  "!!c\372\372\372\352\377\377\377\377\34\34\34\364\0\0\0\363\0\0\0\363"
  "\0\0\0\363\17\17\17\364\350\350\350\376\377\377\377\377\377\377\377\377"
  "\256\256\256\373MMM\366\366\366\366\377\377\377\377\377\377\377\377\377"
  "lll\370\0\0\0\363\0\0\0\363\0\0\0\363\3\3\3\363\361\361\361\373\377\377"
  "\377\377...i\5\5\5""6\0\0\0\33\0\0\0\13\0\0\0\5\0\0\0\31\5\5\5""5+++"
  "_\335\335\335\302\377\377\377\377ooo\370\0\0\0\363\0\0\0\363\0\0\0\363"
  "888\366\377\377\377\377\377\377\377\377\256\256\256\373\3\3\3\363\0\0"
  "\0\363KKK\366\366\366\366\377\377\377\377\377\252\252\252\373\0\0\0\363"
  "\0\0\0\363\0\0\0\363FFF\366\377\377\377\377\350\350\350\323\0\0\0Y\0"
  "\0\0""3\0\0\0\32\0\0\0\13\0\0\0\5\0\0\0\26\5\5\5""0&&&W\216\216\216\234"
  "\377\377\377\377\350\350\350\373\12\12\12\363\0\0\0\363\0\0\0\363\0\0"
  "\0\363fff\370lll\370\3\3\3\363\0\0\0\363\0\0\0\363\0\0\0\363555\365\201"
  "\201\201\371\34\34\34\364\0\0\0\363\0\0\0\363\0\0\0\363\302\302\302\365"
  "\377\377\377\377\263\263\263\263\0\0\0R\0\0\0/\0\0\0\27\0\0\0\11\0\0"
  "\0\4\0\0\0\23\0\0\0)\7\7\7J\34\34\34v\345\345\345\317\377\377\377\377"
  "\213\213\213\371\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0"
  "\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363"
  "\0\0\0\363\0\0\0\363```\367\377\377\377\377\363\363\363\346\23\23\23"
  "w\0\0\0H\0\0\0)\0\0\0\24\0\0\0\10\0\0\0\3\0\0\0\17\0\0\0!\4\4\4=\22\22"
  "\22cddd\231\377\377\377\377\377\377\377\377```\367\0\0\0\363\0\0\0\363"
  "\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363"
  "\0\0\0\363\0\0\0\363\0\0\0\363;;;\366\373\373\373\375\377\377\377\377"
  "\225\225\225\257\0\0\0a\0\0\0=\0\0\0!\0\0\0\20\0\0\0\6\0\0\0\2\0\0\0"
  "\13\0\0\0\31\0\0\0""0\3\3\3Q\27\27\27x\226\226\226\255\377\377\377\377"
  "\377\377\377\377~~~\371\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0"
  "\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363]]]\367\370\370"
  "\370\375\377\377\377\377\305\305\305\312\0\0\0v\0\0\0O\0\0\0""0\0\0\0"
  "\31\0\0\0\14\0\0\0\4\0\0\0\2\0\0\0\10\0\0\0\22\0\0\0$\0\0\0>\3\3\3_\21"
  "\21\21\204\223\223\223\261\377\377\377\377\377\377\377\377\330\330\330"
  "\370WWW\367\12\12\12\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0\0\363\0\0"
  "\0\363FFF\366\307\307\307\366\377\377\377\377\377\377\377\377\305\305"
  "\305\316\0\0\0\203\0\0\0^\0\0\0>\0\0\0$\0\0\0\22\0\0\0\10\0\0\0\3\0\0"
  "\0\1\0\0\0\5\0\0\0\14\0\0\0\30\0\0\0,\0\0\0G\3\3\3f\17\17\17\210hhh\261"
  "\344\344\344\332\377\377\377\377\377\377\377\377\370\370\370\375\321"
  "\321\321\371\235\235\235\370\235\235\235\370\313\313\313\370\361\361"
  "\361\373\377\377\377\377\377\377\377\377\355\355\355\345\214\214\214"
  "\277\0\0\0\210\0\0\0f\0\0\0G\0\0\0,\0\0\0\30\0\0\0\14\0\0\0\5\0\0\0\2"
  "\0\0\0\0\0\0\0\3\0\0\0\7\0\0\0\17\0\0\0\35\0\0\0""1\0\0\0J\3\3\3f\12"
  "\12\12\203\0\0\0\236\220\220\220\304\334\334\334\330\377\377\377\377"
  "\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
  "\377\377\377\341\341\341\335\237\237\237\312\5\5\5\237\0\0\0\203\0\0"
  "\0f\0\0\0J\0\0\0""1\0\0\0\35\0\0\0\17\0\0\0\7\0\0\0\3\0\0\0\1\0\0\0\0"
  "\0\0\0\1\0\0\0\4\0\0\0\11\0\0\0\21\0\0\0\36\0\0\0""0\0\0\0G\0\0\0^\0"
  "\0\0v\11\11\11\214\0\0\0\236\17\17\17\256CCC\303{{{\324{{{\324JJJ\305"
  "\33\33\33\261\0\0\0\236\0\0\0\214\0\0\0v\0\0\0^\0\0\0G\0\0\0""0\0\0\0"
  "\36\0\0\0\21\0\0\0\11\0\0\0\4\0\0\0\1\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1"
  "\0\0\0\4\0\0\0\12\0\0\0\21\0\0\0\35\0\0\0,\0\0\0=\0\0\0P\0\0\0b\0\0\0"
  "r\0\0\0~\4\4\4\207\4\4\4\213\0\0\0\213\4\4\4\207\2\2\2~\0\0\0r\0\0\0"
  "b\0\0\0P\0\0\0=\0\0\0,\0\0\0\35\0\0\0\21\0\0\0\12\0\0\0\4\0\0\0\1\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\2\0\0\0\4\0\0\0\11\0\0\0\17"
  "\0\0\0\30\0\0\0#\0\0\0""0\0\0\0=\0\0\0I\0\0\0S\0\0\0Z\0\0\0]\0\0\0]\0"
  "\0\0Z\0\0\0S\0\0\0I\0\0\0=\0\0\0""0\0\0\0#\0\0\0\30\0\0\0\17\0\0\0\11"
  "\0\0\0\4\0\0\0\2\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\1\0\0\0\3\0\0\0\7\0\0\0\13\0\0\0\21\0\0\0\30\0\0\0\37\0\0"
  "\0&\0\0\0,\0\0\0""0\0\0\0""2\0\0\0""2\0\0\0""0\0\0\0,\0\0\0&\0\0\0\37"
  "\0\0\0\30\0\0\0\21\0\0\0\13\0\0\0\7\0\0\0\3\0\0\0\1\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\1\0\0\0"
  "\1\0\0\0\2\0\0\0\4\0\0\0\5\0\0\0\7\0\0\0\11\0\0\0\12\0\0\0\13\0\0\0\13"
  "\0\0\0\13\0\0\0\13\0\0\0\12\0\0\0\11\0\0\0\7\0\0\0\5\0\0\0\4\0\0\0\2"
  "\0\0\0\1\0\0\0\1\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0\0\1\0\0"
  "\0\1\0\0\0\1\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"};

GdkPixbuf *get_close_pixbuf () {
    return gdk_pixbuf_new_from_inline (-1, close_button_data, FALSE, NULL);
}
