int __fastcall sub_927A0(int a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _BOOL4 v8; // r7
  int v12; // r5
  int v13; // r0
  int v14; // r10
  int v15; // r3
  int v16; // r11
  _DWORD *v17; // r9
  int v18; // r3

  v8 = a4 == 0;
  if ( !a5 )
    v8 = 0;
  if ( v8 )
    return 0;
  v12 = *(_DWORD *)(a1 + 192);
  if ( a2 == 18 )
  {
    if ( (a3 & 0x80) != 0 && sub_8C280(a1) )
      return 0;
    sub_92744(0x12u);
  }
  else if ( sub_92744(a2) || a2 >= 0x10000 )
  {
    return 0;
  }
  if ( !sub_92300((unsigned __int16 **)(v12 + 240), 2, a2, 0) )
  {
    v13 = CRYPTO_realloc(*(_DWORD *)(v12 + 240), 36 * (*(_DWORD *)(v12 + 244) + 1), "ssl/statem/extensions_cust.c", 389);
    v14 = v13;
    if ( v13 )
    {
      v15 = *(_DWORD *)(v12 + 244);
      *(_DWORD *)(v12 + 240) = v13;
      v16 = 36 * v15;
      v17 = (_DWORD *)(v13 + 36 * v15);
      memset(v17, 0, 0x24u);
      v18 = *(_DWORD *)(v12 + 244);
      v17[1] = 2;
      v17[2] = a3;
      v17[7] = a7;
      v17[4] = a4;
      v17[5] = a5;
      *(_WORD *)(v14 + v16) = a2;
      v17[6] = a6;
      v17[8] = a8;
      *(_DWORD *)(v12 + 244) = v18 + 1;
      return 1;
    }
  }
  return 0;
}
