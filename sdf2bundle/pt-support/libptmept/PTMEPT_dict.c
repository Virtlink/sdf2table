#include "PTMEPT_dict.h"

AFun PTPT_afun121;
AFun PTPT_afun3;
AFun PTPT_afun78;
AFun PTPT_afun48;
AFun PTPT_afun59;
AFun PTPT_afun99;
AFun PTPT_afun2;
AFun PTPT_afun47;
AFun PTPT_afun104;
AFun PTPT_afun80;
AFun PTPT_afun42;
AFun PTPT_afun75;
AFun PTPT_afun15;
AFun PTPT_afun86;
AFun PTPT_afun31;
AFun PTPT_afun43;
AFun PTPT_afun103;
AFun PTPT_afun0;
AFun PTPT_afun84;
AFun PTPT_afun98;
AFun PTPT_afun33;
AFun PTPT_afun10;
AFun PTPT_afun13;
AFun PTPT_afun119;
AFun PTPT_afun74;
AFun PTPT_afun14;
AFun PTPT_afun40;
AFun PTPT_afun82;
AFun PTPT_afun30;
AFun PTPT_afun123;
AFun PTPT_afun101;
AFun PTPT_afun60;
AFun PTPT_afun7;
AFun PTPT_afun58;
AFun PTPT_afun79;
AFun PTPT_afun100;
AFun PTPT_afun81;
AFun PTPT_afun122;
AFun PTPT_afun29;
AFun PTPT_afun1;
AFun PTPT_afun6;
AFun PTPT_afun83;
AFun PTPT_afun61;
AFun PTPT_afun97;
AFun PTPT_afun50;
AFun PTPT_afun44;
AFun PTPT_afun102;
AFun PTPT_afun112;
AFun PTPT_afun73;
AFun PTPT_afun9;
AFun PTPT_afun107;
AFun PTPT_afun88;
AFun PTPT_afun51;
AFun PTPT_afun56;
AFun PTPT_afun85;
AFun PTPT_afun127;
AFun PTPT_afun12;
AFun PTPT_afun91;
AFun PTPT_afun64;
AFun PTPT_afun8;
AFun PTPT_afun28;
AFun PTPT_afun32;
AFun PTPT_afun106;
AFun PTPT_afun76;
AFun PTPT_afun90;
AFun PTPT_afun11;
AFun PTPT_afun62;
AFun PTPT_afun27;
AFun PTPT_afun120;
AFun PTPT_afun55;
AFun PTPT_afun108;
AFun PTPT_afun49;
AFun PTPT_afun116;
AFun PTPT_afun109;
AFun PTPT_afun36;
AFun PTPT_afun111;
AFun PTPT_afun17;
AFun PTPT_afun110;
AFun PTPT_afun92;
AFun PTPT_afun34;
AFun PTPT_afun63;
AFun PTPT_afun19;
AFun PTPT_afun26;
AFun PTPT_afun37;
AFun PTPT_afun105;
AFun PTPT_afun115;
AFun PTPT_afun25;
AFun PTPT_afun18;
AFun PTPT_afun114;
AFun PTPT_afun69;
AFun PTPT_afun54;
AFun PTPT_afun87;
AFun PTPT_afun38;
AFun PTPT_afun16;
AFun PTPT_afun77;
AFun PTPT_afun52;
AFun PTPT_afun96;
AFun PTPT_afun57;
AFun PTPT_afun35;
AFun PTPT_afun39;
AFun PTPT_afun72;
AFun PTPT_afun117;
AFun PTPT_afun22;
AFun PTPT_afun118;
AFun PTPT_afun66;
AFun PTPT_afun124;
AFun PTPT_afun94;
AFun PTPT_afun41;
AFun PTPT_afun126;
AFun PTPT_afun53;
AFun PTPT_afun70;
AFun PTPT_afun20;
AFun PTPT_afun21;
AFun PTPT_afun65;
AFun PTPT_afun5;
AFun PTPT_afun113;
AFun PTPT_afun93;
AFun PTPT_afun89;
AFun PTPT_afun95;
AFun PTPT_afun67;
AFun PTPT_afun4;
AFun PTPT_afun23;
AFun PTPT_afun71;
AFun PTPT_afun45;
AFun PTPT_afun68;
AFun PTPT_afun125;
AFun PTPT_afun24;
AFun PTPT_afun46;


