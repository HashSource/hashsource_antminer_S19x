int __fastcall sub_3883C(int result, int a2)
{
  unsigned int v2; // r3
  int v4; // r6
  unsigned int v5; // r4
  int v6; // r12
  int v7; // r3
  unsigned int v8; // r3
  int v9; // r7
  int v10; // r11
  int v11; // r8
  int v12; // r6
  int i; // r4
  int v14; // [sp+Ch] [bp-808h]
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v14 = result;
  v2 = dword_9E31C;
  if ( dword_1AEA78 && *(_DWORD *)(dword_1AEA78 + 4) )
  {
    if ( (unsigned int)dword_9E31C <= 3 )
    {
LABEL_4:
      v4 = a2 + 312 * v14;
      v5 = 0;
      while ( 1 )
      {
        if ( v2 > 3 )
        {
          v6 = 4 * v5;
          v7 = v5++;
          snprintf(s, 0x800u, "IC[%03d]:%04d ", v7, *(_DWORD *)(v4 + v6 + 1911936));
          sub_47EC8(3, s, 0);
          v2 = dword_9E31C;
          result = 3;
          if ( v5 != 6 * (v5 / 6) || (unsigned int)dword_9E31C <= 3 )
            goto LABEL_5;
          strcpy(s, "\n");
          result = sub_47EC8(3, s, v5 % 6);
          v2 = dword_9E31C;
          if ( v5 == 78 )
          {
LABEL_11:
            if ( v2 > 3 )
            {
              strcpy(s, "\n");
              result = sub_47EC8(3, s, 0);
            }
            if ( *(_DWORD *)dword_1AEA78 != 161 )
            {
              v8 = dword_9E31C;
              v9 = 0;
              v10 = v4 - 104 * v14;
              v11 = v10;
              do
              {
                v12 = 4 * v9;
                for ( i = 0; i != 4; ++i )
                {
                  if ( v8 > 3 )
                  {
                    snprintf(s, 0x800u, "D[%02d]:%04d ", v12 + i, *(_DWORD *)(v11 + 4 * i + 1936960));
                    result = sub_47EC8(3, s, 0);
                    v8 = dword_9E31C;
                  }
                }
                if ( v8 > 3 )
                {
                  snprintf(s, 0x800u, "D_BIG[%02d]:%05d\n", v9, *(_DWORD *)(v10 + v12 - 156 * v14 + 1940288));
                  result = sub_47EC8(3, s, 0);
                  v8 = dword_9E31C;
                }
                ++v9;
                v11 += 16;
              }
              while ( v9 != 13 );
              if ( v8 > 3 )
              {
                strcpy(s, "\n\n");
                return sub_47EC8(3, s, 0);
              }
            }
            return result;
          }
        }
        else
        {
          ++v5;
LABEL_5:
          if ( v5 == 78 )
            goto LABEL_11;
        }
      }
    }
    snprintf(s, 0x800u, "chain %d:\n", result);
    result = sub_47EC8(3, s, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "%-30s : %d\n", "send_nonce_num", &loc_3A590);
      result = sub_47EC8(3, s, 0);
      v2 = dword_9E31C;
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_4;
      snprintf(s, 0x800u, "%-30s : %d\n", "recv_nonce_num", *(_DWORD *)(a2 + 4 * (v14 + 479232)));
      result = sub_47EC8(3, s, 0);
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_35;
      snprintf(
        s,
        0x800u,
        "%-30s : %f\n",
        "nonce_return_rate",
        (float)((float)*(unsigned int *)(a2 + 4 * (v14 + 479232)) / 238990.0));
      result = sub_47EC8(3, s, 0);
      v2 = dword_9E31C;
      if ( (unsigned int)dword_9E31C <= 3 )
        goto LABEL_4;
      snprintf(s, 0x800u, "%-30s : %d\n", "nonce_num_repeated", *(_DWORD *)(a2 + 4 * (v14 + 485280)));
      result = sub_47EC8(3, s, 0);
    }
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_38;
    snprintf(s, 0x800u, "%-30s : %d\n", "nonce_num_top_check_fail", *(_DWORD *)(a2 + 4 * (v14 + 485296)));
    result = sub_47EC8(3, s, 0);
    v2 = dword_9E31C;
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_4;
    snprintf(s, 0x800u, "%-30s : %d\n", "nonce_num_crc_err", *(_DWORD *)(a2 + 4 * (v14 + 485312)));
    result = sub_47EC8(3, s, 0);
LABEL_35:
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_41;
    snprintf(s, 0x800u, "%-30s : %d\n", "nonce_num_invalid", *(_DWORD *)(a2 + 4 * (v14 + 485328)));
    result = sub_47EC8(3, s, 0);
    v2 = dword_9E31C;
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_4;
    snprintf(s, 0x800u, "%-30s : %d\n", "nonce_num_hw", *(_DWORD *)(a2 + 4 * (v14 + 485344)));
    result = sub_47EC8(3, s, 0);
LABEL_38:
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_44;
    snprintf(s, 0x800u, "%-30s : %d\n", "nonce_num_extra", *(_DWORD *)(a2 + 4 * (v14 + 485360)));
    result = sub_47EC8(3, s, 0);
    v2 = dword_9E31C;
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_4;
    snprintf(s, 0x800u, "%-30s : %d\n", "nonce_num_unknown_err", *(_DWORD *)(a2 + 4 * (v14 + 485376)));
    result = sub_47EC8(3, s, 0);
LABEL_41:
    v2 = dword_9E31C;
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_4;
    snprintf(s, 0x800u, "%-30s : %d\n", "invalid_asic_num", *(_DWORD *)(a2 + 4 * (v14 + 963376) + 4));
    result = sub_47EC8(3, s, 0);
    v2 = dword_9E31C;
    if ( (unsigned int)dword_9E31C <= 3 )
      goto LABEL_4;
    snprintf(s, 0x800u, "%-30s : %d\n", "invalid_chain_num", *(_DWORD *)(a2 + 3853504));
    result = sub_47EC8(3, s, 0);
LABEL_44:
    v2 = dword_9E31C;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(s, "\n");
      result = sub_47EC8(3, s, 0);
      v2 = dword_9E31C;
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "Chain %d:\n", v14);
        result = sub_47AB4(3, s, 0);
        v2 = dword_9E31C;
      }
    }
    goto LABEL_4;
  }
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "Handle is NULL.\n");
    return sub_47AB4(3, s, 0);
  }
  return result;
}
