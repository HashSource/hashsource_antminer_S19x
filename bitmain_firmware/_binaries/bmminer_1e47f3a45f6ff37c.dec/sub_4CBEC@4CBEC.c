char *__fastcall sub_4CBEC(char *result, int a2)
{
  char *v2; // r8
  char *v4; // r7
  unsigned int v5; // r2
  char *v6; // r4
  _DWORD *v7; // r5
  int v8; // r0
  int v9; // r1
  _DWORD *v10; // r9
  char *v11; // r11
  unsigned int v12; // r8
  unsigned int v13; // r4
  int v14; // r7
  _DWORD *v15; // r5
  int v16; // r4
  int v17; // r0
  unsigned int v18; // s16
  int v19; // r4
  int v20; // r0
  int v21; // r3
  _WORD s[1026]; // [sp+10h] [bp-804h] BYREF

  if ( dword_535D94 && *(_DWORD *)(dword_535D94 + 4) )
  {
    v2 = result;
    if ( (unsigned int)dword_B308C > 3 )
    {
      memset(s, 0, 0x800u);
      snprintf((char *)s, 0x800u, "chain %d stats:\n", v2);
      sub_3C5B8(3, (const char *)s, 0);
      if ( (unsigned int)dword_B308C > 3 )
      {
        memset(s, 0, 0x800u);
        v16 = sub_26A84();
        v17 = sub_26A44();
        snprintf((char *)s, 0x800u, "%-30s : %d\n", "send_nonce_num", v17 * 8 * v16);
        sub_3C5B8(3, (const char *)s, 0);
        if ( (unsigned int)dword_B308C > 3 )
        {
          memset(s, 0, 0x800u);
          snprintf((char *)s, 0x800u, "%-30s : %d\n", "recv_nonce_num", *(_DWORD *)(a2 + 4 * (_DWORD)(v2 + 2107392)));
          sub_3C5B8(3, (const char *)s, 0);
          if ( (unsigned int)dword_B308C > 3 )
          {
            memset(s, 0, 0x800u);
            v18 = *(_DWORD *)(a2 + 4 * (_DWORD)(v2 + 2107392));
            v19 = sub_26A84();
            v20 = sub_26A44();
            snprintf(
              (char *)s,
              0x800u,
              "%-30s : %f\n",
              "nonce_return_rate",
              (float)((float)v18 / (float)(v20 * 8 * v19)));
            sub_3C5B8(3, (const char *)s, 0);
            if ( (unsigned int)dword_B308C > 3 )
            {
              memset(s, 0, 0x800u);
              snprintf(
                (char *)s,
                0x800u,
                "%-30s : %d\n",
                "nonce_num_repeated",
                *(_DWORD *)(a2 + 4 * ((int)&unk_202A04 + (_DWORD)v2)));
              sub_3C5B8(3, (const char *)s, 0);
              if ( (unsigned int)dword_B308C > 3 )
              {
                memset(s, 0, 0x800u);
                snprintf(
                  (char *)s,
                  0x800u,
                  "%-30s : %d\n",
                  "nonce_num_top_check_fail",
                  *(_DWORD *)(a2 + 4 * ((int)&unk_202A08 + (_DWORD)v2)));
                sub_3C5B8(3, (const char *)s, 0);
                if ( (unsigned int)dword_B308C > 3 )
                {
                  memset(s, 0, 0x800u);
                  snprintf(
                    (char *)s,
                    0x800u,
                    "%-30s : %d\n",
                    "nonce_num_crc_err",
                    *(_DWORD *)(a2 + 4 * ((int)&unk_202A0C + (_DWORD)v2)));
                  sub_3C5B8(3, (const char *)s, 0);
                  if ( (unsigned int)dword_B308C > 3 )
                  {
                    memset(s, 0, 0x800u);
                    snprintf(
                      (char *)s,
                      0x800u,
                      "%-30s : %d\n",
                      "nonce_num_invalid",
                      *(_DWORD *)(a2 + 4 * ((int)&unk_202A10 + (_DWORD)v2)));
                    sub_3C5B8(3, (const char *)s, 0);
                    if ( (unsigned int)dword_B308C > 3 )
                    {
                      memset(s, 0, 0x800u);
                      snprintf(
                        (char *)s,
                        0x800u,
                        "%-30s : %d\n",
                        "nonce_num_hw",
                        *(_DWORD *)(a2 + 4 * ((int)&unk_202A14 + (_DWORD)v2)));
                      sub_3C5B8(3, (const char *)s, 0);
                      if ( (unsigned int)dword_B308C > 3 )
                      {
                        memset(s, 0, 0x800u);
                        snprintf(
                          (char *)s,
                          0x800u,
                          "%-30s : %d\n",
                          "nonce_num_extra",
                          *(_DWORD *)(a2 + 4 * ((int)&unk_202A18 + (_DWORD)v2)));
                        sub_3C5B8(3, (const char *)s, 0);
                        if ( (unsigned int)dword_B308C > 3 )
                        {
                          memset(s, 0, 0x800u);
                          snprintf(
                            (char *)s,
                            0x800u,
                            "%-30s : %d\n",
                            "nonce_num_unknown_err",
                            *(_DWORD *)(a2 + 4 * ((int)&unk_202A1C + (_DWORD)v2)));
                          sub_3C5B8(3, (const char *)s, 0);
                          if ( (unsigned int)dword_B308C > 3 )
                          {
                            memset(s, 0, 0x800u);
                            snprintf(
                              (char *)s,
                              0x800u,
                              "%-30s : %d\n",
                              "invalid_asic_num",
                              *(_DWORD *)(a2 + 4 * ((int)&unk_202A20 + (_DWORD)v2) + 4));
                            sub_3C5B8(3, (const char *)s, 0);
                            if ( (unsigned int)dword_B308C > 3 )
                            {
                              memset(s, 0, 0x800u);
                              snprintf(
                                (char *)s,
                                0x800u,
                                "%-30s : %d\n",
                                "invalid_chain_num",
                                *(_DWORD *)(a2 + 8431744));
                              sub_3C5B8(3, (const char *)s, 0);
                              if ( (unsigned int)dword_B308C > 3 )
                              {
                                memset(s, 0, 0x800u);
                                snprintf(
                                  (char *)s,
                                  0x800u,
                                  "%-30s : %.2f\n",
                                  "stddev",
                                  *(float *)(a2 + 4 * ((int)&unk_202A24 + (_DWORD)v2) + 4));
                                sub_3C5B8(3, (const char *)s, 0);
                                if ( (unsigned int)dword_B308C > 3 )
                                {
                                  memset(s, 0, 0x800u);
                                  s[0] = 10;
                                  sub_3C5B8(3, (const char *)s, 0);
                                  if ( (unsigned int)dword_B308C > 3 )
                                  {
                                    snprintf((char *)s, 0x800u, "Chain %d nonce:\n", v2);
                                    sub_3B6AC(3, (const char *)s, 0, v21);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    result = (char *)sub_26A44();
    v4 = result;
    if ( result )
    {
      v5 = dword_B308C;
      v6 = 0;
      v7 = (_DWORD *)(a2 + ((_DWORD)(v2 + 8228) << 10));
      do
      {
        while ( 1 )
        {
          if ( v5 > 3 )
          {
            memset(s, 0, 0x800u);
            snprintf((char *)s, 0x800u, "IC[%03d]:%04d ", v6, *v7);
            sub_3C5B8(3, (const char *)s, 0);
          }
          v8 = sub_26A54();
          result = (char *)sub_8F7E4(++v6, v8);
          v5 = dword_B308C;
          if ( !v9 && (unsigned int)dword_B308C > 3 )
            break;
          ++v7;
          if ( v4 == v6 )
            goto LABEL_13;
        }
        memset(s, 0, 0x800u);
        ++v7;
        s[0] = 10;
        result = sub_3C5B8(3, (const char *)s, 0);
        v5 = dword_B308C;
      }
      while ( v4 != v6 );
    }
    else
    {
      v5 = dword_B308C;
    }
LABEL_13:
    if ( v5 > 3 )
    {
      memset(s, 0, 0x800u);
      s[0] = 10;
      result = sub_3C5B8(3, (const char *)s, 0);
      if ( *(_DWORD *)dword_535D94 == 161 )
        return result;
      if ( (unsigned int)dword_B308C > 3 )
      {
        memset(s, 0, 0x800u);
        snprintf((char *)s, 0x800u, "Chain %d domain:\n", v2);
        sub_3C5B8(3, (const char *)s, 0);
      }
    }
    else if ( *(_DWORD *)dword_535D94 == 161 )
    {
      return result;
    }
    v10 = (_DWORD *)((char *)&unk_80A410 + 256 * (_DWORD)v2 + a2);
    result = (char *)sub_26A34();
    v11 = (char *)&unk_202804 + 64 * (_DWORD)v2;
    v12 = 0;
    if ( result )
    {
      while ( 1 )
      {
        v13 = 0;
        v14 = v12 * sub_26AA4();
        v15 = (_DWORD *)(a2 + 4 * (_DWORD)&v11[v14]);
        while ( v13 < sub_26AA4() )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            memset(s, 0, 0x800u);
            snprintf((char *)s, 0x800u, "D[%02d]:%04d ", v13 + v14, *v15);
            sub_3C5B8(3, (const char *)s, 0);
          }
          ++v13;
          ++v15;
        }
        if ( sub_26AA4() <= 1 )
          goto LABEL_30;
        if ( (unsigned int)dword_B308C > 3 )
          break;
LABEL_26:
        result = (char *)sub_26A34();
        ++v12;
        ++v10;
        if ( v12 >= (unsigned int)result )
          goto LABEL_27;
      }
      memset(s, 0, 0x800u);
      snprintf((char *)s, 0x800u, "D_BIG[%02d]:%05d", v12, *v10);
      sub_3C5B8(3, (const char *)s, 0);
LABEL_30:
      if ( (unsigned int)dword_B308C > 3 )
      {
        memset(s, 0, 0x800u);
        s[0] = 10;
        sub_3C5B8(3, (const char *)s, 0);
      }
      goto LABEL_26;
    }
LABEL_27:
    if ( (unsigned int)dword_B308C > 3 )
    {
      memset(s, 0, 0x800u);
      strcpy((char *)s, "\n\n");
      return sub_3C5B8(3, (const char *)s, 0);
    }
  }
  else if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy((char *)s, "Handle is NULL.\n");
    return (char *)sub_3B6AC(3, (const char *)s, 0, *(int *)"LL.\n");
  }
  return result;
}
