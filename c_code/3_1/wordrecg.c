/* Generated by Nimrod Compiler v0.9.5 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident170019 tident170019;
typedef struct tidobj170013 tidobj170013;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef NU8 TY174325[32];
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* TY174327[252];
typedef N_NIMCALL_PTR(void, TY2289) (void* p, NI op);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY2289 marker;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  tidobj170013  {
  TNimObject Sup;
NI Id;
};
struct  tident170019  {
  tidobj170013 Sup;
NimStringDesc* S;
tident170019* Next;
NI H;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_NIMCALL(NI, findstr_174334)(NimStringDesc** a, NI aLen0, NimStringDesc* s);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NU8, whichkeyword_174360)(tident170019* id);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(NU8, whichkeyword_174367)(NimStringDesc* id);
N_NIMCALL(tident170019*, getident_170456)(NimStringDesc* identifier);
N_NIMCALL(void, initspecials_174373)(void);
N_NIMCALL(tident170019*, getident_170462)(NimStringDesc* identifier, NI h);
N_NIMCALL(NI, hashignorestyle_120859)(NimStringDesc* x);
NIM_CONST TY174325 cppnimsharedkeywords_174324 = {
0x10, 0x1B, 0xAA, 0x12, 0x00, 0x00, 0x20, 0x27,
0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TMP1164, "", 0);
STRING_LITERAL(TMP1165, "addr", 4);
STRING_LITERAL(TMP1166, "and", 3);
STRING_LITERAL(TMP1167, "as", 2);
STRING_LITERAL(TMP1168, "asm", 3);
STRING_LITERAL(TMP1169, "atomic", 6);
STRING_LITERAL(TMP1170, "bind", 4);
STRING_LITERAL(TMP1171, "block", 5);
STRING_LITERAL(TMP1172, "break", 5);
STRING_LITERAL(TMP1173, "case", 4);
STRING_LITERAL(TMP1174, "cast", 4);
STRING_LITERAL(TMP1175, "const", 5);
STRING_LITERAL(TMP1176, "continue", 8);
STRING_LITERAL(TMP1177, "converter", 9);
STRING_LITERAL(TMP1178, "discard", 7);
STRING_LITERAL(TMP1179, "distinct", 8);
STRING_LITERAL(TMP1180, "div", 3);
STRING_LITERAL(TMP1181, "do", 2);
STRING_LITERAL(TMP1182, "elif", 4);
STRING_LITERAL(TMP1183, "else", 4);
STRING_LITERAL(TMP1184, "end", 3);
STRING_LITERAL(TMP1185, "enum", 4);
STRING_LITERAL(TMP1186, "except", 6);
STRING_LITERAL(TMP1187, "export", 6);
STRING_LITERAL(TMP1188, "finally", 7);
STRING_LITERAL(TMP1189, "for", 3);
STRING_LITERAL(TMP1190, "from", 4);
STRING_LITERAL(TMP1191, "generic", 7);
STRING_LITERAL(TMP1192, "if", 2);
STRING_LITERAL(TMP1193, "import", 6);
STRING_LITERAL(TMP1194, "in", 2);
STRING_LITERAL(TMP1195, "include", 7);
STRING_LITERAL(TMP1196, "interface", 9);
STRING_LITERAL(TMP1197, "is", 2);
STRING_LITERAL(TMP1198, "isnot", 5);
STRING_LITERAL(TMP1199, "iterator", 8);
STRING_LITERAL(TMP1200, "lambda", 6);
STRING_LITERAL(TMP1201, "let", 3);
STRING_LITERAL(TMP1202, "macro", 5);
STRING_LITERAL(TMP1203, "method", 6);
STRING_LITERAL(TMP1204, "mixin", 5);
STRING_LITERAL(TMP1205, "mod", 3);
STRING_LITERAL(TMP1206, "nil", 3);
STRING_LITERAL(TMP1207, "not", 3);
STRING_LITERAL(TMP1208, "notin", 5);
STRING_LITERAL(TMP1209, "object", 6);
STRING_LITERAL(TMP1210, "of", 2);
STRING_LITERAL(TMP1211, "or", 2);
STRING_LITERAL(TMP1212, "out", 3);
STRING_LITERAL(TMP1213, "proc", 4);
STRING_LITERAL(TMP1214, "ptr", 3);
STRING_LITERAL(TMP1215, "raise", 5);
STRING_LITERAL(TMP1216, "ref", 3);
STRING_LITERAL(TMP1217, "return", 6);
STRING_LITERAL(TMP1218, "shl", 3);
STRING_LITERAL(TMP1219, "shr", 3);
STRING_LITERAL(TMP1220, "static", 6);
STRING_LITERAL(TMP1221, "template", 8);
STRING_LITERAL(TMP1222, "try", 3);
STRING_LITERAL(TMP1223, "tuple", 5);
STRING_LITERAL(TMP1224, "type", 4);
STRING_LITERAL(TMP1225, "using", 5);
STRING_LITERAL(TMP1226, "var", 3);
STRING_LITERAL(TMP1227, "when", 4);
STRING_LITERAL(TMP1228, "while", 5);
STRING_LITERAL(TMP1229, "with", 4);
STRING_LITERAL(TMP1230, "without", 7);
STRING_LITERAL(TMP1231, "xor", 3);
STRING_LITERAL(TMP1232, "yield", 5);
STRING_LITERAL(TMP1233, ":", 1);
STRING_LITERAL(TMP1234, "::", 2);
STRING_LITERAL(TMP1235, "=", 1);
STRING_LITERAL(TMP1236, ".", 1);
STRING_LITERAL(TMP1237, "..", 2);
STRING_LITERAL(TMP1238, "*", 1);
STRING_LITERAL(TMP1239, "-", 1);
STRING_LITERAL(TMP1240, "magic", 5);
STRING_LITERAL(TMP1241, "thread", 6);
STRING_LITERAL(TMP1242, "final", 5);
STRING_LITERAL(TMP1243, "profiler", 8);
STRING_LITERAL(TMP1244, "objchecks", 9);
STRING_LITERAL(TMP1245, "destroy", 7);
STRING_LITERAL(TMP1246, "immediate", 9);
STRING_LITERAL(TMP1247, "destructor", 10);
STRING_LITERAL(TMP1248, "delegator", 9);
STRING_LITERAL(TMP1249, "importcpp", 9);
STRING_LITERAL(TMP1250, "importobjc", 10);
STRING_LITERAL(TMP1251, "importcompilerproc", 18);
STRING_LITERAL(TMP1252, "importc", 7);
STRING_LITERAL(TMP1253, "exportc", 7);
STRING_LITERAL(TMP1254, "incompletestruct", 16);
STRING_LITERAL(TMP1255, "requiresinit", 12);
STRING_LITERAL(TMP1256, "align", 5);
STRING_LITERAL(TMP1257, "nodecl", 6);
STRING_LITERAL(TMP1258, "pure", 4);
STRING_LITERAL(TMP1259, "sideeffect", 10);
STRING_LITERAL(TMP1260, "header", 6);
STRING_LITERAL(TMP1261, "nosideeffect", 12);
STRING_LITERAL(TMP1262, "gcsafe", 6);
STRING_LITERAL(TMP1263, "noreturn", 8);
STRING_LITERAL(TMP1264, "merge", 5);
STRING_LITERAL(TMP1265, "lib", 3);
STRING_LITERAL(TMP1266, "dynlib", 6);
STRING_LITERAL(TMP1267, "compilerproc", 12);
STRING_LITERAL(TMP1268, "procvar", 7);
STRING_LITERAL(TMP1269, "fatal", 5);
STRING_LITERAL(TMP1270, "error", 5);
STRING_LITERAL(TMP1271, "warning", 7);
STRING_LITERAL(TMP1272, "hint", 4);
STRING_LITERAL(TMP1273, "line", 4);
STRING_LITERAL(TMP1274, "push", 4);
STRING_LITERAL(TMP1275, "pop", 3);
STRING_LITERAL(TMP1276, "define", 6);
STRING_LITERAL(TMP1277, "undef", 5);
STRING_LITERAL(TMP1278, "linedir", 7);
STRING_LITERAL(TMP1279, "stacktrace", 10);
STRING_LITERAL(TMP1280, "linetrace", 9);
STRING_LITERAL(TMP1281, "link", 4);
STRING_LITERAL(TMP1282, "compile", 7);
STRING_LITERAL(TMP1283, "linksys", 7);
STRING_LITERAL(TMP1284, "deprecated", 10);
STRING_LITERAL(TMP1285, "varargs", 7);
STRING_LITERAL(TMP1286, "callconv", 8);
STRING_LITERAL(TMP1287, "breakpoint", 10);
STRING_LITERAL(TMP1288, "debugger", 8);
STRING_LITERAL(TMP1289, "nimcall", 7);
STRING_LITERAL(TMP1290, "stdcall", 7);
STRING_LITERAL(TMP1291, "cdecl", 5);
STRING_LITERAL(TMP1292, "safecall", 8);
STRING_LITERAL(TMP1293, "syscall", 7);
STRING_LITERAL(TMP1294, "inline", 6);
STRING_LITERAL(TMP1295, "noinline", 8);
STRING_LITERAL(TMP1296, "fastcall", 8);
STRING_LITERAL(TMP1297, "closure", 7);
STRING_LITERAL(TMP1298, "noconv", 6);
STRING_LITERAL(TMP1299, "on", 2);
STRING_LITERAL(TMP1300, "off", 3);
STRING_LITERAL(TMP1301, "checks", 6);
STRING_LITERAL(TMP1302, "rangechecks", 11);
STRING_LITERAL(TMP1303, "boundchecks", 11);
STRING_LITERAL(TMP1304, "overflowchecks", 14);
STRING_LITERAL(TMP1305, "nilchecks", 9);
STRING_LITERAL(TMP1306, "floatchecks", 11);
STRING_LITERAL(TMP1307, "nanchecks", 9);
STRING_LITERAL(TMP1308, "infchecks", 9);
STRING_LITERAL(TMP1309, "assertions", 10);
STRING_LITERAL(TMP1310, "patterns", 8);
STRING_LITERAL(TMP1311, "warnings", 8);
STRING_LITERAL(TMP1312, "hints", 5);
STRING_LITERAL(TMP1313, "optimization", 12);
STRING_LITERAL(TMP1314, "raises", 6);
STRING_LITERAL(TMP1315, "writes", 6);
STRING_LITERAL(TMP1316, "reads", 5);
STRING_LITERAL(TMP1317, "size", 4);
STRING_LITERAL(TMP1318, "effects", 7);
STRING_LITERAL(TMP1319, "tags", 4);
STRING_LITERAL(TMP1320, "deadcodeelim", 12);
STRING_LITERAL(TMP1321, "safecode", 8);
STRING_LITERAL(TMP1322, "noforward", 9);
STRING_LITERAL(TMP1323, "pragma", 6);
STRING_LITERAL(TMP1324, "compiletime", 11);
STRING_LITERAL(TMP1325, "noinit", 6);
STRING_LITERAL(TMP1326, "passc", 5);
STRING_LITERAL(TMP1327, "passl", 5);
STRING_LITERAL(TMP1328, "borrow", 6);
STRING_LITERAL(TMP1329, "discardable", 11);
STRING_LITERAL(TMP1330, "fieldchecks", 11);
STRING_LITERAL(TMP1331, "watchpoint", 10);
STRING_LITERAL(TMP1332, "subschar", 8);
STRING_LITERAL(TMP1333, "acyclic", 7);
STRING_LITERAL(TMP1334, "shallow", 7);
STRING_LITERAL(TMP1335, "unroll", 6);
STRING_LITERAL(TMP1336, "linearscanend", 13);
STRING_LITERAL(TMP1337, "computedgoto", 12);
STRING_LITERAL(TMP1338, "injectstmt", 10);
STRING_LITERAL(TMP1339, "write", 5);
STRING_LITERAL(TMP1340, "gensym", 6);
STRING_LITERAL(TMP1341, "inject", 6);
STRING_LITERAL(TMP1342, "dirty", 5);
STRING_LITERAL(TMP1343, "inheritable", 11);
STRING_LITERAL(TMP1344, "threadvar", 9);
STRING_LITERAL(TMP1345, "emit", 4);
STRING_LITERAL(TMP1346, "asmnostackframe", 15);
STRING_LITERAL(TMP1347, "implicitstatic", 14);
STRING_LITERAL(TMP1348, "global", 6);
STRING_LITERAL(TMP1349, "codegendecl", 11);
STRING_LITERAL(TMP1350, "unchecked", 9);
STRING_LITERAL(TMP1351, "guard", 5);
STRING_LITERAL(TMP1352, "uses", 4);
STRING_LITERAL(TMP1353, "auto", 4);
STRING_LITERAL(TMP1354, "bool", 4);
STRING_LITERAL(TMP1355, "catch", 5);
STRING_LITERAL(TMP1356, "char", 4);
STRING_LITERAL(TMP1357, "class", 5);
STRING_LITERAL(TMP1358, "const_cast", 10);
STRING_LITERAL(TMP1359, "default", 7);
STRING_LITERAL(TMP1360, "delete", 6);
STRING_LITERAL(TMP1361, "double", 6);
STRING_LITERAL(TMP1362, "dynamic_cast", 12);
STRING_LITERAL(TMP1363, "explicit", 8);
STRING_LITERAL(TMP1364, "extern", 6);
STRING_LITERAL(TMP1365, "false", 5);
STRING_LITERAL(TMP1366, "float", 5);
STRING_LITERAL(TMP1367, "friend", 6);
STRING_LITERAL(TMP1368, "goto", 4);
STRING_LITERAL(TMP1369, "int", 3);
STRING_LITERAL(TMP1370, "long", 4);
STRING_LITERAL(TMP1371, "mutable", 7);
STRING_LITERAL(TMP1372, "namespace", 9);
STRING_LITERAL(TMP1373, "new", 3);
STRING_LITERAL(TMP1374, "operator", 8);
STRING_LITERAL(TMP1375, "private", 7);
STRING_LITERAL(TMP1376, "protected", 9);
STRING_LITERAL(TMP1377, "public", 6);
STRING_LITERAL(TMP1378, "register", 8);
STRING_LITERAL(TMP1379, "reinterpret_cast", 16);
STRING_LITERAL(TMP1380, "short", 5);
STRING_LITERAL(TMP1381, "signed", 6);
STRING_LITERAL(TMP1382, "sizeof", 6);
STRING_LITERAL(TMP1383, "static_cast", 11);
STRING_LITERAL(TMP1384, "struct", 6);
STRING_LITERAL(TMP1385, "switch", 6);
STRING_LITERAL(TMP1386, "this", 4);
STRING_LITERAL(TMP1387, "throw", 5);
STRING_LITERAL(TMP1388, "true", 4);
STRING_LITERAL(TMP1389, "typedef", 7);
STRING_LITERAL(TMP1390, "typeid", 6);
STRING_LITERAL(TMP1391, "typename", 8);
STRING_LITERAL(TMP1392, "union", 5);
STRING_LITERAL(TMP1393, "packed", 6);
STRING_LITERAL(TMP1394, "unsigned", 8);
STRING_LITERAL(TMP1395, "virtual", 7);
STRING_LITERAL(TMP1396, "void", 4);
STRING_LITERAL(TMP1397, "volatile", 8);
STRING_LITERAL(TMP1398, "wchar_t", 7);
STRING_LITERAL(TMP1399, "alignas", 7);
STRING_LITERAL(TMP1400, "alignof", 7);
STRING_LITERAL(TMP1401, "constexpr", 9);
STRING_LITERAL(TMP1402, "decltype", 8);
STRING_LITERAL(TMP1403, "nullptr", 7);
STRING_LITERAL(TMP1404, "noexcept", 8);
STRING_LITERAL(TMP1405, "thread_local", 12);
STRING_LITERAL(TMP1406, "static_assert", 13);
STRING_LITERAL(TMP1407, "char16_t", 8);
STRING_LITERAL(TMP1408, "char32_t", 8);
STRING_LITERAL(TMP1409, "stdin", 5);
STRING_LITERAL(TMP1410, "stdout", 6);
STRING_LITERAL(TMP1411, "stderr", 6);
STRING_LITERAL(TMP1412, "inout", 5);
STRING_LITERAL(TMP1413, "bycopy", 6);
STRING_LITERAL(TMP1414, "byref", 5);
STRING_LITERAL(TMP1415, "oneway", 6);
NIM_CONST TY174327 specialwords_174326 = {((NimStringDesc*) &TMP1164),
((NimStringDesc*) &TMP1165),
((NimStringDesc*) &TMP1166),
((NimStringDesc*) &TMP1167),
((NimStringDesc*) &TMP1168),
((NimStringDesc*) &TMP1169),
((NimStringDesc*) &TMP1170),
((NimStringDesc*) &TMP1171),
((NimStringDesc*) &TMP1172),
((NimStringDesc*) &TMP1173),
((NimStringDesc*) &TMP1174),
((NimStringDesc*) &TMP1175),
((NimStringDesc*) &TMP1176),
((NimStringDesc*) &TMP1177),
((NimStringDesc*) &TMP1178),
((NimStringDesc*) &TMP1179),
((NimStringDesc*) &TMP1180),
((NimStringDesc*) &TMP1181),
((NimStringDesc*) &TMP1182),
((NimStringDesc*) &TMP1183),
((NimStringDesc*) &TMP1184),
((NimStringDesc*) &TMP1185),
((NimStringDesc*) &TMP1186),
((NimStringDesc*) &TMP1187),
((NimStringDesc*) &TMP1188),
((NimStringDesc*) &TMP1189),
((NimStringDesc*) &TMP1190),
((NimStringDesc*) &TMP1191),
((NimStringDesc*) &TMP1192),
((NimStringDesc*) &TMP1193),
((NimStringDesc*) &TMP1194),
((NimStringDesc*) &TMP1195),
((NimStringDesc*) &TMP1196),
((NimStringDesc*) &TMP1197),
((NimStringDesc*) &TMP1198),
((NimStringDesc*) &TMP1199),
((NimStringDesc*) &TMP1200),
((NimStringDesc*) &TMP1201),
((NimStringDesc*) &TMP1202),
((NimStringDesc*) &TMP1203),
((NimStringDesc*) &TMP1204),
((NimStringDesc*) &TMP1205),
((NimStringDesc*) &TMP1206),
((NimStringDesc*) &TMP1207),
((NimStringDesc*) &TMP1208),
((NimStringDesc*) &TMP1209),
((NimStringDesc*) &TMP1210),
((NimStringDesc*) &TMP1211),
((NimStringDesc*) &TMP1212),
((NimStringDesc*) &TMP1213),
((NimStringDesc*) &TMP1214),
((NimStringDesc*) &TMP1215),
((NimStringDesc*) &TMP1216),
((NimStringDesc*) &TMP1217),
((NimStringDesc*) &TMP1218),
((NimStringDesc*) &TMP1219),
((NimStringDesc*) &TMP1220),
((NimStringDesc*) &TMP1221),
((NimStringDesc*) &TMP1222),
((NimStringDesc*) &TMP1223),
((NimStringDesc*) &TMP1224),
((NimStringDesc*) &TMP1225),
((NimStringDesc*) &TMP1226),
((NimStringDesc*) &TMP1227),
((NimStringDesc*) &TMP1228),
((NimStringDesc*) &TMP1229),
((NimStringDesc*) &TMP1230),
((NimStringDesc*) &TMP1231),
((NimStringDesc*) &TMP1232),
((NimStringDesc*) &TMP1233),
((NimStringDesc*) &TMP1234),
((NimStringDesc*) &TMP1235),
((NimStringDesc*) &TMP1236),
((NimStringDesc*) &TMP1237),
((NimStringDesc*) &TMP1238),
((NimStringDesc*) &TMP1239),
((NimStringDesc*) &TMP1240),
((NimStringDesc*) &TMP1241),
((NimStringDesc*) &TMP1242),
((NimStringDesc*) &TMP1243),
((NimStringDesc*) &TMP1244),
((NimStringDesc*) &TMP1245),
((NimStringDesc*) &TMP1246),
((NimStringDesc*) &TMP1247),
((NimStringDesc*) &TMP1248),
((NimStringDesc*) &TMP1249),
((NimStringDesc*) &TMP1250),
((NimStringDesc*) &TMP1251),
((NimStringDesc*) &TMP1252),
((NimStringDesc*) &TMP1253),
((NimStringDesc*) &TMP1254),
((NimStringDesc*) &TMP1255),
((NimStringDesc*) &TMP1256),
((NimStringDesc*) &TMP1257),
((NimStringDesc*) &TMP1258),
((NimStringDesc*) &TMP1259),
((NimStringDesc*) &TMP1260),
((NimStringDesc*) &TMP1261),
((NimStringDesc*) &TMP1262),
((NimStringDesc*) &TMP1263),
((NimStringDesc*) &TMP1264),
((NimStringDesc*) &TMP1265),
((NimStringDesc*) &TMP1266),
((NimStringDesc*) &TMP1267),
((NimStringDesc*) &TMP1268),
((NimStringDesc*) &TMP1269),
((NimStringDesc*) &TMP1270),
((NimStringDesc*) &TMP1271),
((NimStringDesc*) &TMP1272),
((NimStringDesc*) &TMP1273),
((NimStringDesc*) &TMP1274),
((NimStringDesc*) &TMP1275),
((NimStringDesc*) &TMP1276),
((NimStringDesc*) &TMP1277),
((NimStringDesc*) &TMP1278),
((NimStringDesc*) &TMP1279),
((NimStringDesc*) &TMP1280),
((NimStringDesc*) &TMP1281),
((NimStringDesc*) &TMP1282),
((NimStringDesc*) &TMP1283),
((NimStringDesc*) &TMP1284),
((NimStringDesc*) &TMP1285),
((NimStringDesc*) &TMP1286),
((NimStringDesc*) &TMP1287),
((NimStringDesc*) &TMP1288),
((NimStringDesc*) &TMP1289),
((NimStringDesc*) &TMP1290),
((NimStringDesc*) &TMP1291),
((NimStringDesc*) &TMP1292),
((NimStringDesc*) &TMP1293),
((NimStringDesc*) &TMP1294),
((NimStringDesc*) &TMP1295),
((NimStringDesc*) &TMP1296),
((NimStringDesc*) &TMP1297),
((NimStringDesc*) &TMP1298),
((NimStringDesc*) &TMP1299),
((NimStringDesc*) &TMP1300),
((NimStringDesc*) &TMP1301),
((NimStringDesc*) &TMP1302),
((NimStringDesc*) &TMP1303),
((NimStringDesc*) &TMP1304),
((NimStringDesc*) &TMP1305),
((NimStringDesc*) &TMP1306),
((NimStringDesc*) &TMP1307),
((NimStringDesc*) &TMP1308),
((NimStringDesc*) &TMP1309),
((NimStringDesc*) &TMP1310),
((NimStringDesc*) &TMP1311),
((NimStringDesc*) &TMP1312),
((NimStringDesc*) &TMP1313),
((NimStringDesc*) &TMP1314),
((NimStringDesc*) &TMP1315),
((NimStringDesc*) &TMP1316),
((NimStringDesc*) &TMP1317),
((NimStringDesc*) &TMP1318),
((NimStringDesc*) &TMP1319),
((NimStringDesc*) &TMP1320),
((NimStringDesc*) &TMP1321),
((NimStringDesc*) &TMP1322),
((NimStringDesc*) &TMP1323),
((NimStringDesc*) &TMP1324),
((NimStringDesc*) &TMP1325),
((NimStringDesc*) &TMP1326),
((NimStringDesc*) &TMP1327),
((NimStringDesc*) &TMP1328),
((NimStringDesc*) &TMP1329),
((NimStringDesc*) &TMP1330),
((NimStringDesc*) &TMP1331),
((NimStringDesc*) &TMP1332),
((NimStringDesc*) &TMP1333),
((NimStringDesc*) &TMP1334),
((NimStringDesc*) &TMP1335),
((NimStringDesc*) &TMP1336),
((NimStringDesc*) &TMP1337),
((NimStringDesc*) &TMP1338),
((NimStringDesc*) &TMP1339),
((NimStringDesc*) &TMP1340),
((NimStringDesc*) &TMP1341),
((NimStringDesc*) &TMP1342),
((NimStringDesc*) &TMP1343),
((NimStringDesc*) &TMP1344),
((NimStringDesc*) &TMP1345),
((NimStringDesc*) &TMP1346),
((NimStringDesc*) &TMP1347),
((NimStringDesc*) &TMP1348),
((NimStringDesc*) &TMP1349),
((NimStringDesc*) &TMP1350),
((NimStringDesc*) &TMP1351),
((NimStringDesc*) &TMP1352),
((NimStringDesc*) &TMP1353),
((NimStringDesc*) &TMP1354),
((NimStringDesc*) &TMP1355),
((NimStringDesc*) &TMP1356),
((NimStringDesc*) &TMP1357),
((NimStringDesc*) &TMP1358),
((NimStringDesc*) &TMP1359),
((NimStringDesc*) &TMP1360),
((NimStringDesc*) &TMP1361),
((NimStringDesc*) &TMP1362),
((NimStringDesc*) &TMP1363),
((NimStringDesc*) &TMP1364),
((NimStringDesc*) &TMP1365),
((NimStringDesc*) &TMP1366),
((NimStringDesc*) &TMP1367),
((NimStringDesc*) &TMP1368),
((NimStringDesc*) &TMP1369),
((NimStringDesc*) &TMP1370),
((NimStringDesc*) &TMP1371),
((NimStringDesc*) &TMP1372),
((NimStringDesc*) &TMP1373),
((NimStringDesc*) &TMP1374),
((NimStringDesc*) &TMP1375),
((NimStringDesc*) &TMP1376),
((NimStringDesc*) &TMP1377),
((NimStringDesc*) &TMP1378),
((NimStringDesc*) &TMP1379),
((NimStringDesc*) &TMP1380),
((NimStringDesc*) &TMP1381),
((NimStringDesc*) &TMP1382),
((NimStringDesc*) &TMP1383),
((NimStringDesc*) &TMP1384),
((NimStringDesc*) &TMP1385),
((NimStringDesc*) &TMP1386),
((NimStringDesc*) &TMP1387),
((NimStringDesc*) &TMP1388),
((NimStringDesc*) &TMP1389),
((NimStringDesc*) &TMP1390),
((NimStringDesc*) &TMP1391),
((NimStringDesc*) &TMP1392),
((NimStringDesc*) &TMP1393),
((NimStringDesc*) &TMP1394),
((NimStringDesc*) &TMP1395),
((NimStringDesc*) &TMP1396),
((NimStringDesc*) &TMP1397),
((NimStringDesc*) &TMP1398),
((NimStringDesc*) &TMP1399),
((NimStringDesc*) &TMP1400),
((NimStringDesc*) &TMP1401),
((NimStringDesc*) &TMP1402),
((NimStringDesc*) &TMP1403),
((NimStringDesc*) &TMP1404),
((NimStringDesc*) &TMP1405),
((NimStringDesc*) &TMP1406),
((NimStringDesc*) &TMP1407),
((NimStringDesc*) &TMP1408),
((NimStringDesc*) &TMP1409),
((NimStringDesc*) &TMP1410),
((NimStringDesc*) &TMP1411),
((NimStringDesc*) &TMP1412),
((NimStringDesc*) &TMP1413),
((NimStringDesc*) &TMP1414),
((NimStringDesc*) &TMP1415)}
;
extern TFrame* frameptr_13438;

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13438;
	frameptr_13438 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13438 = (*frameptr_13438).prev;
}

N_NIMCALL(NI, findstr_174334)(NimStringDesc** a, NI aLen0, NimStringDesc* s) {
	NI result;
	NI i_174352;
	NI HEX3Atmp_174353;
	NI res_174355;
	nimfr("findStr", "wordrecg.nim")
	result = 0;
	i_174352 = 0;
	HEX3Atmp_174353 = 0;
	nimln(172, "wordrecg.nim");
	nimln(172, "wordrecg.nim");
	HEX3Atmp_174353 = (aLen0-1);
	nimln(1451, "system.nim");
	res_174355 = 0;
	nimln(1452, "system.nim");
	while (1) {
		nimln(1452, "system.nim");
		if (!(res_174355 <= HEX3Atmp_174353)) goto LA1;
		nimln(1451, "system.nim");
		i_174352 = res_174355;
		nimln(173, "wordrecg.nim");
		{
			NI LOC4;
			nimln(173, "wordrecg.nim");
			nimln(173, "wordrecg.nim");
			if ((NU)(i_174352) >= (NU)(aLen0)) raiseIndexError();
			LOC4 = 0;
			LOC4 = nsuCmpIgnoreStyle(a[i_174352], s);
			if (!(LOC4 == 0)) goto LA5;
			nimln(174, "wordrecg.nim");
			nimln(174, "wordrecg.nim");
			result = i_174352;
			goto BeforeRet;
		}
		LA5: ;
		nimln(1454, "system.nim");
		res_174355 = addInt(res_174355, 1);
	} LA1: ;
	nimln(175, "wordrecg.nim");
	result = -1;
	BeforeRet: ;
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, whichkeyword_174360)(tident170019* id) {
	NU8 result;
	nimfr("whichKeyword", "wordrecg.nim")
	result = 0;
	nimln(178, "wordrecg.nim");
	{
		nimln(178, "wordrecg.nim");
		if (!((*id).Sup.Id < 0)) goto LA3;
		nimln(178, "wordrecg.nim");
		result = ((NU8) 0);
	}
	goto LA1;
	LA3: ;
	{
		nimln(179, "wordrecg.nim");
		result = ((NU8)chckRange((*id).Sup.Id, ((NU8) 0), ((NU8) 251)));
	}
	LA1: ;
	popFrame();
	return result;
}

N_NIMCALL(NU8, whichkeyword_174367)(NimStringDesc* id) {
	NU8 result;
	tident170019* LOC1;
	nimfr("whichKeyword", "wordrecg.nim")
	result = 0;
	nimln(182, "wordrecg.nim");
	nimln(182, "wordrecg.nim");
	LOC1 = 0;
	LOC1 = getident_170456(id);
	result = whichkeyword_174360(LOC1);
	popFrame();
	return result;
}

N_NIMCALL(void, initspecials_174373)(void) {
	NU8 s_174430;
	NU8 res_174440;
	nimfr("initSpecials", "wordrecg.nim")
	s_174430 = 0;
	nimln(1451, "system.nim");
	res_174440 = ((NU8) 1);
	nimln(1452, "system.nim");
	while (1) {
		NI LOC2;
		tident170019* LOC3;
		nimln(1452, "system.nim");
		if (!(res_174440 <= ((NU8) 251))) goto LA1;
		nimln(1451, "system.nim");
		s_174430 = res_174440;
		nimln(187, "wordrecg.nim");
		nimln(187, "wordrecg.nim");
		nimln(187, "wordrecg.nim");
		LOC2 = 0;
		LOC2 = hashignorestyle_120859(specialwords_174326[(s_174430)- 0]);
		LOC3 = 0;
		LOC3 = getident_170462(specialwords_174326[(s_174430)- 0], LOC2);
		nimln(187, "wordrecg.nim");
		(*LOC3).Sup.Id = ((NI) (s_174430));
		nimln(1454, "system.nim");
		res_174440 = addInt(res_174440, 1);
	} LA1: ;
	popFrame();
}
N_NOINLINE(void, wordrecgInit)(void) {
	nimfr("wordrecg", "wordrecg.nim")
	nimln(189, "wordrecg.nim");
	initspecials_174373();
	popFrame();
}

N_NOINLINE(void, wordrecgDatInit)(void) {
}

