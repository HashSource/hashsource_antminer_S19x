int __fastcall sub_29B24(_DWORD *a1, int a2, int a3, int a4, unsigned int *a5, unsigned int a6)
{
  int v7; // r4
  int v9; // r4
  _DWORD *v10; // r9
  int v12; // r10
  unsigned int v13; // r2
  unsigned int v14; // r11
  int v15; // r4
  int v17; // r3
  int v18; // r8
  int v19; // r0
  int v20; // r0
  int v21; // r1
  int v22; // r0
  int v23; // r0
  int v24; // r6
  unsigned int v25; // r0
  unsigned int v26; // r6
  void *v27; // r3
  int v28; // r0
  unsigned int v29; // r1
  unsigned int v30; // r2
  bool v31; // cc
  int v32; // r2
  bool v33; // cc
  int v34; // r2
  unsigned int v35; // lr
  unsigned int v36; // r12
  int v37; // r3
  int v38; // r8
  int v39; // r0
  int v40; // r0
  int v41; // r1
  int v42; // r0
  int v43; // r0
  int v44; // r6
  unsigned int v45; // r0
  unsigned int v46; // r6
  void *v47; // r3
  int v48; // r0
  int v49; // r1
  int v50; // r4
  unsigned int v51; // r3
  int v52; // r0
  unsigned __int16 v53; // r3
  unsigned int v54; // r1
  int v55; // r0
  int v56; // r8
  int v57; // r7
  int v58; // r9
  int v59; // r11
  int v60; // r0
  unsigned int v61; // r0
  unsigned int v62; // r6
  int v63; // r1
  int v64; // r8
  unsigned __int16 v65; // r3
  int v66; // r7
  const char *v67; // r0
  unsigned int v68; // r0
  void *v69; // r0
  void *v70; // r8
  int v71; // r0
  int v72; // r0
  int v73; // r1
  unsigned int v74; // r1
  unsigned int v75; // r2
  bool v76; // cc
  unsigned int v77; // r2
  bool v78; // cc
  int v79; // r2
  int v80; // r8
  unsigned __int16 v81; // r3
  unsigned int v82; // r1
  int v83; // r0
  int v84; // r11
  int v85; // r8
  int v86; // r9
  int v87; // r0
  int v88; // r0
  unsigned int v89; // r0
  unsigned int v90; // r9
  unsigned int v91; // r0
  int v92; // r1
  int **v93; // r3
  int v94; // r8
  int v95; // r0
  int v96; // r3
  int v97; // r0
  int v98; // r0
  int v99; // r0
  int v100; // r1
  int v101; // r0
  int v102; // r0
  int v103; // r6
  unsigned int v104; // r0
  unsigned int v105; // r6
  void *v106; // r3
  int v107; // r0
  int v108; // r1
  unsigned __int16 v109; // r3
  unsigned int v110; // r9
  int v111; // r7
  int v112; // r6
  int v113; // r9
  unsigned int v114; // r1
  int v115; // r0
  int v116; // r9
  int v117; // r7
  int v118; // r8
  int v119; // r11
  unsigned int v120; // r0
  unsigned int v121; // r0
  unsigned int v122; // r6
  int v123; // r1
  unsigned __int16 v124; // r3
  unsigned int v125; // r2
  int v126; // r0
  int v127; // r11
  int version; // r0
  int v129; // r0
  int v130; // r9
  int v131; // r0
  int v132; // r0
  int issuer_name; // r9
  size_t v134; // r0
  int subject_name; // r0
  int ext_count; // r0
  int v137; // r4
  int v138; // r9
  int ext; // r0
  int v140; // r8
  int v141; // r1
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
  int v152; // r0
  const char *v153; // r0
  int v154; // r0
  const char *v155; // r0
  int v156; // r0
  int v157; // r0
  unsigned int v158; // lr
  unsigned int v159; // r0
  int v160; // r1
  int v161; // r4
  int v162; // r0
  const char *v163; // r0
  int v164; // r0
  const char *v165; // r0
  int v166; // r0
  const char *v167; // r0
  int error; // r0
  const char *v169; // r0
  _DWORD *v170; // [sp+14h] [bp-270h]
  unsigned __int16 v171; // [sp+18h] [bp-26Ch]
  _DWORD *v172; // [sp+1Ch] [bp-268h]
  int v173; // [sp+20h] [bp-264h]
  int v174; // [sp+20h] [bp-264h]
  int v175; // [sp+20h] [bp-264h]
  unsigned int v176; // [sp+20h] [bp-264h]
  unsigned int v177; // [sp+24h] [bp-260h]
  int v178; // [sp+24h] [bp-260h]
  unsigned int v179; // [sp+24h] [bp-260h]
  int v180; // [sp+24h] [bp-260h]
  int v181; // [sp+24h] [bp-260h]
  int v182; // [sp+28h] [bp-25Ch]
  unsigned int v183; // [sp+28h] [bp-25Ch]
  int v184; // [sp+28h] [bp-25Ch]
  int pubkey; // [sp+28h] [bp-25Ch]
  int v186; // [sp+2Ch] [bp-258h]
  int v187; // [sp+2Ch] [bp-258h]
  int v188; // [sp+30h] [bp-254h]
  int v189; // [sp+34h] [bp-250h]
  void *v190; // [sp+3Ch] [bp-248h] BYREF
  void *v191; // [sp+40h] [bp-244h] BYREF
  unsigned int v192; // [sp+44h] [bp-240h] BYREF
  unsigned int v193; // [sp+48h] [bp-23Ch] BYREF
  unsigned int *v194; // [sp+4Ch] [bp-238h] BYREF
  unsigned int v195; // [sp+50h] [bp-234h] BYREF
  unsigned __int8 v196[12]; // [sp+54h] [bp-230h] BYREF
  unsigned int v197; // [sp+60h] [bp-224h] BYREF
  unsigned int v198; // [sp+64h] [bp-220h]
  unsigned int v199; // [sp+68h] [bp-21Ch]
  void *ptr; // [sp+6Ch] [bp-218h]
  unsigned int v201; // [sp+70h] [bp-214h]
  int v202; // [sp+74h] [bp-210h]
  char v203[524]; // [sp+78h] [bp-20Ch] BYREF

  v7 = a4 + 3;
  if ( a4 >= 0 )
    v7 = a4;
  v9 = v7 >> 2;
  v10 = a1;
  v170 = (_DWORD *)(a2 + 4 * v9);
  v12 = bswap32(*a5);
  if ( !a1 )
  {
    v74 = a5[1];
    v172 = (_DWORD *)(a3 + 4);
    v179 = HIWORD(v12) << 16;
    v171 = bswap32(v74);
    *(_DWORD *)(a2 + 4 * v9) = bswap32(v179 | 8);
    v170[1] = v74;
    v173 = sub_268FC();
    if ( v179 == -2113863680 )
      goto LABEL_110;
    LOWORD(v75) = 0;
    if ( v179 <= 0x82010000 )
    {
      HIWORD(v75) = 518;
      if ( v179 == v75 )
        goto LABEL_105;
      if ( HIWORD(v12) << 16 <= v75 )
      {
        switch ( v179 )
        {
          case 0x2020000u:
            goto LABEL_37;
          case 0x2030000u:
LABEL_111:
            v93 = &pubkey_ptr;
            return sub_26740(v170, *v93, a4);
          case 0x2010000u:
            goto LABEL_110;
        }
      }
      else if ( v179 == 34078720 || v179 == 34144256 || v179 == 34013184 )
      {
        return 8;
      }
    }
    else
    {
      HIWORD(v75) = -32251;
      v76 = v179 > v75;
      if ( v179 == v75 )
        goto LABEL_103;
      LOWORD(v77) = 0;
      if ( v76 )
      {
        HIWORD(v77) = -32249;
        v78 = v179 > v77;
        if ( v179 == v77 )
          goto LABEL_59;
        LOWORD(v79) = 0;
        if ( v78 )
        {
          HIWORD(v79) = -32248;
          if ( v179 == v79 )
            goto LABEL_49;
          if ( v179 == -2113339392 )
            goto LABEL_85;
        }
        else
        {
          HIWORD(v79) = -32250;
          if ( v179 == v79 )
          {
LABEL_158:
            v176 = sub_268FC();
            if ( !v176 )
            {
              v66 = 258;
              goto LABEL_62;
            }
            v124 = bswap32(*a5);
            if ( v124 > 0x13u )
            {
              v125 = bswap32(a5[4]);
              if ( v125 <= (unsigned int)v124 - 20 )
              {
                v193 = v125;
                if ( v125 - 1 <= 0xFFE6 )
                {
                  v194 = a5 + 5;
                  v126 = d2i_X509(0, &v194, v125);
                  v181 = v126;
                  if ( v126 )
                  {
                    pubkey = X509_get_pubkey(v126);
                    if ( pubkey )
                    {
                      v127 = X509_new();
                      version = X509_get_version(v181);
                      v129 = X509_set_version(v127, version);
                      v130 = ASN1_INTEGER_new(v129);
                      ASN1_INTEGER_set(v130, v176);
                      X509_set_serialNumber(v127, v130);
                      v131 = X509_getm_notBefore(v127);
                      X509_gmtime_adj(v131, 0);
                      v132 = X509_getm_notAfter(v127);
                      X509_gmtime_adj(v132, 31536000);
                      issuer_name = X509_get_issuer_name(v127);
                      v134 = strlen((const char *)dword_109294);
                      X509_NAME_add_entry_by_txt(issuer_name, "commonName", 4097, dword_109294, v134, -1, 0);
                      subject_name = X509_get_subject_name(v181);
                      X509_set_subject_name(v127, subject_name);
                      X509_set_pubkey(v127, pubkey);
                      ext_count = X509_get_ext_count(v181);
                      if ( ext_count > 0 )
                      {
                        v187 = v9;
                        v137 = 0;
                        v138 = ext_count;
                        do
                        {
                          ext = X509_get_ext(v181, v137);
                          if ( !X509_add_ext(v127, ext, -1) )
                            sub_6FC54("ntp_crypto.c", 3218, 2, "X509_add_ext(cert, ext, -1)");
                          ++v137;
                        }
                        while ( v137 != v138 );
                        v9 = v187;
                      }
                      X509_free(v181);
                      sub_67758(v196, v176, 0);
                      v140 = cert_host;
                      if ( sub_26CD4(v196, (unsigned __int8 *)(cert_host + 28)) >= 0
                        && sub_26CD4(v196, (unsigned __int8 *)(v140 + 38)) <= 0 )
                      {
                        X509_sign(v127, dword_BA8E0, dword_BA8E8);
                        v156 = X509_verify(v127, dword_BA8E0);
                        if ( v156 > 0 )
                        {
                          v157 = i2d_X509(v127, 0);
                          ptr = 0;
                          v201 = 0;
                          v197 = bswap32(v176);
                          v202 = 0;
                          v158 = v157;
                          v159 = a5[3];
                          v193 = v158;
                          v199 = bswap32(v158);
                          v198 = v159;
                          v195 = sub_64B04(0, v158, 0, 0);
                          ptr = (void *)v195;
                          i2d_X509(v127, &v195);
                          v201 = 0;
                          v202 = sub_64B04(0, dword_BA8E4, 0, 0);
                          v161 = EVP_MD_CTX_new(v202, v160);
                          EVP_DigestInit(v161, dword_BA8E8);
                          EVP_DigestUpdate(v161, &v197, 12);
                          EVP_DigestUpdate(v161, ptr, v193);
                          if ( EVP_SignFinal(v161, v202, &v193, dword_BA8E0) )
                          {
                            if ( v193 > dword_BA8E4 )
                              sub_6FC54("ntp_crypto.c", 3261, 2, "len <= sign_siglen");
                            v201 = bswap32(v193);
                          }
                          EVP_MD_CTX_free(v161);
                          X509_free(v127);
                          v15 = sub_26740(v170, (int *)&v197, a4);
                          sub_27F0C(&v197);
                          return v15;
                        }
                        error = ERR_get_error(v156);
                        v169 = (const char *)ERR_error_string(error, 0);
                        v66 = 265;
                        sub_65D40(3, "cert_sign: %s", v169);
                        X509_free(v127);
                      }
                      else
                      {
                        v66 = 266;
                        X509_free(v127);
                      }
                    }
                    else
                    {
                      v166 = ERR_get_error(0);
                      v167 = (const char *)ERR_error_string(v166, 0);
                      v66 = 260;
                      sub_65D40(3, "cert_sign: %s", v167);
                      X509_free(v181);
                    }
                  }
                  else
                  {
                    v164 = ERR_get_error(0);
                    v165 = (const char *)ERR_error_string(v164, 0);
                    v66 = 269;
                    sub_65D40(3, "cert_sign: %s", v165);
                  }
                  goto LABEL_62;
                }
              }
            }
            goto LABEL_61;
          }
        }
      }
      else
      {
        HIWORD(v77) = -32253;
        if ( v179 == v77 )
          goto LABEL_65;
        if ( v179 == -2113667072 )
        {
          v10 = (_DWORD *)sub_3217C(v171);
          if ( v10 )
            goto LABEL_30;
          goto LABEL_141;
        }
        if ( v179 == -2113798144 )
        {
LABEL_122:
          v109 = bswap32(*a5);
          if ( v109 > 0x13u )
          {
            v110 = bswap32(a5[4]);
            if ( v110 <= (unsigned int)v109 - 20 && v110 - 1 < 0x200 )
            {
              v111 = 0;
              _memcpy_chk(v203, a5 + 5, v110, 513);
              v203[v110] = 0;
              v112 = cinfo;
              if ( !cinfo )
                return 8;
              v94 = 0;
              do
              {
                v113 = *(_DWORD *)(v112 + 4);
                if ( (v113 & 0x88) == 0 && !strcmp(v203, *(const char **)(v112 + 48)) )
                {
                  if ( !strcmp(v203, *(const char **)(v112 + 52)) )
                  {
                    if ( (v113 & 1) != 0 )
                      v94 = v112;
                  }
                  else
                  {
                    v111 = v112;
                  }
                }
                v112 = *(_DWORD *)v112;
              }
              while ( v112 );
              if ( !v94 )
              {
                if ( !v111 )
                  return 8;
                v94 = v111;
              }
              if ( !v173 )
                return 8;
              return sub_26740(v170, (int *)(v94 + 60), a4);
            }
          }
          goto LABEL_61;
        }
      }
    }
    if ( v12 >= 0 )
      return 8;
    goto LABEL_141;
  }
  v172 = a1 + 4;
  if ( v12 < 0 )
  {
    v29 = a5[1];
    v177 = HIWORD(v12) << 16;
    v171 = bswap32(v29);
    *(_DWORD *)(a2 + 4 * v9) = bswap32(v177 | 8);
    v170[1] = v29;
    v173 = sub_268FC();
    if ( v177 != -2113601536 )
    {
      LOWORD(v30) = 0;
      if ( v177 <= 0x82050000 )
      {
        HIWORD(v30) = -32254;
        v31 = v177 > v30;
        if ( v177 != v30 )
        {
          LOWORD(v32) = 0;
          if ( !v31 )
          {
            HIWORD(v32) = -32255;
            if ( v177 == v32 )
              goto LABEL_110;
            goto LABEL_141;
          }
          HIWORD(v32) = -32253;
          if ( v177 != v32 )
          {
            if ( v177 == -2113667072 )
            {
LABEL_30:
              v10[17] &= ~0x8000u;
              return sub_26740(v170, v10 + 68, a4);
            }
LABEL_141:
            v66 = 271;
            goto LABEL_62;
          }
LABEL_65:
          v68 = bswap32(a5[4]);
          if ( v68 - 1 <= 0xFFE5 && (unsigned __int16)v12 >= v68 + 24 )
          {
            v195 = v68;
            if ( v10 )
              a6 = v10[41];
            v194 = a5 + 5;
            v174 = d2i_PublicKey(6, 0, &v194, v68);
            if ( !v174 )
            {
              v162 = ERR_get_error(0);
              v163 = (const char *)ERR_error_string(v162, 0);
              v66 = 260;
              sub_65D40(3, "crypto_encrypt: %s", v163);
              goto LABEL_62;
            }
            v197 = 0;
            v198 = 0;
            v199 = 0;
            ptr = 0;
            v201 = 0;
            v202 = 0;
            v183 = sub_268FC();
            v197 = bswap32(v183);
            v198 = hostval;
            v195 = EVP_PKEY_size(v174);
            v199 = bswap32(v195);
            v69 = (void *)sub_64B04(0, v195, 0, 0);
            *(_DWORD *)v196 = bswap32(a6);
            v70 = v69;
            ptr = v69;
            v71 = EVP_PKEY_get0_RSA(v174);
            v72 = RSA_public_encrypt(4, v196, v70, v71, 4);
            if ( v72 <= 0 )
            {
              v148 = ERR_get_error(v72);
              v149 = (const char *)ERR_error_string(v148, 0);
              v66 = 267;
              sub_65D40(3, "crypto_encrypt: %s", v149);
              free(ptr);
              EVP_PKEY_free(v174);
              goto LABEL_62;
            }
            EVP_PKEY_free(v174);
            if ( !v183 )
              goto LABEL_22;
            v202 = sub_64B04(0, dword_BA8E4, 0, 0);
            v50 = EVP_MD_CTX_new(v202, v73);
            EVP_DigestInit(v50, dword_BA8E8);
            EVP_DigestUpdate(v50, &v197, 12);
            EVP_DigestUpdate(v50, ptr, v195);
            if ( !EVP_SignFinal(v50, v202, &v195, dword_BA8E0) )
              goto LABEL_48;
            v51 = v195;
            if ( v195 > dword_BA8E4 )
              sub_6FC54("ntp_crypto.c", 1631, 2, "vallen <= sign_siglen");
LABEL_47:
            v201 = bswap32(v51);
            goto LABEL_48;
          }
          goto LABEL_61;
        }
        goto LABEL_122;
      }
      HIWORD(v30) = -32249;
      v33 = v177 > v30;
      if ( v177 != v30 )
      {
        LOWORD(v34) = 0;
        if ( !v33 )
        {
          HIWORD(v34) = -32250;
          if ( v177 != v34 )
            goto LABEL_141;
          goto LABEL_158;
        }
        HIWORD(v34) = -32248;
        if ( v177 != v34 )
        {
          if ( v177 != -2113339392 )
            goto LABEL_141;
LABEL_85:
          if ( !mvkey_info )
          {
            v66 = 270;
            sub_65D40(5, "crypto_bob3: scheme unavailable");
            goto LABEL_62;
          }
          v80 = EVP_PKEY_get0_DSA(*(_DWORD *)(mvkey_info + 4));
          DSA_get0_pqg(v80, &v192, &v193);
          DSA_get0_key(v80, &v195, v196);
          v81 = bswap32(*a5);
          if ( v81 > 0x13u )
          {
            v82 = bswap32(a5[4]);
            if ( v82 <= (unsigned int)v81 - 20 )
            {
              v191 = (void *)v82;
              if ( v82 - 1 <= 0xFFE6 )
              {
                v83 = BN_bin2bn(a5 + 5, v82, 0);
                v184 = v83;
                if ( !v83 )
                {
                  v152 = ERR_get_error(0);
                  v153 = (const char *)ERR_error_string(v152, 0);
                  v66 = 271;
                  sub_65D40(3, "crypto_bob3: %s", v153);
                  goto LABEL_62;
                }
                v84 = BN_CTX_new(v83);
                v85 = ((int (*)(void))BN_new)();
                v86 = ((int (*)(void))BN_new)();
                v175 = DSA_new();
                v186 = ((int (*)(void))BN_new)();
                v188 = ((int (*)(void))BN_new)();
                v189 = ((int (*)(void))BN_new)();
                do
                {
                  v87 = BN_num_bits(v193);
                  BN_rand(v85, v87, 0, 0);
                  BN_div(0, v85, v85, v193, v84);
                  BN_gcd(v86, v85, v193, v84);
                }
                while ( !BN_is_one(v86) );
                BN_mod_exp(v86, v194, v85, v192, v84);
                BN_mod_mul(v186, v86, v184, v192, v84);
                BN_mod_exp(v188, *(_DWORD *)v196, v85, v192, v84);
                BN_mod_exp(v189, v195, v85, v192, v84);
                v88 = BN_dup(v195);
                DSA_set0_key(v175, v88, 0);
                DSA_set0_pqg(v175, v186, v188, v189);
                BN_CTX_free(v84);
                BN_free(v85);
                BN_free(v184);
                BN_free(v86);
                v197 = 0;
                v198 = 0;
                v199 = 0;
                ptr = 0;
                v201 = 0;
                v202 = 0;
                v89 = sub_268FC();
                v198 = bswap32(*(_DWORD *)(mvkey_info + 12));
                v90 = v89;
                v197 = bswap32(v89);
                v91 = i2d_DSAparams(v175, 0);
                v191 = (void *)v91;
                if ( !v91 )
                {
                  v142 = ERR_get_error(0);
                  v143 = (const char *)ERR_error_string(v142, 0);
                  v66 = 271;
                  sub_65D40(3, "crypto_bob3: %s", v143);
                  DSA_free(v175);
                  goto LABEL_62;
                }
                v199 = bswap32(v91);
                v190 = (void *)sub_64B04(0, v91, 0, 0);
                ptr = v190;
                i2d_DSAparams(v175, &v190);
                DSA_free(v175);
                if ( !v90 )
                  goto LABEL_22;
                v202 = sub_64B04(0, dword_BA8E4, 0, 0);
                v50 = EVP_MD_CTX_new(v202, v92);
                EVP_DigestInit(v50, dword_BA8E8);
                EVP_DigestUpdate(v50, &v197, 12);
                EVP_DigestUpdate(v50, ptr, v191);
                if ( !EVP_SignFinal(v50, v202, &v191, dword_BA8E0) )
                  goto LABEL_48;
                v51 = (unsigned int)v191;
                if ( (unsigned int)v191 > dword_BA8E4 )
                  sub_6FC54("ntp_crypto.c", 3011, 2, "len <= sign_siglen");
                goto LABEL_47;
              }
            }
          }
          goto LABEL_61;
        }
LABEL_49:
        if ( !gqkey_info )
        {
          v66 = 270;
          sub_65D40(5, "crypto_bob2: scheme unavailable");
          goto LABEL_62;
        }
        v52 = EVP_PKEY_get0_RSA(*(_DWORD *)(gqkey_info + 4));
        RSA_get0_key(v52, &v194, &v195, v196);
        v53 = bswap32(*a5);
        if ( v53 > 0x13u )
        {
          v54 = bswap32(a5[4]);
          if ( v54 <= (unsigned int)v53 - 20 )
          {
            v193 = v54;
            if ( v54 - 1 <= 0xFFE6 )
            {
              v55 = BN_bin2bn(a5 + 5, v54, 0);
              v178 = v55;
              if ( !v55 )
              {
                v154 = ERR_get_error(0);
                v155 = (const char *)ERR_error_string(v154, 0);
                v66 = 271;
                sub_65D40(3, "crypto_bob2: %s", v155);
                goto LABEL_62;
              }
              v56 = BN_CTX_new(v55);
              v57 = ((int (*)(void))BN_new)();
              v58 = ((int (*)(void))BN_new)();
              v59 = ((int (*)(void))BN_new)();
              v182 = DSA_SIG_new();
              BN_rand(v57, 8 * v193, -1, 1);
              BN_div(0, v57, v57, v194, v56);
              BN_mod_exp(v59, v195, v178, v194, v56);
              BN_mod_mul(v59, v57, v59, v194, v56);
              BN_mod_exp(v58, v57, *(_DWORD *)v196, v194, v56);
              sub_26970(v58, v58);
              DSA_SIG_set0(v182, v59, v58);
              BN_CTX_free(v56);
              BN_free(v178);
              BN_free(v57);
              v60 = i2d_DSA_SIG(v182, 0);
              v193 = v60;
              if ( v60 <= 0 )
              {
                v146 = ERR_get_error(v60);
                v147 = (const char *)ERR_error_string(v146, 0);
                v66 = 271;
                sub_65D40(3, "crypto_bob2: %s", v147);
                DSA_SIG_free(v182);
                goto LABEL_62;
              }
              v197 = 0;
              v198 = 0;
              v199 = 0;
              ptr = 0;
              v201 = 0;
              v202 = 0;
              v61 = sub_268FC();
              v198 = bswap32(*(_DWORD *)(gqkey_info + 12));
              v62 = v61;
              v197 = bswap32(v61);
              v199 = bswap32(v193);
              v192 = sub_64B04(0, v193, 0, 0);
              ptr = (void *)v192;
              i2d_DSA_SIG(v182, &v192);
              DSA_SIG_free(v182);
              if ( !v62 )
                goto LABEL_22;
              v202 = sub_64B04(0, dword_BA8E4, 0, 0);
              v50 = EVP_MD_CTX_new(v202, v63);
              EVP_DigestInit(v50, dword_BA8E8);
              EVP_DigestUpdate(v50, &v197, 12);
              EVP_DigestUpdate(v50, ptr, v193);
              if ( !EVP_SignFinal(v50, v202, &v193, dword_BA8E0) )
              {
LABEL_48:
                EVP_MD_CTX_free(v50);
LABEL_22:
                v15 = sub_26740(v170, (int *)&v197, a4);
                sub_27F0C(&v197);
                return v15;
              }
              v51 = v193;
              if ( v193 > dword_BA8E4 )
                sub_6FC54("ntp_crypto.c", 2659, 2, "len <= sign_siglen");
              goto LABEL_47;
            }
          }
        }
LABEL_61:
        v66 = 257;
        goto LABEL_62;
      }
LABEL_59:
      if ( !iffkey_info )
      {
        v66 = 270;
        sub_65D40(5, "crypto_bob: scheme unavailable");
        goto LABEL_62;
      }
      v64 = EVP_PKEY_get0_DSA(*(_DWORD *)(iffkey_info + 4));
      DSA_get0_pqg(v64, &v193, &v194);
      DSA_get0_key(v64, 0, v196);
      v65 = bswap32(*a5);
      if ( v65 > 0x13u )
      {
        v114 = bswap32(a5[4]);
        if ( v114 <= (unsigned int)v65 - 20 )
        {
          v192 = v114;
          if ( v114 - 1 <= 0xFFE6 )
          {
            v115 = BN_bin2bn(a5 + 5, v114, 0);
            v180 = v115;
            if ( !v115 )
            {
              v150 = ERR_get_error(0);
              v151 = (const char *)ERR_error_string(v150, 0);
              v66 = 271;
              sub_65D40(3, "crypto_bob: %s", v151);
              goto LABEL_62;
            }
            v116 = BN_CTX_new(v115);
            v117 = ((int (*)(void))BN_new)();
            v118 = ((int (*)(void))BN_new)();
            v119 = DSA_SIG_new();
            BN_rand(v117, 8 * v192, -1, 1);
            BN_mod_mul(v118, *(_DWORD *)v196, v180, v194, v116);
            BN_add(v118, v118, v117);
            BN_div(0, v118, v118, v194, v116);
            BN_mod_exp(v117, v195, v117, v193, v116);
            sub_26970(v117, v117);
            DSA_SIG_set0(v119, v118, v117);
            BN_CTX_free(v116);
            BN_free(v180);
            v120 = i2d_DSA_SIG(v119, 0);
            v192 = v120;
            if ( !v120 )
            {
              v144 = ERR_get_error(0);
              v145 = (const char *)ERR_error_string(v144, 0);
              v66 = 271;
              sub_65D40(3, "crypto_bob: %s", v145);
              DSA_SIG_free(v119);
              goto LABEL_62;
            }
            if ( v120 > 0xFFE7 )
            {
              v66 = 257;
              sub_65D40(3, "crypto_bob: signature is too big: %u", v120);
              DSA_SIG_free(v119);
              goto LABEL_62;
            }
            v197 = 0;
            v198 = 0;
            v199 = 0;
            ptr = 0;
            v201 = 0;
            v202 = 0;
            v121 = sub_268FC();
            v198 = bswap32(*(_DWORD *)(iffkey_info + 12));
            v122 = v121;
            v197 = bswap32(v121);
            v199 = bswap32(v192);
            v191 = (void *)sub_64B04(0, v192, 0, 0);
            ptr = v191;
            i2d_DSA_SIG(v119, &v191);
            DSA_SIG_free(v119);
            if ( !v122 )
              goto LABEL_22;
            v202 = sub_64B04(0, dword_BA8E4, 0, 0);
            v50 = EVP_MD_CTX_new(v202, v123);
            EVP_DigestInit(v50, dword_BA8E8);
            EVP_DigestUpdate(v50, &v197, 12);
            EVP_DigestUpdate(v50, ptr, v192);
            if ( !EVP_SignFinal(v50, v202, &v192, dword_BA8E0) )
              goto LABEL_48;
            v51 = v192;
            if ( v192 > dword_BA8E4 )
              sub_6FC54("ntp_crypto.c", 2337, 2, "len <= sign_siglen");
            goto LABEL_47;
          }
        }
      }
      goto LABEL_61;
    }
LABEL_103:
    v93 = &tai_leap_ptr;
    return sub_26740(v170, *v93, a4);
  }
  v13 = a5[1];
  a1[32] = *a5;
  v14 = HIWORD(v12) << 16;
  v171 = bswap32(v13);
  *(_DWORD *)(a2 + 4 * v9) = bswap32(v14 | 8);
  *(_DWORD *)(a2 + 4 * v9 + 4) = v13;
  v173 = sub_268FC();
  if ( v14 == 33947648 )
  {
LABEL_105:
    sub_67758(v196, v173, 0);
    v94 = cert_host;
    if ( sub_26CD4(v196, (unsigned __int8 *)(cert_host + 28)) < 0 || sub_26CD4(v196, (unsigned __int8 *)(v94 + 38)) > 0 )
    {
      v66 = 266;
      goto LABEL_62;
    }
    return sub_26740(v170, (int *)(v94 + 60), a4);
  }
  if ( v14 <= 0x2060000 )
  {
    if ( v14 != 33685504 )
    {
      if ( v14 != 33751040 )
      {
        if ( v14 != 33619968 )
          return 8;
LABEL_110:
        v95 = sub_26740(v170, &hostval, a4);
        v170[3] = bswap32(crypto_flags);
        return v95;
      }
      goto LABEL_111;
    }
LABEL_37:
    v35 = a5[2];
    v36 = a5[4];
    v198 = a5[3];
    v197 = v35;
    v199 = v36;
    ptr = a5 + 5;
    v201 = 0;
    v202 = 0;
    return sub_26740(v170, (int *)&v197, a4);
  }
  if ( v14 == 34078720 )
  {
    v37 = v10[43];
    if ( v37 )
    {
      v38 = EVP_PKEY_get0_RSA(*(_DWORD *)(v37 + 4));
      if ( v38 )
      {
        v39 = v10[44];
        if ( v39 )
          v39 = BN_free(v39);
        v10[44] = BN_new(v39);
        RSA_get0_key(v38, v196, 0, 0);
        v40 = BN_num_bits(*(_DWORD *)v196);
        v41 = v40 + 7;
        if ( v40 + 7 < 0 )
          v41 = v40 + 14;
        v42 = v10[44];
        v195 = v41 >> 3;
        v43 = BN_rand(v42, 8 * (v41 >> 3), -1, 1);
        v44 = BN_CTX_new(v43);
        BN_div(0, v10[44], v10[44], *(_DWORD *)v196, v44);
        BN_CTX_free(v44);
        v197 = 0;
        v198 = 0;
        v199 = 0;
        ptr = 0;
        v201 = 0;
        v202 = 0;
        v45 = sub_268FC();
        v198 = bswap32(*(_DWORD *)(v10[43] + 12));
        v46 = v45;
        v197 = bswap32(v45);
        v199 = bswap32(v195);
        v47 = (void *)sub_64B04(0, v195, 0, 0);
        v48 = v10[44];
        ptr = v47;
        BN_bn2bin(v48, v47);
        if ( !v46 )
          goto LABEL_22;
        v202 = sub_64B04(0, dword_BA8E4, 0, 0);
        v50 = EVP_MD_CTX_new(v202, v49);
        EVP_DigestInit(v50, dword_BA8E8);
        EVP_DigestUpdate(v50, &v197, 12);
        EVP_DigestUpdate(v50, ptr, v195);
        if ( !EVP_SignFinal(v50, v202, &v195, dword_BA8E0) )
          goto LABEL_48;
        v51 = v195;
        if ( v195 > dword_BA8E4 )
          sub_6FC54("ntp_crypto.c", 2554, 2, "len <= sign_siglen");
        goto LABEL_47;
      }
      v66 = 260;
      sub_65D40(5, "crypto_alice2: defective key");
      goto LABEL_62;
    }
    goto LABEL_155;
  }
  if ( v14 == 34144256 )
  {
    v96 = v10[43];
    if ( v96 )
    {
      v97 = EVP_PKEY_get0_DSA(*(_DWORD *)(v96 + 4));
      if ( v97 )
      {
        DSA_get0_pqg(v97, v196, 0);
        v98 = v10[44];
        if ( v98 )
          v98 = BN_free(v98);
        v10[44] = BN_new(v98);
        v99 = BN_num_bits(*(_DWORD *)v196);
        v100 = v99 + 7;
        if ( v99 + 7 < 0 )
          v100 = v99 + 14;
        v101 = v10[44];
        v195 = v100 >> 3;
        v102 = BN_rand(v101, 8 * (v100 >> 3), -1, 1);
        v103 = BN_CTX_new(v102);
        BN_div(0, v10[44], v10[44], *(_DWORD *)v196, v103);
        BN_CTX_free(v103);
        v197 = 0;
        v198 = 0;
        v199 = 0;
        ptr = 0;
        v201 = 0;
        v202 = 0;
        v104 = sub_268FC();
        v198 = bswap32(*(_DWORD *)(v10[43] + 12));
        v105 = v104;
        v197 = bswap32(v104);
        v199 = bswap32(v195);
        v106 = (void *)sub_64B04(0, v195, 0, 0);
        v107 = v10[44];
        ptr = v106;
        BN_bn2bin(v107, v106);
        if ( !v105 )
          goto LABEL_22;
        v202 = sub_64B04(0, dword_BA8E4, 0, 0);
        v50 = EVP_MD_CTX_new(v202, v108);
        EVP_DigestInit(v50, dword_BA8E8);
        EVP_DigestUpdate(v50, &v197, 12);
        EVP_DigestUpdate(v50, ptr, v195);
        if ( !EVP_SignFinal(v50, v202, &v195, dword_BA8E0) )
          goto LABEL_48;
        v51 = v195;
        if ( v195 > dword_BA8E4 )
          sub_6FC54("ntp_crypto.c", 2898, 2, "len <= sign_siglen");
        goto LABEL_47;
      }
      v66 = 260;
      sub_65D40(5, "crypto_alice3: defective key");
      goto LABEL_62;
    }
LABEL_155:
    v66 = 270;
    goto LABEL_62;
  }
  if ( v14 != 34013184 )
    return 8;
  v17 = v10[43];
  if ( v17 )
  {
    v18 = EVP_PKEY_get0_DSA(*(_DWORD *)(v17 + 4));
    if ( v18 )
    {
      v19 = v10[44];
      if ( v19 )
        v19 = BN_free(v19);
      v10[44] = BN_new(v19);
      DSA_get0_pqg(v18, 0, v196);
      v20 = BN_num_bits(*(_DWORD *)v196);
      v21 = v20 + 7;
      if ( v20 + 7 < 0 )
        v21 = v20 + 14;
      v22 = v10[44];
      v195 = v21 >> 3;
      v23 = BN_rand(v22, 8 * (v21 >> 3), -1, 1);
      v24 = BN_CTX_new(v23);
      BN_div(0, v10[44], v10[44], *(_DWORD *)v196, v24);
      BN_CTX_free(v24);
      v197 = 0;
      v198 = 0;
      v199 = 0;
      ptr = 0;
      v201 = 0;
      v202 = 0;
      v25 = sub_268FC();
      v198 = bswap32(*(_DWORD *)(v10[43] + 12));
      v26 = v25;
      v197 = bswap32(v25);
      v199 = bswap32(v195);
      v27 = (void *)sub_64B04(0, v195, 0, 0);
      v28 = v10[44];
      ptr = v27;
      BN_bn2bin(v28, v27);
      if ( !v26 )
        goto LABEL_22;
      v202 = sub_64B04(0, dword_BA8E4, 0, 0);
      v50 = EVP_MD_CTX_new(v202, v141);
      EVP_DigestInit(v50, dword_BA8E8);
      EVP_DigestUpdate(v50, &v197, 12);
      EVP_DigestUpdate(v50, ptr, v195);
      if ( !EVP_SignFinal(v50, v202, &v195, dword_BA8E0) )
        goto LABEL_48;
      v51 = v195;
      if ( v195 > dword_BA8E4 )
        sub_6FC54("ntp_crypto.c", 2224, 2, "len <= sign_siglen");
      goto LABEL_47;
    }
    v66 = 260;
    sub_65D40(5, "crypto_alice: defective key");
  }
  else
  {
    v66 = 270;
    sub_65D40(5, "crypto_alice: scheme unavailable");
  }
LABEL_62:
  *(_DWORD *)(a2 + 4 * v9) |= 0x40u;
  v67 = (const char *)sub_6E39C(v66);
  sub_6D00C(v203, 256, "%04x %d %02x %s", v12 | 0x40000000, v171, v66, v67);
  sub_432D0(v172, v203);
  if ( v12 < 0 )
    return 8;
  else
    return 0;
}
