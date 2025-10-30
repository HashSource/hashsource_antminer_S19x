int __fastcall sub_BD568(_DWORD *a1, int a2, int a3)
{
  int v3; // r4
  int v7; // r0
  int v8; // r6
  int v9; // r5
  int v10; // r1
  int v11; // r2
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r9
  int v17; // r0
  int v18; // r0
  int v19; // r2
  int v20; // r0
  int v21; // r6
  _BOOL4 v22; // r10
  int v23; // r0
  int v24; // r9
  _BOOL4 v25; // r0
  bool v26; // cc
  _BOOL4 v27; // r3
  bool v28; // zf
  bool v29; // zf
  int v30; // r0
  int v31; // r7
  int v32; // r2
  int v33; // r0
  int v34; // r6
  int v35; // r1
  int v36; // r0
  int v37; // r7
  int v38; // r3
  int v39; // r0
  int v40; // r3
  int v41; // [sp+0h] [bp-8h] BYREF
  int v42; // [sp+4h] [bp-4h] BYREF

  v3 = 0;
  v41 = 0;
  v42 = 0;
  v7 = sub_10ED70(a2, 952, -1);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( v7 == -1 )
    {
      if ( a3 )
        goto LABEL_3;
      v3 = i2d_X509(a2, &v41);
      if ( v3 < 0 )
        goto LABEL_3;
    }
LABEL_9:
    v13 = sub_10ED70(a2, 951, -1);
    v16 = v13;
    if ( v13 < 0 )
    {
      if ( v13 != -1 || v8 < 0 )
      {
        v37 = 0;
        v9 = 0;
        goto LABEL_45;
      }
    }
    else
    {
      if ( sub_10ED70(a2, 951, v13) >= 0 || v8 >= 0 )
        goto LABEL_3;
      v8 = v16;
    }
    v17 = sub_11677C(a2);
    v9 = v17;
    if ( !v17 )
      goto LABEL_3;
    v18 = sub_10ED90(v17, v8);
    X509_EXTENSION_free(v18);
    if ( a3 )
    {
      v20 = sub_10ED70(a3, 90, -1);
      v21 = v20;
      v22 = v20 >= 0 && sub_10ED70(a3, 90, v20) >= 0;
      v23 = sub_10ED70(v9, 90, -1);
      v24 = v23;
      v25 = v23 >= 0 && sub_10ED70(v9, 90, v23) >= 0;
      v26 = v24 < -1;
      if ( v24 >= -1 )
        v26 = v21 < -1;
      v27 = v26;
      if ( v22 || v27 || v25 )
        goto LABEL_4;
      v28 = v21 == 0;
      if ( v21 >= 0 )
        v28 = v24 == -1;
      if ( v28 )
        goto LABEL_4;
      v29 = v24 == 0;
      if ( v24 >= 0 )
        v29 = v21 == -1;
      if ( v29 )
        goto LABEL_4;
      v30 = sub_10E65C(a3);
      if ( !sub_10FCB4(v9, v30) )
        goto LABEL_4;
      v19 = v21 + 1;
      if ( v21 != -1 )
      {
        v31 = sub_10ED88(a3, v21, v19);
        v33 = sub_10ED88(v9, v24, v32);
        v34 = v33;
        if ( !v31 )
          goto LABEL_4;
        if ( !v33 )
          goto LABEL_4;
        v35 = sub_11054C(v31);
        if ( !v35 || !sub_110444(v34, v35) )
          goto LABEL_4;
      }
    }
    v36 = sub_116910(v9, &v42, v19);
    if ( v36 <= 0 )
      goto LABEL_4;
    v37 = v36;
LABEL_45:
    X509_free(v9, v14, v15);
    CRYPTO_free(a1[5], "crypto/ct/ct_sct_ctx.c", 178);
    v38 = v41;
    v39 = a1[7];
    a1[6] = v3;
    a1[5] = v38;
    CRYPTO_free(v39, "crypto/ct/ct_sct_ctx.c", 182);
    v40 = v42;
    a1[8] = v37;
    a1[7] = v40;
    return 1;
  }
  if ( sub_10ED70(a2, 952, v7) < 0 )
    goto LABEL_9;
LABEL_3:
  v9 = 0;
LABEL_4:
  CRYPTO_free(v41, "crypto/ct/ct_sct_ctx.c", 188);
  CRYPTO_free(v42, "crypto/ct/ct_sct_ctx.c", 189);
  X509_free(v9, v10, v11);
  return 0;
}
