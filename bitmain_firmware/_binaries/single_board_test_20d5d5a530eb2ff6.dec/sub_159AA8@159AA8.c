int __fastcall sub_159AA8(_DWORD *a1, void *a2, int *a3)
{
  int v4; // r4
  int v8; // r3
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r8
  int v13; // r0
  int v14; // r8
  void *v15; // r10
  int v16; // r3
  int v17; // r2
  int *v18; // r5
  int v19; // r0
  int v20; // r0
  _BOOL4 v21; // r4
  int v22; // r2
  int v23; // r3
  int *v24; // r4
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r3
  int v30; // r0

  v4 = a1[5];
  if ( *(_BYTE *)(v4 + 13) == 1 )
  {
    v22 = a1[2];
    if ( v22 )
    {
      v23 = a1[3];
      if ( v23 )
      {
        v24 = *(int **)(v4 + 8);
        if ( !v24 )
          v24 = *(int **)(v22 + 24);
        if ( a2 )
        {
          v25 = sub_C5A68(*(_DWORD *)(v23 + 24));
          v26 = sub_C5FA4(a2, *a3, v25, v24, 0);
          if ( v26 <= 0 )
            return 0;
          *a3 = v26;
          return 1;
        }
        else
        {
          v27 = sub_C59B8((int)v24);
          v28 = sub_C638C(v27);
          v29 = v28 + 14;
          v30 = v28 + 7;
          if ( v30 >= 0 )
            v29 = v30;
          *a3 = v29 >> 3;
          return 1;
        }
      }
    }
LABEL_30:
    sub_D0048(16, 217, 140, (int)"crypto/ec/ec_pmeth.c", 160);
    return 0;
  }
  if ( !a2 )
  {
    *a3 = *(_DWORD *)(v4 + 28);
    return 1;
  }
  if ( *a3 != *(_DWORD *)(v4 + 28) )
    return 0;
  v8 = a1[2];
  if ( !v8 || !a1[3] )
    goto LABEL_30;
  v9 = *(_DWORD *)(v4 + 8);
  if ( !v9 )
    v9 = *(_DWORD *)(v8 + 24);
  v10 = sub_C59B8(v9);
  v11 = sub_C638C(v10);
  v12 = v11 + 14;
  v13 = v11 + 7;
  if ( v13 < 0 )
    v13 = v12;
  v14 = v13 >> 3;
  v15 = CRYPTO_malloc((void *)(v13 >> 3));
  if ( v15 )
  {
    v16 = a1[2];
    if ( v16 && (v17 = a1[3]) != 0 )
    {
      v18 = *(int **)(a1[5] + 8);
      if ( !v18 )
        v18 = *(int **)(v16 + 24);
      v19 = sub_C5A68(*(_DWORD *)(v17 + 24));
      v20 = sub_C5FA4(v15, v14, v19, v18, 0);
      if ( v20 > 0 )
      {
        v14 = v20;
        v21 = sub_159E04(a2, *a3, v15, v20, *(_DWORD *)(v4 + 20), *(_DWORD *)(v4 + 24), *(_DWORD *)(v4 + 16)) != 0;
LABEL_18:
        sub_E0758(v15, v14, (size_t)"crypto/ec/ec_pmeth.c");
        return v21;
      }
    }
    else
    {
      sub_D0048(16, 217, 140, (int)"crypto/ec/ec_pmeth.c", 160);
    }
    v21 = 0;
    goto LABEL_18;
  }
  sub_D0048(16, 283, 65, (int)"crypto/ec/ec_pmeth.c", 206);
  return 0;
}
