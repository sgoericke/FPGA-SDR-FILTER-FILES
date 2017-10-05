   // Signed 16.14 fraction format assumed in v10p6 FPGA 
     const PROGMEM int AF_None[64] = { 
   0, 0,  0,  0,  0,  0,  0,  0,   
   0, 0,  0,  0,  0,  0,  0,  0,   
   0, 0,  0,  0,  0,  0,  0,  0,   
   0, 0,  0,  0,  0,  0,  0,  16384,   
   0, 0,  0,  0,  0,  0,  0,  0,   
   0, 0,  0,  0,  0,  0,  0,  0,   
   0, 0,  0,  0,  0,  0,  0,  0,   
   0, 0,  0,  0,  0,  0,  0,  0};   
   
   // Signed 16.14 fraction format assumed in v10p6 FPGA 
     const PROGMEM int AF_4p0K[64] = {
14,29,-31,36,
-37,29,-12,-15,
48,-79,100,-104,
85,-39,-28,107,
-184,238,-253,214,
-115,-39,231,-430,
596,-684,643,-421,
-47,895,-2608,9691,
9691,-2608,895,-47,
-421,643,-684,596,
-430,231,-39,-115,
214,-253,238,-184,
107,-28,-39,85,
-104,100,-79,48,
-15,-12,29,-37,
36,-31,29,14
};

   // Signed 16.14 fraction format assumed in v10p6 FPGA 
     const PROGMEM int AF_3p6K[64] = { 
35,-15,1,22,
-44,50,-30,-12,
60,-88,75,-16,
-70,143,-158,93,
40,-187,272,-232,
55,202,-426,487,
-298,-129,662,-1068,
1062,-335,-1655,9332,
9332,-1655,-335,1062,
-1068,662,-129,-298,
487,-426,202,55,
-232,272,-187,40,
93,-158,143,-70,
-16,75,-88,60,
-12,-30,50,-44,
22,1,-15,35
};   

/*
     const PROGMEM int AF_3p4K[64] = { 
   -261, -466,  -10,  173,  -146,  25,  102,  -154,   
   96, 40,  -161,  169,  -42,  -140,  239,  -159,   
   -66, 278,  -302,  78,  260,  -457,  316,  135,   
   -603, 698,  -200,  -717,  1476,  -1289,  -779,  9399,   
   9399, -779,  -1289,  1476,  -717,  -200,  698,  -603,   
   135, 316,  -457,  260,  78,  -302,  278,  -66,   
   -159, 239,  -140,  -42,  169,  -161,  40,  96,   
   -154, 102,  25,  -146,  173,  -10,  -466,  -261};   
*/

     const PROGMEM int AF_3p2K[64] = { 
-15,-32,34,-19,
-18,48,-40,-12,
70,-77,10,88,
-128,55,93,-191,
131,72,-260,248,
8,-330,427,-133,
-393,719,-444,-439,
1381,-1449,-464,8932,
8932,-464,-1449,1381,
-439,-444,719,-393,
-133,427,-330,8,
248,-260,72,131,
-191,93,55,-128,
88,10,-77,70,
-12,-40,48,-18,
-19,34,-32,-15
};   

     
     const PROGMEM int AF_2p8K[64] = { 
   -46, -211,  -221,  24,  119,  -72,  -68,  117,   
   -0, -134,  86,  102,  -169,  -13,  211,  -120,   
   -177, 261,  46,  -351,  175,  322,  -436,  -119,   
   654, -293,  -707,  952,  397,  -2072,  1130,  8400,   
   8400, 1130,  -2072,  397,  952,  -707,  -293,  654,   
   -119, -436,  322,  175,  -351,  46,  261,  -177,   
   -120, 211,  -13,  -169,  102,  86,  -134,  -0,   
   117, -68,  -72,  119,  24,  -221,  -211,  -46};   

   // Signed 16.14 fraction format assumed in v10p6 FPGA 
     const PROGMEM int AF_CW_Broad[64] = { 
27,-11,-33,-36,
-5,39,51,6,
-63,-83,-15,89,
124,29,-124,-182,
-53,169,264,92,
-230,-388,-158,323,
599,284,-500,-1065,
-620,1057,3298,4889,
4889,3298,1057,-620,
-1065,-500,284,599,
323,-158,-388,-230,
92,264,169,-53,
-182,-124,29,124,
89,-15,-83,-63,
6,51,39,-5,
-36,-33,-11,27
};   
   // Signed 16.14 fraction format assumed in v10p6 FPGA 
     const PROGMEM int AF_CW_Sharp[64] = {
28,30,31,20,
-1,-25,-43,-45,
-31,-11,0,-14,
-57,-115,-156,-140,
-39,145,369,555,
614,481,150,-315,
-785,-1106,-1151,-867,
-306,386,1009,1377,
1377,1009,386,-306,
-867,-1151,-1106,-785,
-315,150,481,614,
555,369,145,-39,
-140,-156,-115,-57,
-14,0,-11,-31,
-45,-43,-25,-1,
20,31,30,28
};   

