bool __fastcall sub_2AEB0C(int a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  unsigned int v9; // r10
  _DWORD *v10; // r3
  int v11; // lr
  unsigned int v12; // r0
  bool v13; // zf
  int v14; // r0
  _DWORD *i; // r3
  int v16; // r2
  int v17; // r3

  if ( !a6 )
    return 1;
  v9 = *(_BYTE *)(a1 + 43) & 0x40;
  if ( (*(_BYTE *)(a1 + 43) & 0x40) != 0 )
    goto LABEL_17;
  v10 = *(_DWORD **)(a1 + 100);
  if ( v10 )
  {
    v11 = *(_BYTE *)(a1 + 43) & 0x40;
    while ( 1 )
    {
      if ( (v10[5] & 0x303) != 0x103 || !v10[9] )
        goto LABEL_6;
      v12 = v10[8];
      v13 = v11 == 0;
      v11 = 1;
      if ( v13 )
      {
        v9 = v10[8];
LABEL_6:
        v10 = (_DWORD *)v10[3];
        if ( !v10 )
          goto LABEL_14;
      }
      else
      {
        v10 = (_DWORD *)v10[3];
        if ( v9 >= v12 )
          v9 = v12;
        if ( !v10 )
          goto LABEL_14;
      }
    }
  }
  v9 = 0;
LABEL_14:
  v14 = sub_2A6904(a1);
  for ( i = *(_DWORD **)(a1 + 100); i; i = (_DWORD *)i[3] )
  {
    v16 = i[8];
    i[21] = 0;
    i[20] = v14 * (v16 - v9);
  }
  *(_BYTE *)(a1 + 43) |= 0x40u;
LABEL_17:
  v17 = *(_DWORD *)(a2 + 20);
  if ( (v17 & 3) == 0 || (v17 & 0x200) != 0 )
    return 1;
  return sub_2ABA78(a1, a2, a3, v17, a5, a6);
}
