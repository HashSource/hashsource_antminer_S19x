int __fastcall sub_BE964(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v7; // r0
  int v8; // r4
  int v9; // r8
  _BYTE *v10; // r0
  int v11; // r4
  int v12; // r6
  int v13; // r7
  int v14; // r0
  int v15; // r8
  int v16; // r0
  int v17; // r6
  int v18; // r0
  int v19; // r9
  int v20; // r0
  int v21; // r8
  int v22; // r0
  int v23; // r5
  int v24; // r0
  int v25; // r5
  int v26; // r4
  int v27; // r5
  _DWORD *v28; // r6
  size_t *v29; // r0
  int v30; // r9
  int v31; // r8
  _DWORD *v32; // r8
  int v33; // r0
  int v34; // r8
  int v35; // r9
  int v36; // r8
  int v37; // r11
  int v38; // r0
  int v39; // r0
  _DWORD *v40; // r3
  int *v41; // r3
  int v42; // r2
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r8
  int v47; // r0
  int v48; // r11
  int v49; // r0
  int v50; // r0
  _DWORD *v51; // r0
  _DWORD *v52; // r5
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  int v57; // r0
  int v58; // r7
  int v59; // r0
  int v60; // [sp+Ch] [bp-44h]
  _DWORD *v61; // [sp+10h] [bp-40h] BYREF
  int v62; // [sp+14h] [bp-3Ch] BYREF
  _DWORD *v63; // [sp+18h] [bp-38h] BYREF
  _DWORD *v64; // [sp+1Ch] [bp-34h] BYREF
  _BYTE *v65; // [sp+20h] [bp-30h] BYREF
  int v66; // [sp+24h] [bp-2Ch] BYREF

  if ( a2 == 7 )
  {
    if ( a3 != (_DWORD *)1 )
    {
      if ( a3 )
        return -2;
      v65 = 0;
      v7 = sub_137928(a4);
      v8 = v7;
      if ( v7 )
      {
        v9 = sub_DB988(v7);
        if ( sub_138858(a4, &v61, &v63, a3, a3, a3) )
        {
          sub_B294C(&v62, a3, a3, v61);
          v14 = sub_EAA20(a3);
          if ( v62 == v14 )
          {
            v29 = (size_t *)sub_126F3C(*(_DWORD *)(*(_DWORD *)(v9 + 24) + 20), a3);
            v30 = (int)v29;
            if ( !v29 )
              goto LABEL_9;
            v31 = sub_B2090(v29, &v65);
            ASN1_INTEGER_free(v30);
            if ( v31 <= 0 )
              goto LABEL_9;
            sub_AE174(v63, (int)v65, v31);
            v32 = v61;
            v63[3] = v63[3] & 0xFFFFFFF0 | 8;
            v65 = a3;
            v33 = sub_EAA20(920);
            sub_B28F8(v32, v33, -1, (int)a3);
          }
          v15 = sub_DB77C(v8, 920, 1024, 4102, -2, 0);
          if ( v15 > 0 )
          {
            v16 = sub_DB77C(v8, 920, 1024, 4104, 0, &v66);
            if ( v16 )
            {
              if ( v15 == 1 )
              {
                v16 = sub_DB77C(v8, 920, 1024, 4102, 2, 0);
                if ( v16 <= 0 )
                  goto LABEL_9;
              }
              else if ( v15 != 2 )
              {
                goto LABEL_9;
              }
              if ( v66 )
              {
                if ( sub_D8C70(v66) != 64 )
                  goto LABEL_9;
              }
              else
              {
                v66 = sub_D93D8(v16);
                if ( sub_DB77C(v8, 920, 1024, 4103, 0, v66) <= 0 )
                  goto LABEL_9;
              }
              if ( sub_1387E8(a4, &v61, &v64) )
              {
                v17 = sub_1389F4(a4);
                v18 = sub_D8920(v17);
                v19 = sub_D8ADC(v18);
                v20 = sub_EAA20(v19);
                if ( sub_DB77C(v8, 920, 1024, 4109, 0, v20) > 0 )
                {
                  v21 = sub_D8AD4(v17);
                  v13 = sub_B2888();
                  if ( v13 )
                  {
                    *(_DWORD *)v13 = sub_EAA20(v19);
                    v22 = sub_B2408();
                    *(_DWORD *)(v13 + 4) = v22;
                    if ( v22 )
                    {
                      if ( sub_D8BA8(v17, v22) > 0 )
                      {
                        if ( !sub_AD77C(*(int **)(v13 + 4)) )
                        {
                          ASN1_TYPE_free(*(_DWORD *)(v13 + 4));
                          *(_DWORD *)(v13 + 4) = 0;
                        }
                        if ( sub_DB77C(v8, 920, 1024, 4105, v21, 0) > 0 )
                        {
                          if ( v64 )
                          {
                            v23 = sub_AE2A8((int)v64);
                            v24 = sub_AE2B4((int)v64);
                            v12 = sub_E9E68(v24, v23, "crypto/dh/dh_ameth.c", 877);
                            if ( !v12 )
                            {
                              v11 = 0;
                              v10 = v65;
                              goto LABEL_10;
                            }
                          }
                          else
                          {
                            v23 = 0;
                            v12 = 0;
                          }
                          if ( sub_DB77C(v8, 920, 1024, 4107, v23, v12) <= 0 )
                          {
                            v11 = 0;
                            v10 = v65;
                          }
                          else
                          {
                            v65 = 0;
                            v25 = sub_B2874((size_t *)v13, &v65);
                            v10 = v65;
                            if ( v65 && (v12 = v25 == 0, v25) )
                            {
                              v51 = (_DWORD *)sub_AE1D0();
                              v11 = (int)v51;
                              if ( v51 )
                              {
                                sub_AE174(v51, (int)v65, v25);
                                v52 = v61;
                                v65 = 0;
                                v53 = sub_EAA20(245);
                                sub_B28F8(v52, v53, 16, v11);
                                v11 = 1;
                                v10 = v65;
                              }
                              else
                              {
                                v10 = v65;
                                v12 = 0;
                              }
                            }
                            else
                            {
                              v11 = 0;
                              v12 = 0;
                            }
                          }
                          goto LABEL_10;
                        }
                      }
                      v11 = 0;
                      v10 = v65;
                      v12 = 0;
                    }
                    else
                    {
                      v11 = 0;
                      v10 = v65;
                      v12 = 0;
                    }
LABEL_10:
                    CRYPTO_free(v10, "crypto/dh/dh_ameth.c", 905);
                    X509_ALGOR_free(v13);
                    CRYPTO_free(v12, "crypto/dh/dh_ameth.c", 907);
                    return v11;
                  }
                }
              }
            }
          }
        }
LABEL_9:
        v10 = v65;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        goto LABEL_10;
      }
      return 0;
    }
    v26 = sub_137928(a4);
    if ( !v26 )
      return 0;
    if ( sub_DB98C() )
      goto LABEL_34;
    if ( !sub_138858(a4, &v61, &v62, 0, 0, 0) )
      return 0;
    if ( !v61 )
      return 0;
    v34 = v62;
    if ( !v62 )
      return 0;
    sub_B294C(&v63, &v64, &v65, v61);
    if ( sub_EAC84(v63) == 920
      && v64 != (_DWORD *)5
      && (v47 = sub_DB988(v26), (v60 = v47) != 0)
      && *(_DWORD *)v47 == 920
      && (v35 = sub_BE850(*(int **)(v47 + 24))) != 0 )
    {
      v48 = sub_AE2A8(v34);
      v66 = sub_AE2B4(v34);
      if ( v66 && v48 )
      {
        v49 = sub_B2074(0, (void **)&v66, v48);
        v37 = v49;
        if ( v49 )
        {
          v36 = sub_12700C(v49, 0);
          *(_DWORD *)(v35 + 20) = v36;
          if ( v36 )
          {
            v50 = EVP_PKEY_new();
            v36 = v50;
            if ( v50 )
            {
              sub_D9F44(v50, **(_DWORD **)(v60 + 12), v35, *(_DWORD *)(v60 + 12));
              if ( sub_DACE0(v26, v36) > 0 )
              {
                ASN1_INTEGER_free(v37);
                sub_DA240(v36);
                sub_BFB8C(0);
LABEL_34:
                if ( !sub_1387E8(a4, &v64, &v65) )
                  goto LABEL_35;
                if ( sub_EAC84(*v64) != 245 )
                {
                  v27 = 0;
                  sub_D0048(5, 116, 112, "crypto/dh/dh_ameth.c", 693);
                  v28 = 0;
                  goto LABEL_36;
                }
                v38 = sub_DB77C(v26, 920, 1024, 4102, 2, 0);
                if ( v38 > 0
                  && (v39 = sub_D93D8(v38), sub_DB77C(v26, 920, 1024, 4103, 0, v39) > 0)
                  && (v40 = (_DWORD *)v64[1], *v40 == 16)
                  && (v41 = (int *)v40[1],
                      v42 = *v41,
                      v66 = v41[2],
                      (v28 = (_DWORD *)sub_B2858(0, (void **)&v66, v42)) != 0) )
                {
                  v27 = sub_1389F4(a4);
                  if ( v27 )
                  {
                    v43 = sub_EAC84(*v28);
                    v44 = sub_EAAB4(v43);
                    v45 = sub_D99BC(v44);
                    v46 = v45;
                    if ( v45 )
                    {
                      if ( (int *)(((unsigned int)&loc_F0004 + 3) & sub_D8928(v45)) == (int *)((char *)&dword_10000 + 2) )
                      {
                        if ( sub_D875C(v27, v46, 0, 0, 0) && sub_D89D0(v27, v28[1]) > 0 )
                        {
                          v54 = v27;
                          v27 = 0;
                          v55 = sub_D8AD4(v54);
                          if ( sub_DB77C(v26, 920, 1024, 4105, v55, 0) <= 0 )
                            goto LABEL_36;
                          v56 = sub_D8ADC(v46);
                          v57 = sub_EAA20(v56);
                          if ( sub_DB77C(v26, 920, 1024, 4109, 0, v57) <= 0 )
                            goto LABEL_36;
                          if ( v65 )
                          {
                            v58 = sub_AE2A8((int)v65);
                            v59 = sub_AE2B4((int)v65);
                            v27 = sub_E9E68(v59, v58, "crypto/dh/dh_ameth.c", 733);
                            if ( !v27 )
                              goto LABEL_36;
                          }
                          else
                          {
                            v58 = 0;
                            v27 = 0;
                          }
                          if ( sub_DB77C(v26, 920, 1024, 4107, v58, v27) > 0 )
                          {
                            X509_ALGOR_free((int)v28);
                            CRYPTO_free(0, "crypto/dh/dh_ameth.c", 745);
                            return 1;
                          }
                          goto LABEL_36;
                        }
                        v27 = 0;
                      }
                      else
                      {
                        v27 = 0;
                      }
                    }
                    else
                    {
                      v27 = 0;
                    }
                  }
                }
                else
                {
LABEL_35:
                  v27 = 0;
                  v28 = 0;
                }
LABEL_36:
                X509_ALGOR_free((int)v28);
                CRYPTO_free(v27, "crypto/dh/dh_ameth.c", 745);
                sub_D0048(5, 114, 113, "crypto/dh/dh_ameth.c", 771);
                return 0;
              }
              v35 = 0;
            }
          }
          else
          {
            sub_D0048(5, 115, 109, "crypto/dh/dh_ameth.c", 653);
          }
        }
        else
        {
          v36 = 0;
          sub_D0048(5, 115, 104, "crypto/dh/dh_ameth.c", 647);
        }
      }
      else
      {
        v36 = 0;
        v37 = 0;
      }
    }
    else
    {
      v35 = 0;
      v36 = 0;
      v37 = 0;
    }
    ASN1_INTEGER_free(v37);
    sub_DA240(v36);
    sub_BFB8C(v35);
    sub_D0048(5, 114, 111, "crypto/dh/dh_ameth.c", 765);
    return 0;
  }
  if ( a2 != 8 )
    return -2;
  *a4 = 1;
  return 1;
}
