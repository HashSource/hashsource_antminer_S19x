int __fastcall sub_94430(_DWORD *a1, int a2)
{
  _DWORD *v2; // r8
  _DWORD *v3; // r11
  size_t v4; // r5
  int v5; // r4
  const void *v6; // r10
  _DWORD *v7; // r9
  size_t v8; // r6
  const void *v9; // r8
  size_t v10; // r7
  int v11; // r0
  bool v12; // nf
  int v13; // r0
  int v14; // r6
  bool v15; // r3
  int v16; // r5
  int v19; // r7
  _DWORD *v20; // r3
  const void *v21; // r8
  int v22; // r7
  _DWORD *v23; // r10
  size_t v24; // r4
  size_t v25; // r0
  int v26; // r0
  _DWORD *v27; // r3
  size_t v28; // r6
  size_t v29; // r3
  int v30; // r0
  int v31; // r3
  bool v32; // zf
  int v33; // r3
  int v34; // r7
  int v35; // r0
  _DWORD *v36; // r6
  _DWORD *v37; // r0
  int v38; // r3
  int v40; // [sp+0h] [bp-Ch]
  _DWORD *v41; // [sp+4h] [bp-8h]

  v2 = a1;
  v3 = a1 + 1;
  v41 = (_DWORD *)a1[2];
  if ( !v41 )
  {
    v7 = a1 + 1;
    v15 = 1;
LABEL_16:
    v16 = v2[5];
    if ( (_DWORD *)v2[3] != v7 || !v15 )
      return 0;
    goto LABEL_21;
  }
  v4 = *(_DWORD *)(a2 + 4);
  v5 = a1[2];
  v6 = *(const void **)a2;
  v7 = a1 + 1;
  while ( 1 )
  {
    v8 = *(_DWORD *)(v5 + 20);
    v9 = *(const void **)(v5 + 16);
    if ( v8 >= v4 )
      v10 = v4;
    else
      v10 = *(_DWORD *)(v5 + 20);
    if ( !v10 )
    {
      if ( (int)(v8 - v4) < 0 )
        goto LABEL_24;
LABEL_11:
      v13 = v4 - v8;
      goto LABEL_12;
    }
    v11 = memcmp(*(const void **)(v5 + 16), v6, v10);
    v12 = v11 < 0;
    if ( !v11 )
      v12 = (int)(v8 - v4) < 0;
    if ( v12 )
    {
LABEL_24:
      v5 = *(_DWORD *)(v5 + 12);
      goto LABEL_14;
    }
    v13 = memcmp(v6, v9, v10);
    if ( !v13 )
      goto LABEL_11;
LABEL_12:
    v14 = *(_DWORD *)(v5 + 8);
    if ( v13 >= 0 )
      break;
    v7 = (_DWORD *)v5;
    v5 = *(_DWORD *)(v5 + 8);
LABEL_14:
    if ( !v5 )
    {
      v2 = a1;
      v15 = v3 == v7;
      goto LABEL_16;
    }
  }
  v2 = a1;
  v19 = *(_DWORD *)(v5 + 12);
  if ( !v14 )
    goto LABEL_51;
  v20 = a1;
  v40 = *(_DWORD *)(v5 + 12);
  v21 = v6;
  v22 = v5;
  v23 = v20;
  do
  {
    v24 = *(_DWORD *)(v14 + 20);
    if ( v4 >= v24 )
      v25 = *(_DWORD *)(v14 + 20);
    else
      v25 = v4;
    if ( !v25 || (v26 = memcmp(*(const void **)(v14 + 16), v21, v25)) == 0 )
      v26 = v24 - v4;
    if ( v26 < 0 )
      v14 = *(_DWORD *)(v14 + 12);
    else
      v22 = v14;
    if ( v26 >= 0 )
      v14 = *(_DWORD *)(v14 + 8);
  }
  while ( v14 );
  v5 = v22;
  v19 = v40;
  v27 = v23;
  v6 = v21;
  v2 = v27;
  while ( v19 )
  {
    v28 = *(_DWORD *)(v19 + 20);
    if ( v4 >= v28 )
      v29 = *(_DWORD *)(v19 + 20);
    else
      v29 = v4;
    if ( !v29 || (v30 = memcmp(v6, *(const void **)(v19 + 16), v29)) == 0 )
      v30 = v4 - v28;
    if ( v30 >= 0 )
      v19 = *(_DWORD *)(v19 + 12);
    else
      v7 = (_DWORD *)v19;
    if ( v30 < 0 )
      v19 = *(_DWORD *)(v19 + 8);
LABEL_51:
    ;
  }
  v31 = v2[3];
  v16 = v2[5];
  v32 = v31 == v5;
  if ( v31 == v5 )
    v32 = v3 == v7;
  v33 = v32;
  if ( v32 )
  {
LABEL_21:
    sub_94088((int)v2, v41);
    v2[3] = v3;
    v2[4] = v3;
    v2[2] = 0;
    v2[5] = 0;
    return v16;
  }
  if ( v7 == (_DWORD *)v5 )
  {
    return v33;
  }
  else
  {
    do
    {
      v34 = sub_33AD50(v5);
      v35 = v5;
      v5 = v34;
      v36 = (_DWORD *)sub_33AF1C(v35, v3);
      v37 = (_DWORD *)v36[4];
      if ( v37 != v36 + 6 )
        sub_339E64(v37);
      sub_339E64(v36);
      v38 = v2[5] - 1;
      v2[5] = v38;
    }
    while ( (_DWORD *)v34 != v7 );
    return v16 - v38;
  }
}
