/* 1652270 �����2�� ��˴ */
#include "90-b4.h"
const int gflog[] = 
{ INT_MAX ,0 ,1 ,25 ,2 ,50 ,26 ,198 ,3 ,223 ,51 ,238 ,27 ,104 ,199 ,75 ,4 ,100 ,224 ,14 ,52 ,141 ,239 ,129 ,28 ,193 ,105 ,248 ,200 ,8 ,76 ,113 ,5 ,138 ,101 ,47 ,225 ,36 ,15 ,33 ,53 ,147 ,142 ,218 ,240 ,18 ,130 ,69 ,29 ,181 ,194 ,125 ,106 ,39 ,249 ,185 ,201 ,154 ,9 ,120 ,77 ,228 ,114 ,166 ,6 ,191 ,139 ,98 ,102 ,221 ,48 ,253 ,226 ,152 ,37 ,179 ,16 ,145 ,34 ,136 ,54 ,208 ,148 ,206 ,143 ,150 ,219 ,189 ,241 ,210 ,19 ,92 ,131 ,56 ,70 ,64 ,30 ,66 ,182 ,163 ,195 ,72 ,126 ,110 ,107 ,58 ,40 ,84 ,250 ,133 ,186 ,61 ,202 ,94 ,155 ,159 ,10 ,21 ,121 ,43 ,78 ,212 ,229 ,172 ,115 ,243 ,167 ,87 ,7 ,112 ,192 ,247 ,140 ,128 ,99 ,13 ,103 ,74 ,222 ,237 ,49 ,197 ,254 ,24 ,227 ,165 ,153 ,119 ,38 ,184 ,180 ,124 ,17 ,68 ,146 ,217 ,35 ,32 ,137 ,46 ,55 ,63 ,209 ,91 ,149 ,188 ,207 ,205 ,144 ,135 ,151 ,178 ,220 ,252 ,190 ,97 ,242 ,86 ,211 ,171 ,20 ,42 ,93 ,158 ,132 ,60 ,57 ,83 ,71 ,109 ,65 ,162 ,31 ,45 ,67 ,216 ,183 ,123 ,164 ,118 ,196 ,23 ,73 ,236 ,127 ,12 ,111 ,246 ,108 ,161 ,59 ,82 ,41 ,157 ,85 ,170 ,251 ,96 ,134 ,177 ,187 ,204 ,62 ,90 ,203 ,89 ,95 ,176 ,156 ,169 ,160 ,81 ,11 ,245 ,22 ,235 ,122 ,117 ,44 ,215 ,79 ,174 ,213 ,233 ,230 ,231 ,173 ,232 ,116 ,214 ,244 ,234 ,168 ,80 ,88 ,175 };
const int gfilog[] = { 1 ,2 ,4 ,8 ,16 ,32 ,64 ,128 ,29 ,58 ,116 ,232 ,205 ,135 ,19 ,38 ,76 ,152 ,45 ,90 ,180 ,117 ,234 ,201 ,143 ,3 ,6 ,12 ,24 ,48 ,96 ,192 ,157 ,39 ,78 ,156 ,37 ,74 ,148 ,53 ,106 ,212 ,181 ,119 ,238 ,193 ,159 ,35 ,70 ,140 ,5 ,10 ,20 ,40 ,80 ,160 ,93 ,186 ,105 ,210 ,185 ,111 ,222 ,161 ,95 ,190 ,97 ,194 ,153 ,47 ,94 ,188 ,101 ,202 ,137 ,15 ,30 ,60 ,120 ,240 ,253 ,231 ,211 ,187 ,107 ,214 ,177 ,127 ,254 ,225 ,223 ,163 ,91 ,182 ,113 ,226 ,217 ,175 ,67 ,134 ,17 ,34 ,68 ,136 ,13 ,26 ,52 ,104 ,208 ,189 ,103 ,206 ,129 ,31 ,62 ,124 ,248 ,237 ,199 ,147 ,59 ,118 ,236 ,197 ,151 ,51 ,102 ,204 ,133 ,23 ,46 ,92 ,184 ,109 ,218 ,169 ,79 ,158 ,33 ,66 ,132 ,21 ,42 ,84 ,168 ,77 ,154 ,41 ,82 ,164 ,85 ,170 ,73 ,146 ,57 ,114 ,228 ,213 ,183 ,115 ,230 ,209 ,191 ,99 ,198 ,145 ,63 ,126 ,252 ,229 ,215 ,179 ,123 ,246 ,241 ,255 ,227 ,219 ,171 ,75 ,150 ,49 ,98 ,196 ,149 ,55 ,110 ,220 ,165 ,87 ,174 ,65 ,130 ,25 ,50 ,100 ,200 ,141 ,7 ,14 ,28 ,56 ,112 ,224 ,221 ,167 ,83 ,166 ,81 ,162 ,89 ,178 ,121 ,242 ,249 ,239 ,195 ,155 ,43 ,86 ,172 ,69 ,138 ,9 ,18 ,36 ,72 ,144 ,61 ,122 ,244 ,245 ,247 ,243 ,251 ,235 ,203 ,139 ,11 ,22 ,44 ,88 ,176 ,125 ,250 ,233 ,207 ,131 ,27 ,54 ,108 ,216 ,173 ,71 ,142 ,INT_MAX };
const unsigned int alphanumericMap[] = { 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 38,0, 0, 0, 0, 39, 40, 0, 41, 42, 43, 0,1,2,3,4,5,6,7,8,9,44,0,0,0,0,0,0,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,0,0,0,0,0,0, 10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35 };