/*
 * PTPT_afun121 = range(x,x)
 * PTPT_afun3 = opt(x)
 * PTPT_afun78 = iter-star-sep(x,x)
 * PTPT_afun48 = "left"
 * PTPT_afun59 = "opt"
 * PTPT_afun99 = "}"
 * PTPT_afun2 = cf(x)
 * PTPT_afun47 = "avoid"
 * PTPT_afun104 = "-"
 * PTPT_afun80 = "CharRange"
 * PTPT_afun42 = "StrCon"
 * PTPT_afun75 = "char-class"
 * PTPT_afun15 = "annotated"
 * PTPT_afun86 = "RealCon"
 * PTPT_afun31 = "Attrs"
 * PTPT_afun43 = "id"
 * PTPT_afun103 = "positive"
 * PTPT_afun0 = appl(x,x)
 * PTPT_afun84 = "<START>"
 * PTPT_afun98 = "placeholder"
 * PTPT_afun33 = "]"
 * PTPT_afun10 = "Annotation"
 * PTPT_afun13 = term(x)
 * PTPT_afun119 = "\\\\"
 * PTPT_afun74 = "CharRanges"
 * PTPT_afun14 = cons(x)
 * PTPT_afun40 = "ATerm"
 * PTPT_afun82 = "range"
 * PTPT_afun30 = "Attributes"
 * PTPT_afun123 = "decimal"
 * PTPT_afun101 = "natural"
 * PTPT_afun60 = "alt"
 * PTPT_afun7 = iter(x)
 * PTPT_afun58 = "lex"
 * PTPT_afun79 = "list"
 * PTPT_afun100 = "{"
 * PTPT_afun81 = "character"
 * PTPT_afun122 = "\\"
 * PTPT_afun29 = "no-attrs"
 * PTPT_afun1 = prod(x,x,x)
 * PTPT_afun6 = lex(x)
 * PTPT_afun83 = parsetree(x,x)
 * PTPT_afun61 = "Symbols"
 * PTPT_afun97 = "<"
 * PTPT_afun50 = "non-assoc"
 * PTPT_afun44 = "bracket"
 * PTPT_afun102 = "+"
 * PTPT_afun112 = "\\n"
 * PTPT_afun73 = "layout"
 * PTPT_afun9 = sort(x)
 * PTPT_afun107 = "OptExp"
 * PTPT_afun88 = "default"
 * PTPT_afun51 = "parsetree"
 * PTPT_afun56 = "cilit"
 * PTPT_afun85 = "IntCon"
 * PTPT_afun127 = "whitespace"
 * PTPT_afun12 = attrs(x)
 * PTPT_afun91 = "IdCon"
 * PTPT_afun64 = "sort"
 * PTPT_afun8 = list(x)
 * PTPT_afun28 = "char"
 * PTPT_afun32 = "attrs"
 * PTPT_afun106 = "e"
 * PTPT_afun76 = "strategy"
 * PTPT_afun90 = "quoted"
 * PTPT_afun11 = "Tree"
 * PTPT_afun62 = "seq"
 * PTPT_afun27 = "amb"
 * PTPT_afun120 = "backslash"
 * PTPT_afun55 = "lit"
 * PTPT_afun108 = "present"
 * PTPT_afun49 = "right"
 * PTPT_afun116 = "tab"
 * PTPT_afun109 = "absent"
 * PTPT_afun36 = "["
 * PTPT_afun111 = "real-con"
 * PTPT_afun17 = ")"
 * PTPT_afun110 = "."
 * PTPT_afun92 = "unquoted"
 * PTPT_afun34 = iter-sep(x,x)
 * PTPT_afun63 = "tuple"
 * PTPT_afun19 = ","
 * PTPT_afun26 = "cycle"
 * PTPT_afun37 = "many"
 * PTPT_afun105 = "negative"
 * PTPT_afun115 = "\\t"
 * PTPT_afun25 = "Symbol"
 * PTPT_afun18 = "Args"
 * PTPT_afun114 = "newline"
 * PTPT_afun69 = "iter-n"
 * PTPT_afun54 = "empty"
 * PTPT_afun87 = "prod"
 * PTPT_afun38 = "Associativity"
 * PTPT_afun16 = lit(x)
 * PTPT_afun77 = "parameterized-sort"
 * PTPT_afun52 = "ParseTree"
 * PTPT_afun96 = ">"
 * PTPT_afun57 = "cf"
 * PTPT_afun35 = "Attr"
 * PTPT_afun39 = "assoc"
 * PTPT_afun72 = "varsym"
 * PTPT_afun117 = "\\\""
 * PTPT_afun22 = "appl"
 * PTPT_afun118 = "quote"
 * PTPT_afun66 = "iter-star"
 * PTPT_afun124 = "normal"
 * PTPT_afun94 = "real"
 * PTPT_afun41 = "term"
 * PTPT_afun126 = "digits"
 * PTPT_afun53 = "top"
 * PTPT_afun70 = "iter-sep-n"
 * PTPT_afun20 = "Production"
 * PTPT_afun21 = "("
 * PTPT_afun65 = "iter"
 * PTPT_afun5 = no-attrs
 * PTPT_afun113 = "StrChar"
 * PTPT_afun93 = "int"
 * PTPT_afun89 = "AFun"
 * PTPT_afun95 = "fun"
 * PTPT_afun67 = "iter-sep"
 * PTPT_afun4 = layout
 * PTPT_afun23 = char-class(x)
 * PTPT_afun71 = "func"
 * PTPT_afun45 = "reject"
 * PTPT_afun68 = "iter-star-sep"
 * PTPT_afun125 = iter-star(x)
 * PTPT_afun24 = "NatCon"
 * PTPT_afun46 = "prefer"
 *
 *
 */

