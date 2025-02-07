#include "ParsedLocation_dict.h"

AFun PLOC_afun16;
AFun PLOC_afun15;
AFun PLOC_afun14;
AFun PLOC_afun13;
AFun PLOC_afun39;
AFun PLOC_afun38;
AFun PLOC_afun19;
AFun PLOC_afun37;
AFun PLOC_afun18;
AFun PLOC_afun36;
AFun PLOC_afun17;
AFun PLOC_afun35;
AFun PLOC_afun44;
AFun PLOC_afun45;
AFun PLOC_afun42;
AFun PLOC_afun43;
AFun PLOC_afun22;
AFun PLOC_afun40;
AFun PLOC_afun23;
AFun PLOC_afun41;
AFun PLOC_afun20;
AFun PLOC_afun21;
AFun PLOC_afun4;
AFun PLOC_afun46;
AFun PLOC_afun5;
AFun PLOC_afun2;
AFun PLOC_afun3;
AFun PLOC_afun0;
AFun PLOC_afun1;
AFun PLOC_afun29;
AFun PLOC_afun28;
AFun PLOC_afun8;
AFun PLOC_afun25;
AFun PLOC_afun24;
AFun PLOC_afun9;
AFun PLOC_afun6;
AFun PLOC_afun27;
AFun PLOC_afun7;
AFun PLOC_afun26;
AFun PLOC_afun31;
AFun PLOC_afun32;
AFun PLOC_afun33;
AFun PLOC_afun34;
AFun PLOC_afun10;
AFun PLOC_afun11;
AFun PLOC_afun12;
AFun PLOC_afun30;


/*
 * PLOC_afun16 = "newline"
 * PLOC_afun15 = cons(x)
 * PLOC_afun14 = term(x)
 * PLOC_afun13 = attrs(x)
 * PLOC_afun39 = "area"
 * PLOC_afun38 = "Area"
 * PLOC_afun19 = "tab"
 * PLOC_afun37 = "Location"
 * PLOC_afun18 = "\\t"
 * PLOC_afun36 = "file"
 * PLOC_afun17 = char-class(x)
 * PLOC_afun35 = "("
 * PLOC_afun44 = "["
 * PLOC_afun45 = "slice"
 * PLOC_afun42 = "]"
 * PLOC_afun43 = iter-star-sep(x,x)
 * PLOC_afun22 = "\\\\"
 * PLOC_afun40 = ","
 * PLOC_afun23 = "backslash"
 * PLOC_afun41 = "area-in-file"
 * PLOC_afun20 = "\\\""
 * PLOC_afun21 = "quote"
 * PLOC_afun4 = layout
 * PLOC_afun46 = "Slice"
 * PLOC_afun5 = no-attrs
 * PLOC_afun2 = cf(x)
 * PLOC_afun3 = opt(x)
 * PLOC_afun0 = appl(x,x)
 * PLOC_afun1 = prod(x,x,x)
 * PLOC_afun29 = "StrCon"
 * PLOC_afun28 = iter-star(x)
 * PLOC_afun8 = list(x)
 * PLOC_afun25 = "\\"
 * PLOC_afun24 = range(x,x)
 * PLOC_afun9 = lit(x)
 * PLOC_afun6 = lex(x)
 * PLOC_afun27 = "normal"
 * PLOC_afun7 = iter(x)
 * PLOC_afun26 = "decimal"
 * PLOC_afun31 = "NatCon"
 * PLOC_afun32 = "digits"
 * PLOC_afun33 = "whitespace"
 * PLOC_afun34 = ")"
 * PLOC_afun10 = "\\n"
 * PLOC_afun11 = sort(x)
 * PLOC_afun12 = "StrChar"
 * PLOC_afun30 = "default"
 *
 *
 */

static ATerm _ParsedLocation_dict = NULL;

#define _ParsedLocation_dict_LEN 626

