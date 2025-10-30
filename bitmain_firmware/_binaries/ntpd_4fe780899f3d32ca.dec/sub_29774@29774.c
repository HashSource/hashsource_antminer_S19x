unsigned int __fastcall sub_29774(_DWORD *a1, int a2, int a3, int a4, unsigned int *a5, unsigned int a6)
{
  int v8; // r4
  _DWORD *v9; // r10
  int v10; // r11
  unsigned int v11; // r0
  unsigned int v12; // r5
  unsigned int v13; // r3
  unsigned int v14; // r2
  bool v15; // cc
  unsigned int v16; // r2
  bool v17; // cc
  int v18; // r2
  int v19; // r5
  unsigned __int16 v20; // r3
  unsigned int v21; // r1
  int v22; // r0
  int v23; // r8
  int v24; // r10
  int v25; // r6
  int v26; // r0
  int v27; // r0
  unsigned int v28; // r3
  unsigned int v29; // r0
  int v30; // r1
  int v31; // r4
  unsigned int v32; // r3
  int v33; // r5
  unsigned __int16 v34; // r3
  unsigned int v35; // r8
  int v36; // r4
  int v37; // r6
  int v38; // r8
  int v39; // r10
  unsigned int v40; // r4
  char *v41; // r12
  unsigned int v42; // r3
  unsigned int v43; // r3
  void *v44; // r6
  int v45; // r0
  int v46; // r0
  int v47; // r1
  int v48; // r3
  int v49; // r5
  int v50; // r0
  int v51; // r2
  int v52; // r12
  int v53; // r0
  int v54; // r0
  int v55; // r4
  int v56; // r0
  int v57; // r12
  unsigned int v58; // r12
  void *v59; // r3
  int v60; // r0
  int v61; // r1
  int **v62; // r3
  int v64; // r3
  int v65; // r5
  int v66; // r0
  int v67; // r2
  int v68; // r12
  int v69; // r0
  int v70; // r0
  int v71; // r4
  int v72; // r0
  int v73; // r12
  unsigned int v74; // r12
  void *v75; // r3
  int v76; // r0
  int v77; // r1
  int v78; // r11
  const char *v79; // r0
  int v80; // r5
  int v81; // r3
  int v82; // r0
  int v83; // r0
  int v84; // r2
  int v85; // r12
  int v86; // r0
  int v87; // r0
  int v88; // r4
  int v89; // r0
  int v90; // r12
  unsigned int v91; // r12
  void *v92; // r3
  int v93; // r0
  int v94; // r1
  unsigned int v95; // r1
  unsigned int v96; // r3
  int v97; // r0
  unsigned __int16 v98; // r3
  unsigned int v99; // r1
  int v100; // r0
  int v101; // r6
  int v102; // r5
  int v103; // r10
  int v104; // r8
  int v105; // r0
  unsigned int v106; // r1
  void *v107; // r4
  unsigned int v108; // r0
  unsigned int v109; // r12
  int v110; // r1
  int v111; // r5
  unsigned __int16 v112; // r3
  unsigned int v113; // r1
  int v114; // r0
  int v115; // r8
  int v116; // r5
  int v117; // r6
  int v118; // r10
  unsigned int v119; // r0
  unsigned int v120; // r6
  void *v121; // r4
  unsigned int v122; // r1
  unsigned int v123; // r12
  unsigned __int16 v124; // r3
  unsigned int v125; // r2
  int v126; // r0
  int v127; // r10
  int version; // r0
  int v129; // r0
  int v130; // r10
  int v131; // r0
  int v132; // r0
  size_t v133; // r0
  int subject_name; // r0
  int ext_count; // r0
  int v136; // r4
  int v137; // r10
  int ext; // r0
  int v139; // r6
  int v140; // r0
  const char *v141; // r0
  int v142; // r0
  const char *v143; // r0
  int v144; // r0
  const char *v145; // r0
  int v146; // r0
  const char *v147; // r0
  int v148; // r0
  const char *v149; // r0
  int v150; // r0
  const char *v151; // r0
  int error; // r0
  const char *v153; // r0
  int v154; // r0
  const char *v155; // r0
  int v156; // r0
  const char *v157; // r0
  int v158; // r0
  const char *v159; // r0
  int v160; // r1
  int v161; // r0
  unsigned int v162; // r0
  unsigned int v163; // r8
  int v164; // r1
  int v165; // r4
  int v166; // r0
  const char *v167; // r0
  unsigned __int16 v168; // [sp+18h] [bp-274h]
  _DWORD *v169; // [sp+1Ch] [bp-270h]
  _DWORD *v170; // [sp+20h] [bp-26Ch]
  int v171; // [sp+24h] [bp-268h]
  int v173; // [sp+28h] [bp-264h]
  int v174; // [sp+2Ch] [bp-260h]
  int v175; // [sp+2Ch] [bp-260h]
  int v176; // [sp+2Ch] [bp-260h]
  int v177; // [sp+2Ch] [bp-260h]
  unsigned int v178; // [sp+2Ch] [bp-260h]
  int v179; // [sp+30h] [bp-25Ch]
  int v180; // [sp+30h] [bp-25Ch]
  int pubkey; // [sp+30h] [bp-25Ch]
  int v182; // [sp+34h] [bp-258h]
  int v183; // [sp+38h] [bp-254h]
  int issuer_name; // [sp+38h] [bp-254h]
  int v185; // [sp+38h] [bp-254h]
  int v186; // [sp+3Ch] [bp-250h]
  unsigned int v187; // [sp+44h] [bp-248h] BYREF
  unsigned int v188; // [sp+48h] [bp-244h] BYREF
  unsigned int v189; // [sp+4Ch] [bp-240h] BYREF
  unsigned int v190; // [sp+50h] [bp-23Ch] BYREF
  unsigned int v191; // [sp+54h] [bp-238h] BYREF
  void *v192; // [sp+58h] [bp-234h] BYREF
  _DWORD *v193; // [sp+5Ch] [bp-230h] BYREF
  int v194; // [sp+60h] [bp-22Ch]
  unsigned int v195; // [sp+68h] [bp-224h] BYREF
  unsigned int v196; // [sp+6Ch] [bp-220h]
  unsigned int v197; // [sp+70h] [bp-21Ch]
  void *ptr; // [sp+74h] [bp-218h]
  unsigned int v199; // [sp+78h] [bp-214h]
  int v200; // [sp+7Ch] [bp-210h]
  char v201[524]; // [sp+80h] [bp-20Ch] BYREF

  v8 = a4 / 4;
  v9 = a1;
  v170 = (_DWORD *)(a2 + 4 * (a4 / 4));
  v10 = bswap32(*a5);
  if ( a1 )
  {
    v169 = a1 + 4;
    if ( v10 >= 0 )
      a1[32] = *a5;
  }
  else
  {
    v169 = (_DWORD *)(a3 + 4);
  }
  v11 = a5[1];
  v12 = 0;
  v13 = HIWORD(v10) << 16;
  v196 = 0;
  v195 = 0;
  v168 = bswap32(v11);
  *(_DWORD *)(a2 + 4 * v8) = bswap32(v13 | 8);
  *(_DWORD *)(a2 + 4 * v8 + 4) = v11;
  if ( sys_leap != 3 )
  {
    sub_5F724(&v195);
    v12 = v195;
    v13 = HIWORD(v10) << 16;
  }
  if ( v13 == -2113863680 )
    goto LABEL_170;
  LOWORD(v14) = 0;
  if ( v13 <= 0x82010000 )
  {
    HIWORD(v14) = 518;
    if ( v13 == v14 )
    {
      sub_66750(&v193, v12, 0);
      v80 = cert_host;
      if ( sub_268A4((unsigned __int8 *)&v193, (unsigned __int8 *)(cert_host + 28)) >= 0
        && sub_268A4((unsigned __int8 *)&v193, (unsigned __int8 *)(v80 + 38)) <= 0 )
      {
        return sub_2637C(v170, (int *)(v80 + 60), a4);
      }
      v33 = 266;
      goto LABEL_115;
    }
    if ( v13 > v14 )
    {
      switch ( v13 )
      {
        case 0x2080000u:
          if ( !v9 )
            return 8;
          v48 = v9[43];
          if ( v48 )
          {
            v49 = EVP_PKEY_get0_RSA(*(_DWORD *)(v48 + 4));
            if ( v49 )
            {
              v50 = v9[44];
              if ( v50 )
                v50 = BN_free(v50);
              v9[44] = BN_new(v50);
              RSA_get0_key(v49, &v192, 0, 0);
              v51 = BN_num_bits(v192);
              v52 = v51 + 7;
              v53 = v9[44];
              if ( v51 + 7 < 0 )
                v52 = v51 + 14;
              v191 = v52 >> 3;
              v54 = BN_rand(v53, 8 * (v52 >> 3), -1, 1);
              v55 = BN_CTX_new(v54);
              BN_div(0, v9[44], v9[44], v192, v55);
              v56 = BN_CTX_free(v55);
              v195 = 0;
              v194 = 0;
              v193 = 0;
              if ( sys_leap == 3 )
                v56 = 0;
              v196 = 0;
              v197 = 0;
              if ( sys_leap == 3 )
                v55 = v56;
              ptr = 0;
              v199 = 0;
              v200 = 0;
              if ( sys_leap != 3 )
              {
                sub_5F724(&v193);
                v55 = (int)v193;
                v56 = bswap32((unsigned int)v193);
              }
              v57 = v9[43];
              v195 = v56;
              v58 = *(_DWORD *)(v57 + 12);
              v197 = bswap32(v191);
              v196 = bswap32(v58);
              v59 = (void *)sub_63BA4(0, v191, 0, 0);
              v60 = v9[44];
              ptr = v59;
              BN_bn2bin(v60, v59);
              if ( !v55 )
                goto LABEL_168;
              v200 = sub_63BA4(0, dword_B98E4, 0, 0);
              v31 = EVP_MD_CTX_new(v200, v61);
              EVP_DigestInit(v31, dword_B98E8);
              EVP_DigestUpdate(v31, &v195, 12);
              EVP_DigestUpdate(v31, ptr, v191);
              if ( !EVP_SignFinal(v31, v200, &v191, dword_B98E0) )
                goto LABEL_155;
              v32 = v191;
              if ( v191 > dword_B98E4 )
                sub_6ECC0("ntp_crypto.c", 2554, 2, "len <= sign_siglen");
              goto LABEL_154;
            }
            v33 = 260;
            sub_64E00(5, "crypto_alice2: defective key");
            goto LABEL_115;
          }
          break;
        case 0x2090000u:
          if ( !v9 )
            return 8;
          v81 = v9[43];
          if ( v81 )
          {
            v82 = EVP_PKEY_get0_DSA(*(_DWORD *)(v81 + 4));
            if ( v82 )
            {
              DSA_get0_pqg(v82, &v192, 0);
              v83 = v9[44];
              if ( v83 )
                v83 = BN_free(v83);
              v9[44] = BN_new(v83);
              v84 = BN_num_bits(v192);
              v85 = v84 + 7;
              v86 = v9[44];
              if ( v84 + 7 < 0 )
                v85 = v84 + 14;
              v191 = v85 >> 3;
              v87 = BN_rand(v86, 8 * (v85 >> 3), -1, 1);
              v88 = BN_CTX_new(v87);
              BN_div(0, v9[44], v9[44], v192, v88);
              v89 = BN_CTX_free(v88);
              v195 = 0;
              v194 = 0;
              v193 = 0;
              if ( sys_leap == 3 )
                v89 = 0;
              v196 = 0;
              v197 = 0;
              if ( sys_leap == 3 )
                v88 = v89;
              ptr = 0;
              v199 = 0;
              v200 = 0;
              if ( sys_leap != 3 )
              {
                sub_5F724(&v193);
                v88 = (int)v193;
                v89 = bswap32((unsigned int)v193);
              }
              v90 = v9[43];
              v195 = v89;
              v91 = *(_DWORD *)(v90 + 12);
              v197 = bswap32(v191);
              v196 = bswap32(v91);
              v92 = (void *)sub_63BA4(0, v191, 0, 0);
              v93 = v9[44];
              ptr = v92;
              BN_bn2bin(v93, v92);
              if ( !v88 )
                goto LABEL_168;
              v200 = sub_63BA4(0, dword_B98E4, 0, 0);
              v31 = EVP_MD_CTX_new(v200, v94);
              EVP_DigestInit(v31, dword_B98E8);
              EVP_DigestUpdate(v31, &v195, 12);
              EVP_DigestUpdate(v31, ptr, v191);
              if ( !EVP_SignFinal(v31, v200, &v191, dword_B98E0) )
                goto LABEL_155;
              v32 = v191;
              if ( v191 > dword_B98E4 )
                sub_6ECC0("ntp_crypto.c", 2898, 2, "len <= sign_siglen");
              goto LABEL_154;
            }
            v33 = 260;
            sub_64E00(5, "crypto_alice3: defective key");
            goto LABEL_115;
          }
          break;
        case 0x2070000u:
          if ( !v9 )
            return 8;
          v64 = v9[43];
          if ( v64 )
          {
            v65 = EVP_PKEY_get0_DSA(*(_DWORD *)(v64 + 4));
            if ( v65 )
            {
              v66 = v9[44];
              if ( v66 )
                v66 = BN_free(v66);
              v9[44] = BN_new(v66);
              DSA_get0_pqg(v65, 0, &v192);
              v67 = BN_num_bits(v192);
              v68 = v67 + 7;
              v69 = v9[44];
              if ( v67 + 7 < 0 )
                v68 = v67 + 14;
              v191 = v68 >> 3;
              v70 = BN_rand(v69, 8 * (v68 >> 3), -1, 1);
              v71 = BN_CTX_new(v70);
              BN_div(0, v9[44], v9[44], v192, v71);
              v72 = BN_CTX_free(v71);
              v195 = 0;
              v194 = 0;
              v193 = 0;
              if ( sys_leap == 3 )
                v72 = 0;
              v196 = 0;
              v197 = 0;
              if ( sys_leap == 3 )
                v71 = v72;
              ptr = 0;
              v199 = 0;
              v200 = 0;
              if ( sys_leap != 3 )
              {
                sub_5F724(&v193);
                v71 = (int)v193;
                v72 = bswap32((unsigned int)v193);
              }
              v73 = v9[43];
              v195 = v72;
              v74 = *(_DWORD *)(v73 + 12);
              v197 = bswap32(v191);
              v196 = bswap32(v74);
              v75 = (void *)sub_63BA4(0, v191, 0, 0);
              v76 = v9[44];
              ptr = v75;
              BN_bn2bin(v76, v75);
              if ( !v71 )
                goto LABEL_168;
              v200 = sub_63BA4(0, dword_B98E4, 0, 0);
              v31 = EVP_MD_CTX_new(v200, v77);
              EVP_DigestInit(v31, dword_B98E8);
              EVP_DigestUpdate(v31, &v195, 12);
              EVP_DigestUpdate(v31, ptr, v191);
              if ( !EVP_SignFinal(v31, v200, &v191, dword_B98E0) )
                goto LABEL_155;
              v32 = v191;
              if ( v191 > dword_B98E4 )
                sub_6ECC0("ntp_crypto.c", 2224, 2, "len <= sign_siglen");
              goto LABEL_154;
            }
            v33 = 260;
            sub_64E00(5, "crypto_alice: defective key");
          }
          else
          {
            v33 = 270;
            sub_64E00(5, "crypto_alice: scheme unavailable");
          }
          goto LABEL_115;
        default:
          goto LABEL_37;
      }
      goto LABEL_190;
    }
    if ( v13 == 33685504 )
    {
      v95 = a5[3];
      v96 = a5[4];
      v195 = a5[2];
      v196 = v95;
      v197 = v96;
      ptr = a5 + 5;
      v200 = 0;
      v199 = 0;
      return sub_2637C(v170, (int *)&v195, a4);
    }
    if ( v13 == 33751040 )
    {
      v62 = &pubkey_ptr;
      return sub_2637C(v170, *v62, a4);
    }
    if ( v13 != 33619968 )
      goto LABEL_37;
LABEL_170:
    v40 = sub_2637C(v170, &hostval, a4);
    v170[3] = bswap32(crypto_flags);
    return v40;
  }
  HIWORD(v14) = -32251;
  v15 = v13 > v14;
  if ( v13 == v14 )
  {
    v62 = &tai_leap_ptr;
    return sub_2637C(v170, *v62, a4);
  }
  LOWORD(v16) = 0;
  if ( !v15 )
  {
    HIWORD(v16) = -32253;
    if ( v13 != v16 )
    {
      if ( v13 == -2113667072 )
      {
        if ( v9 || (v9 = (_DWORD *)sub_31C78(v168)) != 0 )
        {
          v9[17] &= ~0x8000u;
          return sub_2637C(v170, v9 + 68, a4);
        }
LABEL_38:
        v33 = 271;
        goto LABEL_115;
      }
      if ( v13 == -2113798144 )
      {
        v34 = bswap32(*a5);
        if ( v34 > 0x13u )
        {
          v35 = bswap32(a5[4]);
          if ( v35 <= (unsigned int)v34 - 20 && v35 - 1 < 0x200 )
          {
            _memcpy_chk(v201, a5 + 5);
            v201[v35] = 0;
            v36 = cinfo;
            if ( cinfo )
            {
              v37 = 0;
              v38 = 0;
              do
              {
                v39 = *(_DWORD *)(v36 + 4);
                if ( (v39 & 0x88) == 0 && !strcmp(v201, *(const char **)(v36 + 48)) )
                {
                  if ( !strcmp(v201, *(const char **)(v36 + 52)) )
                  {
                    if ( (v39 & 1) != 0 )
                      v38 = v36;
                  }
                  else
                  {
                    v37 = v36;
                  }
                }
                v36 = *(_DWORD *)v36;
              }
              while ( v36 );
              if ( !v38 )
              {
                if ( !v37 )
                  return 8;
                v38 = v37;
              }
              if ( v12 )
                return sub_2637C(v170, (int *)(v38 + 60), a4);
            }
            return 8;
          }
        }
        goto LABEL_114;
      }
LABEL_37:
      if ( v10 >= 0 )
        return 8;
      goto LABEL_38;
    }
    v41 = (char *)bswap32(a5[4]);
    if ( (unsigned int)(v41 - 1) <= 0xFFE5 )
    {
      v42 = (unsigned __int16)v10;
      if ( (unsigned __int16)v10 >= (unsigned int)(v41 + 24) )
      {
        if ( v9 )
          v42 = v9[41];
        v191 = (unsigned int)(a5 + 5);
        if ( v9 )
          a6 = v42;
        v192 = v41;
        v175 = d2i_PublicKey(6, 0, &v191, v41);
        if ( v175 )
        {
          v43 = 0;
          v195 = 0;
          v194 = 0;
          v193 = 0;
          v196 = 0;
          if ( sys_leap == 3 )
            v9 = 0;
          v197 = 0;
          ptr = 0;
          v199 = 0;
          v200 = 0;
          if ( sys_leap != 3 )
          {
            sub_5F724(&v193);
            v9 = v193;
            v43 = bswap32((unsigned int)v193);
          }
          v195 = v43;
          v196 = hostval;
          v192 = (void *)EVP_PKEY_size(v175);
          v197 = bswap32((unsigned int)v192);
          v44 = (void *)sub_63BA4(0, v192, 0, 0);
          ptr = v44;
          v193 = (_DWORD *)bswap32(a6);
          v45 = EVP_PKEY_get0_RSA(v175);
          v46 = RSA_public_encrypt(4, &v193, v44, v45, 4);
          if ( v46 > 0 )
          {
            EVP_PKEY_free(v175);
            if ( v9 )
            {
              v200 = sub_63BA4(0, dword_B98E4, 0, 0);
              v31 = EVP_MD_CTX_new(v200, v47);
              EVP_DigestInit(v31, dword_B98E8);
              EVP_DigestUpdate(v31, &v195, 12);
              EVP_DigestUpdate(v31, ptr, v192);
              if ( EVP_SignFinal(v31, v200, &v192, dword_B98E0) )
              {
                v32 = (unsigned int)v192;
                if ( (unsigned int)v192 > dword_B98E4 )
                  sub_6ECC0("ntp_crypto.c", 1631, 2, "vallen <= sign_siglen");
LABEL_154:
                v199 = bswap32(v32);
                goto LABEL_155;
              }
              goto LABEL_155;
            }
            goto LABEL_168;
          }
          error = ERR_get_error(v46);
          v33 = 267;
          v153 = (const char *)ERR_error_string(error, 0);
          sub_64E00(3, "crypto_encrypt: %s", v153);
          free(ptr);
          EVP_PKEY_free(v175);
        }
        else
        {
          v148 = ERR_get_error(0);
          v33 = 260;
          v149 = (const char *)ERR_error_string(v148, 0);
          sub_64E00(3, "crypto_encrypt: %s", v149);
        }
        goto LABEL_115;
      }
    }
    goto LABEL_114;
  }
  HIWORD(v16) = -32249;
  v17 = v13 > v16;
  if ( v13 == v16 )
  {
    if ( !iffkey_info )
    {
      v33 = 270;
      sub_64E00(5, "crypto_bob: scheme unavailable");
      goto LABEL_115;
    }
    v111 = EVP_PKEY_get0_DSA(*(_DWORD *)(iffkey_info + 4));
    DSA_get0_pqg(v111, &v189, &v190);
    DSA_get0_key(v111, 0, &v192);
    v112 = bswap32(*a5);
    if ( v112 > 0x13u )
    {
      v113 = bswap32(a5[4]);
      if ( v113 <= (unsigned int)v112 - 20 )
      {
        v188 = v113;
        if ( v113 - 1 <= 0xFFE6 )
        {
          v114 = BN_bin2bn(a5 + 5, v113, 0);
          v177 = v114;
          if ( v114 )
          {
            v115 = BN_CTX_new(v114);
            v116 = ((int (*)(void))BN_new)();
            v117 = ((int (*)(void))BN_new)();
            v118 = DSA_SIG_new();
            BN_rand(v116, 8 * v188, -1, 1);
            BN_mod_mul(v117, v192, v177, v190, v115);
            BN_add(v117, v117, v116);
            BN_div(0, v117, v117, v190, v115);
            BN_mod_exp(v116, v191, v116, v189, v115);
            sub_26540(v116, v116);
            DSA_SIG_set0(v118, v117, v116);
            BN_CTX_free(v115);
            BN_free(v177);
            v119 = i2d_DSA_SIG(v118, 0);
            v120 = v119;
            v188 = v119;
            if ( v119 )
            {
              if ( v119 <= 0xFFE7 )
              {
                v195 = 0;
                v194 = 0;
                v193 = 0;
                v196 = 0;
                v197 = 0;
                ptr = 0;
                v199 = 0;
                v200 = 0;
                if ( sys_leap == 3 )
                {
                  v122 = 0;
                  v121 = 0;
                }
                else
                {
                  sub_5F724(&v193);
                  v121 = v193;
                  v120 = v188;
                  v122 = bswap32((unsigned int)v193);
                }
                v195 = v122;
                v123 = *(_DWORD *)(iffkey_info + 12);
                v197 = bswap32(v120);
                v196 = bswap32(v123);
                v193 = (_DWORD *)sub_63BA4(0, v120, 0, 0);
                ptr = v193;
                i2d_DSA_SIG(v118, &v193);
                DSA_SIG_free(v118);
                if ( !v121 )
                  goto LABEL_168;
                v200 = sub_63BA4(0, dword_B98E4, 0, 0);
                v31 = EVP_MD_CTX_new(v200, v160);
                EVP_DigestInit(v31, dword_B98E8);
                EVP_DigestUpdate(v31, &v195, 12);
                EVP_DigestUpdate(v31, ptr, v188);
                if ( !EVP_SignFinal(v31, v200, &v188, dword_B98E0) )
                  goto LABEL_155;
                v32 = v188;
                if ( v188 > dword_B98E4 )
                  sub_6ECC0("ntp_crypto.c", 2337, 2, "len <= sign_siglen");
                goto LABEL_154;
              }
              v33 = 257;
              sub_64E00(3, "crypto_bob: signature is too big: %u", v119);
              DSA_SIG_free(v118);
            }
            else
            {
              v154 = ERR_get_error(0);
              v33 = 271;
              v155 = (const char *)ERR_error_string(v154, 0);
              sub_64E00(3, "crypto_bob: %s", v155);
              DSA_SIG_free(v118);
            }
          }
          else
          {
            v144 = ERR_get_error(0);
            v33 = 271;
            v145 = (const char *)ERR_error_string(v144, 0);
            sub_64E00(3, "crypto_bob: %s", v145);
          }
          goto LABEL_115;
        }
      }
    }
    goto LABEL_114;
  }
  LOWORD(v18) = 0;
  if ( v17 )
  {
    HIWORD(v18) = -32248;
    if ( v13 == v18 )
    {
      if ( !gqkey_info )
      {
        v33 = 270;
        sub_64E00(5, "crypto_bob2: scheme unavailable");
        goto LABEL_115;
      }
      v97 = EVP_PKEY_get0_RSA(*(_DWORD *)(gqkey_info + 4));
      RSA_get0_key(v97, &v190, &v191, &v192);
      v98 = bswap32(*a5);
      if ( v98 > 0x13u )
      {
        v99 = bswap32(a5[4]);
        if ( v99 <= (unsigned int)v98 - 20 )
        {
          v189 = v99;
          if ( v99 - 1 <= 0xFFE6 )
          {
            v100 = BN_bin2bn(a5 + 5, v99, 0);
            v176 = v100;
            if ( v100 )
            {
              v101 = BN_CTX_new(v100);
              v102 = ((int (*)(void))BN_new)();
              v103 = ((int (*)(void))BN_new)();
              v104 = ((int (*)(void))BN_new)();
              v180 = DSA_SIG_new();
              BN_rand(v102, 8 * v189, -1, 1);
              BN_div(0, v102, v102, v190, v101);
              BN_mod_exp(v104, v191, v176, v190, v101);
              BN_mod_mul(v104, v102, v104, v190, v101);
              BN_mod_exp(v103, v102, v192, v190, v101);
              sub_26540(v103, v103);
              DSA_SIG_set0(v180, v104, v103);
              BN_CTX_free(v101);
              BN_free(v176);
              BN_free(v102);
              v105 = i2d_DSA_SIG(v180, 0);
              v106 = v105;
              v189 = v105;
              if ( v105 > 0 )
              {
                v195 = 0;
                v194 = 0;
                v193 = 0;
                v196 = 0;
                v197 = 0;
                ptr = 0;
                v199 = 0;
                v200 = 0;
                if ( sys_leap == 3 )
                {
                  v108 = 0;
                  v107 = 0;
                }
                else
                {
                  sub_5F724(&v193);
                  v107 = v193;
                  v106 = v189;
                  v108 = bswap32((unsigned int)v193);
                }
                v195 = v108;
                v109 = *(_DWORD *)(gqkey_info + 12);
                v197 = bswap32(v106);
                v196 = bswap32(v109);
                v193 = (_DWORD *)sub_63BA4(0, v106, 0, 0);
                ptr = v193;
                i2d_DSA_SIG(v180, &v193);
                DSA_SIG_free(v180);
                if ( !v107 )
                  goto LABEL_168;
                v200 = sub_63BA4(0, dword_B98E4, 0, 0);
                v31 = EVP_MD_CTX_new(v200, v110);
                EVP_DigestInit(v31, dword_B98E8);
                EVP_DigestUpdate(v31, &v195, 12);
                EVP_DigestUpdate(v31, ptr, v189);
                if ( !EVP_SignFinal(v31, v200, &v189, dword_B98E0) )
                  goto LABEL_155;
                v32 = v189;
                if ( v189 > dword_B98E4 )
                  sub_6ECC0("ntp_crypto.c", 2659, 2, "len <= sign_siglen");
                goto LABEL_154;
              }
              v150 = ERR_get_error(v105);
              v33 = 271;
              v151 = (const char *)ERR_error_string(v150, 0);
              sub_64E00(3, "crypto_bob2: %s", v151);
              DSA_SIG_free(v180);
            }
            else
            {
              v146 = ERR_get_error(0);
              v33 = 271;
              v147 = (const char *)ERR_error_string(v146, 0);
              sub_64E00(3, "crypto_bob2: %s", v147);
            }
            goto LABEL_115;
          }
        }
      }
      goto LABEL_114;
    }
    if ( v13 != -2113339392 )
      goto LABEL_37;
    if ( mvkey_info )
    {
      v19 = EVP_PKEY_get0_DSA(*(_DWORD *)(mvkey_info + 4));
      DSA_get0_pqg(v19, &v188, &v189);
      DSA_get0_key(v19, &v191, &v192);
      v20 = bswap32(*a5);
      if ( v20 > 0x13u )
      {
        v21 = bswap32(a5[4]);
        if ( v21 <= (unsigned int)v20 - 20 )
        {
          v187 = v21;
          if ( v21 - 1 <= 0xFFE6 )
          {
            v22 = BN_bin2bn(a5 + 5, v21, 0);
            v179 = v22;
            if ( v22 )
            {
              v23 = BN_CTX_new(v22);
              v24 = ((int (*)(void))BN_new)();
              v25 = ((int (*)(void))BN_new)();
              v174 = DSA_new();
              v182 = ((int (*)(void))BN_new)();
              v183 = ((int (*)(void))BN_new)();
              v186 = ((int (*)(void))BN_new)();
              do
              {
                v26 = BN_num_bits(v189);
                BN_rand(v24, v26, 0, 0);
                BN_div(0, v24, v24, v189, v23);
                BN_gcd(v25, v24, v189, v23);
              }
              while ( !BN_is_one(v25) );
              BN_mod_exp(v25, v190, v24, v188, v23);
              BN_mod_mul(v182, v25, v179, v188, v23);
              BN_mod_exp(v183, v192, v24, v188, v23);
              BN_mod_exp(v186, v191, v24, v188, v23);
              v27 = BN_dup(v191);
              DSA_set0_key(v174, v27, 0);
              DSA_set0_pqg(v174, v182, v183, v186);
              BN_CTX_free(v23);
              BN_free(v24);
              BN_free(v179);
              BN_free(v25);
              v28 = 0;
              v195 = 0;
              v194 = 0;
              v193 = 0;
              v196 = 0;
              if ( sys_leap == 3 )
                v23 = 0;
              v197 = 0;
              ptr = 0;
              v199 = 0;
              v200 = 0;
              if ( sys_leap != 3 )
              {
                sub_5F724(&v193);
                v23 = (int)v193;
                v28 = bswap32((unsigned int)v193);
              }
              v195 = v28;
              v196 = bswap32(*(_DWORD *)(mvkey_info + 12));
              v29 = i2d_DSAparams(v174, 0);
              v187 = v29;
              if ( v29 )
              {
                v197 = bswap32(v29);
                v193 = (_DWORD *)sub_63BA4(0, v29, 0, 0);
                ptr = v193;
                i2d_DSAparams(v174, &v193);
                DSA_free(v174);
                if ( v23 )
                {
                  v200 = sub_63BA4(0, dword_B98E4, 0, 0);
                  v31 = EVP_MD_CTX_new(v200, v30);
                  EVP_DigestInit(v31, dword_B98E8);
                  EVP_DigestUpdate(v31, &v195, 12);
                  EVP_DigestUpdate(v31, ptr, v187);
                  if ( EVP_SignFinal(v31, v200, &v187, dword_B98E0) )
                  {
                    v32 = v187;
                    if ( v187 > dword_B98E4 )
                      sub_6ECC0("ntp_crypto.c", 3011, 2, "len <= sign_siglen");
                    goto LABEL_154;
                  }
LABEL_155:
                  EVP_MD_CTX_free(v31);
                }
LABEL_168:
                v40 = sub_2637C(v170, (int *)&v195, a4);
                sub_27B48(&v195);
                return v40;
              }
              v140 = ERR_get_error(0);
              v33 = 271;
              v141 = (const char *)ERR_error_string(v140, 0);
              sub_64E00(3, "crypto_bob3: %s", v141);
              DSA_free(v174);
            }
            else
            {
              v142 = ERR_get_error(0);
              v33 = 271;
              v143 = (const char *)ERR_error_string(v142, 0);
              sub_64E00(3, "crypto_bob3: %s", v143);
            }
LABEL_115:
            v78 = v10 | 0x40000000;
            *(_DWORD *)(a2 + 4 * v8) |= 0x40u;
            v79 = (const char *)sub_6D3C4(v33);
            sub_6C054(v201, 256, "%04x %d %02x %s", v78, v168, v33, v79);
            sub_42514(v169, v201);
            if ( v78 >= 0 )
              return 0;
            return 8;
          }
        }
      }
LABEL_114:
      v33 = 257;
      goto LABEL_115;
    }
    sub_64E00(5, "crypto_bob3: scheme unavailable");
LABEL_190:
    v33 = 270;
    goto LABEL_115;
  }
  HIWORD(v18) = -32250;
  if ( v13 != v18 )
    goto LABEL_37;
  v196 = 0;
  v195 = 0;
  if ( sys_leap == 3 || (sub_5F724(&v195), (v178 = v195) == 0) )
  {
    v33 = 258;
    goto LABEL_115;
  }
  v124 = bswap32(*a5);
  if ( v124 <= 0x13u )
    goto LABEL_114;
  v125 = bswap32(a5[4]);
  if ( v125 > (unsigned int)v124 - 20 )
    goto LABEL_114;
  v190 = v125;
  if ( v125 - 1 > 0xFFE6 )
    goto LABEL_114;
  v191 = (unsigned int)(a5 + 5);
  v126 = d2i_X509(0, &v191, v125);
  v173 = v126;
  if ( !v126 )
  {
    v156 = ERR_get_error(0);
    v33 = 269;
    v157 = (const char *)ERR_error_string(v156, 0);
    sub_64E00(3, "cert_sign: %s", v157);
    goto LABEL_115;
  }
  pubkey = X509_get_pubkey(v126);
  if ( !pubkey )
  {
    v158 = ERR_get_error(0);
    v33 = 260;
    v159 = (const char *)ERR_error_string(v158, 0);
    sub_64E00(3, "cert_sign: %s", v159);
    X509_free(v173);
    goto LABEL_115;
  }
  v127 = X509_new();
  version = X509_get_version(v173);
  v171 = v127;
  v129 = X509_set_version(v127, version);
  v130 = ASN1_INTEGER_new(v129);
  ASN1_INTEGER_set(v130, v178);
  X509_set_serialNumber(v171, v130);
  v131 = X509_getm_notBefore(v171);
  X509_gmtime_adj(v131);
  v132 = X509_getm_notAfter(v171);
  X509_gmtime_adj(v132);
  issuer_name = X509_get_issuer_name(v171);
  v133 = strlen((const char *)dword_108274);
  X509_NAME_add_entry_by_txt(issuer_name, "commonName", 4097, dword_108274, v133, -1, 0);
  subject_name = X509_get_subject_name(v173);
  X509_set_subject_name(v171, subject_name);
  X509_set_pubkey(v171, pubkey);
  ext_count = X509_get_ext_count(v173);
  if ( ext_count > 0 )
  {
    v185 = v8;
    v136 = 0;
    v137 = ext_count;
    do
    {
      ext = X509_get_ext(v173, v136);
      if ( !X509_add_ext(v171, ext, -1) )
        sub_6ECC0("ntp_crypto.c", 3218, 2, "X509_add_ext(cert, ext, -1)");
      ++v136;
    }
    while ( v137 != v136 );
    v8 = v185;
  }
  X509_free(v173);
  sub_66750(&v193, v178, 0);
  v139 = cert_host;
  if ( sub_268A4((unsigned __int8 *)&v193, (unsigned __int8 *)(cert_host + 28)) < 0
    || sub_268A4((unsigned __int8 *)&v193, (unsigned __int8 *)(v139 + 38)) > 0 )
  {
    v33 = 266;
    X509_free(v171);
    goto LABEL_115;
  }
  X509_sign(v171, dword_B98E0, dword_B98E8);
  v161 = X509_verify(v171, dword_B98E0);
  if ( v161 <= 0 )
  {
    v166 = ERR_get_error(v161);
    v33 = 265;
    v167 = (const char *)ERR_error_string(v166, 0);
    sub_64E00(3, "cert_sign: %s", v167);
    X509_free(v171);
    goto LABEL_115;
  }
  v162 = i2d_X509(v171, 0);
  v163 = a5[3];
  v190 = v162;
  v195 = bswap32(v178);
  v197 = bswap32(v162);
  ptr = 0;
  v199 = 0;
  v200 = 0;
  v196 = v163;
  v192 = (void *)sub_63BA4(0, v162, 0, 0);
  ptr = v192;
  i2d_X509(v171, &v192);
  v199 = 0;
  v200 = sub_63BA4(0, dword_B98E4, 0, 0);
  v165 = EVP_MD_CTX_new(v200, v164);
  EVP_DigestInit(v165, dword_B98E8);
  EVP_DigestUpdate(v165, &v195, 12);
  EVP_DigestUpdate(v165, ptr, v190);
  if ( EVP_SignFinal(v165, v200, &v190, dword_B98E0) )
  {
    if ( v190 > dword_B98E4 )
      sub_6ECC0("ntp_crypto.c", 3261, 2, "len <= sign_siglen");
    v199 = bswap32(v190);
  }
  EVP_MD_CTX_free(v165);
  X509_free(v171);
  v40 = sub_2637C(v170, (int *)&v195, a4);
  sub_27B48(&v195);
  return v40;
}