static ATerm _PTMEPT_dict = NULL;

#define _PTMEPT_dict_LEN 1723

static unsigned char _PTMEPT_dict_baf[_PTMEPT_dict_LEN] = {
0x00,0x8B,0xAF,0x83,0x00,0x80,0x83,0x81,0x04,0x05,0x5B,0x5F,0x2C,0x5F,0x5D,0x02,
0x00,0x80,0x82,0x80,0x82,0x00,0x01,0x03,0x04,0x05,0x06,0x07,0x08,0x09,0x0A,0x0B,
0x0C,0x0D,0x0E,0x0F,0x10,0x11,0x12,0x13,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,
0x1C,0x1D,0x1E,0x1F,0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,
0x2C,0x2D,0x2E,0x2F,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3A,0x3B,
0x3C,0x3D,0x3E,0x3F,0x40,0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x4B,
0x4C,0x4D,0x4E,0x4F,0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x5A,0x5B,
0x5C,0x5D,0x5E,0x5F,0x60,0x61,0x62,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6A,0x6B,
0x6C,0x6D,0x6E,0x6F,0x70,0x71,0x72,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x7A,0x7B,
0x7C,0x7D,0x7E,0x7F,0x80,0x80,0x80,0x81,0x80,0x82,0x02,0x00,0x01,0x02,0x5B,0x5D,
0x00,0x00,0x01,0x01,0x78,0x00,0x00,0x01,0x05,0x72,0x61,0x6E,0x67,0x65,0x02,0x00,
0x01,0x01,0x02,0x01,0x02,0x03,0x6F,0x70,0x74,0x01,0x00,0x01,0x01,0x02,0x0D,0x69,
0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x2D,0x73,0x65,0x70,0x02,0x00,0x01,0x01,
0x02,0x01,0x02,0x04,0x6C,0x65,0x66,0x74,0x00,0x01,0x01,0x03,0x6F,0x70,0x74,0x00,
0x01,0x01,0x01,0x7D,0x00,0x01,0x01,0x02,0x63,0x66,0x01,0x00,0x01,0x01,0x02,0x05,
0x61,0x76,0x6F,0x69,0x64,0x00,0x01,0x01,0x01,0x2D,0x00,0x01,0x01,0x09,0x43,0x68,
0x61,0x72,0x52,0x61,0x6E,0x67,0x65,0x00,0x01,0x01,0x06,0x53,0x74,0x72,0x43,0x6F,
0x6E,0x00,0x01,0x01,0x0A,0x63,0x68,0x61,0x72,0x2D,0x63,0x6C,0x61,0x73,0x73,0x00,
0x01,0x01,0x09,0x61,0x6E,0x6E,0x6F,0x74,0x61,0x74,0x65,0x64,0x00,0x01,0x01,0x07,
0x52,0x65,0x61,0x6C,0x43,0x6F,0x6E,0x00,0x01,0x01,0x05,0x41,0x74,0x74,0x72,0x73,
0x00,0x01,0x01,0x02,0x69,0x64,0x00,0x01,0x01,0x08,0x70,0x6F,0x73,0x69,0x74,0x69,
0x76,0x65,0x00,0x01,0x01,0x04,0x61,0x70,0x70,0x6C,0x02,0x00,0x01,0x01,0x02,0x01,
0x02,0x07,0x3C,0x53,0x54,0x41,0x52,0x54,0x3E,0x00,0x01,0x01,0x0B,0x70,0x6C,0x61,
0x63,0x65,0x68,0x6F,0x6C,0x64,0x65,0x72,0x00,0x01,0x01,0x01,0x5D,0x00,0x01,0x01,
0x0A,0x41,0x6E,0x6E,0x6F,0x74,0x61,0x74,0x69,0x6F,0x6E,0x00,0x01,0x01,0x04,0x74,
0x65,0x72,0x6D,0x01,0x00,0x01,0x01,0x02,0x02,0x5C,0x5C,0x00,0x01,0x01,0x0A,0x43,
0x68,0x61,0x72,0x52,0x61,0x6E,0x67,0x65,0x73,0x00,0x01,0x01,0x04,0x63,0x6F,0x6E,
0x73,0x01,0x00,0x01,0x01,0x02,0x05,0x41,0x54,0x65,0x72,0x6D,0x00,0x01,0x01,0x05,
0x72,0x61,0x6E,0x67,0x65,0x00,0x01,0x01,0x0A,0x41,0x74,0x74,0x72,0x69,0x62,0x75,
0x74,0x65,0x73,0x00,0x01,0x01,0x07,0x64,0x65,0x63,0x69,0x6D,0x61,0x6C,0x00,0x01,
0x01,0x07,0x6E,0x61,0x74,0x75,0x72,0x61,0x6C,0x00,0x01,0x01,0x03,0x61,0x6C,0x74,
0x00,0x01,0x01,0x04,0x69,0x74,0x65,0x72,0x01,0x00,0x01,0x01,0x02,0x03,0x6C,0x65,
0x78,0x00,0x01,0x01,0x04,0x6C,0x69,0x73,0x74,0x00,0x01,0x01,0x01,0x7B,0x00,0x01,
0x01,0x09,0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x00,0x01,0x01,0x01,0x5C,
0x00,0x01,0x01,0x08,0x6E,0x6F,0x2D,0x61,0x74,0x74,0x72,0x73,0x00,0x01,0x01,0x04,
0x70,0x72,0x6F,0x64,0x03,0x00,0x01,0x01,0x02,0x01,0x02,0x01,0x02,0x03,0x6C,0x65,
0x78,0x01,0x00,0x01,0x01,0x02,0x09,0x70,0x61,0x72,0x73,0x65,0x74,0x72,0x65,0x65,
0x02,0x00,0x01,0x01,0x02,0x01,0x02,0x07,0x53,0x79,0x6D,0x62,0x6F,0x6C,0x73,0x00,
0x01,0x01,0x01,0x3C,0x00,0x01,0x01,0x09,0x6E,0x6F,0x6E,0x2D,0x61,0x73,0x73,0x6F,
0x63,0x00,0x01,0x01,0x07,0x62,0x72,0x61,0x63,0x6B,0x65,0x74,0x00,0x01,0x01,0x01,
0x2B,0x00,0x01,0x01,0x02,0x5C,0x6E,0x00,0x01,0x01,0x06,0x6C,0x61,0x79,0x6F,0x75,
0x74,0x00,0x01,0x01,0x04,0x73,0x6F,0x72,0x74,0x01,0x00,0x01,0x01,0x02,0x06,0x4F,
0x70,0x74,0x45,0x78,0x70,0x00,0x01,0x01,0x07,0x64,0x65,0x66,0x61,0x75,0x6C,0x74,
0x00,0x01,0x01,0x09,0x70,0x61,0x72,0x73,0x65,0x74,0x72,0x65,0x65,0x00,0x01,0x01,
0x05,0x63,0x69,0x6C,0x69,0x74,0x00,0x01,0x01,0x06,0x49,0x6E,0x74,0x43,0x6F,0x6E,
0x00,0x01,0x01,0x0A,0x77,0x68,0x69,0x74,0x65,0x73,0x70,0x61,0x63,0x65,0x00,0x01,
0x01,0x05,0x61,0x74,0x74,0x72,0x73,0x01,0x00,0x01,0x01,0x02,0x05,0x49,0x64,0x43,
0x6F,0x6E,0x00,0x01,0x01,0x04,0x73,0x6F,0x72,0x74,0x00,0x01,0x01,0x04,0x6C,0x69,
0x73,0x74,0x01,0x00,0x01,0x01,0x02,0x04,0x63,0x68,0x61,0x72,0x00,0x01,0x01,0x05,
0x61,0x74,0x74,0x72,0x73,0x00,0x01,0x01,0x01,0x65,0x00,0x01,0x01,0x08,0x73,0x74,
0x72,0x61,0x74,0x65,0x67,0x79,0x00,0x01,0x01,0x06,0x71,0x75,0x6F,0x74,0x65,0x64,
0x00,0x01,0x01,0x04,0x54,0x72,0x65,0x65,0x00,0x01,0x01,0x03,0x73,0x65,0x71,0x00,
0x01,0x01,0x03,0x61,0x6D,0x62,0x00,0x01,0x01,0x09,0x62,0x61,0x63,0x6B,0x73,0x6C,
0x61,0x73,0x68,0x00,0x01,0x01,0x03,0x6C,0x69,0x74,0x00,0x01,0x01,0x07,0x70,0x72,
0x65,0x73,0x65,0x6E,0x74,0x00,0x01,0x01,0x05,0x72,0x69,0x67,0x68,0x74,0x00,0x01,
0x01,0x03,0x74,0x61,0x62,0x00,0x01,0x01,0x06,0x61,0x62,0x73,0x65,0x6E,0x74,0x00,
0x01,0x01,0x01,0x5B,0x00,0x01,0x01,0x08,0x72,0x65,0x61,0x6C,0x2D,0x63,0x6F,0x6E,
0x00,0x01,0x01,0x01,0x29,0x00,0x01,0x01,0x01,0x2E,0x00,0x01,0x01,0x08,0x75,0x6E,
0x71,0x75,0x6F,0x74,0x65,0x64,0x00,0x01,0x01,0x08,0x69,0x74,0x65,0x72,0x2D,0x73,
0x65,0x70,0x02,0x00,0x01,0x01,0x02,0x01,0x02,0x05,0x74,0x75,0x70,0x6C,0x65,0x00,
0x01,0x01,0x01,0x2C,0x00,0x01,0x01,0x05,0x63,0x79,0x63,0x6C,0x65,0x00,0x01,0x01,
0x04,0x6D,0x61,0x6E,0x79,0x00,0x01,0x01,0x08,0x6E,0x65,0x67,0x61,0x74,0x69,0x76,
0x65,0x00,0x01,0x01,0x02,0x5C,0x74,0x00,0x01,0x01,0x06,0x53,0x79,0x6D,0x62,0x6F,
0x6C,0x00,0x01,0x01,0x04,0x41,0x72,0x67,0x73,0x00,0x01,0x01,0x07,0x6E,0x65,0x77,
0x6C,0x69,0x6E,0x65,0x00,0x01,0x01,0x06,0x69,0x74,0x65,0x72,0x2D,0x6E,0x00,0x01,
0x01,0x05,0x65,0x6D,0x70,0x74,0x79,0x00,0x01,0x01,0x04,0x70,0x72,0x6F,0x64,0x00,
0x01,0x01,0x0D,0x41,0x73,0x73,0x6F,0x63,0x69,0x61,0x74,0x69,0x76,0x69,0x74,0x79,
0x00,0x01,0x01,0x03,0x6C,0x69,0x74,0x01,0x00,0x01,0x01,0x02,0x12,0x70,0x61,0x72,
0x61,0x6D,0x65,0x74,0x65,0x72,0x69,0x7A,0x65,0x64,0x2D,0x73,0x6F,0x72,0x74,0x00,
0x01,0x01,0x09,0x50,0x61,0x72,0x73,0x65,0x54,0x72,0x65,0x65,0x00,0x01,0x01,0x01,
0x3E,0x00,0x01,0x01,0x02,0x63,0x66,0x00,0x01,0x01,0x04,0x41,0x74,0x74,0x72,0x00,
0x01,0x01,0x05,0x61,0x73,0x73,0x6F,0x63,0x00,0x01,0x01,0x06,0x76,0x61,0x72,0x73,
0x79,0x6D,0x00,0x01,0x01,0x02,0x5C,0x22,0x00,0x01,0x01,0x04,0x61,0x70,0x70,0x6C,
0x00,0x01,0x01,0x05,0x71,0x75,0x6F,0x74,0x65,0x00,0x01,0x01,0x09,0x69,0x74,0x65,
0x72,0x2D,0x73,0x74,0x61,0x72,0x00,0x01,0x01,0x06,0x6E,0x6F,0x72,0x6D,0x61,0x6C,
0x00,0x01,0x01,0x04,0x72,0x65,0x61,0x6C,0x00,0x01,0x01,0x04,0x74,0x65,0x72,0x6D,
0x00,0x01,0x01,0x06,0x64,0x69,0x67,0x69,0x74,0x73,0x00,0x01,0x01,0x03,0x74,0x6F,
0x70,0x00,0x01,0x01,0x0A,0x69,0x74,0x65,0x72,0x2D,0x73,0x65,0x70,0x2D,0x6E,0x00,
0x01,0x01,0x0A,0x50,0x72,0x6F,0x64,0x75,0x63,0x74,0x69,0x6F,0x6E,0x00,0x01,0x01,
0x01,0x28,0x00,0x01,0x01,0x04,0x69,0x74,0x65,0x72,0x00,0x01,0x01,0x08,0x6E,0x6F,
0x2D,0x61,0x74,0x74,0x72,0x73,0x00,0x00,0x01,0x07,0x53,0x74,0x72,0x43,0x68,0x61,
0x72,0x00,0x01,0x01,0x03,0x69,0x6E,0x74,0x00,0x01,0x01,0x04,0x41,0x46,0x75,0x6E,
0x00,0x01,0x01,0x03,0x66,0x75,0x6E,0x00,0x01,0x01,0x08,0x69,0x74,0x65,0x72,0x2D,
0x73,0x65,0x70,0x00,0x01,0x01,0x06,0x6C,0x61,0x79,0x6F,0x75,0x74,0x00,0x00,0x01,
0x0A,0x63,0x68,0x61,0x72,0x2D,0x63,0x6C,0x61,0x73,0x73,0x01,0x00,0x01,0x01,0x02,
0x04,0x66,0x75,0x6E,0x63,0x00,0x01,0x01,0x06,0x72,0x65,0x6A,0x65,0x63,0x74,0x00,
0x01,0x01,0x0D,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x2D,0x73,0x65,0x70,
0x00,0x01,0x01,0x09,0x69,0x74,0x65,0x72,0x2D,0x73,0x74,0x61,0x72,0x01,0x00,0x01,
0x01,0x02,0x06,0x4E,0x61,0x74,0x43,0x6F,0x6E,0x00,0x01,0x01,0x06,0x70,0x72,0x65,
0x66,0x65,0x72,0x00,0x01,0x01,0x00,0x00,0xFE,0x40,0x1F,0xB0,0x0B,0xE2,0x00,0xFA,
0x80,0xDE,0x60,0x17,0xB8,0x09,0xE1,0x00,0x7A,0x40,0xEE,0x50,0x1B,0xB4,0x0A,0xE3,
0x00,0xBA,0xC0,0xCE,0x70,0x13,0xBC,0x08,0xE0,0x80,0x3A,0x20,0xF6,0x48,0x1D,0xB2,
0x0B,0x62,0x80,0xDA,0xA0,0xD6,0x68,0x15,0xBA,0x09,0x61,0x80,0x5A,0x60,0xE6,0x58,
0x19,0xB6,0x0A,0x63,0x80,0x9A,0xE0,0xC6,0x78,0x11,0xBE,0x08,0x60,0x40,0x1A,0x10,
0xFA,0x44,0x1E,0xB1,0x0B,0xA2,0x40,0xEA,0x90,0xDA,0x64,0x16,0xB9,0x09,0xA1,0x40,
0x6A,0x50,0xEA,0x54,0x1A,0xB5,0x0A,0xA3,0x40,0xAA,0xD0,0xCA,0x74,0x12,0xBD,0x08,
0xA0,0xC0,0x2A,0x30,0xF2,0x4C,0x1C,0xB3,0x0B,0x22,0xC0,0xCA,0xB0,0xD2,0x6C,0x14,
0xBB,0x09,0x21,0xC0,0x4A,0x70,0xE2,0x5C,0x18,0xB7,0x0A,0x23,0xC0,0x8A,0xF0,0xC2,
0x7C,0x10,0xBF,0x08,0x20,0x20,0x0A,0x08,0xFC,0x42,0x1F,0x30,0x8B,0xC2,0x20,0xF2,
0x88,0xDC,0x62,0x17,0x38,0x89,0xC1,0x20,0x72,0x48,0xEC,0x52,0x1B,0x34,0x8A,0xC3,
0x20,0xB2,0xC8,0xCC,0x72,0x13,0x3C,0x88,0xC0,0xA0,0x32,0x28,0xF4,0x4A,0x1D,0x32,
0x8B,0x42,0xA0,0xD2,0xA8,0xD4,0x6A,0x15,0x3A,0x89,0x41,0xA0,0x52,0x68,0xE4,0x5A,
0x19,0x36,0x8A,0x43,0xA0,0x92,0xE8,0xC4,0x7A,0x11,0x3E,0x88,0x40,0x60,0x12,0x18,
0xF8,0x46,0x1E,0x31,0x8B,0x82,0x60,0xE2,0x98,0xD8,0x66,0x16,0x39,0x89,0x81,0x60,
0x62,0x58,0xE8,0x56,0x1A,0x35,0x8A,0x83,0x60,0xA2,0xD8,0xC8,0x76,0x12,0x3D,0x88,
0x80,0xE0,0x22,0x38,0xF0,0x4E,0x1C,0x33,0x8B,0x02,0xE0,0xC2,0xB8,0xD0,0x6E,0x14,
0x3B,0x89,0x01,0xE0,0x42,0x78,0xE0,0x5E,0x18,0x37,0x8A,0x03,0xE0,0x82,0xF8,0xC0,
0x7E,0x10,0x3F,0x88,0x00,0x10,0x02,0x06,0x00,0x60,0x20
};