static unsigned char _ParsedLocation_dict_baf[_ParsedLocation_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x32,0x62,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,0x00,0x31,
0x31,0x00,0x01,0x02,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,0x0C,0x0D,0x0E,0x0F,
0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C,0x1D,0x1E,0x1F,
0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x2F,
0x30,0x31,0x02,0x00,0x01,0x02,0x5B,0x5D,0x00,0x00,0x01,0x07,0x6E,0x65,0x77,0x6C,
0x69,0x6E,0x65,0x00,0x01,0x01,0x01,0x78,0x00,0x00,0x01,0x04,0x63,0x6F,0x6E,0x73,
0x01,0x00,0x01,0x01,0x03,0x04,0x74,0x65,0x72,0x6D,0x01,0x00,0x01,0x01,0x03,0x05,
0x61,0x74,0x74,0x72,0x73,0x01,0x00,0x01,0x01,0x03,0x04,0x61,0x72,0x65,0x61,0x00,
0x01,0x01,0x04,0x41,0x72,0x65,0x61,0x00,0x01,0x01,0x03,0x74,0x61,0x62,0x00,0x01,
0x01,0x08,0x4C,0x6F,0x63,0x61,0x74,0x69,0x6F,0x6E,0x00,0x01,0x01,0x02,0x5C,0x74,
0x00,0x01,0x01,0x04,0x66,0x69,0x6C,0x65,0x00,0x01,0x01,0x0A,0x63,0x68,0x61,0x72,
0x2D,0x63,0x6C,0x61,0x73,0x73,0x01,0x00,0x01,0x01,0x03,0x01,0x28,0x00,0x01,0x01,
0x01,0x5B,0x00,0x01,0x01,0x05,0x73,0x6C,0x69,0x63,0x65,0x00,0x01,0x01,0x01,0x5D,
0x00,0x01,0x01,0x0D,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x2D,0x73,0x65,
0x70,0x02,0x00,0x01,0x01,0x03,0x01,0x03,0x02,0x5C,0x5C,0x00,0x01,0x01,0x01,0x2C,
0x00,0x01,0x01,0x09,0x62,0x61,0x63,0x6B,0x73,0x6C,0x61,0x73,0x68,0x00,0x01,0x01,
0x0C,0x61,0x72,0x65,0x61,0x2D,0x69,0x6E,0x2D,0x66,0x69,0x6C,0x65,0x00,0x01,0x01,
0x02,0x5C,0x22,0x00,0x01,0x01,0x05,0x71,0x75,0x6F,0x74,0x65,0x00,0x01,0x01,0x06,
0x6C,0x61,0x79,0x6F,0x75,0x74,0x00,0x00,0x01,0x05,0x53,0x6C,0x69,0x63,0x65,0x00,
0x01,0x01,0x08,0x6E,0x6F,0x2D,0x61,0x74,0x74,0x72,0x73,0x00,0x00,0x01,0x02,0x63,
0x66,0x01,0x00,0x01,0x01,0x03,0x03,0x6F,0x70,0x74,0x01,0x00,0x01,0x01,0x03,0x04,
0x61,0x70,0x70,0x6C,0x02,0x00,0x01,0x01,0x03,0x01,0x03,0x04,0x70,0x72,0x6F,0x64,
0x03,0x00,0x01,0x01,0x03,0x01,0x03,0x01,0x03,0x06,0x53,0x74,0x72,0x43,0x6F,0x6E,
0x00,0x01,0x01,0x09,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x01,0x00,0x01,
0x01,0x03,0x04,0x6C,0x69,0x73,0x74,0x01,0x00,0x01,0x01,0x03,0x01,0x5C,0x00,0x01,
0x01,0x05,0x72,0x61,0x6E,0x67,0x65,0x02,0x00,0x01,0x01,0x03,0x01,0x03,0x03,0x6C,
0x69,0x74,0x01,0x00,0x01,0x01,0x03,0x03,0x6C,0x65,0x78,0x01,0x00,0x01,0x01,0x03,
0x06,0x6E,0x6F,0x72,0x6D,0x61,0x6C,0x00,0x01,0x01,0x04,0x69,0x74,0x65,0x72,0x01,
0x00,0x01,0x01,0x03,0x07,0x64,0x65,0x63,0x69,0x6D,0x61,0x6C,0x00,0x01,0x01,0x06,
0x4E,0x61,0x74,0x43,0x6F,0x6E,0x00,0x01,0x01,0x06,0x64,0x69,0x67,0x69,0x74,0x73,
0x00,0x01,0x01,0x0A,0x77,0x68,0x69,0x74,0x65,0x73,0x70,0x61,0x63,0x65,0x00,0x01,
0x01,0x01,0x29,0x00,0x01,0x01,0x02,0x5C,0x6E,0x00,0x01,0x01,0x04,0x73,0x6F,0x72,
0x74,0x01,0x00,0x01,0x01,0x03,0x07,0x53,0x74,0x72,0x43,0x68,0x61,0x72,0x00,0x01,
0x01,0x07,0x64,0x65,0x66,0x61,0x75,0x6C,0x74,0x00,0x01,0x01,0x00,0x01,0xD4,0x0B,
0x70,0x0D,0x20,0xD6,0x81,0x56,0x09,0x78,0x05,0x10,0xE6,0x41,0x95,0x0A,0x74,0x09,
0x30,0xC6,0xC1,0x17,0x08,0x7C,0x01,0x08,0xFA,0x21,0xE4,0x8B,0xB2,0x0E,0x28,0xDA,
0xA1,0x66,0x89,0xBA,0x06,0x18,0xEA,0x61,0xA5,0x8A,0xB6,0x0A,0x38,0xCA,0xE1,0x27,
0x88,0xBE,0x02,0x04,0xF2,0x11,0xC4,0x4B,0x31,0x0C,0x24,0xD2,0x91,0x46,0x49,0x39,
0x04,0x14,0xE2,0x51,0x85,0x4A,0x35,0x08,0x34,0xC2,0xD1,0x07,0x48,0x3D,0x00,0x0E,
0x3D,0x82
};

