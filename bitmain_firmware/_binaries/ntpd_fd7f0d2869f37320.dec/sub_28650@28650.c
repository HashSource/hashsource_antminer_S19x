int __fastcall sub_28650(int a1, int a2)
{
  int v3; // r12
  unsigned int v4; // r0
  int v5; // r6
  size_t v6; // r9
  int v7; // r10
  unsigned int *v8; // r4
  unsigned int v9; // r8
  int v10; // r5
  unsigned __int16 v11; // r1
  unsigned int v12; // r3
  _BOOL4 v13; // r2
  unsigned int v14; // r2
  bool v15; // cc
  int v16; // r2
  int v17; // r8
  int v18; // r5
  const char *v19; // r0
  unsigned int v21; // r2
  bool v22; // cc
  unsigned int v23; // r2
  int v24; // r3
  unsigned int v25; // r2
  int v26; // r8
  void *v27; // r0
  void *v28; // r0
  _DWORD *v29; // r0
  unsigned int v30; // r1
  unsigned int *v31; // r0
  unsigned int v32; // r12
  unsigned int v33; // lr
  unsigned int v34; // r3
  unsigned int v35; // r2
  unsigned int v36; // r1
  unsigned int v37; // r2
  int v38; // r12
  unsigned int v39; // r3
  int v40; // r0
  int v42; // r2
  unsigned int v43; // r3
  unsigned int v44; // r12
  unsigned int v45; // r2
  int v46; // r3
  unsigned int v47; // r2
  int v48; // r3
  unsigned int v49; // r2
  int v50; // r0
  int v51; // r0
  int v52; // r0
  unsigned int v53; // r2
  int v54; // r0
  int v55; // r1
  int v56; // r12
  int v57; // r3
  int v58; // r8
  void *v59; // r0
  int v60; // r0
  void *v61; // r3
  const char *v62; // r1
  int v63; // r2
  bool v64; // zf
  int v65; // r1
  unsigned int v66; // r2
  int v67; // r0
  int v68; // r0
  int v69; // r1
  int v70; // r2
  int v71; // r3
  int v72; // r0
  int v73; // r3
  void *v74; // r2
  int v75; // r0
  unsigned int v76; // r8
  int v77; // r0
  int digestbyname; // r3
  __int16 v79; // r2
  int v80; // r2
  void *v81; // r0
  void *v82; // r0
  void *v83; // r0
  int v84; // r0
  int v85; // r4
  const char *v86; // r0
  void *v87; // r0
  int v88; // r0
  int v89; // r0
  int v90; // r0
  unsigned int v91; // r2
  int v92; // r0
  int v93; // r12
  int v94; // r3
  int v95; // r0
  int v96; // r0
  unsigned int v97; // r2
  int v98; // r12
  int v99; // r3
  size_t v100; // r0
  const char *v101; // r3
  void *v102; // r0
  int v103; // r8
  const char *v104; // r0
  int v105; // r0
  int v106; // r0
  const char *v107; // r0
  int v108; // r0
  int error; // r0
  const char *v110; // r0
  unsigned int v111; // r9
  unsigned int v112; // r9
  unsigned int v113; // r1
  int v114; // r3
  unsigned int v115; // r2
  unsigned int v116; // r0
  unsigned int v117; // r3
  int v118; // r0
  const char *v119; // r0
  unsigned int v120; // r2
  unsigned int v121; // [sp+0h] [bp-18Ch]
  unsigned int v122; // [sp+0h] [bp-18Ch]
  unsigned int v123; // [sp+0h] [bp-18Ch]
  int v124; // [sp+1Ch] [bp-170h]
  int v125; // [sp+1Ch] [bp-170h]
  int v126; // [sp+1Ch] [bp-170h]
  const char *v127; // [sp+1Ch] [bp-170h]
  const char *v128; // [sp+1Ch] [bp-170h]
  int v129; // [sp+1Ch] [bp-170h]
  unsigned int v130; // [sp+20h] [bp-16Ch]
  int v132; // [sp+34h] [bp-158h]
  void *ptr; // [sp+48h] [bp-144h]
  void *ptra; // [sp+48h] [bp-144h]
  void *ptrf; // [sp+48h] [bp-144h]
  void *ptrg; // [sp+48h] [bp-144h]
  void *ptrb; // [sp+48h] [bp-144h]
  void *ptrc; // [sp+48h] [bp-144h]
  void *ptrd; // [sp+48h] [bp-144h]
  unsigned int *ptre; // [sp+48h] [bp-144h]
  void *ptrh; // [sp+48h] [bp-144h]
  int v142; // [sp+4Ch] [bp-140h]
  int v143; // [sp+4Ch] [bp-140h]
  int v144; // [sp+4Ch] [bp-140h]
  int v145; // [sp+4Ch] [bp-140h]
  int v146; // [sp+4Ch] [bp-140h]
  int v147; // [sp+4Ch] [bp-140h]
  const char *v148; // [sp+4Ch] [bp-140h]
  int v149; // [sp+50h] [bp-13Ch]
  int v150; // [sp+50h] [bp-13Ch]
  int v151; // [sp+50h] [bp-13Ch]
  int v152; // [sp+50h] [bp-13Ch]
  int v153; // [sp+54h] [bp-138h]
  int v154; // [sp+54h] [bp-138h]
  int v155; // [sp+54h] [bp-138h]
  int v156; // [sp+58h] [bp-134h]
  int v157; // [sp+58h] [bp-134h]
  int v158; // [sp+58h] [bp-134h]
  int v159; // [sp+58h] [bp-134h]
  int v160; // [sp+5Ch] [bp-130h]
  int v161; // [sp+64h] [bp-128h] BYREF
  unsigned int *v162; // [sp+68h] [bp-124h] BYREF
  unsigned int *v163; // [sp+6Ch] [bp-120h] BYREF
  unsigned int *v164; // [sp+70h] [bp-11Ch] BYREF
  int v165; // [sp+74h] [bp-118h] BYREF
  int v166; // [sp+78h] [bp-114h] BYREF
  int v167; // [sp+7Ch] [bp-110h] BYREF
  int v168; // [sp+80h] [bp-10Ch] BYREF
  _BYTE v169[256]; // [sp+84h] [bp-108h] BYREF

  v3 = *(_DWORD *)(a2 + 84);
  v4 = v3 - 48;
  v132 = *(_BYTE *)(a2 + 88) & 7;
  if ( v3 - 48 <= 24 )
    return 256;
  v5 = 48;
  v6 = 0;
  v130 = 0;
  v7 = a2 + 88;
  while ( 1 )
  {
    v8 = (unsigned int *)(v7 + 4 * (v5 / 4));
    v9 = bswap32(*v8);
    v10 = (unsigned __int16)v9;
    v11 = bswap32(v8[1]);
    v12 = HIWORD(v9) << 16;
    v13 = (unsigned __int16)v9 <= 7u;
    if ( (HIBYTE(v12) & 0x3F) != 2 )
      v13 = 1;
    v124 = v11;
    if ( v13 )
    {
      v12 |= 0x40000000u;
      ++sys_badlength;
    }
    if ( (unsigned __int16)v9 > v4 )
      return 257;
    if ( (unsigned __int16)v9 > 0x17u )
    {
      v6 = bswap32(v8[4]);
      v130 = bswap32(v8[3]);
      if ( !v6 || (unsigned int)(unsigned __int16)v9 - 24 < v6 )
        return 257;
      if ( v12 == -2113667072 )
      {
LABEL_67:
        v17 = sub_26A5C((unsigned int *)(v7 + 4 * (v5 / 4)), (unsigned int *)(a1 + 208), a1);
        if ( v17 != 256 )
          goto LABEL_18;
        if ( (*(_BYTE *)(a1 + 72) & 0x20) != 0 && *(unsigned __int16 *)(a1 + 132) != v124 )
        {
          v3 = *(_DWORD *)(a2 + 84);
          goto LABEL_46;
        }
        v30 = v8[2];
        if ( v30 )
        {
          v31 = *(unsigned int **)(a1 + 220);
          if ( !v31 )
          {
            v31 = (unsigned int *)sub_64B04(0, 8, 0, 0);
            v30 = v8[2];
            *(_DWORD *)(a1 + 220) = v31;
          }
          v32 = v8[3];
          v33 = bswap32(v30);
          v34 = v8[6];
          v35 = v8[5];
          *(_DWORD *)(a1 + 208) = v30;
          v36 = bswap32(v32);
          *(_DWORD *)(a1 + 212) = v32;
          v37 = bswap32(v35);
          v38 = *(_DWORD *)(a1 + 136);
          v39 = bswap32(v34);
          *v31 = v37;
          v31[1] = v39;
          *(_DWORD *)(a1 + 160) = v37;
          *(_DWORD *)(a1 + 136) = v38 | 0x1000;
          *(_DWORD *)(a1 + 300) &= ~0x80u;
          sub_6D00C(v169, 256, "auto seq %d key %x ts %u fs %u", v39, v37, v33, v36);
          goto LABEL_73;
        }
LABEL_74:
        v3 = *(_DWORD *)(a2 + 84);
        goto LABEL_46;
      }
      LOWORD(v14) = 0;
      if ( v12 > 0x82040000 )
      {
        HIWORD(v14) = -32249;
        v15 = v12 > v14;
        if ( v12 == v14 )
          goto LABEL_82;
        LOWORD(v16) = 0;
        if ( v15 )
          goto LABEL_28;
        HIWORD(v16) = -32251;
        if ( v12 == v16 )
          goto LABEL_75;
        goto LABEL_16;
      }
      HIWORD(v14) = -32255;
      if ( v12 == v14 )
        goto LABEL_63;
      if ( v12 > v14 )
      {
        if ( v12 == -2113798144 )
        {
          v17 = sub_26A5C((unsigned int *)(v7 + 4 * (v5 / 4)), 0, a1);
          if ( v17 != 256 )
          {
LABEL_18:
            v18 = v17;
            goto LABEL_19;
          }
          v58 = sub_28530((unsigned int *)(v7 + 4 * (v5 / 4)));
          if ( !v58 )
            goto LABEL_135;
          v59 = *(void **)(a1 + 152);
          if ( v59 )
            free(v59);
          v60 = sub_64C8C(*(_DWORD *)(v58 + 52));
          v61 = *(void **)(a1 + 156);
          v62 = *(const char **)(v58 + 52);
          *(_DWORD *)(a1 + 156) = v58;
          ptra = v61;
          *(_DWORD *)(a1 + 152) = v60;
          if ( strcmp(*(const char **)(v58 + 48), v62) )
            goto LABEL_114;
          if ( (*(_DWORD *)(v58 + 4) & 1) != 0 )
          {
            v63 = *(_DWORD *)(a1 + 136);
            v64 = *(_DWORD *)(a1 + 80) == 0;
            v65 = *(_DWORD *)(v58 + 56);
            *(_DWORD *)(a1 + 136) = v63 | 0x100;
            *(_DWORD *)(a1 + 180) = v65;
            if ( v64 || (v63 & 0xF0) == 0 )
              *(_DWORD *)(a1 + 136) = v63 | 0x300;
LABEL_114:
            if ( ptra )
            {
              v66 = bswap32(*((_DWORD *)ptra + 17));
              v168 = *((_DWORD *)ptra + 18);
              v67 = d2i_X509(0, &v168, v66);
              if ( !v67 )
              {
                v18 = 269;
                *((_DWORD *)ptra + 1) |= 0x80u;
LABEL_19:
                v9 = bswap32(*v8);
LABEL_20:
                v19 = (const char *)sub_6E39C(v18);
                sub_6D00C(v169, 256, "%04x %d %02x %s", v9, v124, v18, v19);
                sub_432D0(a1 + 16, v169);
                return v18;
              }
              v143 = v67;
              if ( X509_verify(v67, *(_DWORD *)(v58 + 8)) <= 0 )
              {
                v18 = 265;
                X509_free(v143);
                *((_DWORD *)ptra + 1) |= 0x80u;
                goto LABEL_19;
              }
              X509_free(v143);
              if ( sub_26CD4((unsigned __int8 *)ptra + 28, (unsigned __int8 *)(v58 + 28)) < 0
                || sub_26CD4((unsigned __int8 *)ptra + 28, (unsigned __int8 *)(v58 + 38)) > 0 )
              {
                v18 = 266;
                *((_DWORD *)ptra + 1) |= 0x80u;
                goto LABEL_19;
              }
              *((_DWORD *)ptra + 1) |= 2u;
            }
          }
          if ( !*(_DWORD *)(a1 + 140) )
          {
            v120 = *(_DWORD *)(v58 + 68);
            v161 = *(_DWORD *)(v58 + 72);
            v129 = d2i_X509(0, &v161, bswap32(v120));
            *(_DWORD *)(a1 + 140) = X509_get_pubkey(v129);
            X509_free(v129);
          }
          v148 = *(const char **)(v58 + 48);
          v101 = *(const char **)(v58 + 52);
          v102 = *(void **)(v58 + 16);
          *(_DWORD *)(a1 + 300) &= ~0x80u;
          ptrh = v102;
          v128 = v101;
          v103 = *(_DWORD *)(v58 + 4);
          v104 = (const char *)OBJ_nid2ln(v102);
          sub_6D00C(v169, 256, "cert %s %s 0x%x %s (%u) fs %u", v148, v128, v103, v104, ptrh, bswap32(v8[3]));
          goto LABEL_73;
        }
        if ( v12 == -2113732608 )
          goto LABEL_38;
        goto LABEL_44;
      }
LABEL_57:
      if ( v12 == 33619968 )
      {
        if ( (*(_DWORD *)(a1 + 136) & 0x100) != 0 )
          goto LABEL_52;
        v27 = *(void **)(a1 + 232);
        if ( v27 )
        {
          if ( *(unsigned __int16 *)(a1 + 132) != v11 )
          {
LABEL_52:
            v18 = 271;
            goto LABEL_20;
          }
          free(v27);
        }
        v28 = (void *)sub_64B04(0, (unsigned __int16)v9, 0, 0);
        v29 = memcpy(v28, (const void *)(v7 + 4 * (v5 / 4)), (unsigned __int16)v9);
        v29[1] = bswap32(*(unsigned __int16 *)(a1 + 60));
        *(_DWORD *)(a1 + 232) = v29;
LABEL_63:
        if ( *(_DWORD *)(a1 + 136) )
        {
          if ( *(unsigned __int16 *)(a1 + 132) != v124 )
          {
            v18 = 271;
            v9 = bswap32(*v8);
            goto LABEL_20;
          }
          goto LABEL_74;
        }
        if ( (unsigned __int16)v9 <= 0x17u )
          sub_6FC54("ntp_crypto.c", 561, 2, "len >= (6 * 4)");
        if ( v6 - 1 >= 0x200 || (unsigned int)(unsigned __int16)v9 - 24 < v6 )
        {
          v18 = 257;
          v9 = bswap32(*v8);
          goto LABEL_20;
        }
        if ( (crypto_flags & 0x10) != 0 )
        {
          if ( (v130 & 0x10) == 0 )
            goto LABEL_101;
          v130 |= 0x2300u;
        }
        else if ( (unsigned int)(v132 - 1) <= 1 )
        {
          if ( (crypto_flags & 0xF0) != 0 )
          {
            if ( (v130 & 0xF0) == 0 )
            {
LABEL_101:
              v18 = 262;
              v9 = bswap32(*v8);
              goto LABEL_20;
            }
          }
          else if ( (v130 & 0xF0) != 0 )
          {
            goto LABEL_101;
          }
        }
        v76 = HIWORD(v130);
        v77 = OBJ_nid2sn(HIWORD(v130));
        digestbyname = EVP_get_digestbyname(v77);
        if ( !digestbyname )
        {
          v18 = 261;
          v9 = bswap32(*v8);
          goto LABEL_20;
        }
        v79 = v124;
        v126 = digestbyname;
        *(_WORD *)(a1 + 132) = v79;
        if ( v132 == 4 )
          v130 |= 0x1000u;
        v80 = v130;
        if ( (v130 & 2) == 0 )
        {
          v80 = v130 | 0x4000;
          v130 |= 0x4000u;
        }
        RAND_bytes(a1 + 164, 4, v80);
        v81 = *(void **)(a1 + 148);
        *(_DWORD *)(a1 + 136) = v130;
        *(_DWORD *)(a1 + 144) = v126;
        if ( v81 )
          free(v81);
        v82 = (void *)sub_64B04(0, v6 + 1, 0, 0);
        *(_DWORD *)(a1 + 148) = v82;
        memcpy(v82, v8 + 5, v6);
        *(_BYTE *)(*(_DWORD *)(a1 + 148) + v6) = 0;
        v83 = *(void **)(a1 + 152);
        if ( v83 )
          free(v83);
        v84 = sub_64C8C(*(_DWORD *)(a1 + 148));
        v85 = *(unsigned __int16 *)(a1 + 60);
        ptrg = (void *)*(unsigned __int16 *)(a1 + 132);
        v127 = *(const char **)(a1 + 148);
        *(_DWORD *)(a1 + 152) = v84;
        v86 = (const char *)OBJ_nid2ln(v76);
        sub_6D00C(v169, 256, "assoc %d %d host %s %s", v85, ptrg, v127, v86);
        goto LABEL_73;
      }
      goto LABEL_44;
    }
    if ( v12 == -2113863680 )
      goto LABEL_63;
    LOWORD(v21) = 0;
    if ( v12 <= 0x82010000 )
    {
      HIWORD(v21) = 518;
      if ( v12 == v21 )
        goto LABEL_66;
      if ( v12 > v21 )
      {
        if ( v12 == 34078720 || v12 == 34144256 || v12 == 34013184 )
        {
LABEL_66:
          v18 = 257;
          goto LABEL_20;
        }
        goto LABEL_44;
      }
      if ( v12 == 33685504 || v12 == 33751040 )
        goto LABEL_66;
      goto LABEL_57;
    }
    HIWORD(v21) = -32251;
    v22 = v12 > v21;
    if ( v12 == v21 )
    {
LABEL_75:
      v40 = sub_26A5C((unsigned int *)(v7 + 4 * (v5 / 4)), 0, a1);
      v17 = v40;
      if ( v6 != 12 || v40 != 256 )
      {
        if ( v40 != 256 )
          goto LABEL_18;
        v3 = *(_DWORD *)(a2 + 84);
      }
      else
      {
        if ( sys_leap != 3 )
          sub_2E2F0(bswap32(v8[5]), *(_DWORD *)(a2 + 72));
        v6 = 12;
        v42 = v8[3];
        tai_leap = v8[2];
        dword_1092BC = v42;
        sub_27DEC();
        sub_266AC(14, a1, (int)"%d seconds", bswap32(v8[5]));
        v43 = bswap32(v8[6]);
        v44 = v8[7];
        v45 = *(_DWORD *)(a1 + 300) & 0xFFFFFF7F;
        *(_DWORD *)(a1 + 136) |= 0x4000u;
        *(_DWORD *)(a1 + 300) = v45;
        sub_6D00C(
          v169,
          256,
          "leap TAI offset %d at %u expire %u fs %u",
          bswap32(v8[5]),
          v43,
          bswap32(v44),
          bswap32(v8[3]));
        sub_432D0(a1 + 16, v169);
        v3 = *(_DWORD *)(a2 + 84);
      }
      goto LABEL_46;
    }
    LOWORD(v23) = 0;
    if ( v22 )
    {
      HIWORD(v23) = -32249;
      if ( v12 == v23 )
      {
LABEL_82:
        v17 = sub_26A5C((unsigned int *)(v7 + 4 * (v5 / 4)), 0, a1);
        if ( v17 != 256 )
          goto LABEL_18;
        v46 = *(_DWORD *)(a1 + 172);
        if ( !v46 )
        {
          sub_65D40(5, "crypto_iff: scheme unavailable");
          v18 = 270;
          goto LABEL_19;
        }
        v47 = bswap32(v8[3]);
        if ( v47 != *(_DWORD *)(v46 + 12) )
        {
          v18 = 259;
          sub_65D40(5, "crypto_iff: invalid filestamp %u", v47);
          goto LABEL_19;
        }
        v95 = EVP_PKEY_get0_DSA(*(_DWORD *)(v46 + 4));
        v158 = v95;
        if ( !v95 )
        {
          sub_65D40(5, "crypto_iff: defective key");
          v18 = 260;
          goto LABEL_19;
        }
        if ( !*(_DWORD *)(a1 + 176) )
        {
          sub_65D40(5, "crypto_iff: missing challenge");
          v18 = 270;
          goto LABEL_19;
        }
        v146 = BN_CTX_new(v95);
        v152 = BN_new();
        v96 = BN_new();
        v97 = bswap32(v8[4]);
        v163 = v8 + 5;
        ptrd = (void *)v96;
        v155 = d2i_DSA_SIG(0, &v163, v97);
        if ( !v155 )
        {
          v18 = 271;
          BN_free(ptrd);
          BN_free(v152);
          v108 = BN_CTX_free(v146);
          error = ERR_get_error(v108);
          v110 = (const char *)ERR_error_string(error, 0);
          sub_65D40(3, "crypto_iff: %s", v110);
          goto LABEL_19;
        }
        DSA_get0_key(v158, &v168, 0);
        DSA_get0_pqg(v158, &v164, 0);
        DSA_SIG_get0(v155, &v166, &v167);
        BN_mod_exp(ptrd, v168, *(_DWORD *)(a1 + 176), v164, v146);
        BN_mod_exp(v152, v165, v166, v164, v146);
        BN_mod_mul(ptrd, ptrd, v152, v164, v146);
        sub_26970((int)ptrd, (int)ptrd);
        v159 = BN_cmp(ptrd, v167);
        BN_free(ptrd);
        BN_free(v152);
        BN_CTX_free(v146);
        BN_free(*(_DWORD *)(a1 + 176));
        *(_DWORD *)(a1 + 176) = 0;
        DSA_SIG_free(v155);
        if ( v159 )
        {
          sub_65D40(5, "crypto_iff: identity not verified");
          v18 = 270;
          goto LABEL_19;
        }
        v98 = *(_DWORD *)(a1 + 136);
        v99 = *(_DWORD *)(a1 + 152);
        v123 = bswap32(v8[3]);
        *(_DWORD *)(a1 + 300) &= ~0x80u;
        *(_DWORD *)(a1 + 136) = v98 | 0x200;
        sub_6D00C(v169, 256, "iff %s fs %u", v99, v123);
        goto LABEL_73;
      }
      if ( v12 > v23 )
      {
LABEL_28:
        if ( v12 == -2113404928 )
        {
          v17 = sub_26A5C((unsigned int *)(v7 + 4 * (v5 / 4)), 0, a1);
          if ( v17 != 256 )
            goto LABEL_18;
          v48 = *(_DWORD *)(a1 + 172);
          if ( !v48 )
          {
            sub_65D40(5, "crypto_gq: scheme unavailable");
            v18 = 270;
            goto LABEL_19;
          }
          v49 = bswap32(v8[3]);
          if ( v49 < *(_DWORD *)(v48 + 12) )
          {
            v18 = 259;
            sub_65D40(5, "crypto_gq: invalid filestamp %u", v49);
            goto LABEL_19;
          }
          v50 = EVP_PKEY_get0_RSA(*(_DWORD *)(v48 + 4));
          if ( !v50 )
          {
            sub_65D40(5, "crypto_gq: defective key");
            v18 = 260;
            goto LABEL_19;
          }
          v51 = RSA_get0_key(v50, &v165, 0, &v166);
          if ( !*(_DWORD *)(a1 + 176) )
          {
            sub_65D40(5, "crypto_gq: missing challenge");
            v18 = 270;
            goto LABEL_19;
          }
          v142 = BN_CTX_new(v51);
          ptr = (void *)BN_new();
          v52 = BN_new();
          v53 = bswap32(v8[4]);
          v164 = v8 + 5;
          v149 = v52;
          v54 = d2i_DSA_SIG(0, &v164, v53);
          v153 = v54;
          if ( !v54 )
          {
            v18 = 271;
            BN_CTX_free(v142);
            BN_free(ptr);
            v105 = BN_free(v149);
            v106 = ERR_get_error(v105);
            v107 = (const char *)ERR_error_string(v106, 0);
            sub_65D40(3, "crypto_gq: %s", v107);
            goto LABEL_19;
          }
          DSA_SIG_get0(v54, &v167, &v168);
          v55 = *(_DWORD *)(a1 + 180);
          if ( !v55 )
          {
            sub_65D40(5, "crypto_gq: missing group key");
            v18 = 270;
            goto LABEL_19;
          }
          BN_mod_exp(v149, v55, *(_DWORD *)(a1 + 176), v165, v142);
          BN_mod_exp(ptr, v167, v166, v165, v142);
          BN_mod_mul(ptr, v149, ptr, v165, v142);
          sub_26970((int)ptr, (int)ptr);
          v156 = BN_cmp(ptr, v168);
          BN_CTX_free(v142);
          BN_free(ptr);
          BN_free(v149);
          BN_free(*(_DWORD *)(a1 + 176));
          *(_DWORD *)(a1 + 176) = 0;
          DSA_SIG_free(v153);
          if ( v156 )
          {
            sub_65D40(5, "crypto_gq: identity not verified");
            v18 = 270;
            goto LABEL_19;
          }
          v56 = *(_DWORD *)(a1 + 136);
          v57 = *(_DWORD *)(a1 + 152);
          v121 = bswap32(v8[3]);
          *(_DWORD *)(a1 + 300) &= ~0x80u;
          *(_DWORD *)(a1 + 136) = v56 | 0x200;
          sub_6D00C(v169, 256, "gq %s fs %u", v57, v121);
LABEL_73:
          sub_432D0(a1 + 16, v169);
          goto LABEL_74;
        }
        if ( v12 == -2113339392 )
        {
          v17 = sub_26A5C((unsigned int *)(v7 + 4 * (v5 / 4)), 0, a1);
          if ( v17 != 256 )
            goto LABEL_18;
          v24 = *(_DWORD *)(a1 + 172);
          if ( !v24 )
          {
            sub_65D40(5, "crypto_mv: scheme unavailable");
            v18 = 270;
            goto LABEL_19;
          }
          v25 = bswap32(v8[3]);
          if ( v25 != *(_DWORD *)(v24 + 12) )
          {
            v18 = 259;
            sub_65D40(5, "crypto_mv: invalid filestamp %u", v25);
            goto LABEL_19;
          }
          v88 = EVP_PKEY_get0_DSA(*(_DWORD *)(v24 + 4));
          ptrb = (void *)v88;
          if ( !v88 )
          {
            sub_65D40(5, "crypto_mv: defective key");
            v18 = 260;
            goto LABEL_19;
          }
          DSA_get0_pqg(v88, &v163, 0);
          v89 = DSA_get0_key(ptrb, &v164, &v165);
          if ( !*(_DWORD *)(a1 + 176) )
          {
            sub_65D40(5, "crypto_mv: missing challenge");
            v18 = 270;
            goto LABEL_19;
          }
          v145 = BN_CTX_new(v89);
          v157 = BN_new();
          ptrc = (void *)BN_new();
          v90 = BN_new();
          v91 = bswap32(v8[4]);
          v162 = v8 + 5;
          v151 = v90;
          v92 = d2i_DSAparams(0, &v162, v91);
          v154 = v92;
          if ( !v92 )
          {
            v118 = ERR_get_error(0);
            v119 = (const char *)ERR_error_string(v118, 0);
            sub_65D40(3, "crypto_mv: %s", v119);
            v18 = 271;
            goto LABEL_19;
          }
          DSA_get0_pqg(v92, &v166, &v167);
          BN_mod_exp(ptrc, v167, v164, v163, v145);
          BN_mod_exp(v151, v168, v165, v163, v145);
          BN_mod_mul(ptrc, ptrc, v151, v163, v145);
          BN_mod_mul(ptrc, ptrc, v166, v163, v145);
          v160 = BN_cmp(ptrc, *(_DWORD *)(a1 + 176));
          BN_CTX_free(v145);
          BN_free(v157);
          BN_free(ptrc);
          BN_free(v151);
          BN_free(*(_DWORD *)(a1 + 176));
          *(_DWORD *)(a1 + 176) = 0;
          DSA_free(v154);
          if ( v160 )
          {
            sub_65D40(5, "crypto_mv: identity not verified");
            v18 = 270;
            goto LABEL_19;
          }
          v93 = *(_DWORD *)(a1 + 136);
          v94 = *(_DWORD *)(a1 + 152);
          v122 = bswap32(v8[3]);
          *(_DWORD *)(a1 + 300) &= ~0x80u;
          *(_DWORD *)(a1 + 136) = v93 | 0x200;
          sub_6D00C(v169, 256, "mv %s fs %u", v94, v122);
          goto LABEL_73;
        }
LABEL_44:
        if ( (v12 & 0xC0000000) != 0 )
          goto LABEL_52;
LABEL_45:
        if ( !*(_DWORD *)(a1 + 232) )
        {
          v87 = (void *)sub_64B04(0, (unsigned __int16)v9, 0, 0);
          *(_DWORD *)(a1 + 232) = memcpy(v87, (const void *)(v7 + 4 * (v5 / 4)), (unsigned __int16)v9);
          goto LABEL_74;
        }
        goto LABEL_46;
      }
LABEL_16:
      if ( v12 == -2113536000 )
      {
        v17 = sub_26A5C((unsigned int *)(v7 + 4 * (v5 / 4)), 0, a1);
        if ( v17 != 256 )
          goto LABEL_18;
        v68 = sub_28530((unsigned int *)(v7 + 4 * (v5 / 4)));
        v69 = v68;
        if ( !v68 )
        {
LABEL_135:
          v18 = 269;
          v9 = bswap32(*v8);
          goto LABEL_20;
        }
        v70 = *(_DWORD *)(v68 + 16);
        *(_DWORD *)(a1 + 300) &= ~0x80u;
        v71 = *(_DWORD *)(v68 + 48);
        v72 = v70;
        v150 = v70;
        v144 = v71;
        v73 = *(_DWORD *)(v69 + 52);
        v74 = *(void **)(v69 + 4);
        *(_DWORD *)(a1 + 136) |= 0x2000u;
        v125 = v73;
        ptrf = v74;
        v75 = OBJ_nid2ln(v72);
        sub_6D00C(v169, 256, "sign %s %s 0x%x %s (%u) fs %u", v144, v125, ptrf, v75, v150, bswap32(v8[3]));
        goto LABEL_73;
      }
      goto LABEL_44;
    }
    HIWORD(v23) = -32253;
    if ( v12 == v23 )
    {
LABEL_38:
      v17 = sub_26A5C((unsigned int *)(v7 + 4 * (v5 / 4)), (unsigned int *)(a1 + 184), a1);
      if ( v17 != 256 )
        goto LABEL_18;
      v26 = EVP_PKEY_size(dword_BA8EC);
      if ( v26 != v6
        || (v147 = EVP_PKEY_get0_RSA(dword_BA8EC), v100 = RSA_size(), (ptre = (unsigned int *)malloc(v100)) == 0) )
      {
        v18 = 267;
        v9 = bswap32(*v8);
        goto LABEL_20;
      }
      if ( RSA_private_decrypt(v6, v8 + 5, ptre, v147, 4) != 4 )
      {
        v18 = 267;
        free(ptre);
        v9 = bswap32(*v8);
        goto LABEL_20;
      }
      v111 = *ptre;
      free(ptre);
      sub_33EBC(a1);
      v112 = bswap32(v111);
      v113 = v8[2];
      v114 = v132 - 1;
      v115 = v8[3];
      if ( (unsigned int)(v132 - 1) <= 1 )
        v114 = *(_DWORD *)(a1 + 164);
      v116 = *(_DWORD *)(a1 + 300) & 0xFFFFFF7F;
      *(_DWORD *)(a1 + 136) |= 0x800u;
      if ( (unsigned int)(v132 - 1) <= 1 )
        v112 ^= v114;
      *(_DWORD *)(a1 + 300) = v116;
      *(_DWORD *)(a1 + 168) = v112;
      v117 = v112;
      v6 = v26;
      sub_6D00C(v169, 256, "cook %x ts %u fs %u", v117, bswap32(v113), bswap32(v115));
      goto LABEL_73;
    }
    if ( v12 == -2113667072 )
      goto LABEL_67;
    if ( v12 != -2113798144 )
    {
      if ( (v12 & 0xC0000000) != 0 )
        goto LABEL_52;
      goto LABEL_45;
    }
LABEL_46:
    v5 += (v10 + 3) & 0xFFFFFFFC;
    v4 = v3 - v5;
    if ( v3 - v5 <= 24 )
      return 256;
  }
}
