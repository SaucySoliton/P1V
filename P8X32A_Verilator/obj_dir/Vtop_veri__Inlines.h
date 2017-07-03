// Verilated -*- C++ -*-
#ifndef _Vtop_veri__Inlines_H_
#define _Vtop_veri__Inlines_H_

#include "verilated.h"

//======================

#ifndef VL_HAVE_CONST_W_512X
# define VL_HAVE_CONST_W_512X
static inline WDataOutP VL_CONST_W_512X(int obits, WDataOutP o
    	,IData d511,IData d510,IData d509,IData d508,IData d507,IData d506,IData d505,IData d504
    	,IData d503,IData d502,IData d501,IData d500,IData d499,IData d498,IData d497,IData d496
    	,IData d495,IData d494,IData d493,IData d492,IData d491,IData d490,IData d489,IData d488
    	,IData d487,IData d486,IData d485,IData d484,IData d483,IData d482,IData d481,IData d480
    	,IData d479,IData d478,IData d477,IData d476,IData d475,IData d474,IData d473,IData d472
    	,IData d471,IData d470,IData d469,IData d468,IData d467,IData d466,IData d465,IData d464
    	,IData d463,IData d462,IData d461,IData d460,IData d459,IData d458,IData d457,IData d456
    	,IData d455,IData d454,IData d453,IData d452,IData d451,IData d450,IData d449,IData d448
    	,IData d447,IData d446,IData d445,IData d444,IData d443,IData d442,IData d441,IData d440
    	,IData d439,IData d438,IData d437,IData d436,IData d435,IData d434,IData d433,IData d432
    	,IData d431,IData d430,IData d429,IData d428,IData d427,IData d426,IData d425,IData d424
    	,IData d423,IData d422,IData d421,IData d420,IData d419,IData d418,IData d417,IData d416
    	,IData d415,IData d414,IData d413,IData d412,IData d411,IData d410,IData d409,IData d408
    	,IData d407,IData d406,IData d405,IData d404,IData d403,IData d402,IData d401,IData d400
    	,IData d399,IData d398,IData d397,IData d396,IData d395,IData d394,IData d393,IData d392
    	,IData d391,IData d390,IData d389,IData d388,IData d387,IData d386,IData d385,IData d384
    	,IData d383,IData d382,IData d381,IData d380,IData d379,IData d378,IData d377,IData d376
    	,IData d375,IData d374,IData d373,IData d372,IData d371,IData d370,IData d369,IData d368
    	,IData d367,IData d366,IData d365,IData d364,IData d363,IData d362,IData d361,IData d360
    	,IData d359,IData d358,IData d357,IData d356,IData d355,IData d354,IData d353,IData d352
    	,IData d351,IData d350,IData d349,IData d348,IData d347,IData d346,IData d345,IData d344
    	,IData d343,IData d342,IData d341,IData d340,IData d339,IData d338,IData d337,IData d336
    	,IData d335,IData d334,IData d333,IData d332,IData d331,IData d330,IData d329,IData d328
    	,IData d327,IData d326,IData d325,IData d324,IData d323,IData d322,IData d321,IData d320
    	,IData d319,IData d318,IData d317,IData d316,IData d315,IData d314,IData d313,IData d312
    	,IData d311,IData d310,IData d309,IData d308,IData d307,IData d306,IData d305,IData d304
    	,IData d303,IData d302,IData d301,IData d300,IData d299,IData d298,IData d297,IData d296
    	,IData d295,IData d294,IData d293,IData d292,IData d291,IData d290,IData d289,IData d288
    	,IData d287,IData d286,IData d285,IData d284,IData d283,IData d282,IData d281,IData d280
    	,IData d279,IData d278,IData d277,IData d276,IData d275,IData d274,IData d273,IData d272
    	,IData d271,IData d270,IData d269,IData d268,IData d267,IData d266,IData d265,IData d264
    	,IData d263,IData d262,IData d261,IData d260,IData d259,IData d258,IData d257,IData d256
    	,IData d255,IData d254,IData d253,IData d252,IData d251,IData d250,IData d249,IData d248
    	,IData d247,IData d246,IData d245,IData d244,IData d243,IData d242,IData d241,IData d240
    	,IData d239,IData d238,IData d237,IData d236,IData d235,IData d234,IData d233,IData d232
    	,IData d231,IData d230,IData d229,IData d228,IData d227,IData d226,IData d225,IData d224
    	,IData d223,IData d222,IData d221,IData d220,IData d219,IData d218,IData d217,IData d216
    	,IData d215,IData d214,IData d213,IData d212,IData d211,IData d210,IData d209,IData d208
    	,IData d207,IData d206,IData d205,IData d204,IData d203,IData d202,IData d201,IData d200
    	,IData d199,IData d198,IData d197,IData d196,IData d195,IData d194,IData d193,IData d192
    	,IData d191,IData d190,IData d189,IData d188,IData d187,IData d186,IData d185,IData d184
    	,IData d183,IData d182,IData d181,IData d180,IData d179,IData d178,IData d177,IData d176
    	,IData d175,IData d174,IData d173,IData d172,IData d171,IData d170,IData d169,IData d168
    	,IData d167,IData d166,IData d165,IData d164,IData d163,IData d162,IData d161,IData d160
    	,IData d159,IData d158,IData d157,IData d156,IData d155,IData d154,IData d153,IData d152
    	,IData d151,IData d150,IData d149,IData d148,IData d147,IData d146,IData d145,IData d144
    	,IData d143,IData d142,IData d141,IData d140,IData d139,IData d138,IData d137,IData d136
    	,IData d135,IData d134,IData d133,IData d132,IData d131,IData d130,IData d129,IData d128
    	,IData d127,IData d126,IData d125,IData d124,IData d123,IData d122,IData d121,IData d120
    	,IData d119,IData d118,IData d117,IData d116,IData d115,IData d114,IData d113,IData d112
    	,IData d111,IData d110,IData d109,IData d108,IData d107,IData d106,IData d105,IData d104
    	,IData d103,IData d102,IData d101,IData d100,IData d99,IData d98,IData d97,IData d96
    	,IData d95,IData d94,IData d93,IData d92,IData d91,IData d90,IData d89,IData d88
    	,IData d87,IData d86,IData d85,IData d84,IData d83,IData d82,IData d81,IData d80
    	,IData d79,IData d78,IData d77,IData d76,IData d75,IData d74,IData d73,IData d72
    	,IData d71,IData d70,IData d69,IData d68,IData d67,IData d66,IData d65,IData d64
    	,IData d63,IData d62,IData d61,IData d60,IData d59,IData d58,IData d57,IData d56
    	,IData d55,IData d54,IData d53,IData d52,IData d51,IData d50,IData d49,IData d48
    	,IData d47,IData d46,IData d45,IData d44,IData d43,IData d42,IData d41,IData d40
    	,IData d39,IData d38,IData d37,IData d36,IData d35,IData d34,IData d33,IData d32
    	,IData d31,IData d30,IData d29,IData d28,IData d27,IData d26,IData d25,IData d24
    	,IData d23,IData d22,IData d21,IData d20,IData d19,IData d18,IData d17,IData d16
    	,IData d15,IData d14,IData d13,IData d12,IData d11,IData d10,IData d9,IData d8
    	,IData d7,IData d6,IData d5,IData d4,IData d3,IData d2,IData d1,IData d0) {
        o[511]=d511; o[510]=d510; o[509]=d509; o[508]=d508; o[507]=d507; o[506]=d506; o[505]=d505; o[504]=d504;
        o[503]=d503; o[502]=d502; o[501]=d501; o[500]=d500; o[499]=d499; o[498]=d498; o[497]=d497; o[496]=d496;
        o[495]=d495; o[494]=d494; o[493]=d493; o[492]=d492; o[491]=d491; o[490]=d490; o[489]=d489; o[488]=d488;
        o[487]=d487; o[486]=d486; o[485]=d485; o[484]=d484; o[483]=d483; o[482]=d482; o[481]=d481; o[480]=d480;
        o[479]=d479; o[478]=d478; o[477]=d477; o[476]=d476; o[475]=d475; o[474]=d474; o[473]=d473; o[472]=d472;
        o[471]=d471; o[470]=d470; o[469]=d469; o[468]=d468; o[467]=d467; o[466]=d466; o[465]=d465; o[464]=d464;
        o[463]=d463; o[462]=d462; o[461]=d461; o[460]=d460; o[459]=d459; o[458]=d458; o[457]=d457; o[456]=d456;
        o[455]=d455; o[454]=d454; o[453]=d453; o[452]=d452; o[451]=d451; o[450]=d450; o[449]=d449; o[448]=d448;
        o[447]=d447; o[446]=d446; o[445]=d445; o[444]=d444; o[443]=d443; o[442]=d442; o[441]=d441; o[440]=d440;
        o[439]=d439; o[438]=d438; o[437]=d437; o[436]=d436; o[435]=d435; o[434]=d434; o[433]=d433; o[432]=d432;
        o[431]=d431; o[430]=d430; o[429]=d429; o[428]=d428; o[427]=d427; o[426]=d426; o[425]=d425; o[424]=d424;
        o[423]=d423; o[422]=d422; o[421]=d421; o[420]=d420; o[419]=d419; o[418]=d418; o[417]=d417; o[416]=d416;
        o[415]=d415; o[414]=d414; o[413]=d413; o[412]=d412; o[411]=d411; o[410]=d410; o[409]=d409; o[408]=d408;
        o[407]=d407; o[406]=d406; o[405]=d405; o[404]=d404; o[403]=d403; o[402]=d402; o[401]=d401; o[400]=d400;
        o[399]=d399; o[398]=d398; o[397]=d397; o[396]=d396; o[395]=d395; o[394]=d394; o[393]=d393; o[392]=d392;
        o[391]=d391; o[390]=d390; o[389]=d389; o[388]=d388; o[387]=d387; o[386]=d386; o[385]=d385; o[384]=d384;
        o[383]=d383; o[382]=d382; o[381]=d381; o[380]=d380; o[379]=d379; o[378]=d378; o[377]=d377; o[376]=d376;
        o[375]=d375; o[374]=d374; o[373]=d373; o[372]=d372; o[371]=d371; o[370]=d370; o[369]=d369; o[368]=d368;
        o[367]=d367; o[366]=d366; o[365]=d365; o[364]=d364; o[363]=d363; o[362]=d362; o[361]=d361; o[360]=d360;
        o[359]=d359; o[358]=d358; o[357]=d357; o[356]=d356; o[355]=d355; o[354]=d354; o[353]=d353; o[352]=d352;
        o[351]=d351; o[350]=d350; o[349]=d349; o[348]=d348; o[347]=d347; o[346]=d346; o[345]=d345; o[344]=d344;
        o[343]=d343; o[342]=d342; o[341]=d341; o[340]=d340; o[339]=d339; o[338]=d338; o[337]=d337; o[336]=d336;
        o[335]=d335; o[334]=d334; o[333]=d333; o[332]=d332; o[331]=d331; o[330]=d330; o[329]=d329; o[328]=d328;
        o[327]=d327; o[326]=d326; o[325]=d325; o[324]=d324; o[323]=d323; o[322]=d322; o[321]=d321; o[320]=d320;
        o[319]=d319; o[318]=d318; o[317]=d317; o[316]=d316; o[315]=d315; o[314]=d314; o[313]=d313; o[312]=d312;
        o[311]=d311; o[310]=d310; o[309]=d309; o[308]=d308; o[307]=d307; o[306]=d306; o[305]=d305; o[304]=d304;
        o[303]=d303; o[302]=d302; o[301]=d301; o[300]=d300; o[299]=d299; o[298]=d298; o[297]=d297; o[296]=d296;
        o[295]=d295; o[294]=d294; o[293]=d293; o[292]=d292; o[291]=d291; o[290]=d290; o[289]=d289; o[288]=d288;
        o[287]=d287; o[286]=d286; o[285]=d285; o[284]=d284; o[283]=d283; o[282]=d282; o[281]=d281; o[280]=d280;
        o[279]=d279; o[278]=d278; o[277]=d277; o[276]=d276; o[275]=d275; o[274]=d274; o[273]=d273; o[272]=d272;
        o[271]=d271; o[270]=d270; o[269]=d269; o[268]=d268; o[267]=d267; o[266]=d266; o[265]=d265; o[264]=d264;
        o[263]=d263; o[262]=d262; o[261]=d261; o[260]=d260; o[259]=d259; o[258]=d258; o[257]=d257; o[256]=d256;
        o[255]=d255; o[254]=d254; o[253]=d253; o[252]=d252; o[251]=d251; o[250]=d250; o[249]=d249; o[248]=d248;
        o[247]=d247; o[246]=d246; o[245]=d245; o[244]=d244; o[243]=d243; o[242]=d242; o[241]=d241; o[240]=d240;
        o[239]=d239; o[238]=d238; o[237]=d237; o[236]=d236; o[235]=d235; o[234]=d234; o[233]=d233; o[232]=d232;
        o[231]=d231; o[230]=d230; o[229]=d229; o[228]=d228; o[227]=d227; o[226]=d226; o[225]=d225; o[224]=d224;
        o[223]=d223; o[222]=d222; o[221]=d221; o[220]=d220; o[219]=d219; o[218]=d218; o[217]=d217; o[216]=d216;
        o[215]=d215; o[214]=d214; o[213]=d213; o[212]=d212; o[211]=d211; o[210]=d210; o[209]=d209; o[208]=d208;
        o[207]=d207; o[206]=d206; o[205]=d205; o[204]=d204; o[203]=d203; o[202]=d202; o[201]=d201; o[200]=d200;
        o[199]=d199; o[198]=d198; o[197]=d197; o[196]=d196; o[195]=d195; o[194]=d194; o[193]=d193; o[192]=d192;
        o[191]=d191; o[190]=d190; o[189]=d189; o[188]=d188; o[187]=d187; o[186]=d186; o[185]=d185; o[184]=d184;
        o[183]=d183; o[182]=d182; o[181]=d181; o[180]=d180; o[179]=d179; o[178]=d178; o[177]=d177; o[176]=d176;
        o[175]=d175; o[174]=d174; o[173]=d173; o[172]=d172; o[171]=d171; o[170]=d170; o[169]=d169; o[168]=d168;
        o[167]=d167; o[166]=d166; o[165]=d165; o[164]=d164; o[163]=d163; o[162]=d162; o[161]=d161; o[160]=d160;
        o[159]=d159; o[158]=d158; o[157]=d157; o[156]=d156; o[155]=d155; o[154]=d154; o[153]=d153; o[152]=d152;
        o[151]=d151; o[150]=d150; o[149]=d149; o[148]=d148; o[147]=d147; o[146]=d146; o[145]=d145; o[144]=d144;
        o[143]=d143; o[142]=d142; o[141]=d141; o[140]=d140; o[139]=d139; o[138]=d138; o[137]=d137; o[136]=d136;
        o[135]=d135; o[134]=d134; o[133]=d133; o[132]=d132; o[131]=d131; o[130]=d130; o[129]=d129; o[128]=d128;
        o[127]=d127; o[126]=d126; o[125]=d125; o[124]=d124; o[123]=d123; o[122]=d122; o[121]=d121; o[120]=d120;
        o[119]=d119; o[118]=d118; o[117]=d117; o[116]=d116; o[115]=d115; o[114]=d114; o[113]=d113; o[112]=d112;
        o[111]=d111; o[110]=d110; o[109]=d109; o[108]=d108; o[107]=d107; o[106]=d106; o[105]=d105; o[104]=d104;
        o[103]=d103; o[102]=d102; o[101]=d101; o[100]=d100; o[99]=d99; o[98]=d98; o[97]=d97; o[96]=d96;
        o[95]=d95; o[94]=d94; o[93]=d93; o[92]=d92; o[91]=d91; o[90]=d90; o[89]=d89; o[88]=d88;
        o[87]=d87; o[86]=d86; o[85]=d85; o[84]=d84; o[83]=d83; o[82]=d82; o[81]=d81; o[80]=d80;
        o[79]=d79; o[78]=d78; o[77]=d77; o[76]=d76; o[75]=d75; o[74]=d74; o[73]=d73; o[72]=d72;
        o[71]=d71; o[70]=d70; o[69]=d69; o[68]=d68; o[67]=d67; o[66]=d66; o[65]=d65; o[64]=d64;
        o[63]=d63; o[62]=d62; o[61]=d61; o[60]=d60; o[59]=d59; o[58]=d58; o[57]=d57; o[56]=d56;
        o[55]=d55; o[54]=d54; o[53]=d53; o[52]=d52; o[51]=d51; o[50]=d50; o[49]=d49; o[48]=d48;
        o[47]=d47; o[46]=d46; o[45]=d45; o[44]=d44; o[43]=d43; o[42]=d42; o[41]=d41; o[40]=d40;
        o[39]=d39; o[38]=d38; o[37]=d37; o[36]=d36; o[35]=d35; o[34]=d34; o[33]=d33; o[32]=d32;
        o[31]=d31; o[30]=d30; o[29]=d29; o[28]=d28; o[27]=d27; o[26]=d26; o[25]=d25; o[24]=d24;
        o[23]=d23; o[22]=d22; o[21]=d21; o[20]=d20; o[19]=d19; o[18]=d18; o[17]=d17; o[16]=d16;
        o[15]=d15; o[14]=d14; o[13]=d13; o[12]=d12; o[11]=d11; o[10]=d10; o[9]=d9; o[8]=d8;
        o[7]=d7; o[6]=d6; o[5]=d5; o[4]=d4; o[3]=d3; o[2]=d2; o[1]=d1; o[0]=d0;
        for(int i=512;i<VL_WORDS_I(obits);i++) o[i] = (IData)0x0;
        return o;
}
#endif

//======================

#endif  /*guard*/