void init_PTMEPT_dict()
{
  ATermList afuns, terms;

  _PTMEPT_dict = ATreadFromBinaryString(_PTMEPT_dict_baf, _PTMEPT_dict_LEN);

  ATprotect(&_PTMEPT_dict);

  afuns = (ATermList)ATelementAt((ATermList)_PTMEPT_dict, 0);

  PTPT_afun121 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun121);
  afuns = ATgetNext(afuns);
  PTPT_afun3 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun3);
  afuns = ATgetNext(afuns);
  PTPT_afun78 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun78);
  afuns = ATgetNext(afuns);
  PTPT_afun48 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun48);
  afuns = ATgetNext(afuns);
  PTPT_afun59 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun59);
  afuns = ATgetNext(afuns);
  PTPT_afun99 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun99);
  afuns = ATgetNext(afuns);
  PTPT_afun2 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun2);
  afuns = ATgetNext(afuns);
  PTPT_afun47 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun47);
  afuns = ATgetNext(afuns);
  PTPT_afun104 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun104);
  afuns = ATgetNext(afuns);
  PTPT_afun80 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun80);
  afuns = ATgetNext(afuns);
  PTPT_afun42 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun42);
  afuns = ATgetNext(afuns);
  PTPT_afun75 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun75);
  afuns = ATgetNext(afuns);
  PTPT_afun15 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun15);
  afuns = ATgetNext(afuns);
  PTPT_afun86 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun86);
  afuns = ATgetNext(afuns);
  PTPT_afun31 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun31);
  afuns = ATgetNext(afuns);
  PTPT_afun43 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun43);
  afuns = ATgetNext(afuns);
  PTPT_afun103 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun103);
  afuns = ATgetNext(afuns);
  PTPT_afun0 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun0);
  afuns = ATgetNext(afuns);
  PTPT_afun84 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun84);
  afuns = ATgetNext(afuns);
  PTPT_afun98 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun98);
  afuns = ATgetNext(afuns);
  PTPT_afun33 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun33);
  afuns = ATgetNext(afuns);
  PTPT_afun10 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun10);
  afuns = ATgetNext(afuns);
  PTPT_afun13 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun13);
  afuns = ATgetNext(afuns);
  PTPT_afun119 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun119);
  afuns = ATgetNext(afuns);
  PTPT_afun74 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun74);
  afuns = ATgetNext(afuns);
  PTPT_afun14 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun14);
  afuns = ATgetNext(afuns);
  PTPT_afun40 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun40);
  afuns = ATgetNext(afuns);
  PTPT_afun82 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun82);
  afuns = ATgetNext(afuns);
  PTPT_afun30 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun30);
  afuns = ATgetNext(afuns);
  PTPT_afun123 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun123);
  afuns = ATgetNext(afuns);
  PTPT_afun101 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun101);
  afuns = ATgetNext(afuns);
  PTPT_afun60 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun60);
  afuns = ATgetNext(afuns);
  PTPT_afun7 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun7);
  afuns = ATgetNext(afuns);
  PTPT_afun58 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun58);
  afuns = ATgetNext(afuns);
  PTPT_afun79 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun79);
  afuns = ATgetNext(afuns);
  PTPT_afun100 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun100);
  afuns = ATgetNext(afuns);
  PTPT_afun81 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun81);
  afuns = ATgetNext(afuns);
  PTPT_afun122 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun122);
  afuns = ATgetNext(afuns);
  PTPT_afun29 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun29);
  afuns = ATgetNext(afuns);
  PTPT_afun1 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun1);
  afuns = ATgetNext(afuns);
  PTPT_afun6 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun6);
  afuns = ATgetNext(afuns);
  PTPT_afun83 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun83);
  afuns = ATgetNext(afuns);
  PTPT_afun61 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun61);
  afuns = ATgetNext(afuns);
  PTPT_afun97 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun97);
  afuns = ATgetNext(afuns);
  PTPT_afun50 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun50);
  afuns = ATgetNext(afuns);
  PTPT_afun44 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun44);
  afuns = ATgetNext(afuns);
  PTPT_afun102 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun102);
  afuns = ATgetNext(afuns);
  PTPT_afun112 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun112);
  afuns = ATgetNext(afuns);
  PTPT_afun73 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun73);
  afuns = ATgetNext(afuns);
  PTPT_afun9 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun9);
  afuns = ATgetNext(afuns);
  PTPT_afun107 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun107);
  afuns = ATgetNext(afuns);
  PTPT_afun88 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun88);
  afuns = ATgetNext(afuns);
  PTPT_afun51 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun51);
  afuns = ATgetNext(afuns);
  PTPT_afun56 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun56);
  afuns = ATgetNext(afuns);
  PTPT_afun85 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun85);
  afuns = ATgetNext(afuns);
  PTPT_afun127 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun127);
  afuns = ATgetNext(afuns);
  PTPT_afun12 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun12);
  afuns = ATgetNext(afuns);
  PTPT_afun91 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun91);
  afuns = ATgetNext(afuns);
  PTPT_afun64 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun64);
  afuns = ATgetNext(afuns);
  PTPT_afun8 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun8);
  afuns = ATgetNext(afuns);
  PTPT_afun28 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun28);
  afuns = ATgetNext(afuns);
  PTPT_afun32 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun32);
  afuns = ATgetNext(afuns);
  PTPT_afun106 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun106);
  afuns = ATgetNext(afuns);
  PTPT_afun76 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun76);
  afuns = ATgetNext(afuns);
  PTPT_afun90 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun90);
  afuns = ATgetNext(afuns);
  PTPT_afun11 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun11);
  afuns = ATgetNext(afuns);
  PTPT_afun62 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun62);
  afuns = ATgetNext(afuns);
  PTPT_afun27 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun27);
  afuns = ATgetNext(afuns);
  PTPT_afun120 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun120);
  afuns = ATgetNext(afuns);
  PTPT_afun55 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun55);
  afuns = ATgetNext(afuns);
  PTPT_afun108 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun108);
  afuns = ATgetNext(afuns);
  PTPT_afun49 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun49);
  afuns = ATgetNext(afuns);
  PTPT_afun116 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun116);
  afuns = ATgetNext(afuns);
  PTPT_afun109 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun109);
  afuns = ATgetNext(afuns);
  PTPT_afun36 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun36);
  afuns = ATgetNext(afuns);
  PTPT_afun111 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun111);
  afuns = ATgetNext(afuns);
  PTPT_afun17 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun17);
  afuns = ATgetNext(afuns);
  PTPT_afun110 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun110);
  afuns = ATgetNext(afuns);
  PTPT_afun92 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun92);
  afuns = ATgetNext(afuns);
  PTPT_afun34 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun34);
  afuns = ATgetNext(afuns);
  PTPT_afun63 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun63);
  afuns = ATgetNext(afuns);
  PTPT_afun19 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun19);
  afuns = ATgetNext(afuns);
  PTPT_afun26 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun26);
  afuns = ATgetNext(afuns);
  PTPT_afun37 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun37);
  afuns = ATgetNext(afuns);
  PTPT_afun105 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun105);
  afuns = ATgetNext(afuns);
  PTPT_afun115 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun115);
  afuns = ATgetNext(afuns);
  PTPT_afun25 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun25);
  afuns = ATgetNext(afuns);
  PTPT_afun18 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun18);
  afuns = ATgetNext(afuns);
  PTPT_afun114 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun114);
  afuns = ATgetNext(afuns);
  PTPT_afun69 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun69);
  afuns = ATgetNext(afuns);
  PTPT_afun54 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun54);
  afuns = ATgetNext(afuns);
  PTPT_afun87 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun87);
  afuns = ATgetNext(afuns);
  PTPT_afun38 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun38);
  afuns = ATgetNext(afuns);
  PTPT_afun16 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun16);
  afuns = ATgetNext(afuns);
  PTPT_afun77 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun77);
  afuns = ATgetNext(afuns);
  PTPT_afun52 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun52);
  afuns = ATgetNext(afuns);
  PTPT_afun96 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun96);
  afuns = ATgetNext(afuns);
  PTPT_afun57 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun57);
  afuns = ATgetNext(afuns);
  PTPT_afun35 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun35);
  afuns = ATgetNext(afuns);
  PTPT_afun39 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun39);
  afuns = ATgetNext(afuns);
  PTPT_afun72 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun72);
  afuns = ATgetNext(afuns);
  PTPT_afun117 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun117);
  afuns = ATgetNext(afuns);
  PTPT_afun22 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun22);
  afuns = ATgetNext(afuns);
  PTPT_afun118 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun118);
  afuns = ATgetNext(afuns);
  PTPT_afun66 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun66);
  afuns = ATgetNext(afuns);
  PTPT_afun124 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun124);
  afuns = ATgetNext(afuns);
  PTPT_afun94 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun94);
  afuns = ATgetNext(afuns);
  PTPT_afun41 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun41);
  afuns = ATgetNext(afuns);
  PTPT_afun126 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun126);
  afuns = ATgetNext(afuns);
  PTPT_afun53 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun53);
  afuns = ATgetNext(afuns);
  PTPT_afun70 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun70);
  afuns = ATgetNext(afuns);
  PTPT_afun20 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun20);
  afuns = ATgetNext(afuns);
  PTPT_afun21 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun21);
  afuns = ATgetNext(afuns);
  PTPT_afun65 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun65);
  afuns = ATgetNext(afuns);
  PTPT_afun5 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun5);
  afuns = ATgetNext(afuns);
  PTPT_afun113 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun113);
  afuns = ATgetNext(afuns);
  PTPT_afun93 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun93);
  afuns = ATgetNext(afuns);
  PTPT_afun89 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun89);
  afuns = ATgetNext(afuns);
  PTPT_afun95 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun95);
  afuns = ATgetNext(afuns);
  PTPT_afun67 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun67);
  afuns = ATgetNext(afuns);
  PTPT_afun4 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun4);
  afuns = ATgetNext(afuns);
  PTPT_afun23 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun23);
  afuns = ATgetNext(afuns);
  PTPT_afun71 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun71);
  afuns = ATgetNext(afuns);
  PTPT_afun45 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun45);
  afuns = ATgetNext(afuns);
  PTPT_afun68 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun68);
  afuns = ATgetNext(afuns);
  PTPT_afun125 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun125);
  afuns = ATgetNext(afuns);
  PTPT_afun24 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun24);
  afuns = ATgetNext(afuns);
  PTPT_afun46 = ATgetAFun((ATermAppl)ATgetFirst(afuns));
  ATprotectAFun(PTPT_afun46);
  afuns = ATgetNext(afuns);

  terms = (ATermList)ATelementAt((ATermList)_PTMEPT_dict, 1);

}
