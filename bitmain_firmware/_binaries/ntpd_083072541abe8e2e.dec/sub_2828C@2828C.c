int __fastcall sub_2828C(int a1, int a2)
{
  int v3; // r12
  unsigned int v4; // r0
  size_t v5; // r7
  int v6; // r8
  int v7; // r6
  unsigned int *v8; // r4
  unsigned int v9; // r10
  int v10; // r5
  unsigned int v11; // r3
  unsigned __int16 v12; // lr
  _BOOL4 v13; // r2
  int v14; // r10
  int v15; // r5
  const char *v16; // r0
  unsigned int v18; // r2
  int v19; // r3
  const char *v20; // r1
  int v21; // r10
  void *v22; // r0
  void *v23; // r0
  _DWORD *v24; // r0
  int v25; // r3
  int v26; // r0
  bool v27; // zf
  int v28; // r2
  int v29; // r2
  int v30; // r3
  unsigned int v31; // r2
  unsigned int v32; // r12
  unsigned __int64 *v33; // r0
  __int64 v34; // r2
  unsigned int v35; // r1
  int v36; // lr
  int v37; // r4
  unsigned __int64 v38; // r2
  int v39; // r3
  int v40; // r0
  int v41; // r0
  int v42; // r0
  unsigned int v43; // r2
  int v44; // r0
  int v45; // r1
  int v46; // r12
  const char *v47; // r3
  unsigned int v48; // r10
  int v49; // r0
  int digestbyname; // r3
  __int16 v51; // r2
  int v52; // r2
  void *v53; // r0
  void *v54; // r0
  void *v55; // r0
  int v56; // r0
  int v57; // r3
  int v58; // r2
  int v59; // r4
  int v60; // r0
  void *v61; // r0
  int v62; // r10
  void *v63; // r0
  int v64; // r0
  int v65; // r3
  unsigned int v66; // r2
  int v67; // r0
  bool v68; // cc
  int v69; // r0
  int v70; // r3
  unsigned int v71; // r10
  _DWORD *v72; // r1
  int v73; // r0
  int v74; // r2
  const char *v75; // r3
  int v76; // r1
  const char *v77; // r0
  size_t v78; // r0
  unsigned int *v79; // r10
  unsigned int v80; // r7
  unsigned int v81; // r7
  int v82; // r3
  unsigned int v83; // r1
  unsigned int v84; // r2
  unsigned int v85; // r0
  unsigned int v86; // r3
  int v87; // r0
  int v88; // r0
  unsigned int v89; // r2
  int v90; // r12
  const char *v91; // r3
  int v92; // r0
  int v93; // r0
  int v94; // r0
  unsigned int v95; // r2
  int v96; // r0
  int v97; // r12
  const char *v98; // r3
  int v99; // r2
  int v100; // r1
  int v101; // r2
  const char *v102; // r3
  int v103; // r10
  const char *v104; // r0
  int v105; // r0
  int v106; // r0
  const char *v107; // r0
  int v108; // r0
  int error; // r0
  const char *v110; // r0
  int v111; // r0
  const char *v112; // r0
  unsigned int v113; // r2
  unsigned int v114; // [sp+0h] [bp-184h]
  unsigned int v115; // [sp+0h] [bp-184h]
  unsigned int v116; // [sp+0h] [bp-184h]
  int v117; // [sp+1Ch] [bp-168h]
  int v118; // [sp+1Ch] [bp-168h]
  int v119; // [sp+1Ch] [bp-168h]
  int v120; // [sp+1Ch] [bp-168h]
  int v121; // [sp+1Ch] [bp-168h]
  int v122; // [sp+1Ch] [bp-168h]
  const char *v123; // [sp+1Ch] [bp-168h]
  int v124; // [sp+1Ch] [bp-168h]
  unsigned __int16 v125; // [sp+24h] [bp-160h]
  int v126; // [sp+24h] [bp-160h]
  const char *v127; // [sp+24h] [bp-160h]
  int v128; // [sp+24h] [bp-160h]
  unsigned int v129; // [sp+28h] [bp-15Ch]
  int v131; // [sp+38h] [bp-14Ch]
  int v132; // [sp+40h] [bp-144h]
  int v133; // [sp+40h] [bp-144h]
  int v134; // [sp+40h] [bp-144h]
  int v135; // [sp+40h] [bp-144h]
  int v136; // [sp+40h] [bp-144h]
  int v137; // [sp+40h] [bp-144h]
  int v138; // [sp+40h] [bp-144h]
  const char *v139; // [sp+40h] [bp-144h]
  int v140; // [sp+44h] [bp-140h]
  int v141; // [sp+44h] [bp-140h]
  int v142; // [sp+44h] [bp-140h]
  int v143; // [sp+44h] [bp-140h]
  int v144; // [sp+48h] [bp-13Ch]
  const char *v145; // [sp+48h] [bp-13Ch]
  int v146; // [sp+48h] [bp-13Ch]
  int v147; // [sp+48h] [bp-13Ch]
  int v148; // [sp+4Ch] [bp-138h]
  int v149; // [sp+4Ch] [bp-138h]
  int v150; // [sp+4Ch] [bp-138h]
  int v151; // [sp+4Ch] [bp-138h]
  int v152; // [sp+50h] [bp-134h]
  int v153; // [sp+50h] [bp-134h]
  int v154; // [sp+50h] [bp-134h]
  int v155; // [sp+54h] [bp-130h]
  int v156; // [sp+5Ch] [bp-128h] BYREF
  unsigned int *v157; // [sp+60h] [bp-124h] BYREF
  unsigned int *v158; // [sp+64h] [bp-120h] BYREF
  unsigned int *v159; // [sp+68h] [bp-11Ch] BYREF
  int v160; // [sp+6Ch] [bp-118h] BYREF
  int v161; // [sp+70h] [bp-114h] BYREF
  int v162; // [sp+74h] [bp-110h] BYREF
  int v163; // [sp+78h] [bp-10Ch] BYREF
  _BYTE v164[256]; // [sp+7Ch] [bp-108h] BYREF

  v3 = *(_DWORD *)(a2 + 84);
  v4 = v3 - 48;
  v131 = *(_BYTE *)(a2 + 88) & 7;
  if ( v3 - 48 > 24 )
  {
    v5 = 0;
    v6 = a2 + 88;
    v7 = 48;
    v129 = 0;
    do
    {
      v8 = (unsigned int *)(v6 + 4 * (v7 / 4));
      v9 = bswap32(*v8);
      v10 = (unsigned __int16)v9;
      v11 = v9 & 0xFFFF0000;
      v12 = bswap32(v8[1]);
      v13 = (unsigned __int16)v9 <= 7u;
      if ( (((v9 & 0xFFFF0000) >> 24) & 0x3F) != 2 )
        v13 = 1;
      v125 = v12;
      v117 = v12;
      if ( v13 )
      {
        v11 = v9 & 0xBFFF0000 | 0x40000000;
        ++sys_badlength;
      }
      if ( v4 < (unsigned __int16)v9 )
        return 257;
      if ( (unsigned __int16)v9 <= 0x17u )
      {
        if ( v11 == -2113863680 )
          goto LABEL_58;
        if ( v11 <= 0x82010000 )
        {
          if ( v11 == 33947648 )
            goto LABEL_165;
          if ( v11 > 0x2060000 )
          {
            if ( v11 == 34078720 || v11 == 34144256 || v11 == 34013184 )
            {
LABEL_165:
              v118 = a1 + 16;
              v15 = 257;
              goto LABEL_19;
            }
            goto LABEL_43;
          }
          if ( v11 == 33685504 || v11 == 33751040 )
            goto LABEL_165;
          goto LABEL_52;
        }
        if ( v11 == -2113601536 )
        {
LABEL_69:
          v26 = sub_26630((unsigned int *)(v6 + 4 * (v7 / 4)), 0, a1);
          v27 = v5 == 12;
          if ( v5 == 12 )
            v27 = v26 == 256;
          v21 = v26;
          v28 = !v27;
          if ( v27 )
          {
            if ( sys_leap != 3 )
              sub_2DE9C(bswap32(v8[5]), *(_DWORD *)(a2 + 72), v28);
            v5 = 12;
            v29 = v8[3];
            tai_leap = v8[2];
            dword_10829C = v29;
            sub_279FC();
            sub_262E8((__int16 *)&byte_9[5], a1, (int)"%d seconds", bswap32(v8[5]));
            v30 = *(_DWORD *)(a1 + 300);
            *(_DWORD *)(a1 + 136) |= 0x4000u;
            v31 = v8[3];
            *(_DWORD *)(a1 + 300) = v30 & 0xFFFFFF7F;
            sub_6C054(
              v164,
              256,
              "leap TAI offset %d at %u expire %u fs %u",
              bswap32(v8[5]),
              bswap32(v8[6]),
              bswap32(v8[7]),
              bswap32(v31));
            sub_42514(a1 + 16, v164);
            v3 = *(_DWORD *)(a2 + 84);
            goto LABEL_46;
          }
          if ( v26 != 256 )
            goto LABEL_39;
          goto LABEL_60;
        }
        LOWORD(v18) = 0;
        if ( v11 <= 0x82050000 )
        {
          HIWORD(v18) = -32253;
          if ( v11 == v18 )
          {
LABEL_38:
            v21 = sub_26630((unsigned int *)(v6 + 4 * (v7 / 4)), (unsigned int *)(a1 + 184), a1);
            if ( v21 != 256 )
              goto LABEL_39;
            v135 = EVP_PKEY_size(dword_B98EC);
            if ( v135 != v5
              || (v122 = EVP_PKEY_get0_RSA(dword_B98EC), v78 = RSA_size(), (v79 = (unsigned int *)malloc(v78)) == 0) )
            {
              v118 = a1 + 16;
              v15 = 267;
              v9 = bswap32(*v8);
              goto LABEL_19;
            }
            if ( RSA_private_decrypt(v5, v8 + 5, v79, v122, 4) != 4 )
            {
              v118 = a1 + 16;
              free(v79);
              v15 = 267;
              v9 = bswap32(*v8);
              goto LABEL_19;
            }
            v80 = *v79;
            free(v79);
            sub_3394C(a1);
            v81 = bswap32(v80);
            v82 = v131 - 1;
            if ( (unsigned int)(v131 - 1) <= 1 )
              v82 = *(_DWORD *)(a1 + 164);
            v83 = bswap32(v8[2]);
            v84 = bswap32(v8[3]);
            v85 = *(_DWORD *)(a1 + 300) & 0xFFFFFF7F;
            *(_DWORD *)(a1 + 136) |= 0x800u;
            if ( (unsigned int)(v131 - 1) <= 1 )
              v81 ^= v82;
            *(_DWORD *)(a1 + 300) = v85;
            *(_DWORD *)(a1 + 168) = v81;
            v86 = v81;
            v5 = v135;
            sub_6C054(v164, 256, "cook %x ts %u fs %u", v86, v83, v84);
            goto LABEL_110;
          }
          if ( v11 == -2113667072 )
          {
LABEL_79:
            v21 = sub_26630((unsigned int *)(v6 + 4 * (v7 / 4)), (unsigned int *)(a1 + 208), a1);
            if ( v21 != 256 )
              goto LABEL_39;
            if ( (*(_BYTE *)(a1 + 72) & 0x20) == 0 || *(unsigned __int16 *)(a1 + 132) == v117 )
            {
              v32 = v8[2];
              if ( v32 )
              {
                v33 = *(unsigned __int64 **)(a1 + 220);
                if ( !v33 )
                {
                  v33 = (unsigned __int64 *)sub_63BA4(0, 8, 0, 0);
                  v32 = v8[2];
                  *(_DWORD *)(a1 + 220) = v33;
                }
                v34 = *(_QWORD *)(v8 + 5);
                v35 = v8[3];
                v36 = *(_DWORD *)(a1 + 300);
                v37 = *(_DWORD *)(a1 + 136);
                v38 = _byteswap_uint64(__PAIR64__(v34, HIDWORD(v34)));
                *(_DWORD *)(a1 + 208) = v32;
                *(_DWORD *)(a1 + 212) = v35;
                *v33 = v38;
                *(_DWORD *)(a1 + 160) = v38;
                *(_DWORD *)(a1 + 136) = v37 | 0x1000;
                *(_DWORD *)(a1 + 300) = v36 & 0xFFFFFF7F;
                sub_6C054(
                  v164,
                  256,
                  "auto seq %d key %x ts %u fs %u",
                  HIDWORD(v38),
                  (_DWORD)v38,
                  bswap32(v32),
                  bswap32(v35));
                goto LABEL_110;
              }
            }
            goto LABEL_60;
          }
          if ( v11 == -2113798144 )
            goto LABEL_46;
          goto LABEL_43;
        }
        HIWORD(v18) = -32249;
        if ( v11 == v18 )
        {
LABEL_65:
          v118 = a1 + 16;
          v14 = sub_26630((unsigned int *)(v6 + 4 * (v7 / 4)), 0, a1);
          if ( v14 != 256 )
            goto LABEL_18;
          v25 = *(_DWORD *)(a1 + 172);
          if ( !v25 )
          {
            sub_64E00(5, "crypto_iff: scheme unavailable");
            goto LABEL_163;
          }
          if ( bswap32(v8[3]) != *(_DWORD *)(v25 + 12) )
          {
            v20 = "crypto_iff: invalid filestamp %u";
            goto LABEL_33;
          }
          v87 = EVP_PKEY_get0_DSA(*(_DWORD *)(v25 + 4));
          v149 = v87;
          if ( !v87 )
          {
            sub_64E00(5, "crypto_iff: defective key");
LABEL_161:
            v15 = 260;
            v9 = bswap32(*v8);
            goto LABEL_19;
          }
          if ( !*(_DWORD *)(a1 + 176) )
          {
            sub_64E00(5, "crypto_iff: missing challenge");
            goto LABEL_163;
          }
          v142 = BN_CTX_new(v87);
          v146 = BN_new();
          v88 = BN_new();
          v89 = v8[4];
          v136 = v88;
          v158 = v8 + 5;
          v153 = d2i_DSA_SIG(0, &v158, bswap32(v89));
          if ( !v153 )
          {
            v15 = 271;
            BN_free(v136);
            BN_free(v146);
            v108 = BN_CTX_free(v142);
            error = ERR_get_error(v108);
            v110 = (const char *)ERR_error_string(error, 0);
            sub_64E00(3, "crypto_iff: %s", v110);
            v9 = bswap32(*v8);
            goto LABEL_19;
          }
          DSA_get0_key(v149, &v163, 0);
          DSA_get0_pqg(v149, &v159, 0);
          DSA_SIG_get0(v153, &v161, &v162);
          BN_mod_exp(v136, v163, *(_DWORD *)(a1 + 176), v159, v142);
          BN_mod_exp(v146, v160, v161, v159, v142);
          BN_mod_mul(v136, v136, v146, v159, v142);
          sub_26540(v136, v136);
          v150 = BN_cmp(v136, v162);
          BN_free(v136);
          BN_free(v146);
          BN_CTX_free(v142);
          BN_free(*(_DWORD *)(a1 + 176));
          *(_DWORD *)(a1 + 176) = 0;
          DSA_SIG_free(v153);
          if ( v150 )
          {
            sub_64E00(5, "crypto_iff: identity not verified");
            goto LABEL_163;
          }
          v90 = *(_DWORD *)(a1 + 136);
          v91 = *(const char **)(a1 + 152);
          v115 = bswap32(v8[3]);
          *(_DWORD *)(a1 + 300) &= ~0x80u;
          *(_DWORD *)(a1 + 136) = v90 | 0x200;
          sub_6C054(v164, 256, "iff %s fs %u", v91, v115);
          goto LABEL_110;
        }
        if ( v11 <= v18 )
          goto LABEL_16;
      }
      else
      {
        v5 = bswap32(v8[4]);
        v129 = bswap32(v8[3]);
        if ( !v5 || (unsigned int)(unsigned __int16)v9 - 24 < v5 )
          return 257;
        if ( v11 == -2113667072 )
          goto LABEL_79;
        if ( v11 <= 0x82040000 )
        {
          if ( v11 == -2113863680 )
            goto LABEL_58;
          if ( v11 > 0x82010000 )
          {
            if ( v11 == -2113798144 )
            {
              v21 = sub_26630((unsigned int *)(v6 + 4 * (v7 / 4)), 0, a1);
              if ( v21 != 256 )
              {
LABEL_39:
                v15 = v21;
                v118 = a1 + 16;
                v9 = bswap32(*v8);
                goto LABEL_19;
              }
              v62 = sub_2816C((unsigned int *)(v6 + 4 * (v7 / 4)));
              if ( !v62 )
              {
                v118 = a1 + 16;
                v15 = 269;
                v9 = bswap32(*v8);
                goto LABEL_19;
              }
              v63 = *(void **)(a1 + 152);
              if ( v63 )
                free(v63);
              v64 = sub_63D08(*(_DWORD *)(v62 + 52));
              v65 = *(_DWORD *)(a1 + 156);
              *(_DWORD *)(a1 + 152) = v64;
              *(_DWORD *)(a1 + 156) = v62;
              v133 = v65;
              if ( strcmp(*(const char **)(v62 + 48), *(const char **)(v62 + 52)) )
                goto LABEL_121;
              if ( (*(_DWORD *)(v62 + 4) & 1) != 0 )
              {
                v99 = *(_DWORD *)(a1 + 136);
                v100 = *(_DWORD *)(v62 + 56);
                v27 = *(_DWORD *)(a1 + 80) == 0;
                *(_DWORD *)(a1 + 136) = v99 | 0x100;
                *(_DWORD *)(a1 + 180) = v100;
                if ( v27 || (v99 & 0xF0) == 0 )
                  *(_DWORD *)(a1 + 136) = v99 | 0x300;
LABEL_121:
                if ( v133 )
                {
                  v66 = *(_DWORD *)(v133 + 68);
                  v163 = *(_DWORD *)(v133 + 72);
                  v67 = d2i_X509(0, &v163, bswap32(v66));
                  if ( !v67 )
                  {
                    v118 = a1 + 16;
                    v15 = 269;
                    v9 = bswap32(*v8);
                    *(_DWORD *)(v133 + 4) |= 0x80u;
                    goto LABEL_19;
                  }
                  v121 = v67;
                  v68 = X509_verify(v67, *(_DWORD *)(v62 + 8)) <= 0;
                  v69 = v121;
                  if ( v68 )
                  {
                    v118 = a1 + 16;
                    X509_free(v69);
                    v15 = 265;
                    v9 = bswap32(*v8);
                    *(_DWORD *)(v133 + 4) |= 0x80u;
                    goto LABEL_19;
                  }
                  X509_free(v121);
                  if ( sub_268A4((unsigned __int8 *)(v133 + 28), (unsigned __int8 *)(v62 + 28)) < 0 )
                  {
                    v70 = *(_DWORD *)(v133 + 4);
LABEL_127:
                    v71 = *v8;
                    *(_DWORD *)(v133 + 4) = v70 | 0x80;
                    v118 = a1 + 16;
                    v15 = 266;
                    v9 = bswap32(v71);
                    goto LABEL_19;
                  }
                  if ( sub_268A4((unsigned __int8 *)(v133 + 28), (unsigned __int8 *)(v62 + 38)) > 0 )
                  {
                    v70 = *(_DWORD *)(v133 + 4);
                    goto LABEL_127;
                  }
                  *(_DWORD *)(v133 + 4) |= 2u;
                }
              }
              if ( !*(_DWORD *)(a1 + 140) )
              {
                v113 = *(_DWORD *)(v62 + 68);
                v156 = *(_DWORD *)(v62 + 72);
                v124 = d2i_X509(0, &v156, bswap32(v113));
                *(_DWORD *)(a1 + 140) = X509_get_pubkey(v124);
                X509_free(v124);
              }
              v101 = *(_DWORD *)(v62 + 16);
              v139 = *(const char **)(v62 + 48);
              v102 = *(const char **)(v62 + 52);
              *(_DWORD *)(a1 + 300) &= ~0x80u;
              v128 = v101;
              v123 = v102;
              v103 = *(_DWORD *)(v62 + 4);
              v104 = (const char *)OBJ_nid2ln(v101);
              sub_6C054(v164, 256, "cert %s %s 0x%x %s (%u) fs %u", v139, v123, v103, v104, v128, bswap32(v8[3]));
LABEL_110:
              sub_42514(a1 + 16, v164);
              v3 = *(_DWORD *)(a2 + 84);
              goto LABEL_46;
            }
            if ( v11 == -2113732608 )
              goto LABEL_38;
            goto LABEL_43;
          }
LABEL_52:
          if ( v11 == 33619968 )
          {
            if ( (*(_DWORD *)(a1 + 136) & 0x100) != 0 )
              goto LABEL_145;
            v22 = *(void **)(a1 + 232);
            if ( v22 )
            {
              if ( *(unsigned __int16 *)(a1 + 132) != v12 )
              {
LABEL_145:
                v118 = a1 + 16;
                v15 = 271;
                goto LABEL_19;
              }
              free(v22);
            }
            v23 = (void *)sub_63BA4(0, (unsigned __int16)v9, 0, 0);
            v24 = memcpy(v23, (const void *)(v6 + 4 * (v7 / 4)), (unsigned __int16)v9);
            v24[1] = bswap32(*(unsigned __int16 *)(a1 + 60));
            *(_DWORD *)(a1 + 232) = v24;
LABEL_58:
            if ( !*(_DWORD *)(a1 + 136) )
            {
              if ( (unsigned __int16)v9 <= 0x17u )
                sub_6ECC0("ntp_crypto.c", 561, 2, "len >= (6 * 4)");
              if ( v5 - 1 >= 0x200 || (unsigned int)(unsigned __int16)v9 - 24 < v5 )
              {
                v118 = a1 + 16;
                v15 = 257;
                v9 = bswap32(*v8);
                goto LABEL_19;
              }
              if ( (crypto_flags & 0x10) != 0 )
              {
                if ( (v129 & 0x10) == 0 )
                  goto LABEL_141;
                v129 |= 0x2300u;
              }
              else if ( (unsigned int)(v131 - 1) <= 1 )
              {
                if ( (crypto_flags & 0xF0) != 0 )
                {
                  if ( (v129 & 0xF0) == 0 )
                    goto LABEL_141;
                }
                else if ( (v129 & 0xF0) != 0 )
                {
LABEL_141:
                  v118 = a1 + 16;
                  v15 = 262;
                  v9 = bswap32(*v8);
                  goto LABEL_19;
                }
              }
              v48 = HIWORD(v129);
              v49 = OBJ_nid2sn(HIWORD(v129));
              digestbyname = EVP_get_digestbyname(v49);
              if ( !digestbyname )
              {
                v118 = a1 + 16;
                v15 = 261;
                v9 = bswap32(*v8);
                goto LABEL_19;
              }
              v51 = v117;
              v119 = digestbyname;
              *(_WORD *)(a1 + 132) = v51;
              if ( v131 == 4 )
                v129 |= 0x1000u;
              v52 = v129;
              if ( (v129 & 2) == 0 )
              {
                v52 = v129 | 0x4000;
                v129 |= 0x4000u;
              }
              RAND_bytes(a1 + 164, 4, v52);
              v53 = *(void **)(a1 + 148);
              *(_DWORD *)(a1 + 136) = v129;
              *(_DWORD *)(a1 + 144) = v119;
              if ( v53 )
                free(v53);
              v54 = (void *)sub_63BA4(0, v5 + 1, 0, 0);
              *(_DWORD *)(a1 + 148) = v54;
              memcpy(v54, v8 + 5, v5);
              *(_BYTE *)(*(_DWORD *)(a1 + 148) + v5) = 0;
              v55 = *(void **)(a1 + 152);
              if ( v55 )
                free(v55);
              v56 = sub_63D08(*(_DWORD *)(a1 + 148));
              v57 = *(unsigned __int16 *)(a1 + 60);
              v58 = *(_DWORD *)(a1 + 148);
              *(_DWORD *)(a1 + 152) = v56;
              v59 = *(unsigned __int16 *)(a1 + 132);
              v126 = v57;
              v120 = v58;
              v60 = OBJ_nid2ln(v48);
              sub_6C054(v164, 256, "assoc %d %d host %s %s", v126, v59, v120, v60);
              goto LABEL_110;
            }
            if ( *(unsigned __int16 *)(a1 + 132) != v117 )
            {
              v118 = a1 + 16;
              v15 = 271;
              v9 = bswap32(*v8);
              goto LABEL_19;
            }
LABEL_60:
            v3 = *(_DWORD *)(a2 + 84);
            goto LABEL_46;
          }
          goto LABEL_43;
        }
        if ( v11 == -2113470464 )
          goto LABEL_65;
        if ( v11 <= 0x82070000 )
        {
          if ( v11 == -2113601536 )
            goto LABEL_69;
LABEL_16:
          if ( v11 == -2113536000 )
          {
            v118 = a1 + 16;
            v14 = sub_26630((unsigned int *)(v6 + 4 * (v7 / 4)), 0, a1);
            if ( v14 != 256 )
              goto LABEL_18;
            v72 = (_DWORD *)sub_2816C((unsigned int *)(v6 + 4 * (v7 / 4)));
            if ( !v72 )
            {
              v15 = 269;
              v9 = bswap32(*v8);
              goto LABEL_19;
            }
            v73 = *(_DWORD *)(a1 + 300);
            v74 = v72[4];
            v145 = (const char *)v72[12];
            v75 = (const char *)v72[13];
            v76 = v72[1];
            *(_DWORD *)(a1 + 136) |= 0x2000u;
            *(_DWORD *)(a1 + 300) = v73 & 0xFFFFFF7F;
            v141 = v74;
            v127 = v75;
            v134 = v76;
            v77 = (const char *)OBJ_nid2ln(v74);
            sub_6C054(v164, 256, "sign %s %s 0x%x %s (%u) fs %u", v145, v127, v134, v77, v141, bswap32(v8[3]));
LABEL_130:
            sub_42514(v118, v164);
            goto LABEL_60;
          }
          goto LABEL_43;
        }
      }
      if ( v11 == -2113404928 )
      {
        v118 = a1 + 16;
        v14 = sub_26630((unsigned int *)(v6 + 4 * (v7 / 4)), 0, a1);
        if ( v14 != 256 )
        {
LABEL_18:
          v15 = v14;
          v9 = bswap32(*v8);
          goto LABEL_19;
        }
        v39 = *(_DWORD *)(a1 + 172);
        if ( !v39 )
        {
          sub_64E00(5, "crypto_gq: scheme unavailable");
          goto LABEL_163;
        }
        if ( bswap32(v8[3]) < *(_DWORD *)(v39 + 12) )
        {
          v20 = "crypto_gq: invalid filestamp %u";
LABEL_33:
          v15 = 259;
          sub_64E00(5, v20);
          v9 = bswap32(*v8);
          goto LABEL_19;
        }
        v40 = EVP_PKEY_get0_RSA(*(_DWORD *)(v39 + 4));
        if ( !v40 )
        {
          sub_64E00(5, "crypto_gq: defective key");
          goto LABEL_161;
        }
        v41 = RSA_get0_key(v40, &v160, 0, &v161);
        if ( !*(_DWORD *)(a1 + 176) )
        {
          sub_64E00(5, "crypto_gq: missing challenge");
          goto LABEL_163;
        }
        v140 = BN_CTX_new(v41);
        v132 = BN_new();
        v42 = BN_new();
        v43 = v8[4];
        v144 = v42;
        v159 = v8 + 5;
        v44 = d2i_DSA_SIG(0, &v159, bswap32(v43));
        v148 = v44;
        if ( !v44 )
        {
          v15 = 271;
          BN_CTX_free(v140);
          BN_free(v132);
          v105 = BN_free(v144);
          v106 = ERR_get_error(v105);
          v107 = (const char *)ERR_error_string(v106, 0);
          sub_64E00(3, "crypto_gq: %s", v107);
          v9 = bswap32(*v8);
          goto LABEL_19;
        }
        DSA_SIG_get0(v44, &v162, &v163);
        v45 = *(_DWORD *)(a1 + 180);
        if ( !v45 )
        {
          sub_64E00(5, "crypto_gq: missing group key");
          goto LABEL_163;
        }
        BN_mod_exp(v144, v45, *(_DWORD *)(a1 + 176), v160, v140);
        BN_mod_exp(v132, v162, v161, v160, v140);
        BN_mod_mul(v132, v144, v132, v160, v140);
        sub_26540(v132, v132);
        v152 = BN_cmp(v132, v163);
        BN_CTX_free(v140);
        BN_free(v132);
        BN_free(v144);
        BN_free(*(_DWORD *)(a1 + 176));
        *(_DWORD *)(a1 + 176) = 0;
        DSA_SIG_free(v148);
        if ( v152 )
        {
          sub_64E00(5, "crypto_gq: identity not verified");
          goto LABEL_163;
        }
        v46 = *(_DWORD *)(a1 + 136);
        v47 = *(const char **)(a1 + 152);
        v114 = bswap32(v8[3]);
        *(_DWORD *)(a1 + 300) &= ~0x80u;
        *(_DWORD *)(a1 + 136) = v46 | 0x200;
        sub_6C054(v164, 256, "gq %s fs %u", v47, v114);
        goto LABEL_130;
      }
      if ( v11 == -2113339392 )
      {
        v118 = a1 + 16;
        v14 = sub_26630((unsigned int *)(v6 + 4 * (v7 / 4)), 0, a1);
        if ( v14 != 256 )
          goto LABEL_18;
        v19 = *(_DWORD *)(a1 + 172);
        if ( !v19 )
        {
          sub_64E00(5, "crypto_mv: scheme unavailable");
          goto LABEL_163;
        }
        if ( bswap32(v8[3]) != *(_DWORD *)(v19 + 12) )
        {
          v20 = "crypto_mv: invalid filestamp %u";
          goto LABEL_33;
        }
        v92 = EVP_PKEY_get0_DSA(*(_DWORD *)(v19 + 4));
        v137 = v92;
        if ( !v92 )
        {
          sub_64E00(5, "crypto_mv: defective key");
          goto LABEL_161;
        }
        DSA_get0_pqg(v92, &v158, 0);
        v93 = DSA_get0_key(v137, &v159, &v160);
        if ( !*(_DWORD *)(a1 + 176) )
        {
          sub_64E00(5, "crypto_mv: missing challenge");
          goto LABEL_163;
        }
        v143 = BN_CTX_new(v93);
        v154 = BN_new();
        v138 = BN_new();
        v94 = BN_new();
        v95 = v8[4];
        v147 = v94;
        v157 = v8 + 5;
        v96 = d2i_DSAparams(0, &v157, bswap32(v95));
        v151 = v96;
        if ( !v96 )
        {
          v111 = ERR_get_error(0);
          v112 = (const char *)ERR_error_string(v111, 0);
          v15 = 271;
          sub_64E00(3, "crypto_mv: %s", v112);
          v9 = bswap32(*v8);
          goto LABEL_19;
        }
        DSA_get0_pqg(v96, &v161, &v162);
        BN_mod_exp(v138, v162, v159, v158, v143);
        BN_mod_exp(v147, v163, v160, v158, v143);
        BN_mod_mul(v138, v138, v147, v158, v143);
        BN_mod_mul(v138, v138, v161, v158, v143);
        v155 = BN_cmp(v138, *(_DWORD *)(a1 + 176));
        BN_CTX_free(v143);
        BN_free(v154);
        BN_free(v138);
        BN_free(v147);
        BN_free(*(_DWORD *)(a1 + 176));
        *(_DWORD *)(a1 + 176) = 0;
        DSA_free(v151);
        if ( v155 )
        {
          sub_64E00(5, "crypto_mv: identity not verified");
LABEL_163:
          v15 = 270;
          v9 = bswap32(*v8);
LABEL_19:
          v16 = (const char *)sub_6D3C4(v15);
          sub_6C054(v164, 256, "%04x %d %02x %s", v9, v125, v15, v16);
          sub_42514(v118, v164);
          return v15;
        }
        v97 = *(_DWORD *)(a1 + 136);
        v98 = *(const char **)(a1 + 152);
        v116 = bswap32(v8[3]);
        *(_DWORD *)(a1 + 300) &= ~0x80u;
        *(_DWORD *)(a1 + 136) = v97 | 0x200;
        sub_6C054(v164, 256, "mv %s fs %u", v98, v116);
        goto LABEL_130;
      }
LABEL_43:
      if ( (v11 & 0xC0000000) != 0 )
        goto LABEL_145;
      if ( !*(_DWORD *)(a1 + 232) )
      {
        v61 = (void *)sub_63BA4(0, (unsigned __int16)v9, 0, 0);
        *(_DWORD *)(a1 + 232) = memcpy(v61, (const void *)(v6 + 4 * (v7 / 4)), (unsigned __int16)v9);
        v3 = *(_DWORD *)(a2 + 84);
      }
LABEL_46:
      v7 += (v10 + 3) & 0xFFFFFFFC;
      v4 = v3 - v7;
    }
    while ( v3 - v7 > 24 );
  }
  return 256;
}
