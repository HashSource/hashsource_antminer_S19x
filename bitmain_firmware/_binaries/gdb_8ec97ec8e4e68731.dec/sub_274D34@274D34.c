void __noreturn sub_274D34(int a1, int a2, int a3, int a4, XML_Parser parser, int a6, int a7, ...)
{
  int v7; // r0
  va_list va; // [sp+Ch] [bp+Ch] BYREF

  va_start(va, a7);
  XML_ParserFree(parser);
  v7 = sub_274F94((char *)va);
  sub_338FFC(v7);
}
