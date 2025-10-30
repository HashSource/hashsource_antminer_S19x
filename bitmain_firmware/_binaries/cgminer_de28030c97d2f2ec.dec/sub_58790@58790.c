int __fastcall sub_58790(const char *a1, int a2)
{
  double v2; // d0
  const char *v4; // r0
  const char *v5; // r0
  const char *v6; // r0
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  int v10; // r0
  unsigned int v11; // r4
  int v12; // r0
  int v13; // r0
  char *v14; // r4
  const char *v15; // r0
  char *v16; // r4
  const char *v17; // r0
  int v18; // r0
  char *v19; // r4
  const char *v20; // r0
  int v21; // r0
  unsigned int v22; // r4
  int v23; // r0
  unsigned int v24; // r4
  int v25; // r0
  unsigned int v26; // r4
  int v27; // r0
  int v28; // r0
  unsigned int v29; // r4
  int v30; // r0
  char *v31; // r4
  const char *v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  char *v36; // r4
  const char *v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r0
  unsigned int v41; // r4
  int v42; // r0
  unsigned int v43; // r4
  unsigned int v44; // r4
  unsigned int v45; // r4
  const char *v46; // r0
  const char *v47; // r0
  char v50[16]; // [sp+14h] [bp-930h] BYREF
  char v51[92]; // [sp+814h] [bp-130h] BYREF
  char v52[160]; // [sp+870h] [bp-D4h] BYREF
  _DWORD *v53; // [sp+910h] [bp-34h]
  _DWORD *v54; // [sp+914h] [bp-30h]
  int v55; // [sp+918h] [bp-2Ch]
  _DWORD *v56; // [sp+91Ch] [bp-28h]
  _DWORD *v57; // [sp+920h] [bp-24h]
  _DWORD *v58; // [sp+924h] [bp-20h]
  int v59; // [sp+928h] [bp-1Ch]
  unsigned int k; // [sp+92Ch] [bp-18h]
  int j; // [sp+930h] [bp-14h]
  int i; // [sp+934h] [bp-10h]

  i = 0;
  v59 = 0;
  j = 0;
  k = 0;
  v58 = 0;
  v57 = 0;
  v56 = 0;
  v55 = 0;
  v54 = 0;
  v53 = 0;
  if ( a1 && a2 )
  {
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v50, 0x800u, "%s(%d) : %s", "cb_bitmain_api_stats", a2, a1);
      sub_1E4EC(7, v50, 0);
    }
    v58 = (_DWORD *)sub_64704(a1, 0, v51);
    if ( v58 && !*v58 )
    {
      sub_581DC(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 153);
      memset(&unk_954E0, 0, 0x1A10u);
      v57 = (_DWORD *)sub_65FEC(v58, "inited");
      if ( v57 && *v57 == 3 )
      {
        dword_954E8 = sub_67C98(v57);
        v57 = (_DWORD *)sub_65FEC(v58, "chain_num");
        if ( v57 && *v57 == 3 )
        {
          dword_954E4 = sub_67C98(v57);
          v57 = (_DWORD *)sub_65FEC(v58, "real_miner_type");
          if ( v57 && *v57 == 2 )
          {
            v4 = (const char *)sub_677D0(v57);
            snprintf(&byte_954EC, 0x100u, "%s", v4);
          }
          v57 = (_DWORD *)sub_65FEC(v58, "rate_5s");
          if ( v57 && *v57 == 2 )
          {
            v5 = (const char *)sub_677D0(v57);
            snprintf(byte_955EC, 0x10u, "%s", v5);
            v57 = (_DWORD *)sub_65FEC(v58, "rate_30m");
            if ( v57 && *v57 == 2 )
            {
              v6 = (const char *)sub_677D0(v57);
              snprintf(s, 0x10u, "%s", v6);
              v57 = (_DWORD *)sub_65FEC(v58, "rate_avg");
              if ( v57 && *v57 == 2 )
              {
                v7 = (const char *)sub_677D0(v57);
                snprintf(&s[16], 0x10u, "%s", v7);
                strncpy(byte_87E50, &s[16], 0x10u);
                v57 = (_DWORD *)sub_65FEC(v58, "rate_ideal");
                if ( v57 && *v57 == 2 )
                {
                  v8 = (const char *)sub_677D0(v57);
                  snprintf(byte_9561C, 0x10u, "%s", v8);
                  v57 = (_DWORD *)sub_65FEC(v58, "rate_unit");
                  if ( v57 && *v57 == 2 )
                  {
                    v9 = (const char *)sub_677D0(v57);
                    snprintf(&byte_9561C[16], 8u, "%s", v9);
                    v57 = (_DWORD *)sub_65FEC(v58, "fan_num");
                    if ( v57 && *v57 == 3 )
                    {
                      *(_DWORD *)&byte_9561C[24] = sub_67C98(v57);
                      v56 = (_DWORD *)sub_65FEC(v58, "fan");
                      if ( v56 && *v56 == 1 )
                      {
                        for ( i = 0; ; ++i )
                        {
                          v11 = i;
                          if ( v11 >= sub_66B34(v56) )
                            break;
                          v57 = (_DWORD *)sub_66B80(v56, i);
                          if ( !v57 )
                            break;
                          if ( *v57 != 3 )
                          {
                            if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                            {
                              snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                              sub_1E4EC(3, v50, 0);
                            }
                            sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 199);
                            sub_58178((int)v58);
                            return -3;
                          }
                          v10 = sub_67C98(v57);
                          *((_DWORD *)&unk_954E0 + i + 86) = v10;
                        }
                        v54 = (_DWORD *)sub_65FEC(v58, "chain");
                        if ( v54 && *v54 == 1 )
                        {
                          dword_95228 = 0;
                          for ( i = 0; ; ++i )
                          {
                            v45 = i;
                            if ( v45 >= sub_66B34(v54) )
                              break;
                            v53 = (_DWORD *)sub_66B80(v54, i);
                            if ( !v53 || i > 3 )
                              break;
                            if ( *v53 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 210);
                              sub_58178((int)v58);
                              return -3;
                            }
                            v57 = (_DWORD *)sub_65FEC(v53, "index");
                            if ( !v57 || *v57 != 3 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 213);
                              sub_58178((int)v58);
                              return -3;
                            }
                            v12 = sub_67C98(v57);
                            *((_DWORD *)&unk_954E0 + 388 * i + 90) = v12;
                            v57 = (_DWORD *)sub_65FEC(v53, "freq_avg");
                            if ( !v57 || *v57 != 3 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 217);
                              sub_58178((int)v58);
                              return -3;
                            }
                            v13 = sub_67C98(v57);
                            *((_DWORD *)&unk_954E0 + 388 * i + 91) = v13;
                            v57 = (_DWORD *)sub_65FEC(v53, "rate_ideal");
                            if ( !v57 || *v57 != 2 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 221);
                              sub_58178((int)v58);
                              return -3;
                            }
                            v14 = (char *)&unk_954E0 + 1552 * i + 368;
                            v15 = (const char *)sub_677D0(v57);
                            snprintf(v14, 0x10u, "%s", v15);
                            v57 = (_DWORD *)sub_65FEC(v53, "rate_real");
                            if ( !v57 || *v57 != 2 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 225);
                              sub_58178((int)v58);
                              return -3;
                            }
                            v16 = (char *)&unk_954E0 + 1552 * i + 384;
                            v17 = (const char *)sub_677D0(v57);
                            snprintf(v16, 0x10u, "%s", v17);
                            v57 = (_DWORD *)sub_65FEC(v53, "asic_num");
                            if ( !v57 || *v57 != 3 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 229);
                              sub_58178((int)v58);
                              return -3;
                            }
                            v18 = sub_67C98(v57);
                            *((_DWORD *)&unk_954E0 + 388 * i + 100) = v18;
                            v57 = (_DWORD *)sub_65FEC(v53, "asic");
                            if ( !v57 || *v57 != 2 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 233);
                              sub_58178((int)v58);
                              return -3;
                            }
                            v19 = (char *)&unk_954E0 + 1552 * i + 404;
                            v20 = (const char *)sub_677D0(v57);
                            snprintf(v19, 0x100u, "%s", v20);
                            v56 = (_DWORD *)sub_65FEC(v53, "temp_pic");
                            if ( !v56 || *v56 != 1 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 237);
                              sub_58178((int)v58);
                              return -3;
                            }
                            for ( j = 0; ; ++j )
                            {
                              v22 = j;
                              if ( v22 >= sub_66B34(v56) )
                                break;
                              v57 = (_DWORD *)sub_66B80(v56, j);
                              if ( !v57 || j > 3 )
                                break;
                              if ( *v57 != 3 )
                              {
                                if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                                {
                                  snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                  sub_1E4EC(3, v50, 0);
                                }
                                sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 241);
                                sub_58178((int)v58);
                                return -3;
                              }
                              v21 = sub_67C98(v57);
                              *((_DWORD *)&unk_954E0 + 388 * i + j + 165) = v21;
                            }
                            v56 = (_DWORD *)sub_65FEC(v53, "temp_pcb");
                            if ( !v56 || *v56 != 1 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 246);
                              sub_58178((int)v58);
                              return -3;
                            }
                            for ( j = 0; ; ++j )
                            {
                              v24 = j;
                              if ( v24 >= sub_66B34(v56) )
                                break;
                              v57 = (_DWORD *)sub_66B80(v56, j);
                              if ( !v57 || j > 3 )
                                break;
                              if ( *v57 != 3 )
                              {
                                if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                                {
                                  snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                  sub_1E4EC(3, v50, 0);
                                }
                                sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 250);
                                sub_58178((int)v58);
                                return -3;
                              }
                              v23 = sub_67C98(v57);
                              *((_DWORD *)&unk_954E0 + 388 * i + j + 169) = v23;
                            }
                            v56 = (_DWORD *)sub_65FEC(v53, "temp_chip");
                            if ( !v56 || *v56 != 1 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 255);
                              sub_58178((int)v58);
                              return -3;
                            }
                            for ( j = 0; ; ++j )
                            {
                              v26 = j;
                              if ( v26 >= sub_66B34(v56) )
                                break;
                              v57 = (_DWORD *)sub_66B80(v56, j);
                              if ( !v57 || j > 3 )
                                break;
                              if ( *v57 != 3 )
                              {
                                if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                                {
                                  snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                  sub_1E4EC(3, v50, 0);
                                }
                                sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 259);
                                sub_58178((int)v58);
                                return -3;
                              }
                              v25 = sub_67C98(v57);
                              *((_DWORD *)&unk_954E0 + 388 * i + j + 173) = v25;
                            }
                            v57 = (_DWORD *)sub_65FEC(v53, "hw");
                            if ( !v57 || *v57 != 3 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 264);
                              sub_58178((int)v58);
                              return -3;
                            }
                            v27 = sub_67C98(v57);
                            *((_DWORD *)&unk_954E0 + 388 * i + 177) = v27;
                            dword_95228 += *((_DWORD *)&unk_954E0 + 388 * i + 177);
                            dword_96EE4 = 0;
                            v56 = (_DWORD *)sub_65FEC(v53, "rate_array");
                            if ( !v56 || *v56 != 1 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 270);
                              sub_58178((int)v58);
                              return -3;
                            }
                            for ( j = 0; ; ++j )
                            {
                              v29 = j;
                              if ( v29 >= sub_66B34(v56) )
                                break;
                              v57 = (_DWORD *)sub_66B80(v56, j);
                              if ( !v57 )
                                break;
                              if ( *v57 != 3 )
                              {
                                if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                                {
                                  snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                  sub_1E4EC(3, v50, 0);
                                }
                                sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 272);
                                sub_58178((int)v58);
                                return -3;
                              }
                              v28 = sub_67C98(v57);
                              *((_DWORD *)&unk_954E0 + 388 * i + j + 178) = v28;
                              ++dword_96EE4;
                            }
                            v57 = (_DWORD *)sub_65FEC(v53, "nonce");
                            if ( !v57 || *v57 != 3 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 278);
                              sub_58178((int)v58);
                              return -3;
                            }
                            v30 = sub_67C98(v57);
                            *((_DWORD *)&unk_954E0 + 388 * i + 202) = v30;
                            dword_96EE0 += *((_DWORD *)&unk_954E0 + 388 * i + 202);
                            v57 = (_DWORD *)sub_65FEC(v53, "eeprom");
                            if ( (!v57 || *v57 != 5) && (!v57 || *v57 != 6) )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 283);
                              sub_58178((int)v58);
                              return -3;
                            }
                            *((_BYTE *)&unk_954E0 + 1552 * i + 812) = *v57 == 5;
                            v57 = (_DWORD *)sub_65FEC(v53, "sn");
                            if ( !v57 || *v57 != 2 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 287);
                              sub_58178((int)v58);
                              return -3;
                            }
                            v31 = (char *)&unk_954E0 + 1552 * i + 813;
                            v32 = (const char *)sub_677D0(v57);
                            snprintf(v31, 0x20u, "%s", v32);
                            v57 = (_DWORD *)sub_65FEC(v53, "eeprom_vol");
                            if ( !v57 || *v57 != 3 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 291);
                              sub_58178((int)v58);
                              return -3;
                            }
                            v33 = sub_67C98(v57);
                            *((_DWORD *)&unk_954E0 + 388 * i + 213) = v33;
                            v57 = (_DWORD *)sub_65FEC(v53, "eeprom_freq");
                            if ( !v57 || *v57 != 3 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 295);
                              sub_58178((int)v58);
                              return -3;
                            }
                            v34 = sub_67C98(v57);
                            *((_DWORD *)&unk_954E0 + 388 * i + 212) = v34;
                            v57 = (_DWORD *)sub_65FEC(v53, "eeprom_bin");
                            if ( !v57 || *v57 != 3 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 299);
                              sub_58178((int)v58);
                              return -3;
                            }
                            v35 = sub_67C98(v57);
                            *((_DWORD *)&unk_954E0 + 388 * i + 214) = v35;
                            v57 = (_DWORD *)sub_65FEC(v53, "eeprom_ft");
                            if ( !v57 || *v57 != 2 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 303);
                              sub_58178((int)v58);
                              return -3;
                            }
                            v36 = (char *)&unk_954E0 + 1552 * i + 860;
                            v37 = (const char *)sub_677D0(v57);
                            snprintf(v36, 0x10u, "%s", v37);
                            v57 = (_DWORD *)sub_65FEC(v53, "eeprom_code");
                            if ( !v57 || *v57 != 3 )
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 307);
                              sub_58178((int)v58);
                              return -3;
                            }
                            v38 = sub_67C98(v57);
                            *((_DWORD *)&unk_954E0 + 388 * i + 219) = v38;
                            v56 = (_DWORD *)sub_65FEC(v53, "tpl");
                            if ( v56 )
                            {
                              v39 = sub_66B34(v56);
                              *((_DWORD *)&unk_954E0 + 388 * i + 220) = v39;
                              for ( j = 0; ; ++j )
                              {
                                v44 = j;
                                if ( v44 >= sub_66B34(v56) )
                                  break;
                                v57 = (_DWORD *)sub_66B80(v56, j);
                                if ( !v57 )
                                  break;
                                if ( *v57 != 1 )
                                {
                                  if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                                  {
                                    snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                    sub_1E4EC(3, v50, 0);
                                  }
                                  sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 317);
                                  sub_58178((int)v58);
                                  return -3;
                                }
                                v40 = sub_66B34(v57);
                                *((_DWORD *)&unk_954E0 + 388 * i + 221) = v40;
                                for ( k = 0; ; ++k )
                                {
                                  v43 = k;
                                  if ( v43 >= sub_66B34(v57) )
                                    break;
                                  v55 = sub_66B80(v57, k);
                                  if ( !v55 )
                                    break;
                                  v41 = j * *((_DWORD *)&unk_954E0 + 388 * i + 221) + k;
                                  v42 = sub_67C98(v55);
                                  *((_DWORD *)&unk_954E0 + 388 * i + v41 + 222) = v42;
                                }
                              }
                            }
                          }
                          v57 = (_DWORD *)sub_65FEC(v58, "miner_version");
                          if ( v57 && *v57 == 2 )
                          {
                            v46 = (const char *)sub_677D0(v57);
                            snprintf(src, 0x30u, "%s", v46);
                            if ( strcmp(src, byte_87B48) )
                              strncpy(byte_87B48, src, 0x100u);
                            v57 = (_DWORD *)sub_65FEC(v58, "total_hash");
                            if ( v57 && *v57 == 4 )
                            {
                              sub_67E80(v57);
                              dbl_96EB8 = v2;
                              dbl_91F50 = v2 * 1000.0;
                              v57 = (_DWORD *)sub_65FEC(v58, "miner_id");
                              if ( v57 && *v57 == 2 )
                              {
                                v47 = (const char *)sub_677D0(v57);
                                snprintf(byte_96EC0, 0x20u, "%s", v47);
                                v57 = (_DWORD *)sub_65FEC(v58, "error_code");
                                if ( v57 && *v57 == 3 )
                                {
                                  dword_96EE8 = sub_67C98(v57);
                                  sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 344);
                                  sub_58178((int)v58);
                                  return 0;
                                }
                                else
                                {
                                  if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                                  {
                                    snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                    sub_1E4EC(3, v50, 0);
                                  }
                                  sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 341);
                                  sub_58178((int)v58);
                                  return -3;
                                }
                              }
                              else
                              {
                                if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                                {
                                  snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                  sub_1E4EC(3, v50, 0);
                                }
                                sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 337);
                                sub_58178((int)v58);
                                return -3;
                              }
                            }
                            else
                            {
                              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                              {
                                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1E4EC(3, v50, 0);
                              }
                              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 332);
                              sub_58178((int)v58);
                              return -3;
                            }
                          }
                          else
                          {
                            if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                            {
                              snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                              sub_1E4EC(3, v50, 0);
                            }
                            sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 326);
                            sub_58178((int)v58);
                            return -3;
                          }
                        }
                        else
                        {
                          if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                          {
                            snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                            sub_1E4EC(3, v50, 0);
                          }
                          sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 204);
                          sub_58178((int)v58);
                          return -3;
                        }
                      }
                      else
                      {
                        if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                        {
                          snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                          sub_1E4EC(3, v50, 0);
                        }
                        sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 197);
                        sub_58178((int)v58);
                        return -3;
                      }
                    }
                    else
                    {
                      if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                      {
                        snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                        sub_1E4EC(3, v50, 0);
                      }
                      sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 193);
                      sub_58178((int)v58);
                      return -3;
                    }
                  }
                  else
                  {
                    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                    {
                      snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                      sub_1E4EC(3, v50, 0);
                    }
                    sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 189);
                    sub_58178((int)v58);
                    return -3;
                  }
                }
                else
                {
                  if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                  {
                    snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                    sub_1E4EC(3, v50, 0);
                  }
                  sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 185);
                  sub_58178((int)v58);
                  return -3;
                }
              }
              else
              {
                if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
                {
                  snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                  sub_1E4EC(3, v50, 0);
                }
                sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 180);
                sub_58178((int)v58);
                return -3;
              }
            }
            else
            {
              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
              {
                snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                sub_1E4EC(3, v50, 0);
              }
              sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 176);
              sub_58178((int)v58);
              return -3;
            }
          }
          else
          {
            if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
            {
              snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
              sub_1E4EC(3, v50, 0);
            }
            sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 172);
            sub_58178((int)v58);
            return -3;
          }
        }
        else
        {
          if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
          {
            snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
            sub_1E4EC(3, v50, 0);
          }
          sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 162);
          sub_58178((int)v58);
          return -3;
        }
      }
      else
      {
        if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
        {
          snprintf(v50, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
          sub_1E4EC(3, v50, 0);
        }
        sub_5830C(&stru_954C8, "socketa_api.c", "cb_bitmain_api_stats", 158);
        sub_58178((int)v58);
        return -3;
      }
    }
    else
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
      {
        snprintf(v50, 0x800u, "%s: load data is failed(%s)", "cb_bitmain_api_stats", v52);
        sub_1E4EC(3, v50, 0);
      }
      return -2;
    }
  }
  else
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v50, 0x800u, "%s input err: data @ %p, len is %d", "cb_bitmain_api_stats", a1, a2);
      sub_1E4EC(3, v50, 0);
    }
    return -1;
  }
}
