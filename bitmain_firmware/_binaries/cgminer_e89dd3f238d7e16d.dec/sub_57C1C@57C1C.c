int __fastcall sub_57C1C(const char *a1, int a2)
{
  double v2; // d0
  const char *v4; // r0
  const char *v5; // r0
  const char *v6; // r0
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  int v10; // r0
  unsigned int v11; // r0
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
  unsigned int v22; // r0
  int v23; // r0
  unsigned int v24; // r0
  int v25; // r0
  unsigned int v26; // r0
  int v27; // r0
  int v28; // r0
  unsigned int v29; // r0
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
  int v41; // r0
  unsigned int v42; // r0
  unsigned int v43; // r0
  unsigned int v44; // r0
  const char *v45; // r0
  const char *v46; // r0
  char v49[16]; // [sp+14h] [bp-930h] BYREF
  _BYTE v50[92]; // [sp+814h] [bp-130h] BYREF
  char v51[160]; // [sp+870h] [bp-D4h] BYREF
  _DWORD *v52; // [sp+910h] [bp-34h]
  _DWORD *v53; // [sp+914h] [bp-30h]
  int v54; // [sp+918h] [bp-2Ch]
  _DWORD *v55; // [sp+91Ch] [bp-28h]
  _DWORD *v56; // [sp+920h] [bp-24h]
  _DWORD *v57; // [sp+924h] [bp-20h]
  int v58; // [sp+928h] [bp-1Ch]
  unsigned int k; // [sp+92Ch] [bp-18h]
  int j; // [sp+930h] [bp-14h]
  int i; // [sp+934h] [bp-10h]

  i = 0;
  v58 = 0;
  j = 0;
  k = 0;
  v57 = 0;
  v56 = 0;
  v55 = 0;
  v54 = 0;
  v53 = 0;
  v52 = 0;
  if ( a1 && a2 )
  {
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v49, 0x800u, "%s(%d) : %s", "cb_bitmain_api_stats", a2, a1);
      sub_1DB6C(7, v49, 0);
    }
    v57 = (_DWORD *)sub_639D0(a1, 0, v50);
    if ( v57 && !*v57 )
    {
      sub_57658(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 153);
      memset(&unk_94348, 0, 0x1A10u);
      v56 = (_DWORD *)sub_652F0(v57, "inited");
      if ( v56 && *v56 == 3 )
      {
        dword_94350 = sub_66FB0(v56);
        v56 = (_DWORD *)sub_652F0(v57, "chain_num");
        if ( v56 && *v56 == 3 )
        {
          dword_9434C = sub_66FB0(v56);
          v56 = (_DWORD *)sub_652F0(v57, "real_miner_type");
          if ( v56 && *v56 == 2 )
          {
            v4 = (const char *)sub_66AE0(v56);
            snprintf(&byte_94354, 0x100u, "%s", v4);
          }
          v56 = (_DWORD *)sub_652F0(v57, "rate_5s");
          if ( v56 && *v56 == 2 )
          {
            v5 = (const char *)sub_66AE0(v56);
            snprintf(byte_94454, 0x10u, "%s", v5);
            v56 = (_DWORD *)sub_652F0(v57, "rate_30m");
            if ( v56 && *v56 == 2 )
            {
              v6 = (const char *)sub_66AE0(v56);
              snprintf(s, 0x10u, "%s", v6);
              v56 = (_DWORD *)sub_652F0(v57, "rate_avg");
              if ( v56 && *v56 == 2 )
              {
                v7 = (const char *)sub_66AE0(v56);
                snprintf(&s[16], 0x10u, "%s", v7);
                strncpy(byte_86CB8, &s[16], 0x10u);
                v56 = (_DWORD *)sub_652F0(v57, "rate_ideal");
                if ( v56 && *v56 == 2 )
                {
                  v8 = (const char *)sub_66AE0(v56);
                  snprintf(byte_94484, 0x10u, "%s", v8);
                  v56 = (_DWORD *)sub_652F0(v57, "rate_unit");
                  if ( v56 && *v56 == 2 )
                  {
                    v9 = (const char *)sub_66AE0(v56);
                    snprintf(&byte_94484[16], 8u, "%s", v9);
                    v56 = (_DWORD *)sub_652F0(v57, "fan_num");
                    if ( v56 && *v56 == 3 )
                    {
                      *(_DWORD *)&byte_94484[24] = sub_66FB0(v56);
                      v55 = (_DWORD *)sub_652F0(v57, "fan");
                      if ( v55 && *v55 == 1 )
                      {
                        for ( i = 0; ; ++i )
                        {
                          v11 = sub_65E3C(v55);
                          if ( v11 <= i )
                            break;
                          v56 = (_DWORD *)sub_65E88(v55, i);
                          if ( !v56 )
                            break;
                          if ( *v56 != 3 )
                          {
                            if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                            {
                              snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                              sub_1DB6C(3, v49, 0);
                            }
                            sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 199);
                            sub_575F0((int)v57);
                            return -3;
                          }
                          v10 = sub_66FB0(v56);
                          *((_DWORD *)&unk_94348 + i + 86) = v10;
                        }
                        v53 = (_DWORD *)sub_652F0(v57, "chain");
                        if ( v53 && *v53 == 1 )
                        {
                          dword_94090 = 0;
                          for ( i = 0; ; ++i )
                          {
                            v44 = sub_65E3C(v53);
                            if ( v44 <= i )
                              break;
                            v52 = (_DWORD *)sub_65E88(v53, i);
                            if ( !v52 || i > 3 )
                              break;
                            if ( *v52 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 210);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            v56 = (_DWORD *)sub_652F0(v52, "index");
                            if ( !v56 || *v56 != 3 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 213);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            v12 = sub_66FB0(v56);
                            *((_DWORD *)&unk_94348 + 388 * i + 90) = v12;
                            v56 = (_DWORD *)sub_652F0(v52, "freq_avg");
                            if ( !v56 || *v56 != 3 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 217);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            v13 = sub_66FB0(v56);
                            *((_DWORD *)&unk_94348 + 388 * i + 91) = v13;
                            v56 = (_DWORD *)sub_652F0(v52, "rate_ideal");
                            if ( !v56 || *v56 != 2 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 221);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            v14 = (char *)&unk_94348 + 1552 * i + 368;
                            v15 = (const char *)sub_66AE0(v56);
                            snprintf(v14, 0x10u, "%s", v15);
                            v56 = (_DWORD *)sub_652F0(v52, "rate_real");
                            if ( !v56 || *v56 != 2 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 225);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            v16 = (char *)&unk_94348 + 1552 * i + 384;
                            v17 = (const char *)sub_66AE0(v56);
                            snprintf(v16, 0x10u, "%s", v17);
                            v56 = (_DWORD *)sub_652F0(v52, "asic_num");
                            if ( !v56 || *v56 != 3 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 229);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            v18 = sub_66FB0(v56);
                            *((_DWORD *)&unk_94348 + 388 * i + 100) = v18;
                            v56 = (_DWORD *)sub_652F0(v52, "asic");
                            if ( !v56 || *v56 != 2 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 233);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            v19 = (char *)&unk_94348 + 1552 * i + 404;
                            v20 = (const char *)sub_66AE0(v56);
                            snprintf(v19, 0x100u, "%s", v20);
                            v55 = (_DWORD *)sub_652F0(v52, "temp_pic");
                            if ( !v55 || *v55 != 1 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 237);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            for ( j = 0; ; ++j )
                            {
                              v22 = sub_65E3C(v55);
                              if ( v22 <= j )
                                break;
                              v56 = (_DWORD *)sub_65E88(v55, j);
                              if ( !v56 || j > 3 )
                                break;
                              if ( *v56 != 3 )
                              {
                                if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                                {
                                  snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                  sub_1DB6C(3, v49, 0);
                                }
                                sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 241);
                                sub_575F0((int)v57);
                                return -3;
                              }
                              v21 = sub_66FB0(v56);
                              *((_DWORD *)&unk_94348 + 388 * i + j + 165) = v21;
                            }
                            v55 = (_DWORD *)sub_652F0(v52, "temp_pcb");
                            if ( !v55 || *v55 != 1 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 246);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            for ( j = 0; ; ++j )
                            {
                              v24 = sub_65E3C(v55);
                              if ( v24 <= j )
                                break;
                              v56 = (_DWORD *)sub_65E88(v55, j);
                              if ( !v56 || j > 3 )
                                break;
                              if ( *v56 != 3 )
                              {
                                if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                                {
                                  snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                  sub_1DB6C(3, v49, 0);
                                }
                                sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 250);
                                sub_575F0((int)v57);
                                return -3;
                              }
                              v23 = sub_66FB0(v56);
                              *((_DWORD *)&unk_94348 + 388 * i + j + 169) = v23;
                            }
                            v55 = (_DWORD *)sub_652F0(v52, "temp_chip");
                            if ( !v55 || *v55 != 1 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 255);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            for ( j = 0; ; ++j )
                            {
                              v26 = sub_65E3C(v55);
                              if ( v26 <= j )
                                break;
                              v56 = (_DWORD *)sub_65E88(v55, j);
                              if ( !v56 || j > 3 )
                                break;
                              if ( *v56 != 3 )
                              {
                                if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                                {
                                  snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                  sub_1DB6C(3, v49, 0);
                                }
                                sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 259);
                                sub_575F0((int)v57);
                                return -3;
                              }
                              v25 = sub_66FB0(v56);
                              *((_DWORD *)&unk_94348 + 388 * i + j + 173) = v25;
                            }
                            v56 = (_DWORD *)sub_652F0(v52, "hw");
                            if ( !v56 || *v56 != 3 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 264);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            v27 = sub_66FB0(v56);
                            *((_DWORD *)&unk_94348 + 388 * i + 177) = v27;
                            dword_94090 += *((_DWORD *)&unk_94348 + 388 * i + 177);
                            dword_95D4C = 0;
                            v55 = (_DWORD *)sub_652F0(v52, "rate_array");
                            if ( !v55 || *v55 != 1 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 270);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            for ( j = 0; ; ++j )
                            {
                              v29 = sub_65E3C(v55);
                              if ( v29 <= j )
                                break;
                              v56 = (_DWORD *)sub_65E88(v55, j);
                              if ( !v56 )
                                break;
                              if ( *v56 != 3 )
                              {
                                if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                                {
                                  snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                  sub_1DB6C(3, v49, 0);
                                }
                                sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 272);
                                sub_575F0((int)v57);
                                return -3;
                              }
                              v28 = sub_66FB0(v56);
                              *((_DWORD *)&unk_94348 + 388 * i + j + 178) = v28;
                              ++dword_95D4C;
                            }
                            v56 = (_DWORD *)sub_652F0(v52, "nonce");
                            if ( !v56 || *v56 != 3 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 278);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            v30 = sub_66FB0(v56);
                            *((_DWORD *)&unk_94348 + 388 * i + 202) = v30;
                            dword_95D48 += *((_DWORD *)&unk_94348 + 388 * i + 202);
                            v56 = (_DWORD *)sub_652F0(v52, "eeprom");
                            if ( (!v56 || *v56 != 5) && (!v56 || *v56 != 6) )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 283);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            *((_BYTE *)&unk_94348 + 1552 * i + 812) = *v56 == 5;
                            v56 = (_DWORD *)sub_652F0(v52, "sn");
                            if ( !v56 || *v56 != 2 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 287);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            v31 = (char *)&unk_94348 + 1552 * i + 813;
                            v32 = (const char *)sub_66AE0(v56);
                            snprintf(v31, 0x20u, "%s", v32);
                            v56 = (_DWORD *)sub_652F0(v52, "eeprom_vol");
                            if ( !v56 || *v56 != 3 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 291);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            v33 = sub_66FB0(v56);
                            *((_DWORD *)&unk_94348 + 388 * i + 213) = v33;
                            v56 = (_DWORD *)sub_652F0(v52, "eeprom_freq");
                            if ( !v56 || *v56 != 3 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 295);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            v34 = sub_66FB0(v56);
                            *((_DWORD *)&unk_94348 + 388 * i + 212) = v34;
                            v56 = (_DWORD *)sub_652F0(v52, "eeprom_bin");
                            if ( !v56 || *v56 != 3 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 299);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            v35 = sub_66FB0(v56);
                            *((_DWORD *)&unk_94348 + 388 * i + 214) = v35;
                            v56 = (_DWORD *)sub_652F0(v52, "eeprom_ft");
                            if ( !v56 || *v56 != 2 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 303);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            v36 = (char *)&unk_94348 + 1552 * i + 860;
                            v37 = (const char *)sub_66AE0(v56);
                            snprintf(v36, 0x10u, "%s", v37);
                            v56 = (_DWORD *)sub_652F0(v52, "eeprom_code");
                            if ( !v56 || *v56 != 3 )
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 307);
                              sub_575F0((int)v57);
                              return -3;
                            }
                            v38 = sub_66FB0(v56);
                            *((_DWORD *)&unk_94348 + 388 * i + 219) = v38;
                            v55 = (_DWORD *)sub_652F0(v52, "tpl");
                            if ( v55 )
                            {
                              v39 = sub_65E3C(v55);
                              *((_DWORD *)&unk_94348 + 388 * i + 220) = v39;
                              for ( j = 0; ; ++j )
                              {
                                v43 = sub_65E3C(v55);
                                if ( v43 <= j )
                                  break;
                                v56 = (_DWORD *)sub_65E88(v55, j);
                                if ( !v56 )
                                  break;
                                if ( *v56 != 1 )
                                {
                                  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                                  {
                                    snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                    sub_1DB6C(3, v49, 0);
                                  }
                                  sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 317);
                                  sub_575F0((int)v57);
                                  return -3;
                                }
                                v40 = sub_65E3C(v56);
                                *((_DWORD *)&unk_94348 + 388 * i + 221) = v40;
                                for ( k = 0; ; ++k )
                                {
                                  v42 = sub_65E3C(v56);
                                  if ( v42 <= k )
                                    break;
                                  v54 = sub_65E88(v56, k);
                                  if ( !v54 )
                                    break;
                                  v41 = sub_66FB0(v54);
                                  *((_DWORD *)&unk_94348
                                  + 388 * i
                                  + j * *((_DWORD *)&unk_94348 + 388 * i + 221)
                                  + k
                                  + 222) = v41;
                                }
                              }
                            }
                          }
                          v56 = (_DWORD *)sub_652F0(v57, "miner_version");
                          if ( v56 && *v56 == 2 )
                          {
                            v45 = (const char *)sub_66AE0(v56);
                            snprintf(src, 0x30u, "%s", v45);
                            if ( strcmp(src, byte_869B0) )
                              strncpy(byte_869B0, src, 0x100u);
                            v56 = (_DWORD *)sub_652F0(v57, "total_hash");
                            if ( v56 && *v56 == 4 )
                            {
                              sub_671C0(v56);
                              dbl_95D20 = v2;
                              dbl_90DB8 = v2 * 1000.0;
                              v56 = (_DWORD *)sub_652F0(v57, "miner_id");
                              if ( v56 && *v56 == 2 )
                              {
                                v46 = (const char *)sub_66AE0(v56);
                                snprintf(byte_95D28, 0x20u, "%s", v46);
                                v56 = (_DWORD *)sub_652F0(v57, "error_code");
                                if ( v56 && *v56 == 3 )
                                {
                                  dword_95D50 = sub_66FB0(v56);
                                  sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 344);
                                  sub_575F0((int)v57);
                                  return 0;
                                }
                                else
                                {
                                  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                                  {
                                    snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                    sub_1DB6C(3, v49, 0);
                                  }
                                  sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 341);
                                  sub_575F0((int)v57);
                                  return -3;
                                }
                              }
                              else
                              {
                                if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                                {
                                  snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                  sub_1DB6C(3, v49, 0);
                                }
                                sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 337);
                                sub_575F0((int)v57);
                                return -3;
                              }
                            }
                            else
                            {
                              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                              {
                                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                                sub_1DB6C(3, v49, 0);
                              }
                              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 332);
                              sub_575F0((int)v57);
                              return -3;
                            }
                          }
                          else
                          {
                            if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                            {
                              snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                              sub_1DB6C(3, v49, 0);
                            }
                            sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 326);
                            sub_575F0((int)v57);
                            return -3;
                          }
                        }
                        else
                        {
                          if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                          {
                            snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                            sub_1DB6C(3, v49, 0);
                          }
                          sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 204);
                          sub_575F0((int)v57);
                          return -3;
                        }
                      }
                      else
                      {
                        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                        {
                          snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                          sub_1DB6C(3, v49, 0);
                        }
                        sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 197);
                        sub_575F0((int)v57);
                        return -3;
                      }
                    }
                    else
                    {
                      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                      {
                        snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                        sub_1DB6C(3, v49, 0);
                      }
                      sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 193);
                      sub_575F0((int)v57);
                      return -3;
                    }
                  }
                  else
                  {
                    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                    {
                      snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                      sub_1DB6C(3, v49, 0);
                    }
                    sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 189);
                    sub_575F0((int)v57);
                    return -3;
                  }
                }
                else
                {
                  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                  {
                    snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                    sub_1DB6C(3, v49, 0);
                  }
                  sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 185);
                  sub_575F0((int)v57);
                  return -3;
                }
              }
              else
              {
                if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
                {
                  snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                  sub_1DB6C(3, v49, 0);
                }
                sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 180);
                sub_575F0((int)v57);
                return -3;
              }
            }
            else
            {
              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
              {
                snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
                sub_1DB6C(3, v49, 0);
              }
              sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 176);
              sub_575F0((int)v57);
              return -3;
            }
          }
          else
          {
            if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
            {
              snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
              sub_1DB6C(3, v49, 0);
            }
            sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 172);
            sub_575F0((int)v57);
            return -3;
          }
        }
        else
        {
          if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
          {
            snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
            sub_1DB6C(3, v49, 0);
          }
          sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 162);
          sub_575F0((int)v57);
          return -3;
        }
      }
      else
      {
        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
        {
          snprintf(v49, 0x800u, "%s: load json failed", "cb_bitmain_api_stats");
          sub_1DB6C(3, v49, 0);
        }
        sub_57790(&stru_94330, "socketa_api.c", "cb_bitmain_api_stats", 158);
        sub_575F0((int)v57);
        return -3;
      }
    }
    else
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        snprintf(v49, 0x800u, "%s: load data is failed(%s)", "cb_bitmain_api_stats", v51);
        sub_1DB6C(3, v49, 0);
      }
      return -2;
    }
  }
  else
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v49, 0x800u, "%s input err: data @ %p, len is %d", "cb_bitmain_api_stats", a1, a2);
      sub_1DB6C(3, v49, 0);
    }
    return -1;
  }
}
