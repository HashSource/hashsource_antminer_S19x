int __fastcall sub_276DCC(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  _DWORD *v6; // r0
  _DWORD *v7; // r3
  bool v8; // zf
  int v9; // r2
  int v10; // r3
  void *ptr; // [sp+Ch] [bp-20h] BYREF
  void *v13; // [sp+10h] [bp-1Ch] BYREF
  int v14; // [sp+14h] [bp-18h]
  _DWORD v15[5]; // [sp+18h] [bp-14h] BYREF

  sub_230590((char **)&ptr, a2, 11, "target.xml");
  if ( ptr )
  {
    v14 = 0;
    LOBYTE(v15[0]) = 0;
    v13 = v15;
    v4 = sub_274D48(
           (int)&v13,
           (struct XML_ParserStruct *)"target description",
           (const char *)ptr,
           (int)sub_276D84,
           a2,
           0);
    if ( v4 )
    {
      v7 = v13;
      *(_DWORD *)a1 = a1 + 8;
      v8 = v7 == v15;
      if ( v7 == v15 )
      {
        v4 = v15[0];
        v5 = v15[1];
        v9 = v15[2];
        v7 = (_DWORD *)v15[3];
      }
      else
      {
        v9 = v15[0];
        *(_DWORD *)a1 = v7;
      }
      if ( v8 )
        *(_DWORD *)(a1 + 20) = v7;
      v10 = v14;
      if ( v8 )
        *(_DWORD *)(a1 + 16) = v9;
      else
        *(_DWORD *)(a1 + 8) = v9;
      if ( v8 )
      {
        *(_DWORD *)(a1 + 8) = v4;
        *(_DWORD *)(a1 + 12) = v5;
      }
      *(_BYTE *)(a1 + 24) = 1;
      *(_DWORD *)(a1 + 4) = v10;
    }
    else
    {
      sub_946B0("Could not load XML target description; ignoring");
      v6 = v13;
      *(_BYTE *)(a1 + 24) = 0;
      if ( v6 != v15 )
        sub_339E64(v6);
    }
    if ( ptr )
      free(ptr);
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}