void init_ParsedLocation_dict()
{
  ATermList afuns, terms;

  _ParsedLocation_dict = ATreadFromBinaryString(_ParsedLocation_dict_baf, _ParsedLocation_dict_LEN);

  ATprotect(&_ParsedLocation_dict);

  afuns = (ATermList)ATelementAt((ATermList)_ParsedLocation_dict, 0);

  PLOC_afun16 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun16);
  afuns = ATgetNext(afuns);
  PLOC_afun15 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun15);
  afuns = ATgetNext(afuns);
  PLOC_afun14 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun14);
  afuns = ATgetNext(afuns);
  PLOC_afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun13);
  afuns = ATgetNext(afuns);
  PLOC_afun39 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun39);
  afuns = ATgetNext(afuns);
  PLOC_afun38 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun38);
  afuns = ATgetNext(afuns);
  PLOC_afun19 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun19);
  afuns = ATgetNext(afuns);
  PLOC_afun37 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun37);
  afuns = ATgetNext(afuns);
  PLOC_afun18 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun18);
  afuns = ATgetNext(afuns);
  PLOC_afun36 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun36);
  afuns = ATgetNext(afuns);
  PLOC_afun17 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun17);
  afuns = ATgetNext(afuns);
  PLOC_afun35 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun35);
  afuns = ATgetNext(afuns);
  PLOC_afun44 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun44);
  afuns = ATgetNext(afuns);
  PLOC_afun45 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun45);
  afuns = ATgetNext(afuns);
  PLOC_afun42 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun42);
  afuns = ATgetNext(afuns);
  PLOC_afun43 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun43);
  afuns = ATgetNext(afuns);
  PLOC_afun22 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun22);
  afuns = ATgetNext(afuns);
  PLOC_afun40 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun40);
  afuns = ATgetNext(afuns);
  PLOC_afun23 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun23);
  afuns = ATgetNext(afuns);
  PLOC_afun41 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun41);
  afuns = ATgetNext(afuns);
  PLOC_afun20 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun20);
  afuns = ATgetNext(afuns);
  PLOC_afun21 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun21);
  afuns = ATgetNext(afuns);
  PLOC_afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun4);
  afuns = ATgetNext(afuns);
  PLOC_afun46 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun46);
  afuns = ATgetNext(afuns);
  PLOC_afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun5);
  afuns = ATgetNext(afuns);
  PLOC_afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun2);
  afuns = ATgetNext(afuns);
  PLOC_afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun3);
  afuns = ATgetNext(afuns);
  PLOC_afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun0);
  afuns = ATgetNext(afuns);
  PLOC_afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun1);
  afuns = ATgetNext(afuns);
  PLOC_afun29 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun29);
  afuns = ATgetNext(afuns);
  PLOC_afun28 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun28);
  afuns = ATgetNext(afuns);
  PLOC_afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun8);
  afuns = ATgetNext(afuns);
  PLOC_afun25 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun25);
  afuns = ATgetNext(afuns);
  PLOC_afun24 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun24);
  afuns = ATgetNext(afuns);
  PLOC_afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun9);
  afuns = ATgetNext(afuns);
  PLOC_afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun6);
  afuns = ATgetNext(afuns);
  PLOC_afun27 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun27);
  afuns = ATgetNext(afuns);
  PLOC_afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun7);
  afuns = ATgetNext(afuns);
  PLOC_afun26 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun26);
  afuns = ATgetNext(afuns);
  PLOC_afun31 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun31);
  afuns = ATgetNext(afuns);
  PLOC_afun32 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun32);
  afuns = ATgetNext(afuns);
  PLOC_afun33 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun33);
  afuns = ATgetNext(afuns);
  PLOC_afun34 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun34);
  afuns = ATgetNext(afuns);
  PLOC_afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun10);
  afuns = ATgetNext(afuns);
  PLOC_afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun11);
  afuns = ATgetNext(afuns);
  PLOC_afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun12);
  afuns = ATgetNext(afuns);
  PLOC_afun30 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PLOC_afun30);
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt((ATermList)_ParsedLocation_dict, 1);

}
