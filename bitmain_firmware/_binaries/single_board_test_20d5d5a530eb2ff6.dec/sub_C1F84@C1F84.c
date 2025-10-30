int __fastcall sub_C1F84(int a1, int a2, int a3, int *a4)
{
  int v5; // r4
  int v7; // r0
  int result; // r0
  bool v9; // zf
  int v10; // r3
  _DWORD *v11; // r3
  int v12; // r5
  int v13; // r0
  _DWORD *v14; // r5
  int v15; // r0
  int v16; // r0
  int v17; // r7
  int v18; // r8
  int *v19; // r0
  int v20; // r4
  int v21; // r5
  int v22; // r0
  int v23; // r9
  int v24; // r0
  int v25; // r4
  int v26; // r0
  int v27; // r0
  int v28; // r4
  int v29; // r0
  int v30; // r8
  int v31; // r6
  int v32; // r0
  int v33; // r3
  int v34; // r6
  int v35; // r8
  int v36; // r0
  int *v37; // r3
  int v38; // r2
  _DWORD *v39; // r8
  int v40; // r0
  int v41; // r0
  int v42; // r9
  int v43; // r6
  int v44; // r0
  int v45; // r0
  _DWORD *v46; // r3
  int *v47; // r3
  int v48; // r2
  _DWORD *v49; // r6
  int v50; // r5
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r8
  int v55; // r6
  int v56; // r0
  int v57; // r0
  int v58; // r6
  int v59; // r0
  int v60; // r7
  int v61; // r3
  int v62; // r4
  _DWORD *v63; // r0
  int v64; // r7
  _DWORD *v65; // r8
  int v66; // r0
  _DWORD *v67; // [sp+Ch] [bp-20h] BYREF
  int v68; // [sp+10h] [bp-1Ch] BYREF
  _DWORD *v69; // [sp+14h] [bp-18h] BYREF
  int v70; // [sp+18h] [bp-14h] BYREF
  int *v71; // [sp+1Ch] [bp-10h] BYREF
  int v72; // [sp+20h] [bp-Ch] BYREF
  int v73; // [sp+24h] [bp-8h] BYREF

  v5 = a3;
  switch ( a2 )
  {
    case 1:
      if ( a3 )
        return 1;
      sub_F1598(a4, 0, &v72, &v73);
      v11 = (_DWORD *)v72;
      if ( v72 )
        goto LABEL_11;
      return -1;
    case 3:
      v9 = sub_DA19C(a1) == 1172;
      result = 1;
      if ( v9 )
        v10 = 1143;
      else
        v10 = 672;
      *a4 = v10;
      return result;
    case 5:
      if ( a3 )
        return 1;
      sub_13A254(a4, 0, 0, &v72, &v73);
      v11 = (_DWORD *)v72;
      if ( !v72 )
        return -1;
LABEL_11:
      if ( !*v11 )
        return -1;
      v12 = sub_EAC84(*v11);
      if ( !v12 )
        return -1;
      v13 = sub_DA19C(a1);
      if ( !sub_EB40C(&v71, v12, v13) )
        return -1;
      v14 = (_DWORD *)v73;
      v15 = sub_EAA20(v71);
      sub_B28F8(v14, v15, -1, 0);
      return 1;
    case 7:
      if ( a3 != 1 )
      {
        if ( a3 )
          return -2;
        v71 = 0;
        v16 = sub_137928(a4);
        v17 = v16;
        if ( v16 )
        {
          v18 = sub_DB988(v16);
          if ( sub_138858(a4, &v67, &v69, 0, 0, 0) )
          {
            sub_B294C(&v68, 0, 0, v67);
            if ( v68 == sub_EAA20(0) )
            {
              v35 = *(_DWORD *)(v18 + 24);
              v36 = sub_C4884(v35, 0);
              if ( v36 <= 0 )
                goto LABEL_19;
              v37 = (int *)CRYPTO_malloc(v36, "crypto/ec/ec_ameth.c", 858);
              v71 = v37;
              if ( !v37 )
                goto LABEL_19;
              v73 = (int)v37;
              v38 = sub_C4884(v35, &v73);
              if ( v38 <= 0 )
                goto LABEL_19;
              sub_AE174(v69, (int)v71, v38);
              v39 = v67;
              v69[3] = v69[3] & 0xFFFFFFF0 | 8;
              v71 = 0;
              v40 = sub_EAA20(408);
              sub_B28F8(v39, v40, -1, 0);
            }
            v23 = sub_DB77C(v17, 408, 1024, 4100, -2, 0);
            if ( v23 > 0 )
            {
              if ( sub_DB77C(v17, 408, 1024, 4102, 0, &v73) )
              {
                v24 = sub_DB77C(v17, 408, 1024, 4099, -2, 0);
                v25 = v24;
                if ( v24 >= 0 )
                {
                  if ( v24 )
                  {
                    if ( v24 == 1 )
                      v25 = 947;
                  }
                  else
                  {
                    v25 = 946;
                  }
                  if ( v23 == 1 )
                  {
                    v26 = sub_DB77C(v17, 408, 1024, 4100, 2, 0);
                    if ( v26 > 0 )
                    {
                      if ( v73 || (v73 = sub_D93D8(v26), sub_DB77C(v17, 408, 1024, 4101, 0, v73) > 0) )
                      {
                        if ( sub_1387E8(a4, &v67, &v70) )
                        {
                          v27 = sub_D8C70(v73);
                          if ( sub_EB40C(&v72, v27, v25) )
                          {
                            v28 = sub_1389F4(a4);
                            v29 = sub_D8920(v28);
                            v30 = sub_D8ADC(v29);
                            v31 = sub_D8AD4(v28);
                            v21 = sub_B2888();
                            if ( v21 )
                            {
                              *(_DWORD *)v21 = sub_EAA20(v30);
                              v32 = sub_B2408();
                              *(_DWORD *)(v21 + 4) = v32;
                              if ( !v32 )
                              {
                                v20 = 0;
                                v19 = v71;
                                goto LABEL_20;
                              }
                              if ( sub_D8BA8(v28, v32) <= 0 )
                              {
                                v20 = 0;
                                v19 = v71;
                                goto LABEL_20;
                              }
                              if ( !sub_AD77C(*(int **)(v21 + 4)) )
                              {
                                ASN1_TYPE_free(*(_DWORD *)(v21 + 4));
                                *(_DWORD *)(v21 + 4) = 0;
                              }
                              v20 = 0;
                              if ( sub_DB77C(v17, 408, 1024, 4103, v31, 0) > 0 )
                              {
                                v33 = sub_13781C(&v71, v21, v70, v31);
                                if ( !v33 )
                                {
                                  v20 = 0;
                                  v19 = v71;
                                  goto LABEL_20;
                                }
                                if ( sub_DB77C(v17, 408, 1024, 4105, v33, v71) > 0 )
                                {
                                  v71 = 0;
                                  v62 = sub_B2874((size_t *)v21, (_BYTE **)&v71);
                                  v19 = v71;
                                  if ( v71 && v62 )
                                  {
                                    v63 = (_DWORD *)sub_AE1D0();
                                    v64 = (int)v63;
                                    if ( v63 )
                                    {
                                      sub_AE174(v63, (int)v71, v62);
                                      v65 = v67;
                                      v20 = 1;
                                      v71 = 0;
                                      v66 = sub_EAA20(v72);
                                      sub_B28F8(v65, v66, 16, v64);
                                      v19 = v71;
                                    }
                                    else
                                    {
                                      v19 = v71;
                                      v20 = 0;
                                    }
                                  }
                                  else
                                  {
                                    v20 = 0;
                                  }
                                  goto LABEL_20;
                                }
                              }
                              v19 = v71;
                              goto LABEL_20;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_19:
          v19 = v71;
          v20 = 0;
          v21 = 0;
LABEL_20:
          CRYPTO_free(v19, "crypto/ec/ec_ameth.c", 959);
          X509_ALGOR_free(v21);
          return v20;
        }
        return v5;
      }
      v5 = sub_137928(a4);
      if ( !v5 )
        return v5;
      if ( sub_DB98C() )
        goto LABEL_50;
      if ( !sub_138858(a4, &v67, &v68, 0, 0, 0) )
        return 0;
      if ( !v67 )
        return 0;
      v42 = v68;
      if ( !v68 )
        return 0;
      v72 = 0;
      sub_B294C(&v69, &v70, &v71, v67);
      if ( sub_EAC84(v69) != 408 )
        goto LABEL_63;
      if ( v70 == -1 || v70 == 5 )
      {
        v57 = sub_DB988(v5);
        if ( !v57 )
          goto LABEL_63;
        v58 = sub_C59B8(*(_DWORD *)(v57 + 24));
        v59 = EC_KEY_new();
        v72 = v59;
        if ( !v59 || !sub_C59BC(v59, v58) )
          goto LABEL_63;
      }
      else
      {
        v72 = sub_C1EC8(v70, v71);
        if ( !v72 )
        {
LABEL_63:
          v43 = 0;
LABEL_64:
          sub_C5410(v72);
          sub_DA240(v43);
          sub_D0048(16, 238, 149, "crypto/ec/ec_ameth.c", 811);
          return 0;
        }
      }
      v55 = sub_AE2A8(v42);
      v73 = sub_AE2B4(v42);
      if ( !v73 )
        goto LABEL_63;
      if ( !v55 )
        goto LABEL_63;
      if ( !sub_C4820(&v72, &v73, v55) )
        goto LABEL_63;
      v56 = EVP_PKEY_new();
      v43 = v56;
      if ( !v56 )
        goto LABEL_63;
      sub_DA0EC(v56, v72);
      if ( sub_DACE0(v5, v43) <= 0 )
        goto LABEL_64;
      sub_C5410(v72);
      sub_DA240(v43);
LABEL_50:
      v34 = 0;
      v71 = 0;
      if ( !sub_1387E8(a4, &v69, &v70) )
        goto LABEL_51;
      v41 = sub_EAC84(*v69);
      if ( !v41 || !sub_EB3A8(v41, &v73, &v72) )
        goto LABEL_58;
      if ( v72 != 946 )
      {
        if ( v72 != 947 )
        {
LABEL_58:
          sub_D0048(16, 239, 148, "crypto/ec/ec_ameth.c", 752);
LABEL_51:
          sub_D0048(16, 238, 150, "crypto/ec/ec_ameth.c", 817);
          return 0;
        }
        v34 = 1;
      }
      if ( sub_DB77C(v5, 408, 1024, 4099, v34, 0) <= 0 )
        goto LABEL_58;
      if ( sub_DB77C(v5, 408, 1024, 4100, 2, 0) <= 0 )
        goto LABEL_58;
      v44 = sub_EAAB4(v73);
      v45 = sub_D99DC(v44);
      if ( !v45 || sub_DB77C(v5, 408, 1024, 4101, 0, v45) <= 0 )
        goto LABEL_58;
      v46 = (_DWORD *)v69[1];
      if ( *v46 != 16 )
        goto LABEL_51;
      v47 = (int *)v46[1];
      v48 = *v47;
      v73 = v47[2];
      v49 = (_DWORD *)sub_B2858(0, (void **)&v73, v48);
      if ( !v49
        || (v50 = sub_1389F4(a4)) == 0
        || (v51 = sub_EAC84(*v49), v52 = sub_EAAB4(v51), v53 = sub_D99BC(v52), (v54 = v53) == 0)
        || (int *)(((unsigned int)&loc_F0004 + 3) & sub_D8928(v53)) != (int *)((char *)&dword_10000 + 2)
        || !sub_D875C(v50, v54, 0, 0, 0)
        || sub_D89D0(v50, v49[1]) <= 0
        || (v60 = sub_D8AD4(v50), sub_DB77C(v5, 408, 1024, 4103, v60, 0) <= 0)
        || (v61 = sub_13781C(&v71, v49, v70, v60)) == 0
        || sub_DB77C(v5, 408, 1024, 4105, v61, v71) <= 0 )
      {
        X509_ALGOR_free((int)v49);
        CRYPTO_free(v71, "crypto/ec/ec_ameth.c", 791);
        goto LABEL_51;
      }
      v71 = 0;
      X509_ALGOR_free((int)v49);
      CRYPTO_free(v71, "crypto/ec/ec_ameth.c", 791);
      return 1;
    case 8:
      *a4 = 1;
      return 1;
    case 9:
      v22 = sub_DA1F4(a1);
      return sub_C5C24(v22, a4, v5, 0);
    case 10:
      v7 = sub_DA1F4(a1);
      return sub_C5BFC(v7, 4, a4, 0);
    default:
      return -2;
  }
}