const unsigned int capabilityTable[40][4][4] = { 41, 25, 17, 10, 34, 20, 14, 8, 27, 16, 11, 7, 17, 10, 7, 4, 77, 47, 32, 20, 63, 38, 26, 16, 48, 29, 20, 12, 34, 20, 14, 8, 127, 77, 53, 32, 101, 61, 42, 26, 77, 47, 32, 20, 58, 35, 24, 15, 187, 114, 78, 48, 149, 90, 62, 38, 111, 67, 46, 28, 82, 50, 34, 21, 255, 154, 106, 65, 202, 122, 84, 52, 144, 87, 60, 37, 106, 64, 44, 27, 322, 195, 134, 82, 255, 154, 106, 65, 178, 108, 74, 45, 139, 84, 58, 36, 370, 224, 154, 95, 293, 178, 122, 75, 207, 125, 86, 53, 154, 93, 64, 39, 461, 279, 192, 118, 365, 221, 152, 93, 259, 157, 108, 66, 202, 122, 84, 52, 552, 335, 230, 141, 432, 262, 180, 111, 312, 189, 130, 80, 235, 143, 98, 60, 652, 395, 271, 167, 513, 311, 213, 131, 364, 221, 151, 93, 288, 174, 119, 74, 772, 468, 321, 198, 604, 366, 251, 155, 427, 259, 177, 109, 331, 200, 137, 85, 883, 535, 367, 226, 691, 419, 287, 177, 489, 296, 203, 125, 374, 227, 155, 96, 1022, 619, 425, 262, 796, 483, 331, 204, 580, 352, 241, 149, 427, 259, 177, 109, 1101, 667, 458, 282, 871, 528, 362, 223, 621, 376, 258, 159, 468, 283, 194, 120, 1250, 758, 520, 320, 991, 600, 412, 254, 703, 426, 292, 180, 530, 321, 220, 136, 1408, 854, 586, 361, 1082, 656, 450, 277, 775, 470, 322, 198, 602, 365, 250, 154, 1548, 938, 644, 397, 1212, 734, 504, 310, 876, 531, 364, 224, 674, 408, 280, 173, 1725, 1046, 718, 442, 1346, 816, 560, 345, 948, 574, 394, 243, 746, 452, 310, 191, 1903, 1153, 792, 488, 1500, 909, 624, 384, 1063, 644, 442, 272, 813, 493, 338, 208, 2061, 1249, 858, 528, 1600, 970, 666, 410, 1159, 702, 482, 297, 919, 557, 382, 235, 2232, 1352, 929, 572, 1708, 1035, 711, 438, 1224, 742, 509, 314, 969, 587, 403, 248, 2409, 1460, 1003, 618, 1872, 1134, 779, 480, 1358, 823, 565, 348, 1056, 640, 439, 270, 2620, 1588, 1091, 672, 2059, 1248, 857, 528, 1468, 890, 611, 376, 1108, 672, 461, 284, 2812, 1704, 1171, 721, 2188, 1326, 911, 561, 1588, 963, 661, 407, 1228, 744, 511, 315, 3057, 1853, 1273, 784, 2395, 1451, 997, 614, 1718, 1041, 715, 440, 1286, 779, 535, 330, 3283, 1990, 1367, 842, 2544, 1542, 1059, 652, 1804, 1094, 751, 462, 1425, 864, 593, 365, 3517, 2132, 1465, 902, 2701, 1637, 1125, 692, 1933, 1172, 805, 496, 1501, 910, 625, 385, 3669, 2223, 1528, 940, 2857, 1732, 1190, 732, 2085, 1263, 868, 534, 1581, 958, 658, 405, 3909, 2369, 1628, 1002, 3035, 1839, 1264, 778, 2181, 1322, 908, 559, 1677, 1016, 698, 430, 4158, 2520, 1732, 1066, 3289, 1994, 1370, 843, 2358, 1429, 982, 604, 1782, 1080, 742, 457, 4417, 2677, 1840, 1132, 3486, 2113, 1452, 894, 2473, 1499, 1030, 634, 1897, 1150, 790, 486, 4686, 2840, 1952, 1201, 3693, 2238, 1538, 947, 2670, 1618, 1112, 684, 2022, 1226, 842, 518, 4965, 3009, 2068, 1273, 3909, 2369, 1628, 1002, 2805, 1700, 1168, 719, 2157, 1307, 898, 553, 5253, 3183, 2188, 1347, 4134, 2506, 1722, 1060, 2949, 1787, 1228, 756, 2301, 1394, 958, 590, 5529, 3351, 2303, 1417, 4343, 2632, 1809, 1113, 3081, 1867, 1283, 790, 2361, 1431, 983, 605, 5836, 3537, 2431, 1496, 4588, 2780, 1911, 1176, 3244, 1966, 1351, 832, 2524, 1530, 1051, 647, 6153, 3729, 2563, 1577, 4775, 2894, 1989, 1224, 3417, 2071, 1423, 876, 2625, 1591, 1093, 673, 6479, 3927, 2699, 1661, 5039, 3054, 2099, 1292, 3599, 2181, 1499, 923, 2735, 1658, 1139, 701, 6743, 4087, 2809, 1729, 5313, 3220, 2213, 1362, 3791, 2298, 1579, 972, 2927, 1774, 1219, 750, 7089, 4296, 2953, 1817, 5596, 3391, 2331, 1435, 3993, 2420, 1663, 1024, 3057, 1852, 1273, 784 };

