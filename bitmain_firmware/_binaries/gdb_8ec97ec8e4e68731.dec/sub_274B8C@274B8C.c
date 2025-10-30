struct XML_ParserStruct **__fastcall sub_274B8C(
        struct XML_ParserStruct **a1,
        struct XML_ParserStruct *a2,
        int a3,
        struct XML_ParserStruct *a4)
{
  _DWORD *v5; // r5
  struct XML_ParserStruct *NS; // r0
  struct XML_ParserStruct *v7; // r1
  int v8; // r0
  int v10; // r0
  int v11; // [sp+4h] [bp-8h]

  a1[1] = a2;
  v5 = a1 + 3;
  v11 = a3;
  a1[2] = a4;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[10] = 0;
  *((_BYTE *)a1 + 44) = 0;
  NS = XML_ParserCreateNS(0, 33);
  *a1 = NS;
  if ( !NS )
  {
    sub_258C1C(0);
    v10 = sub_274F94(v5);
    sub_338FFC(v10);
  }
  XML_SetUserData(NS, a1);
  XML_SetElementHandler(*a1, (XML_StartElementHandler)sub_274AE0, (XML_EndElementHandler)&loc_273EF0);
  XML_SetCharacterDataHandler(*a1, (XML_CharacterDataHandler)sub_273B54);
  v7 = a1[4];
  if ( v7 == a1[5] )
  {
    sub_275278(v5);
    return a1;
  }
  else
  {
    if ( v7 )
    {
      v8 = v11;
      *((_DWORD *)v7 + 1) = 0;
      *((_DWORD *)v7 + 2) = 0;
      *(_DWORD *)v7 = v8;
      *((_DWORD *)v7 + 4) = 0;
      *((_BYTE *)v7 + 20) = 0;
      *((_DWORD *)v7 + 3) = (char *)v7 + 20;
      v7 = a1[4];
    }
    a1[4] = (struct XML_ParserStruct *)((char *)v7 + 36);
    return a1;
  }
}
