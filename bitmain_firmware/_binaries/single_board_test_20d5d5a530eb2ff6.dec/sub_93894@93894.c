int __fastcall sub_93894(int a1, unsigned __int8 **a2)
{
  int v2; // r10
  unsigned int v4; // r7
  int v6; // r2
  int v7; // r0
  unsigned int v8; // r6
  int v9; // r9
  unsigned int v10; // r7
  int v11; // r0
  bool v12; // zf
  int v13; // r1
  int v14; // r0
  int v15; // r3
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r3
  int v21; // r2
  unsigned __int8 *v22; // r1
  int v23; // r7
  _DWORD *v24; // r7
  unsigned int v25; // lr
  unsigned __int8 *v26; // r7
  int v27; // r1
  int v28; // r2
  unsigned __int8 *v29; // r0
  unsigned int v30; // r2
  unsigned int v31; // r1
  unsigned int v32; // r3
  unsigned __int8 *v33; // r2
  unsigned int v34; // r7
  unsigned int v35; // r3
  unsigned __int8 *v36; // r2
  time_t v37; // r0
  int v38; // r1
  int v39; // r1
  int v40; // r1
  int v41; // r1
  int v42; // r1
  int v43; // r1
  int v44; // [sp+8h] [bp-115Ch]
  int v45; // [sp+10h] [bp-1154h]
  unsigned __int64 v46; // [sp+10h] [bp-1154h]
  int v47; // [sp+18h] [bp-114Ch]
  int v48; // [sp+18h] [bp-114Ch]
  unsigned int v49; // [sp+18h] [bp-114Ch]
  unsigned __int8 *v50; // [sp+20h] [bp-1144h]
  int v51; // [sp+28h] [bp-113Ch]
  unsigned __int8 *v52; // [sp+28h] [bp-113Ch]
  int v53; // [sp+34h] [bp-1130h]
  int v54; // [sp+38h] [bp-112Ch]
  unsigned int v55; // [sp+3Ch] [bp-1128h]
  int v56; // [sp+40h] [bp-1124h] BYREF
  int v57; // [sp+44h] [bp-1120h] BYREF
  int v58; // [sp+48h] [bp-111Ch] BYREF
  int v59; // [sp+4Ch] [bp-1118h] BYREF
  int v60; // [sp+50h] [bp-1114h] BYREF
  unsigned __int8 *v61; // [sp+54h] [bp-1110h] BYREF
  unsigned int v62; // [sp+58h] [bp-110Ch]
  int v63; // [sp+5Ch] [bp-1108h] BYREF
  _BYTE v64[32]; // [sp+74h] [bp-10F0h] BYREF
  _BYTE v65[4304]; // [sp+94h] [bp-10D0h] BYREF

  if ( !*(_DWORD *)(*(_DWORD *)(a1 + 1232) + 136) || (**(_DWORD **)(a1 + 124) & 0x800) == 0 )
    return 1;
  v4 = (unsigned int)a2[1];
  if ( v4 > 1 && (v6 = (int)*a2, v7 = **a2, v8 = (*a2)[1] | (v7 << 8), v8 <= v4 - 2) && (v9 = v6 + 2, v8 == v4 - 2) )
  {
    v2 = 0;
    *a2 = (unsigned __int8 *)(v6 + 2 + v8);
    v61 = (unsigned __int8 *)(v6 + 2);
    v62 = v8;
    a2[1] = 0;
    if ( v8 > 0x1F )
    {
      v10 = v4 - 34;
      if ( v10 <= v8 )
      {
        v44 = sub_D14F4(v7);
        v11 = sub_DA2B8(855, 0, *(_DWORD *)(a1 + 1504) + 400, 32);
        v45 = v11;
        v12 = v11 == 0;
        if ( v11 )
          v12 = v44 == 0;
        v13 = v12;
        if ( v12 )
        {
          sub_D1504(v44);
          sub_DA240(v45);
          sub_95494(a1, 80, 614, 65, "ssl/statem/extensions_srvr.c", 778);
          return v2;
        }
        v47 = v13;
        v58 = 32;
        v14 = sub_D93F0(v11);
        if ( sub_D9454(v44, v47, v14) <= 0 || sub_D97AC(v44, v64, &v58, v9, v10) <= 0 || v58 != 32 )
        {
          v2 = 0;
          sub_D1504(v44);
          sub_DA240(v45);
          v15 = 790;
LABEL_20:
          sub_95494(a1, 80, 614, 68, "ssl/statem/extensions_srvr.c", v15);
          return v2;
        }
        sub_D1504(v44);
        sub_DA240(v45);
        v2 = sub_BC33C(v64, v9 + v10, 32);
        if ( v2 )
        {
          v19 = 799;
          goto LABEL_32;
        }
        if ( v62 <= 1 )
        {
          v20 = 805;
        }
        else
        {
          v17 = *v61;
          v18 = v61[1];
          v62 -= 2;
          v61 += 2;
          if ( (v18 | (v17 << 8)) != 1 )
            return 1;
          if ( sub_92B44(&v61, &v56) )
          {
            if ( v56 != 772 )
            {
              sub_95494(a1, 47, 614, 116, "ssl/statem/extensions_srvr.c", 825);
              return v2;
            }
            if ( sub_92B44(&v61, &v57) )
            {
              if ( v62 <= 1 )
              {
                v20 = 838;
              }
              else
              {
                v21 = *(_DWORD *)(a1 + 124);
                v22 = v61;
                v23 = *(unsigned __int16 *)(v21 + 854);
                v62 -= 2;
                v61 += 2;
                if ( v23 != v57 || (v24 = *(_DWORD **)(v21 + 528), v24 != sub_8736C(a1, (int)v22, 0)) )
                {
                  sub_95494(a1, 47, 614, 186, "ssl/statem/extensions_srvr.c", 849);
                  return v2;
                }
                v25 = v62;
                if ( v62 )
                {
                  v26 = v61;
                  v27 = *v61;
                  --v62;
                  v53 = v27;
                  ++v61;
                  if ( v25 - 1 > 7 )
                  {
                    v51 = v26[5];
                    v54 = v26[8];
                    v55 = _byteswap_ulong(*(_DWORD *)(v26 + 1));
                    v48 = v26[6] << 16;
                    v28 = v26[7];
                    v62 = v25 - 9;
                    v61 = v26 + 9;
                    LODWORD(v46) = (v28 << 8) | v48 | (v51 << 24) | v54;
                    HIDWORD(v46) = v55;
                    if ( v25 - 9 > 1 )
                    {
                      v29 = v26 + 11;
                      v50 = v26 + 11;
                      v30 = v26[10] | (v26[9] << 8);
                      v31 = v30;
                      v49 = v30;
                      if ( v30 <= v25 - 11 )
                      {
                        v32 = v25 - 11 - v30;
                        v33 = &v29[v30];
                        v61 = v33;
                        v62 = v32;
                        if ( v32 )
                        {
                          v34 = v29[v31];
                          v35 = v32 - 1;
                          v36 = v33 + 1;
                          v52 = v36;
                          if ( v34 <= v35 )
                          {
                            v61 = &v36[v34];
                            v62 = v35 - v34;
                            if ( v35 - v34 == 32 )
                            {
                              v37 = time(0);
                              if ( v37 >= v46 && v37 - v46 <= 0x258 )
                              {
                                if ( (*(int (__fastcall **)(int, unsigned __int8 *, unsigned int))(*(_DWORD *)(a1 + 1232)
                                                                                                 + 136))(
                                       a1,
                                       v52,
                                       v34) )
                                {
                                  if ( !sub_A82D4(&v63, v65, 4300, 0) )
                                  {
                                    v2 = 0;
                                    sub_95494(a1, 80, 614, 68, "ssl/statem/extensions_srvr.c", 885);
                                    return v2;
                                  }
                                  if ( sub_A8450(&v63, v38, 2, 0, 1)
                                    && sub_A8398(&v63, 3)
                                    && sub_A8450(&v63, 2, 771, 0, 2)
                                    && sub_A851C(&v63)
                                    && sub_A8544(&v63, a1 + 1160, *(_DWORD *)(a1 + 1192), 1)
                                    && (*(int (__fastcall **)(_DWORD, int *, int *))(*(_DWORD *)(a1 + 4) + 80))(
                                         *(_DWORD *)(*(_DWORD *)(a1 + 124) + 528),
                                         &v63,
                                         &v60)
                                    && sub_A8450(&v63, v39, 0, 0, 1)
                                    && sub_A8398(&v63, 2) )
                                  {
                                    if ( sub_A8450(&v63, v40, 43, 0, 2)
                                      && sub_A8398(&v63, 2)
                                      && sub_A8450(&v63, v41, *(_DWORD *)a1, *(int *)a1 >> 31, 2)
                                      && sub_A7EDC(&v63) )
                                    {
                                      if ( !v53
                                        || sub_A8450(&v63, v42, 51, 0, 2)
                                        && sub_A8398(&v63, 2)
                                        && sub_A8450(
                                             &v63,
                                             v43,
                                             *(unsigned __int16 *)(*(_DWORD *)(a1 + 124) + 854),
                                             0,
                                             2)
                                        && sub_A7EDC(&v63) )
                                      {
                                        if ( sub_A8450(&v63, v42, 44, 0, 2)
                                          && sub_A8398(&v63, 2)
                                          && sub_A8544(&v63, v9, v8, 2)
                                          && sub_A7EDC(&v63)
                                          && sub_A7EDC(&v63)
                                          && sub_A7EDC(&v63)
                                          && sub_A820C(&v63, &v59)
                                          && sub_A8054(&v63) )
                                        {
                                          v2 = sub_9D664(a1, v50, v49, v65, v59);
                                          if ( v2 )
                                          {
                                            *(_DWORD *)(a1 + 1100) = 1;
                                            v2 = 1;
                                            *(_DWORD *)(a1 + 1468) = 1;
                                          }
                                          return v2;
                                        }
                                        sub_A8640(&v63);
                                        v15 = 933;
                                      }
                                      else
                                      {
                                        sub_A8640(&v63);
                                        v15 = 919;
                                      }
                                    }
                                    else
                                    {
                                      sub_A8640(&v63);
                                      v15 = 909;
                                    }
                                  }
                                  else
                                  {
                                    sub_A8640(&v63);
                                    v15 = 900;
                                  }
                                  goto LABEL_20;
                                }
                                v19 = 874;
LABEL_32:
                                sub_95494(a1, 47, 614, 308, "ssl/statem/extensions_srvr.c", v19);
                                return 0;
                              }
                              return 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                v20 = 859;
              }
            }
            else
            {
              v20 = 831;
            }
          }
          else
          {
            v20 = 820;
          }
        }
        sub_95494(a1, 50, 614, 159, "ssl/statem/extensions_srvr.c", v20);
        return v2;
      }
    }
    v16 = 763;
  }
  else
  {
    v16 = 753;
  }
  sub_95494(a1, 50, 614, 159, "ssl/statem/extensions_srvr.c", v16);
  return 0;
}
