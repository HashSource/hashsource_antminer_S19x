int __fastcall sub_30D570(int *a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r6
  size_t v6; // r7
  int v7; // r8
  void *v8; // r0
  int v9; // r3
  int v10; // r1
  void *v11; // r0
  const void *v12; // r1
  int v13; // r0
  int v14; // r6
  size_t v15; // r7
  int v16; // r8
  void *v17; // r0
  int v18; // r3
  int v19; // r1
  void *v20; // r0
  const void *v21; // r1
  int v22; // r0
  int v23; // r6
  size_t v24; // r7
  int v25; // r8
  void *v26; // r0
  int v27; // r3
  int v28; // r1
  void *v29; // r0
  const void *v30; // r1
  int v31; // r0
  int result; // r0
  __int64 v33; // r0
  int v34; // r12
  int v35; // r3
  int v36; // r8
  int v37; // r6
  size_t v38; // r7
  void *v39; // r0
  int v40; // r3
  int v41; // r1
  void *v42; // r0
  const void *v43; // r1

  sub_30D184(a1);
  sub_30CC94(a1);
  memcpy(a1, a2, 0x60u);
  v4 = a2[9];
  if ( v4 )
    a1[1] = (int)sub_93028(4 * v4);
  if ( (int)a2[8] > 0 )
  {
    v5 = 0;
    do
    {
      v6 = strlen(*(const char **)(a2[1] + 4 * v5)) + 1;
      v7 = a1[1];
      v8 = sub_93028(v6);
      v9 = a1[1];
      v10 = a2[1];
      *(_DWORD *)(v7 + 4 * v5) = v8;
      v11 = *(void **)(v9 + 4 * v5);
      v12 = *(const void **)(v10 + 4 * v5++);
      memcpy(v11, v12, v6);
    }
    while ( a2[8] > v5 );
  }
  v13 = a2[6];
  if ( v13 )
    a1[2] = (int)sub_93028(4 * v13);
  if ( (int)a2[4] > 0 )
  {
    v14 = 0;
    do
    {
      v15 = strlen(*(const char **)(a2[2] + 4 * v14)) + 1;
      v16 = a1[2];
      v17 = sub_93028(v15);
      v18 = a1[2];
      v19 = a2[2];
      *(_DWORD *)(v16 + 4 * v14) = v17;
      v20 = *(void **)(v18 + 4 * v14);
      v21 = *(const void **)(v19 + 4 * v14++);
      memcpy(v20, v21, v15);
    }
    while ( a2[4] > v14 );
  }
  v22 = a2[7];
  if ( v22 )
    a1[3] = (int)sub_93028(4 * v22);
  if ( (int)a2[5] > 0 )
  {
    v23 = 0;
    do
    {
      v24 = strlen(*(const char **)(a2[3] + 4 * v23)) + 1;
      v25 = a1[3];
      v26 = sub_93028(v24);
      v27 = a1[3];
      v28 = a2[3];
      *(_DWORD *)(v25 + 4 * v23) = v26;
      v29 = *(void **)(v27 + 4 * v23);
      v30 = *(const void **)(v28 + 4 * v23++);
      memcpy(v29, v30, v24);
    }
    while ( a2[5] > v23 );
  }
  v31 = a2[21];
  if ( v31 )
    a1[21] = sub_32720C(v31, 4 * a2[22]);
  result = a2[17];
  if ( result )
  {
    result = (int)sub_93028(4 * result);
    v35 = a2[17];
    v36 = result;
    a1[16] = result;
    if ( v35 > 0 )
    {
      v37 = 0;
      while ( 1 )
      {
        v38 = strlen(*(const char **)(a2[16] + 4 * v37)) + 1;
        v39 = sub_93028(v38);
        v40 = a1[16];
        v41 = a2[16];
        *(_DWORD *)(v36 + 4 * v37) = v39;
        v42 = *(void **)(v40 + 4 * v37);
        v43 = *(const void **)(v41 + 4 * v37++);
        result = (int)memcpy(v42, v43, v38);
        if ( a2[17] <= v37 )
          break;
        v36 = a1[16];
      }
    }
  }
  if ( a2[19] )
  {
    LODWORD(v33) = sub_93028(0xCu);
    a1[19] = v33;
    v34 = a2[19];
    *(_DWORD *)(v33 + 8) = 0;
    *(_DWORD *)(v33 + 4) = 0;
    *(_DWORD *)v33 = 0;
    HIDWORD(v33) = v34;
    return sub_30D52C(v33, *(_DWORD *)(v34 + 4));
  }
  return result;
}
