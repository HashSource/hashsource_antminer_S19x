size_t __fastcall sub_9D99C(_DWORD *a1, _DWORD *a2, const void *a3, size_t a4)
{
  size_t v4; // r7
  _DWORD *v9; // r0
  _DWORD *v10; // r4
  _DWORD *v11; // r5
  int v12; // t1
  int v13; // r12
  int v14; // lr
  int v15; // r3
  int v16; // r12
  int v17; // lr
  int v18; // r3
  _DWORD *v19; // r3
  int v20; // t1
  int v21; // r12
  int v22; // lr
  int v23; // r5
  int v24; // r5
  int v25; // r12
  int v26; // lr

  v4 = a4 + 64;
  v9 = (_DWORD *)CRYPTO_malloc(a4 + 64, "ssl/statem/statem_lib.c", 2374);
  v10 = v9;
  if ( v9 )
  {
    v11 = (_DWORD *)a1[31];
    v12 = v11[43];
    v11 += 43;
    v13 = v11[1];
    v14 = v11[2];
    v15 = v11[3];
    *v9 = v12;
    v9[1] = v13;
    v9[2] = v14;
    v9[3] = v15;
    v16 = v11[5];
    v17 = v11[6];
    v18 = v11[7];
    v9[4] = v11[4];
    v9[5] = v16;
    v9[6] = v17;
    v9[7] = v18;
    v19 = (_DWORD *)a1[31];
    v20 = v19[35];
    v19 += 35;
    v21 = v19[1];
    v22 = v19[2];
    v23 = v19[3];
    v9[8] = v20;
    v9[9] = v21;
    v9[10] = v22;
    v9[11] = v23;
    v24 = v19[7];
    v25 = v19[5];
    v26 = v19[6];
    v9[12] = v19[4];
    v9[13] = v25;
    v9[14] = v26;
    v9[15] = v24;
    memcpy(v9 + 16, a3, a4);
    *a2 = v10;
    return v4;
  }
  else
  {
    sub_95494(a1, 80, 553, 65, (int)"ssl/statem/statem_lib.c", 2378);
    return 0;
  }
}
