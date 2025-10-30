int __fastcall sub_A12BC(int *a1, int *a2)
{
  int v4; // r4
  int v5; // r2
  int v7; // r3
  int v8; // r3
  int v9; // r0
  _DWORD *v10; // r3
  int v11; // r7
  int v12; // r0
  int v13; // r0
  int v14; // r2
  _DWORD *v15; // r0
  int v16; // r4
  int v17; // r3
  int v18; // r4
  unsigned __int8 *v19; // r4
  unsigned int v20; // r7
  int v21; // r8
  int v22; // r9
  unsigned __int8 *v23; // r4
  int v24; // r0
  int v25; // r0
  int v26; // r7
  unsigned __int8 *v27; // r8
  unsigned __int8 *v28; // r6
  int v29; // r0
  unsigned __int8 *v30; // r4
  int v31; // r0
  unsigned __int8 *v32; // r1
  int v33; // lr
  int v34; // r7
  int v35; // r2
  int v36; // t1
  int v37; // r6
  int v38; // r0
  int v39; // r1
  int v40; // r2
  int v41; // r1
  unsigned __int8 *v42; // r6
  char *v43; // r0
  unsigned __int8 v44; // r9
  char v45; // t1
  _BOOL4 v46; // r6
  unsigned int v47; // r3
  unsigned __int8 *v48; // r3
  int v49; // r1
  int v50; // r8
  int v51; // r4
  int v52; // r4
  int v53; // r6
  int v54; // r9
  int v55; // r0
  unsigned int v56; // r3
  unsigned __int8 *v57; // r3
  int v58; // r7
  int v59; // r0
  int v60; // r1
  unsigned int v61; // r1
  int v62; // r0
  unsigned int v63; // r3
  unsigned int v64; // r2
  unsigned int v65; // r3
  unsigned __int8 *v66; // r2
  unsigned __int8 *v67; // r1
  unsigned int v68; // r3
  int v69; // r3
  int v70; // r8
  int v71; // r6
  int v72; // r0
  int v73; // r3
  int v74; // r10
  int v75; // r0
  bool v76; // zf
  int v77; // r4
  int v78; // [sp+8h] [bp-38h] BYREF
  int v79; // [sp+Ch] [bp-34h] BYREF
  _BYTE v80[47]; // [sp+10h] [bp-30h] BYREF
  char v81; // [sp+3Fh] [bp-1h] BYREF

  v4 = *(_DWORD *)(*(_DWORD *)(a1[31] + 528) + 16);
  if ( (v4 & 0x1C8) != 0 && !sub_9F1EC((int)a1, (unsigned __int8 **)a2) )
    goto LABEL_5;
  if ( (v4 & 8) != 0 )
  {
    if ( a2[1] )
    {
      sub_95494(a1, 50, 382, 159, (int)"ssl/statem/statem_srvr.c", 3475);
LABEL_5:
      sub_E0758(*(_DWORD *)(a1[31] + 600), *(_DWORD *)(a1[31] + 604), (size_t)"ssl/statem/statem_srvr.c");
      v5 = a1[31];
      *(_DWORD *)(v5 + 600) = 0;
      *(_DWORD *)(v5 + 604) = 0;
      return 0;
    }
    if ( !sub_82DD8(a1, 0, 0, 0) )
      goto LABEL_5;
    return 2;
  }
  if ( (v4 & 0x41) != 0 )
  {
    v25 = sub_DA044(*(_DWORD *)(a1[257] + 24));
    v26 = v25;
    if ( !v25 )
    {
      sub_95494(a1, 80, 415, 168, (int)"ssl/statem/statem_srvr.c", 3012);
      goto LABEL_5;
    }
    if ( (*a1 & 0xFFFFFDFF) == 0x100 )
    {
      v27 = (unsigned __int8 *)*a2;
      v28 = (unsigned __int8 *)a2[1];
    }
    else
    {
      v63 = a2[1];
      if ( v63 <= 1
        || (v64 = v63 - 2,
            v27 = (unsigned __int8 *)(*a2 + 2),
            v65 = *(unsigned __int8 *)(*a2 + 1) | (*(unsigned __int8 *)*a2 << 8),
            v65 > v64)
        || (v66 = (unsigned __int8 *)(v64 - v65), *a2 = (int)&v27[v65], (a2[1] = (int)v66) != 0) )
      {
        sub_95494(a1, 50, 415, 159, (int)"ssl/statem/statem_srvr.c", 3023);
        goto LABEL_5;
      }
      v28 = (unsigned __int8 *)v65;
    }
    if ( sub_F7ED8(v25) <= 47 )
    {
      sub_95494(a1, 80, 415, 120, (int)"ssl/statem/statem_srvr.c", 3036);
      goto LABEL_5;
    }
    v29 = sub_F7ED8(v26);
    v30 = (unsigned __int8 *)CRYPTO_malloc(v29, "ssl/statem/statem_srvr.c", 3040);
    if ( !v30 )
    {
      sub_95494(a1, 80, 415, 65, (int)"ssl/statem/statem_srvr.c", 3043);
      goto LABEL_5;
    }
    if ( sub_F49BC(v80, 48) <= 0 )
    {
      sub_95494(a1, 80, 415, 68, (int)"ssl/statem/statem_srvr.c", 3058);
    }
    else
    {
      v31 = sub_F7F10(v28, v27, v30, v26, 3);
      if ( v31 < 0 )
      {
        sub_95494(a1, 51, 415, 68, (int)"ssl/statem/statem_srvr.c", 3072);
      }
      else
      {
        if ( v31 > 58 )
        {
          v32 = v30 + 1;
          v33 = v31 - 48;
          v34 = v31 - 49;
          v35 = (unsigned __int8)(((((v30[1] ^ 2) - 1) & ~(v30[1] ^ 2)) >> 31) & (((*v30 - 1) & ~*v30) >> 31));
          do
          {
            v36 = *++v32;
            v35 &= ~(((v36 - 1) & ~v36) >> 31);
          }
          while ( v32 != &v30[v31 - 50] );
          v37 = v30[v33];
          v38 = v30[v33 + 1];
          v39 = (unsigned __int8)((((((unsigned __int8)a1[321] ^ v38) - 1) & ~((unsigned __int8)a1[321] ^ v38)) >> 31)
                                & ((((v37 ^ (a1[321] >> 8)) - 1) & ~(v37 ^ (a1[321] >> 8))) >> 31));
          v40 = (unsigned __int8)(v35 & (((v30[v34] - 1) & ~v30[v34]) >> 31));
          if ( (a1[315] & 0x800000) != 0 )
            v39 = (unsigned __int8)(v39
                                  | ((((v38 ^ (unsigned __int8)*a1) - 1)
                                    & ~(v38 ^ (unsigned __int8)*a1)
                                    & ((v37 ^ (*a1 >> 8)) - 1)
                                    & ~(v37 ^ (*a1 >> 8))) >> 31));
          v41 = v39 & v40;
          v42 = &v30[v33];
          v43 = (char *)&v79 + 3;
          do
          {
            v44 = *v42;
            v78 = v41;
            v79 = ~v41;
            v45 = *++v43;
            *v42++ = ~(_BYTE)v41 & v45 | v44 & v41;
          }
          while ( &v81 != v43 );
          v46 = sub_82DD8(a1, &v30[v33], 0x30u, 0);
          CRYPTO_free(v30, "ssl/statem/statem_srvr.c", 3158);
          if ( !v46 )
            goto LABEL_5;
          return 2;
        }
        sub_95494(a1, 51, 415, 147, (int)"ssl/statem/statem_srvr.c", 3085);
      }
    }
    CRYPTO_free(v30, "ssl/statem/statem_srvr.c", 3158);
    goto LABEL_5;
  }
  if ( (v4 & 0x102) != 0 )
  {
    v47 = a2[1];
    if ( v47 > 1
      && (v48 = (unsigned __int8 *)(v47 - 2),
          v49 = *(unsigned __int8 *)*a2,
          v50 = *a2 + 2,
          v51 = *(unsigned __int8 *)(*a2 + 1),
          *a2 = v50,
          a2[1] = (int)v48,
          v52 = v51 | (v49 << 8),
          (unsigned __int8 *)v52 == v48) )
    {
      v54 = *(_DWORD *)(a1[31] + 532);
      if ( v54 )
      {
        if ( v52 )
        {
          *a2 = v50 + v52;
          a2[1] = 0;
          v55 = EVP_PKEY_new();
          v53 = v55;
          if ( v55 && sub_D9D74(v55, v54) )
          {
            v74 = sub_DA134(v53);
            v75 = sub_B8AEC(v50, v52, 0);
            v76 = v74 == 0;
            if ( v74 )
              v76 = v75 == 0;
            v77 = v75;
            if ( !v76 && sub_BFE38(v74, v75, 0) )
            {
              if ( sub_83144(a1, v54, v53, 1) )
              {
                sub_DA240(*(_DWORD *)(a1[31] + 532));
                *(_DWORD *)(a1[31] + 532) = 0;
                sub_DA240(v53);
                return 2;
              }
            }
            else
            {
              sub_95494(a1, 80, 411, 68, (int)"ssl/statem/statem_srvr.c", 3213);
              sub_B895C(v77);
            }
          }
          else
          {
            sub_95494(a1, 80, 411, 130, (int)"ssl/statem/statem_srvr.c", 3205);
          }
        }
        else
        {
          v53 = 0;
          sub_95494(a1, 50, 411, 171, (int)"ssl/statem/statem_srvr.c", 3193);
        }
      }
      else
      {
        v53 = 0;
        sub_95494(a1, 80, 411, 171, (int)"ssl/statem/statem_srvr.c", 3187);
      }
    }
    else
    {
      v53 = 0;
      sub_95494(a1, 50, 411, 148, (int)"ssl/statem/statem_srvr.c", 3181);
    }
    sub_DA240(v53);
    goto LABEL_5;
  }
  if ( (v4 & 0x84) == 0 )
  {
    if ( (v4 & 0x20) != 0 )
    {
      v56 = a2[1];
      if ( v56 <= 1
        || (v57 = (unsigned __int8 *)(v56 - 2),
            v58 = *(unsigned __int8 *)*a2,
            v59 = *a2 + 2,
            v60 = *(unsigned __int8 *)(*a2 + 1),
            *a2 = v59,
            a2[1] = (int)v57,
            v61 = v60 | (v58 << 8),
            v61 > (unsigned int)v57) )
      {
        sub_95494(a1, 50, 416, 347, (int)"ssl/statem/statem_srvr.c", 3313);
        goto LABEL_5;
      }
      a2[1] = (int)&v57[-v61];
      *a2 = v59 + v61;
      v62 = sub_B8AEC(v59, v61, 0);
      a1[396] = v62;
      if ( !v62 )
      {
        sub_95494(a1, 80, 416, 3, (int)"ssl/statem/statem_srvr.c", 3318);
        goto LABEL_5;
      }
      if ( sub_B82F8(v62, a1[392]) >= 0 || sub_B85B0(a1[396]) )
      {
        sub_95494(a1, 47, 416, 371, (int)"ssl/statem/statem_srvr.c", 3323);
        goto LABEL_5;
      }
      CRYPTO_free(*(_DWORD *)(a1[285] + 496), "ssl/statem/statem_srvr.c", 3326);
      v71 = a1[285];
      v72 = sub_E9E3C(a1[391], "ssl/statem/statem_srvr.c", 3327);
      v73 = a1[285];
      *(_DWORD *)(v71 + 496) = v72;
      if ( !*(_DWORD *)(v73 + 496) )
      {
        sub_95494(a1, 80, 416, 65, (int)"ssl/statem/statem_srvr.c", 3330);
        goto LABEL_5;
      }
      if ( !sub_A6A08(a1) )
        goto LABEL_5;
      return 2;
    }
    if ( (v4 & 0x10) == 0 )
    {
      sub_95494(a1, 80, 382, 249, (int)"ssl/statem/statem_srvr.c", 3511);
      goto LABEL_5;
    }
    v7 = a1[31];
    v78 = 32;
    v8 = *(_DWORD *)(*(_DWORD *)(v7 + 528) + 20);
    if ( (v8 & 0x80) != 0 )
    {
      v10 = (_DWORD *)a1[257];
      v9 = v10[36];
      if ( v9 )
        goto LABEL_15;
      v9 = v10[31];
      if ( v9 )
        goto LABEL_15;
    }
    else
    {
      v9 = v8 & 0x20;
      if ( (v8 & 0x20) == 0 )
      {
LABEL_15:
        v11 = sub_DB4F8(v9, 0);
        if ( !v11 )
        {
          sub_95494(a1, 80, 413, 65, (int)"ssl/statem/statem_srvr.c", 3381);
          goto LABEL_5;
        }
        if ( sub_DAB74() <= 0 )
        {
          sub_95494(a1, 80, 413, 68, (int)"ssl/statem/statem_srvr.c", 3386);
          goto LABEL_5;
        }
        v12 = sub_10E89C(*(_DWORD *)(a1[285] + 412));
        if ( v12 )
        {
          v13 = sub_DACE0(v11, v12);
          if ( v13 <= 0 )
            sub_D00F0(v13);
        }
        v14 = a2[1];
        v79 = *a2;
        v15 = (_DWORD *)sub_9F3C0(0, (int)&v79, v14);
        v16 = (int)v15;
        if ( !v15 || !*v15 || sub_AD77C() != 16 )
        {
          v17 = 3409;
LABEL_24:
          sub_95494(a1, 50, 413, 147, (int)"ssl/statem/statem_srvr.c", v17);
LABEL_25:
          sub_DB4BC(v11);
          sub_9F404(v16);
          goto LABEL_5;
        }
        v67 = (unsigned __int8 *)a2[1];
        v68 = v79 - *a2;
        if ( v68 > (unsigned int)v67 )
        {
          v69 = 3415;
LABEL_88:
          sub_95494(a1, 80, 413, 147, (int)"ssl/statem/statem_srvr.c", v69);
          goto LABEL_25;
        }
        v70 = (int)&v67[-v68];
        *a2 = v79;
        a2[1] = (int)&v67[-v68];
        if ( v67 != (unsigned __int8 *)v68 )
        {
          v69 = 3421;
          goto LABEL_88;
        }
        if ( sub_DABC0(
               v11,
               v80,
               &v78,
               *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v16 + 4) + 8),
               **(_DWORD **)(*(_DWORD *)v16 + 4)) <= 0 )
        {
          v17 = 3431;
          goto LABEL_24;
        }
        if ( !sub_82DD8(a1, v80, 0x20u, v70) )
          goto LABEL_25;
        if ( sub_DB77C(v11, -1, -1, 2, 2, v70) > 0 )
          a1[22] = 1;
        sub_DB4BC(v11);
        sub_9F404(v16);
        return 2;
      }
      v10 = (_DWORD *)a1[257];
    }
    v9 = v10[26];
    goto LABEL_15;
  }
  v18 = a2[1];
  if ( !v18 )
  {
    sub_95494(a1, 40, 412, 311, (int)"ssl/statem/statem_srvr.c", 3247);
    goto LABEL_38;
  }
  v19 = (unsigned __int8 *)(v18 - 1);
  v21 = *a2 + 1;
  v20 = *(unsigned __int8 *)*a2;
  v22 = *(_DWORD *)(a1[31] + 532);
  a2[1] = (int)v19;
  *a2 = v21;
  if ( v20 > (unsigned int)v19 || (v23 = &v19[-v20], *a2 = v21 + v20, (a2[1] = (int)v23) != 0) )
  {
    v18 = 0;
    sub_95494(a1, 50, 412, 159, (int)"ssl/statem/statem_srvr.c", 3262);
    goto LABEL_38;
  }
  if ( !v22 )
  {
    v18 = 0;
    sub_95494(a1, 80, 412, 311, (int)"ssl/statem/statem_srvr.c", 3267);
    goto LABEL_38;
  }
  v24 = EVP_PKEY_new();
  v18 = v24;
  if ( !v24 || sub_D9D74(v24, v22) <= 0 )
  {
    sub_95494(a1, 80, 412, 6, (int)"ssl/statem/statem_srvr.c", 3274);
    goto LABEL_38;
  }
  if ( !sub_DA738(v18, v21, v20) )
  {
    sub_95494(a1, 80, 412, 16, (int)"ssl/statem/statem_srvr.c", 3279);
    goto LABEL_38;
  }
  if ( !sub_83144(a1, v22, v18, 1) )
  {
LABEL_38:
    sub_DA240(v18);
    goto LABEL_5;
  }
  sub_DA240(*(_DWORD *)(a1[31] + 532));
  *(_DWORD *)(a1[31] + 532) = 0;
  sub_DA240(v18);
  return 2;
}