const unsigned int modeIndicator[] = { 1, 2, 4, 8, 7 };

const unsigned int countIndicator[40][4] = {{ 10,9,8,8 },{ 10,9,8,8 },{ 10,9,8,8 },{ 10,9,8,8 },{ 10,9,8,8 },{ 10,9,8,8 },{ 10,9,8,8 },{ 10,9,8,8 },{ 10,9,8,8 },{ 12,11,16,10 },{ 12,11,16,10 },{ 12,11,16,10 },{ 12,11,16,10 },{ 12,11,16,10 },{ 12,11,16,10 },{ 12,11,16,10 },{ 12,11,16,10 },{ 12,11,16,10 },{ 12,11,16,10 },{ 12,11,16,10 },{ 12,11,16,10 },{ 12,11,16,10 },{ 12,11,16,10 },{ 12,11,16,10 },{ 12,11,16,10 },{ 12,11,16,10 },{ 14,13,16,12 },{ 14,13,16,12 },{ 14,13,16,12 },{ 14,13,16,12 },{ 14,13,16,12 },{ 14,13,16,12 },{ 14,13,16,12 },{ 14,13,16,12 },{ 14,13,16,12 },{ 14,13,16,12 },{ 14,13,16,12 },{ 14,13,16,12 },{ 14,13,16,12 },{ 14,13,16,12 } };

