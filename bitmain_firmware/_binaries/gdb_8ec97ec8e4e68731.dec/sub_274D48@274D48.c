int __fastcall sub_274D48(int a1, struct XML_ParserStruct *a2, const char *a3, int a4, int a5, int a6)
{
  int v7; // r6
  _DWORD *v8; // r4
  _DWORD *v9; // r5
  _DWORD *v10; // r0
  _DWORD v12[5]; // [sp+4h] [bp-44h] BYREF
  XML_Parser parser[3]; // [sp+18h] [bp-30h] BYREF
  _DWORD *v14; // [sp+24h] [bp-24h]
  _DWORD *v15; // [sp+28h] [bp-20h]
  char v16; // [sp+44h] [bp-4h]

  v12[0] = a1;
  v12[3] = a4;
  v12[4] = a5;
  v12[2] = a6;
  v12[1] = 0;
  sub_274B8C(parser, a2, (int)off_3F8624, (struct XML_ParserStruct *)v12);
  v16 = 1;
  XML_SetCharacterDataHandler(parser[0], 0);
  XML_SetDefaultHandler(parser[0], (XML_DefaultHandler)sub_273A34);
  XML_SetXmlDeclHandler(parser[0], (XML_XmlDeclHandler)nullsub_99);
  if ( a6 > 0 )
    XML_SetDoctypeDeclHandler(parser[0], (XML_StartDoctypeDeclHandler)sub_273A08, (XML_EndDoctypeDeclHandler)sub_273A1C);
  sub_274064((int)parser, (int)"xinclude.dtd");
  if ( sub_2740C0((int)parser, a3) )
  {
    v7 = 0;
  }
  else
  {
    if ( !a6 )
      sub_273C78((int)parser, "XInclude processing succeeded.");
    v7 = 1;
  }
  XML_ParserFree(parser[0]);
  v8 = v14;
  v9 = v15;
  if ( v14 != v15 )
  {
    do
    {
      v10 = (_DWORD *)v8[3];
      if ( v10 != v8 + 5 )
        sub_339E64(v10);
      v8 += 9;
    }
    while ( v9 != v8 );
    v9 = v14;
  }
  if ( v9 )
    sub_339E64(v9);
  return v7;
}
