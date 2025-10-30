void __noreturn sub_274E78(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        XML_Parser parser,
        int a12,
        int a13,
        ...)
{
  int v13; // r0
  va_list va; // [sp+24h] [bp+24h] BYREF

  va_start(va, a13);
  XML_ParserFree(parser);
  v13 = sub_274F94((char *)va);
  sub_338FFC(v13);
}
