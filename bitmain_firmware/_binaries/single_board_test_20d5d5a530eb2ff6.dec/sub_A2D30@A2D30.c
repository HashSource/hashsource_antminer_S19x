_DWORD *__fastcall sub_A2D30(int *a1, int a2, int a3)
{
  unsigned int v4; // r0
  int v6; // r11
  int v7; // r4
  _DWORD *v8; // r5
  int v9; // r3
  bool v10; // zf
  int v11; // r1
  bool v12; // zf
  _BOOL4 v13; // r1
  int v15; // r0
  int v16; // r3
  int v17; // r10
  int v18; // r3
  bool v19; // zf
  unsigned int v20; // r3
  int v21; // r3
  int v22; // r2
  int v23; // r3
  int v24; // r0
  int v25; // r0
  int v27; // [sp+4h] [bp-10h]
  int v28[2]; // [sp+Ch] [bp-8h] BYREF

  v4 = a1[995];
  if ( !v4 )
    return 0;
  v6 = -1;
  v7 = 0;
  while ( 1 )
  {
    v8 = *(_DWORD **)(a1[994] + 4 * v7);
    v9 = v8[2];
    v10 = v9 == 675;
    if ( v9 != 675 )
      v10 = v9 == 64;
    if ( v10 )
      goto LABEL_17;
    v11 = v8[4];
    v12 = v11 == 116;
    if ( v11 != 116 )
      v12 = v11 == 6;
    v13 = v12;
    if ( v12 )
      goto LABEL_17;
    if ( !sub_A2D04(*(_DWORD *)(a1[994] + 4 * v7), (int *)v13) )
      goto LABEL_16;
    if ( a3 )
    {
      if ( !sub_8559C(a3, v28) || v8[5] != v28[0] || !sub_A25AC(a1 + 31, v8 + 2, a2, a3) )
        goto LABEL_16;
      v15 = a3;
    }
    else
    {
      v20 = v8[5];
      if ( v20 > 8 )
        goto LABEL_16;
      v21 = a1[257] + 20 * v20;
      v22 = *(_DWORD *)(v21 + 20);
      if ( !v22 )
        goto LABEL_16;
      v23 = *(_DWORD *)(v21 + 24);
      if ( !v23 || !sub_A25AC(a1 + 31, v8 + 2, v22, v23) )
        goto LABEL_16;
      v15 = *(_DWORD *)(a1[257] + 20 * v8[5] + 24);
    }
    v16 = v8[4];
    if ( v16 != 408 )
      break;
    if ( v6 == -1 )
    {
      v24 = sub_DA1F4(v15);
      v25 = sub_C59B8(v24);
      v6 = sub_C6284(v25);
    }
    v18 = v8[7];
    v4 = a1[995];
    v19 = v18 == 0;
    if ( v18 )
      v19 = v6 == v18;
    if ( v19 )
      goto LABEL_18;
LABEL_17:
    if ( ++v7 >= v4 )
      goto LABEL_18;
  }
  if ( v16 == 912 )
  {
    v17 = sub_D9F64(v15);
    if ( !v17 || !sub_A2D04((int)v8, v28) || !v28[0] || (v27 = sub_F7ED8(v17), v27 < 2 * (sub_D8C78(v28[0]) + 1)) )
    {
LABEL_16:
      v4 = a1[995];
      goto LABEL_17;
    }
  }
  v4 = a1[995];
LABEL_18:
  if ( v7 != v4 )
    return v8;
  return 0;
}
