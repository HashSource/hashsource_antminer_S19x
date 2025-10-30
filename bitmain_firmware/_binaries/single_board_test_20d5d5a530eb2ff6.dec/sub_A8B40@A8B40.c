int __fastcall sub_A8B40(_DWORD *a1, int a2)
{
  _DWORD *v2; // r3
  int v3; // r10
  int v4; // r8
  int v6; // r0
  int v8; // r9
  int v9; // r5
  int v10; // r7
  int v11; // r11
  _DWORD *v12; // r3
  void *v13; // r9
  char *v14; // r11
  int v15; // r2
  int v16; // r5
  int v17; // r0
  bool v18; // zf
  int v19; // r5
  int v20; // r10
  unsigned int v21; // r0
  char *v22; // r5
  int v24; // r11
  int v25; // r0
  int v26; // r3
  size_t v27; // r10
  size_t v28; // r5
  size_t v29; // r0
  int v30; // r0
  int v31; // r3
  int v32; // r3
  size_t n; // [sp+Ch] [bp-8h]

  v2 = (_DWORD *)a1[31];
  v3 = v2[141];
  v4 = v2[140];
  if ( !v3 )
  {
    v9 = 0;
    sub_95494(a1, 80, 129, 68, (int)"ssl/s3_enc.c", 109);
    return v9;
  }
  v6 = v2[144];
  v8 = v6;
  if ( v6 )
    v8 = *(_DWORD *)(v6 + 8);
  v9 = a2 & 1;
  if ( (a2 & 1) != 0 )
  {
    v10 = a1[243];
    v11 = 1;
    if ( v10 )
    {
LABEL_6:
      if ( !sub_8B19C(a1 + 248, v3) )
      {
        v26 = 136;
        goto LABEL_28;
      }
      sub_BB754(a1[250]);
      a1[250] = 0;
      if ( !v8 || (v9 = sub_BB6F8(v8), (a1[250] = v9) != 0) )
      {
        sub_7D420((int)(a1 + 404));
        v12 = (_DWORD *)a1[31];
        v13 = v12 + 2;
        if ( !v11 )
          goto LABEL_10;
LABEL_24:
        sub_D7A10(v10);
        v14 = *(char **)(a1[31] + 556);
        v15 = sub_D8C78(v3);
        if ( v15 >= 0 )
          goto LABEL_11;
        goto LABEL_25;
      }
      v32 = 148;
LABEL_39:
      sub_95494(a1, 80, 129, 142, (int)"ssl/s3_enc.c", v32);
      return v9;
    }
    v9 = sub_D7A5C();
    a1[243] = v9;
    if ( v9 )
    {
      ((void (*)(void))sub_D7A10)();
      v11 = 0;
      v10 = a1[243];
      goto LABEL_6;
    }
    v31 = 124;
LABEL_35:
    sub_95494(a1, 80, 129, 65, (int)"ssl/s3_enc.c", v31);
    return v9;
  }
  v10 = a1[251];
  a1[24] = 1;
  v24 = 1;
  if ( !v10 )
  {
    v30 = sub_D7A5C();
    a1[251] = v30;
    if ( !v30 )
    {
      v31 = 161;
      goto LABEL_35;
    }
    ((void (*)(void))sub_D7A10)();
    v24 = a2 & 1;
    v10 = a1[251];
  }
  if ( !sub_8B19C(a1 + 256, v3) )
  {
    v31 = 172;
    goto LABEL_35;
  }
  sub_BB754(a1[249]);
  a1[249] = 0;
  if ( v8 )
  {
    v25 = sub_BB6F8(v8);
    a1[249] = v25;
    if ( !v25 )
    {
      v32 = 184;
      goto LABEL_39;
    }
  }
  sub_7D42C((int)(a1 + 404));
  v12 = (_DWORD *)a1[31];
  v13 = v12 + 19;
  if ( v24 )
    goto LABEL_24;
LABEL_10:
  v14 = (char *)v12[139];
  v15 = sub_D8C78(v3);
  if ( v15 >= 0 )
  {
LABEL_11:
    n = v15;
    v16 = sub_D8AD0(v4);
    v17 = sub_D8940(v4);
    v18 = a2 == 33;
    if ( a2 != 33 )
      v18 = a2 == 18;
    if ( v18 )
    {
      v19 = 2 * n + 2 * v16;
      v20 = (int)&v14[2 * n];
      v21 = v19 + 2 * v17;
      v22 = &v14[v19];
      if ( v21 > *(_DWORD *)(a1[31] + 552) )
      {
LABEL_27:
        v26 = 227;
        goto LABEL_28;
      }
    }
    else
    {
      v27 = v16 + 2 * n;
      v28 = v16 + v17 + v27;
      v20 = (int)&v14[v27];
      v29 = v17 + v28;
      v22 = &v14[v28];
      v14 += n;
      if ( v29 > *(_DWORD *)(a1[31] + 552) )
        goto LABEL_27;
    }
    memcpy(v13, v14, n);
    if ( !sub_D8440(v10, v4, 0, v20, v22, a2 & 2) )
    {
      v26 = 235;
      goto LABEL_28;
    }
    v9 = 1;
    a1[24] = 0;
    return v9;
  }
LABEL_25:
  v26 = 200;
LABEL_28:
  sub_95494(a1, 80, 129, 68, (int)"ssl/s3_enc.c", v26);
  return 0;
}
