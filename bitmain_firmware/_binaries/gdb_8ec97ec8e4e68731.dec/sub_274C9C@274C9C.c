int __fastcall sub_274C9C(struct XML_ParserStruct *a1, int a2, int a3, const char *a4, struct XML_ParserStruct *a5)
{
  int v7; // r6
  _DWORD *v8; // r4
  _DWORD *v9; // r5
  _DWORD *v10; // r0
  XML_Parser parser[3]; // [sp+0h] [bp-30h] BYREF
  _DWORD *v13; // [sp+Ch] [bp-24h]
  _DWORD *v14; // [sp+10h] [bp-20h]

  sub_274B8C(parser, a1, a3, a5);
  if ( a2 )
    sub_274064((int)parser, a2);
  v7 = sub_2740C0((int)parser, a4);
  XML_ParserFree(parser[0]);
  v8 = v13;
  v9 = v14;
  if ( v13 != v14 )
  {
    do
    {
      v10 = (_DWORD *)v8[3];
      if ( v10 != v8 + 5 )
        sub_339E64(v10);
      v8 += 9;
    }
    while ( v9 != v8 );
    v9 = v13;
  }
  if ( v9 )
    sub_339E64(v9);
  return v7;
}
