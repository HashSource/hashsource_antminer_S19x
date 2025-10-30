int __fastcall sub_A00B8(_DWORD *a1, int *a2)
{
  _DWORD *v4; // r3
  _BOOL4 *v5; // r5
  _BOOL4 v6; // r0
  int v7; // r3
  unsigned __int8 *v8; // r3
  int v9; // r3
  int *v10; // r2
  int v11; // r1
  int v12; // r2
  unsigned int v14; // r3
  unsigned __int8 *v15; // r2
  _BOOL4 *v16; // r1
  int v17; // r3
  unsigned __int8 *v18; // r7
  unsigned int v19; // r3
  int v20; // lr
  int v21; // r0
  int v22; // r12
  int v23; // r8
  size_t v24; // r8
  unsigned __int8 *v25; // r7
  int v26; // r12
  int v27; // r3
  unsigned int v28; // r0
  unsigned __int8 *v29; // r1
  unsigned __int8 *v30; // r0
  int v31; // r3
  int v32; // r1
  int v33; // r2
  int v34; // r3
  _BOOL4 v35; // lr
  _BOOL4 v36; // r7
  _BOOL4 v37; // r2
  _BOOL4 v38; // r2
  _BOOL4 v39; // r12
  _BOOL4 v40; // lr
  unsigned __int8 *v41; // r1
  unsigned __int8 *v42; // r3
  int v43; // r7
  size_t v44; // r2
  size_t v45; // r3
  char *v46; // r1
  unsigned __int8 *v47; // r3
  size_t v48; // r3
  size_t v49; // r0
  char *v50; // r1
  unsigned int v51; // r3
  unsigned int v52; // r3
  unsigned int v53; // r2
  int v54; // r1
  unsigned __int8 *v55; // r3
  size_t v56; // r3
  int v57; // r7
  size_t v58; // r8
  unsigned __int8 *v59; // r3
  _DWORD *v60; // r9
  const void *v61; // r1
  void *v62; // r0
  int v63; // r1
  unsigned int v64; // r9
  unsigned __int8 *v65; // r2
  unsigned __int8 *v66; // r7
  unsigned __int8 *v67; // r2
  size_t v68; // r6
  _DWORD v69[2]; // [sp+8h] [bp-8h] BYREF

  if ( !a1[379] )
  {
    v4 = (_DWORD *)a1[31];
    if ( v4[96] )
    {
      if ( v4[129] )
      {
        v10 = (int *)a1[1];
        if ( (*(_DWORD *)(v10[25] + 48) & 8) == 0 )
        {
          v11 = *v10;
          v12 = *v10 == 0x10000;
          if ( v11 < 772 )
            v12 |= 1u;
          if ( !v12 )
          {
            sub_95494(a1, 80, 381, 68, (int)"ssl/statem/statem_srvr.c", 1394);
LABEL_16:
            v5 = 0;
LABEL_20:
            CRYPTO_free(v5, "ssl/statem/statem_srvr.c", 1606);
            return 0;
          }
        }
        v33 = a1[315];
        if ( (v33 & 0x40000000) != 0 || !v4[206] && (v33 & 0x40000) == 0 )
        {
          sub_83FEC(a1, 1, 100);
          return 1;
        }
        a1[379] = 1;
        a1[8] = 1;
      }
    }
  }
  v5 = (_BOOL4 *)sub_E0740(620, "ssl/statem/statem_srvr.c", 1408);
  if ( !v5 )
  {
    sub_95494(a1, 80, 381, 68, (int)"ssl/statem/statem_srvr.c", 1411);
    goto LABEL_16;
  }
  v6 = sub_7EF80((int)(a1 + 404));
  *v5 = v6;
  if ( v6 )
  {
    v7 = a1[31];
    if ( *(_DWORD *)(v7 + 384) && *(_DWORD *)(v7 + 516) || a1[275] )
    {
      sub_95494(a1, 10, 381, 244, (int)"ssl/statem/statem_srvr.c", 1427);
      goto LABEL_19;
    }
    v8 = (unsigned __int8 *)a2[1];
    if ( !v8 || (v14 = (unsigned int)(v8 - 1), v32 = *(unsigned __int8 *)*a2, ++*a2, a2[1] = v14, v32 != 1) )
    {
      v9 = 1454;
LABEL_9:
      sub_95494(a1, 80, 381, 68, (int)"ssl/statem/statem_srvr.c", v9);
LABEL_19:
      CRYPTO_free(v5[154], "ssl/statem/statem_srvr.c", 1605);
      goto LABEL_20;
    }
  }
  else
  {
    v14 = a2[1];
  }
  if ( v14 <= 1 )
  {
    sub_95494(a1, 50, 381, 160, (int)"ssl/statem/statem_srvr.c", 1461);
    goto LABEL_19;
  }
  v15 = (unsigned __int8 *)*a2;
  v16 = (_BOOL4 *)(*a2 + 2);
  v17 = *(unsigned __int8 *)*a2 << 8;
  v5[1] = v17;
  v5[1] = v17 | v15[1];
  v18 = (unsigned __int8 *)a2[1];
  *a2 = (int)v16;
  v19 = (unsigned int)(v18 - 2);
  a2[1] = (int)(v18 - 2);
  if ( v6 )
  {
    if ( v19 <= 1 )
      goto LABEL_34;
    v20 = v15[2];
    v21 = v15[3];
    *a2 = (int)(v15 + 4);
    a2[1] = (int)(v18 - 4);
    if ( (unsigned int)(v18 - 4) <= 1
      || (v22 = v15[4], v23 = v15[5], *a2 = (int)(v15 + 6), a2[1] = (int)(v18 - 6), (unsigned int)(v18 - 6) <= 1) )
    {
LABEL_34:
      v31 = 1479;
    }
    else
    {
      v24 = v23 | (v22 << 8);
      v25 = v18 - 8;
      v26 = v15[6];
      v27 = v15[7];
      *a2 = (int)(v15 + 8);
      a2[1] = (int)v25;
      if ( v24 > 0x20 )
      {
        sub_95494(a1, 47, 381, 159, (int)"ssl/statem/statem_srvr.c", 1485);
        goto LABEL_19;
      }
      v28 = v21 | (v20 << 8);
      if ( v28 <= (unsigned int)v25 )
      {
        v5[85] = v28;
        v5[84] = (_BOOL4)(v15 + 8);
        v29 = (unsigned __int8 *)(*a2 + v28);
        v30 = (unsigned __int8 *)(a2[1] - v28);
        *a2 = (int)v29;
        a2[1] = (int)v30;
        if ( v24 <= (unsigned int)v30 )
        {
          v64 = v27 | (v26 << 8);
          memcpy(v5 + 11, v29, v24);
          v65 = (unsigned __int8 *)(a2[1] - v24);
          v66 = (unsigned __int8 *)(*a2 + v24);
          *a2 = (int)v66;
          a2[1] = (int)v65;
          if ( v64 <= (unsigned int)v65 )
          {
            v67 = &v65[-v64];
            a2[1] = (int)v67;
            *a2 = (int)&v66[v64];
            if ( !v67 )
            {
              v68 = v64;
              v5[10] = v24;
              if ( v64 >= 0x20 )
                v68 = 32;
              memset(v5 + 2, 0, 0x20u);
              if ( v68 > v64 )
              {
                v9 = 1515;
                goto LABEL_9;
              }
              memcpy((char *)v5 + 32 - v68 + 8, v66, v68);
              v5[151] = 0;
              v62 = v5 + 87;
              v5[152] = 0;
              v58 = 1;
              v60 = v5 + 151;
              v61 = &unk_1A9BDB;
              goto LABEL_65;
            }
          }
        }
      }
      v31 = 1496;
    }
    sub_95494(a1, 50, 381, 213, (int)"ssl/statem/statem_srvr.c", v31);
    goto LABEL_19;
  }
  if ( v19 <= 0x1F )
    goto LABEL_42;
  v35 = v16[1];
  v36 = v16[2];
  v37 = v16[3];
  v5[2] = *v16;
  v5[3] = v35;
  v5[4] = v36;
  v5[5] = v37;
  v38 = v16[7];
  v39 = v16[4];
  v40 = v16[5];
  v5[8] = v16[6];
  v5[9] = v38;
  v5[6] = v39;
  v5[7] = v40;
  v41 = (unsigned __int8 *)*a2;
  v42 = (unsigned __int8 *)a2[1];
  v43 = *a2 + 32;
  a2[1] = (int)(v42 - 32);
  *a2 = v43;
  if ( v42 == (unsigned __int8 *)32 )
    goto LABEL_42;
  v44 = v41[32];
  v45 = (size_t)(v42 - 33);
  v46 = (char *)(v41 + 33);
  if ( v44 > v45 )
    goto LABEL_42;
  a2[1] = v45 - v44;
  *a2 = (int)&v46[v44];
  if ( v44 > 0x20 )
  {
    v5[10] = 0;
LABEL_42:
    v34 = 1528;
LABEL_43:
    sub_95494(a1, 50, 381, 159, (int)"ssl/statem/statem_srvr.c", v34);
    goto LABEL_19;
  }
  v5[10] = v44;
  memcpy(v5 + 11, v46, v44);
  if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 )
  {
    v47 = (unsigned __int8 *)a2[1];
    if ( !v47 || (v48 = (size_t)(v47 - 1), v50 = (char *)(*a2 + 1), v49 = *(unsigned __int8 *)*a2, v49 > v48) )
    {
      v34 = 1535;
      goto LABEL_43;
    }
    a2[1] = v48 - v49;
    *a2 = (int)&v50[v49];
    v5[19] = v49;
    memcpy(v5 + 20, v50, v49);
    if ( (sub_8B860((int)a1) & 0x2000) != 0 && !v5[19] )
    {
      CRYPTO_free(v5, "ssl/statem/statem_srvr.c", 1552);
      return 1;
    }
  }
  v51 = a2[1];
  if ( v51 <= 1 || (v52 = v51 - 2, v53 = *(unsigned __int8 *)(*a2 + 1) | (*(unsigned __int8 *)*a2 << 8), v53 > v52) )
  {
    v34 = 1560;
    goto LABEL_43;
  }
  v54 = *a2 + 2;
  *a2 = v54 + v53;
  a2[1] = v52 - v53;
  v5[84] = v54;
  v5[85] = v53;
  v55 = (unsigned __int8 *)a2[1];
  if ( !v55 || (v56 = (size_t)(v55 - 1), v57 = *a2 + 1, v58 = *(unsigned __int8 *)*a2, v58 > v56) )
  {
    v34 = 1566;
    goto LABEL_43;
  }
  v59 = (unsigned __int8 *)(v56 - v58);
  *a2 = v57 + v58;
  a2[1] = (int)v59;
  if ( v59 )
  {
    v60 = v5 + 151;
    if ( !sub_9F1B4((unsigned __int8 **)a2, (int *)v5 + 151) || a2[1] )
    {
      v34 = 1577;
      goto LABEL_43;
    }
  }
  else
  {
    v60 = v5 + 151;
    v5[151] = 0;
    v5[152] = 0;
  }
  v61 = (const void *)v57;
  v62 = v5 + 87;
LABEL_65:
  v5[86] = v58;
  memcpy(v62, v61, v58);
  v63 = v60[1];
  v69[0] = *v60;
  v69[1] = v63;
  if ( !sub_8F274(a1, (int)v69, 128, (int *)v5 + 154, (int *)v5 + 153, 1) )
    goto LABEL_19;
  a1[370] = v5;
  return 2;
}
