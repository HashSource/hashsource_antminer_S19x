int __fastcall sub_A9A34(int a1, int a2, int a3)
{
  char *v6; // r4
  int v7; // r0
  int v8; // r0
  __int64 v9; // r0
  int v10; // lr
  __int64 v11; // r6
  int v12; // r5
  int v13; // r9
  int v14; // r4
  _BYTE *v15; // r12

  v6 = sub_A0410(a1);
  v7 = sub_26DD04(a2, a3, 0);
  v8 = sub_A93B4(v7, v6, 1);
  if ( !v8 )
    return -1;
  v9 = sub_26EB1C(v8);
  v10 = *(_DWORD *)(a1 + 24);
  v11 = v9;
  if ( *(__int16 *)(v10 + 4) <= 0 )
    return -1;
  v12 = 0;
  v13 = -1;
  v14 = 0;
  while ( 1 )
  {
    v15 = *(_BYTE **)(*(_DWORD *)(v10 + 24) + v12 + 16);
    if ( v15 && *v15 == 79 )
    {
      v13 = v14;
      goto LABEL_6;
    }
    if ( sub_A05F0(v11, a1, v14) )
      return v14;
    v10 = *(_DWORD *)(a1 + 24);
LABEL_6:
    ++v14;
    v12 += 24;
    if ( *(__int16 *)(v10 + 4) <= v14 )
      return v13;
  }
}
