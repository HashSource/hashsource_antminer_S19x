_DWORD *__fastcall sub_C347C(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v5; // r4
  int *v6; // r7
  bool v7; // zf
  _DWORD *result; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r10
  int v12; // r0
  _DWORD *v13; // r8
  __int64 v14; // r0
  int v15; // r0
  int v16; // r9
  int v17; // r0
  int v18; // r0
  int *v19; // r7
  _DWORD *v20; // r10
  int v21; // r0
  _DWORD *v22; // r9
  char *v23; // r8
  char *v24; // r11
  char *v25; // r1
  int v26; // lr
  size_t v27; // r2
  int v28; // r8
  int v29; // r0
  int v30; // r2
  _DWORD *v31; // r0
  int v32; // r0
  int v33; // r7
  int v34; // r0
  int v35; // r0
  int v36; // r5
  int v37; // r0
  int v38; // r1
  int v39; // r0
  int v40; // r0
  int v41; // r2
  int v42; // r2
  int v43; // r0
  _DWORD *v44; // r0
  int v45; // r3
  int v46; // r2
  unsigned int n; // [sp+Ch] [bp-18h]
  size_t na; // [sp+Ch] [bp-18h]
  int v49; // [sp+10h] [bp-14h] BYREF
  int v50; // [sp+14h] [bp-10h] BYREF
  int v51; // [sp+18h] [bp-Ch] BYREF
  _DWORD v52[2]; // [sp+1Ch] [bp-8h] BYREF

  v5 = a2;
  v49 = 0;
  if ( !a2 )
  {
    v5 = (_DWORD *)sub_C33BC();
    if ( !v5 )
    {
      sub_D0048(16, 261, 65, "crypto/ec/ec_asn1.c", 459);
      goto LABEL_16;
    }
  }
  v6 = (int *)v5[1];
  *v5 = 1;
  v7 = v6 == 0;
  if ( v6 )
    v7 = a1 == 0;
  if ( v7 )
    goto LABEL_6;
  ASN1_OBJECT_free(*v6, a2, a3, 1);
  ASN1_TYPE_free(v6[1]);
  v10 = sub_C620C(a1, v9);
  v11 = sub_C6210(v10);
  v12 = sub_EAA20(v11);
  v13 = (_DWORD *)v12;
  *v6 = v12;
  if ( !v12 )
  {
    sub_D0048(16, 154, 8, "crypto/ec/ec_asn1.c", 265);
    goto LABEL_13;
  }
  if ( v11 != 406 )
  {
    if ( v11 != 407 )
    {
      v13 = 0;
      sub_D0048(16, 154, 131, "crypto/ec/ec_asn1.c", 361);
LABEL_13:
      sub_B895C((int)v13);
LABEL_6:
      sub_D0048(16, 261, 16, "crypto/ec/ec_asn1.c", 470);
      goto LABEL_7;
    }
    v13 = (_DWORD *)sub_C339C();
    v6[1] = (int)v13;
    if ( v13 )
    {
      v14 = sub_C638C(a1);
      *v13 = v14;
      v15 = sub_C3290(a1, SHIDWORD(v14));
      v16 = v15;
      if ( !v15 )
      {
        v13 = 0;
        sub_D0048(16, 154, 16, "crypto/ec/ec_asn1.c", 309);
        goto LABEL_13;
      }
      v17 = sub_EAA20(v15);
      v13[1] = v17;
      if ( !v17 )
      {
        v13 = 0;
        sub_D0048(16, 154, 8, "crypto/ec/ec_asn1.c", 314);
        goto LABEL_13;
      }
      if ( v16 == 682 )
      {
        if ( !sub_C32CC((int)a1, v52) )
          goto LABEL_73;
        v43 = sub_B20A4();
        v13[2] = v43;
        if ( v43 )
        {
          if ( sub_126EFC(v43, v52[0]) )
            goto LABEL_23;
          sub_D0048(16, 154, 13, "crypto/ec/ec_asn1.c", 330);
          goto LABEL_73;
        }
        v46 = 326;
      }
      else
      {
        if ( v16 != 683 )
        {
          v18 = sub_B23B0();
          v13[2] = v18;
          if ( v18 )
          {
LABEL_23:
            v13 = 0;
            goto LABEL_24;
          }
          v46 = 354;
          goto LABEL_83;
        }
        if ( !sub_C331C(a1, &v50, &v51, v52) )
        {
LABEL_73:
          v13 = 0;
          goto LABEL_13;
        }
        v44 = (_DWORD *)sub_C3384();
        v13[2] = v44;
        if ( v44 )
        {
          v45 = v51;
          v13 = 0;
          *v44 = v50;
          v44[1] = v45;
          v44[2] = v52[0];
          goto LABEL_24;
        }
        v46 = 341;
      }
LABEL_83:
      sub_D0048(16, 154, 65, "crypto/ec/ec_asn1.c", v46);
      goto LABEL_73;
    }
    v41 = 300;
LABEL_69:
    sub_D0048(16, 154, 65, "crypto/ec/ec_asn1.c", v41);
    goto LABEL_13;
  }
  v39 = sub_B822C();
  v13 = (_DWORD *)v39;
  if ( !v39 )
  {
    v41 = 271;
    goto LABEL_69;
  }
  if ( !sub_C6348(a1, v39, 0, 0, 0) )
  {
    sub_D0048(16, 154, 16, "crypto/ec/ec_asn1.c", 276);
    goto LABEL_13;
  }
  v40 = sub_126F3C(v13, 0);
  v6[1] = v40;
  if ( !v40 )
  {
    sub_D0048(16, 154, 13, "crypto/ec/ec_asn1.c", 282);
    goto LABEL_13;
  }
LABEL_24:
  sub_B895C((int)v13);
  v19 = (int *)v5[2];
  if ( !v19 || !*v19 || !v19[1] )
    goto LABEL_32;
  v20 = (_DWORD *)sub_B822C();
  if ( !v20 || (v21 = sub_B822C(), (v22 = (_DWORD *)v21) == 0) )
  {
    v23 = 0;
    sub_D0048(16, 153, 65, "crypto/ec/ec_asn1.c", 383);
    v24 = 0;
    v22 = 0;
    goto LABEL_31;
  }
  if ( !sub_C6348(a1, 0, v20, v21, 0) )
  {
    v23 = 0;
    v24 = 0;
    sub_D0048(16, 153, 16, "crypto/ec/ec_asn1.c", 389);
LABEL_31:
    CRYPTO_free(v24, "crypto/ec/ec_asn1.c", 439);
    CRYPTO_free(v23, "crypto/ec/ec_asn1.c", 440);
    sub_B895C((int)v20);
    sub_B895C((int)v22);
LABEL_32:
    sub_D0048(16, 261, 16, "crypto/ec/ec_asn1.c", 476);
    goto LABEL_7;
  }
  n = ((unsigned int)sub_C638C(a1) + 7) >> 3;
  v24 = (char *)CRYPTO_malloc(n, "crypto/ec/ec_asn1.c", 399);
  if ( !v24 || (v23 = (char *)CRYPTO_malloc(n, "crypto/ec/ec_asn1.c", 400)) == 0 )
  {
    v23 = 0;
    sub_D0048(16, 153, 65, "crypto/ec/ec_asn1.c", 401);
    goto LABEL_31;
  }
  if ( sub_B8CD4(v20, (int)v24, n) < 0 || sub_B8CD4(v22, (int)v23, n) < 0 )
  {
    sub_D0048(16, 153, 3, "crypto/ec/ec_asn1.c", 406);
    goto LABEL_31;
  }
  if ( !sub_1280A4(*v19, v24, n) || !sub_1280A4(v19[1], v23, n) )
  {
    v42 = 413;
LABEL_71:
    sub_D0048(16, 153, 13, "crypto/ec/ec_asn1.c", v42);
    goto LABEL_31;
  }
  v25 = (char *)a1[8];
  if ( !v25 )
  {
    j_ASN1_STRING_free_0(v19[2]);
    v19[2] = 0;
    goto LABEL_44;
  }
  v26 = v19[2];
  if ( !v26 )
  {
    v26 = sub_B211C();
    v19[2] = v26;
    if ( !v26 )
    {
      sub_D0048(16, 153, 65, "crypto/ec/ec_asn1.c", 421);
      goto LABEL_31;
    }
    v25 = (char *)a1[8];
  }
  v27 = a1[9];
  *(_DWORD *)(v26 + 12) = *(_DWORD *)(v26 + 12) & 0xFFFFFFF0 | 8;
  if ( !sub_125818(v26, v25, v27) )
  {
    v42 = 428;
    goto LABEL_71;
  }
LABEL_44:
  CRYPTO_free(v24, "crypto/ec/ec_asn1.c", 439);
  CRYPTO_free(v23, "crypto/ec/ec_asn1.c", 440);
  sub_B895C((int)v20);
  sub_B895C((int)v22);
  v28 = sub_C6214(a1);
  if ( v28 )
  {
    v29 = sub_C6294(a1);
    v30 = sub_C8950(a1, v28, v29, &v49, 0);
    if ( v30 )
    {
      v31 = (_DWORD *)v5[3];
      if ( v31 || (na = v30, v31 = (_DWORD *)sub_B2068(), v30 = na, (v5[3] = v31) != 0) )
      {
        sub_AE174(v31, v49, v30);
        v32 = sub_C6244(a1);
        if ( v32 )
        {
          v33 = v5[4];
          v34 = sub_126F3C(v32, v33);
          v5[4] = v34;
          if ( v34 )
          {
            v35 = sub_C627C(a1);
            if ( !v35 )
              return v5;
            v36 = v5[5];
            v37 = sub_126F3C(v35, v36);
            v5[5] = v37;
            if ( v37 )
              return v5;
            v38 = 519;
            v5[5] = v36;
          }
          else
          {
            v38 = 509;
            v5[4] = v33;
          }
          sub_D0048(16, 261, 13, "crypto/ec/ec_asn1.c", v38);
        }
        else
        {
          sub_D0048(16, 261, 16, "crypto/ec/ec_asn1.c", 503);
        }
      }
      else
      {
        CRYPTO_free(v49, "crypto/ec/ec_asn1.c", 494);
        sub_D0048(16, 261, 65, "crypto/ec/ec_asn1.c", 495);
      }
    }
    else
    {
      sub_D0048(16, 261, 16, "crypto/ec/ec_asn1.c", 490);
    }
  }
  else
  {
    sub_D0048(16, 261, 113, "crypto/ec/ec_asn1.c", 482);
  }
LABEL_7:
  result = 0;
  if ( !a2 )
  {
LABEL_16:
    sub_C33D0((int)v5);
    return 0;
  }
  return result;
}
