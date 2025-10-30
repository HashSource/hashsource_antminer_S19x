_DWORD *__fastcall sub_2E8ED0(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // lr
  _DWORD *v5; // r4
  unsigned int v6; // lr
  int v7; // lr
  int v8; // r0
  int v9; // r3
  _DWORD *v10; // r2
  void *v12; // r0

  v2 = sub_2AB4EC(0x110u);
  if ( !v2 )
    return 0;
  v3 = a1;
  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
  v5 = v2;
  v6 = *(unsigned __int8 *)(v4 + 466);
  v2[17] = -1;
  v2[18] = -1;
  v2[19] = 1;
  v7 = ((v6 >> 2) & 1) - 1;
  v2[15] = v7;
  v2[16] = v7;
  v8 = sub_2FC89C(v2, v3, sub_2DBE24, 72);
  v9 = 38;
  v10 = (_DWORD *)v8;
  v5[11] = 38;
  if ( v8 )
    v9 = (int)sub_2DBEB8;
  v5[10] = 1;
  if ( v8 )
  {
    v5[9] = v9;
  }
  else
  {
    v12 = v5;
    v5 = v10;
    free(v12);
  }
  return v5;
}