const unsigned int errBlocks[40][4][6] = { 19, 7, 1, 19, 0, 0, 16, 10, 1, 16, 0, 0, 13, 13, 1, 13, 0, 0, 9, 17, 1, 9, 0, 0, 34, 10, 1, 34, 0, 0, 28, 16, 1, 28, 0, 0, 22, 22, 1, 22, 0, 0, 16, 28, 1, 16, 0, 0, 55, 15, 1, 55, 0, 0, 44, 26, 1, 44, 0, 0, 34, 18, 2, 17, 0, 0, 26, 22, 2, 13, 0, 0, 80, 20, 1, 80, 0, 0, 64, 18, 2, 32, 0, 0, 48, 26, 2, 24, 0, 0, 36, 16, 4, 9, 0, 0, 108, 26, 1, 108, 0, 0, 86, 24, 2, 43, 0, 0, 62, 18, 2, 15, 2, 16, 46, 22, 2, 11, 2, 12, 136, 18, 2, 68, 0, 0, 108, 16, 4, 27, 0, 0, 76, 24, 4, 19, 0, 0, 60, 28, 4, 15, 0, 0, 156, 20, 2, 78, 0, 0, 124, 18, 4, 31, 0, 0, 88, 18, 2, 14, 4, 15, 66, 26, 4, 13, 1, 14, 194, 24, 2, 97, 0, 0, 154, 22, 2, 38, 2, 39, 110, 22, 4, 18, 2, 19, 86, 26, 4, 14, 2, 15, 232, 30, 2, 116, 0, 0, 182, 22, 3, 36, 2, 37, 132, 20, 4, 16, 4, 17, 100, 24, 4, 12, 4, 13, 274, 18, 2, 68, 2, 69, 216, 26, 4, 43, 1, 44, 154, 24, 6, 19, 2, 20, 122, 28, 6, 15, 2, 16, 324, 20, 4, 81, 0, 0, 254, 30, 1, 50, 4, 51, 180, 28, 4, 22, 4, 23, 140, 24, 3, 12, 8, 13, 370, 24, 2, 92, 2, 93, 290, 22, 6, 36, 2, 37, 206, 26, 4, 20, 6, 21, 158, 28, 7, 14, 4, 15, 428, 26, 4, 107, 0, 0, 334, 22, 8, 37, 1, 38, 244, 24, 8, 20, 4, 21, 180, 22, 12, 11, 4, 12, 461, 30, 3, 115, 1, 116, 365, 24, 4, 40, 5, 41, 261, 20, 11, 16, 5, 17, 197, 24, 11, 12, 5, 13, 523, 22, 5, 87, 1, 88, 415, 24, 5, 41, 5, 42, 295, 30, 5, 24, 7, 25, 223, 24, 11, 12, 7, 13, 589, 24, 5, 98, 1, 99, 453, 28, 7, 45, 3, 46, 325, 24, 15, 19, 2, 20, 253, 30, 3, 15, 13, 16, 647, 28, 1, 107, 5, 108, 507, 28, 10, 46, 1, 47, 367, 28, 1, 22, 15, 23, 283, 28, 2, 14, 17, 15, 721, 30, 5, 120, 1, 121, 563, 26, 9, 43, 4, 44, 397, 28, 17, 22, 1, 23, 313, 28, 2, 14, 19, 15, 795, 28, 3, 113, 4, 114, 627, 26, 3, 44, 11, 45, 445, 26, 17, 21, 4, 22, 341, 26, 9, 13, 16, 14, 861, 28, 3, 107, 5, 108, 669, 26, 3, 41, 13, 42, 485, 30, 15, 24, 5, 25, 385, 28, 15, 15, 10, 16, 932, 28, 4, 116, 4, 117, 714, 26, 17, 42, 0, 0, 512, 28, 17, 22, 6, 23, 406, 30, 19, 16, 6, 17, 1006, 28, 2, 111, 7, 112, 782, 28, 17, 46, 0, 0, 568, 30, 7, 24, 16, 25, 442, 24, 34, 13, 0, 0, 1094, 30, 4, 121, 5, 122, 860, 28, 4, 47, 14, 48, 614, 30, 11, 24, 14, 25, 464, 30, 16, 15, 14, 16, 1174, 30, 6, 117, 4, 118, 914, 28, 6, 45, 14, 46, 664, 30, 11, 24, 16, 25, 514, 30, 30, 16, 2, 17, 1276, 26, 8, 106, 4, 107, 1000, 28, 8, 47, 13, 48, 718, 30, 7, 24, 22, 25, 538, 30, 22, 15, 13, 16, 1370, 28, 10, 114, 2, 115, 1062, 28, 19, 46, 4, 47, 754, 28, 28, 22, 6, 23, 596, 30, 33, 16, 4, 17, 1468, 30, 8, 122, 4, 123, 1128, 28, 22, 45, 3, 46, 808, 30, 8, 23, 26, 24, 628, 30, 12, 15, 28, 16, 1531, 30, 3, 117, 10, 118, 1193, 28, 3, 45, 23, 46, 871, 30, 4, 24, 31, 25, 661, 30, 11, 15, 31, 16, 1631, 30, 7, 116, 7, 117, 1267, 28, 21, 45, 7, 46, 911, 30, 1, 23, 37, 24, 701, 30, 19, 15, 26, 16, 1735, 30, 5, 115, 10, 116, 1373, 28, 19, 47, 10, 48, 985, 30, 15, 24, 25, 25, 745, 30, 23, 15, 25, 16, 1843, 30, 13, 115, 3, 116, 1455, 28, 2, 46, 29, 47, 1033, 30, 42, 24, 1, 25, 793, 30, 23, 15, 28, 16, 1955, 30, 17, 115, 0, 0, 1541, 28, 10, 46, 23, 47, 1115, 30, 10, 24, 35, 25, 845, 30, 19, 15, 35, 16, 2071, 30, 17, 115, 1, 116, 1631, 28, 14, 46, 21, 47, 1171, 30, 29, 24, 19, 25, 901, 30, 11, 15, 46, 16, 2191, 30, 13, 115, 6, 116, 1725, 28, 14, 46, 23, 47, 1231, 30, 44, 24, 7, 25, 961, 30, 59, 16, 1, 17, 2306, 30, 12, 121, 7, 122, 1812, 28, 12, 47, 26, 48, 1286, 30, 39, 24, 14, 25, 986, 30, 22, 15, 41, 16, 2434, 30, 6, 121, 14, 122, 1914, 28, 6, 47, 34, 48, 1354, 30, 46, 24, 10, 25, 1054, 30, 2, 15, 64, 16, 2566, 30, 17, 122, 4, 123, 1992, 28, 29, 46, 14, 47, 1426, 30, 49, 24, 10, 25, 1096, 30, 24, 15, 46, 16, 2702, 30, 4, 122, 18, 123, 2102, 28, 13, 46, 32, 47, 1502, 30, 48, 24, 14, 25, 1142, 30, 42, 15, 32, 16, 2812, 30, 20, 117, 4, 118, 2216, 28, 40, 47, 7, 48, 1582, 30, 43, 24, 22, 25, 1222, 30, 10, 15, 67, 16, 2956, 30, 19, 118, 6, 119, 2334, 28, 18, 47, 31, 48, 1666, 30, 34, 24, 34, 25, 1276, 30, 20, 15, 61, 16 };

const unsigned int padBytes[] = { 236, 17 };