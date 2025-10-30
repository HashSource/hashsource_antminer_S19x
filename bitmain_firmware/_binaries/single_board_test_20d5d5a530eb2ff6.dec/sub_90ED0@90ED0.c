int __fastcall sub_90ED0(_DWORD *a1, int a2)
{
  int *v2; // r2
  int v3; // r4
  unsigned int v5; // r7
  int v8; // r5
  int v9; // r8
  int v10; // r10
  int v11; // r11
  int v12; // r9
  int v13; // r0
  _BOOL4 v14; // r3
  int v15; // r5
  int v16; // r0
  int v17; // r1
  int v18; // r3
  time_t v19; // r0
  _DWORD *v20; // r5
  int v21; // r0
  int v22; // r3
  int v23; // r0
  int v24; // r1
  int v25; // r0
  int v26; // r6
  _DWORD *v27; // r2
  int v28; // [sp+1Ch] [bp-18h]
  int v29; // [sp+20h] [bp-14h] BYREF
  int v30; // [sp+24h] [bp-10h] BYREF
  _DWORD *v31; // [sp+28h] [bp-Ch] BYREF
  _DWORD *v32; // [sp+2Ch] [bp-8h] BYREF

  v2 = (int *)a1[285];
  a1[369] = 0;
  v3 = *v2;
  v31 = 0;
  v32 = 0;
  if ( v3 != 772 )
    return 2;
  v5 = v2[117];
  if ( v5 )
  {
    if ( a1[275] != 1 )
    {
      v12 = 0;
      goto LABEL_16;
    }
  }
  else
  {
    v8 = a1[286];
    if ( !v8 )
      return 2;
    if ( a1[275] != 1 )
    {
      v9 = v2[117];
      v10 = v9;
      v11 = v9;
      v12 = v9;
      goto LABEL_7;
    }
  }
  v23 = sub_86508((int)a1);
  v2 = (int *)a1[285];
  v12 = v23;
  if ( !v2[117] )
  {
    v8 = a1[286];
    v9 = 0;
    v5 = 0;
LABEL_22:
    v10 = 0;
    v11 = 0;
    if ( v8 )
      goto LABEL_7;
    return 2;
  }
LABEL_16:
  v15 = v2[110];
  if ( !v15 )
  {
    sub_95494(a1, 80, 501, 68, "ssl/statem/extensions_clnt.c", 1034);
    return 0;
  }
  v16 = sub_864EC(*(_DWORD *)(v15 + 52));
  v9 = v16;
  if ( !v16 )
    goto LABEL_21;
  v5 = a1[275] == 1;
  if ( v16 == v12 )
    v5 = 0;
  if ( v5 )
  {
LABEL_21:
    v8 = a1[286];
    v5 = 0;
    goto LABEL_22;
  }
  v19 = time(0);
  v20 = (_DWORD *)a1[285];
  v21 = v19 - v20[108];
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( (unsigned int)(v21 - 1) > v20[118] || (v5 = 1000 * v22, v21 != 1) && v22 != v5 / 0x3E8 )
    {
      v8 = a1[286];
      goto LABEL_22;
    }
  }
  else
  {
    v5 = 0;
  }
  v11 = 1;
  v5 += v20[119];
  v10 = sub_D8C78(v9);
  v8 = a1[286];
  ++a1[369];
  if ( !v8 )
  {
    v28 = 0;
    goto LABEL_25;
  }
LABEL_7:
  v13 = sub_864EC(*(_DWORD *)(*(_DWORD *)(v8 + 440) + 52));
  v8 = v13;
  if ( !v13 )
  {
    sub_95494(a1, 80, 501, 219, "ssl/statem/extensions_clnt.c", 1116);
    return 0;
  }
  v14 = a1[275] == 1;
  if ( v13 == v12 )
    v14 = 0;
  if ( v14 )
  {
    sub_95494(a1, 80, 501, 219, "ssl/statem/extensions_clnt.c", 1126);
    return 0;
  }
  v28 = sub_D8C78(v13);
LABEL_25:
  if ( !sub_A8450(a2, v17, 41, 0, 2) || !sub_A8398(a2, 2) || !sub_A8398(a2, 2) )
  {
    v18 = 1138;
LABEL_28:
    sub_95494(a1, 80, 501, 68, "ssl/statem/extensions_clnt.c", v18);
    return 0;
  }
  if ( v11
    && (!sub_A8544(a2, *(_DWORD *)(a1[285] + 464), *(_DWORD *)(a1[285] + 468), 2) || !sub_A8450(a2, v24, v5, 0, 4)) )
  {
    v18 = 1147;
    goto LABEL_28;
  }
  if ( a1[286] )
  {
    if ( !sub_A8544(a2, a1[287], a1[288], 2) || !sub_A8450(a2, 4, 0, 0, 4) )
    {
      v18 = 1157;
      goto LABEL_28;
    }
    ++a1[369];
  }
  if ( !sub_A7EDC(a2)
    || !sub_A820C(a2, &v29)
    || !sub_A8398(a2, 2)
    || v11 && !sub_A8420(a2, v10, &v31, 1)
    || a1[286] && !sub_A8420(a2, v28, &v32, 1)
    || !sub_A7EDC(a2)
    || !sub_A7EDC(a2)
    || !sub_A820C(a2, &v30)
    || !sub_A7D94(a2) )
  {
    v18 = 1179;
    goto LABEL_28;
  }
  v25 = sub_A823C(a2);
  v26 = v25 - v30;
  if ( v11 && sub_8F8E0(a1, v9, v25 - v30, v29, 0, v31, (_DWORD *)a1[285], 1, 0) != 1 )
    return 0;
  v27 = (_DWORD *)a1[286];
  return !v27 || sub_8F8E0(a1, v8, v26, v29, 0, v32, v27, 1, 1) == 1;
}
