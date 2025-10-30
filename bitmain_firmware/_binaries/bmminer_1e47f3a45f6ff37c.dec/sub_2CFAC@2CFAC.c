int __fastcall sub_2CFAC(const char *a1, char *a2, size_t a3)
{
  double v3; // d0
  char *v4; // r8
  int v8; // r4
  int v9; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r6
  int v14; // r0
  int v15; // r7
  int i; // r4
  int v17; // r9
  int v18; // r10
  int v19; // r11
  int v20; // r8
  char *v21; // r0
  int v22; // r10
  char *v23; // r0
  int v24; // r8
  char *v25; // r0
  int v26; // r0
  int v27; // r9
  int v28; // r3
  int v29; // r0
  int v30; // r0
  int v31; // r4
  int v32; // r7
  int v33; // r0
  int v34; // r5
  int v35; // r0
  int v36; // r1
  int v37; // r0
  int v38; // r0
  char *v39; // r0
  int v40; // r8
  char *v41; // r0
  int v42; // r10
  char *v43; // r0
  int v44; // r0
  int v45; // r11
  int v46; // r3
  int v47; // r8
  char *v48; // r0
  int v49; // r8
  char *v50; // r0
  int v51; // r9
  int v52; // r3
  int v53; // r9
  int j; // r8
  int v55; // r0
  int v56; // r7
  int v57; // r4
  int v58; // r7
  int v59; // r0
  int v60; // r0
  char *v61; // r0
  unsigned int v62; // r0
  int v63; // r5
  int v64; // r3
  int v65; // r3
  int v66; // r3
  int v67; // r3
  int v68; // r3
  int v69; // r7
  int v70; // [sp+0h] [bp-C54h]
  int v71; // [sp+0h] [bp-C54h]
  int v72; // [sp+4h] [bp-C50h]
  int v73; // [sp+8h] [bp-C4Ch]
  int v74; // [sp+38h] [bp-C1Ch]
  char *v75; // [sp+3Ch] [bp-C18h]
  __int16 v76; // [sp+4Ch] [bp-C08h] BYREF
  _DWORD delim[256]; // [sp+50h] [bp-C04h] BYREF
  int s[512]; // [sp+450h] [bp-804h] BYREF

  v4 = (char *)(a1 + 4);
  v8 = strncmp(a1 + 4, "/fan-", 4u);
  if ( !v8 )
  {
    v12 = strtol(a1 + 9, 0, 10);
    v13 = v12;
    if ( (unsigned int)(v12 - 1) > 0x63 )
    {
      snprintf(a2, 0x1Eu, "err val:%d", v12);
    }
    else
    {
      sub_45310();
      sub_1718C((unsigned __int8)v13);
      snprintf(a2, 0x1Eu, "set fan pwm:%d", v13);
    }
    return v8;
  }
  v8 = strncmp(v4, "/rate", 5u);
  if ( !v8 )
  {
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      strcpy((char *)s, "cmd : get rate");
      sub_3B6AC(7, s, 0, *(_DWORD *)"te");
    }
    v9 = sub_22F0C();
    sub_2CF08(a2, a3, v9);
    return v8;
  }
  v8 = strncmp(v4, "/ideal_rate", 0xBu);
  if ( !v8 )
  {
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      strcpy((char *)s, "cmd : get ideal rate");
      sub_3B6AC(7, s, 0, *(_DWORD *)"eal rate");
    }
    v11 = sub_22D44();
    sub_2CF08(a2, a3, v11);
    return v8;
  }
  v8 = strncmp(v4, "/max_rate", 9u);
  if ( !v8 )
  {
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      strcpy((char *)s, "cmd : get max rate");
      sub_3B6AC(7, s, 0, *(_DWORD *)"x rate");
    }
    v14 = sub_22B38();
    sub_2CF08(a2, a3, v14);
    return v8;
  }
  v8 = strncmp(v4, "/miner_status", 0xDu);
  if ( !v8 )
  {
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      strcpy((char *)s, "cmd : get miner status");
      sub_3B6AC(7, s, 0, *(unsigned __int16 *)"");
      return v8;
    }
    return 0;
  }
  v8 = strncmp(v4, "/board_type", 0xBu);
  if ( !v8 )
  {
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      strcpy((char *)s, "cmd : get hash board type");
      sub_3B6AC(7, s, 0, *(_DWORD *)"sh board type");
    }
    snprintf(a2, 0x20u, "%s", byte_534B6C);
    return v8;
  }
  v8 = strncmp(v4, "/productName", 0xCu);
  if ( !v8 )
  {
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      strcpy((char *)s, "cmd : get miner type");
      sub_3B6AC(7, s, 0, *(_DWORD *)"ner type");
    }
    snprintf(a2, 0x100u, "%s", byte_B6BEC);
    return v8;
  }
  v8 = strncmp(v4, "/min_boot_reset", 0xFu);
  if ( !v8 )
  {
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      strcpy((char *)s, "cmd : min boot reset");
      sub_3B6AC(7, s, 0, *(_DWORD *)"ot reset");
    }
    remove("/config/min_boot");
    strcpy(a2, "min boot config reset");
    return v8;
  }
  v8 = strncmp(v4, "/get_sn", 7u);
  if ( !v8 )
  {
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      strcpy((char *)s, "cmd : get miner sn");
      sub_3B6AC(7, s, 0, *(_DWORD *)"ner sn");
    }
    if ( byte_B4020 )
      snprintf(a2, 0x100u, "%s", &byte_B4020);
    else
      strcpy(a2, "no miner sn stored on board");
    return v8;
  }
  v8 = strncmp(v4, "/set_sn", 7u);
  if ( !v8 )
  {
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4 )
    {
      strcpy((char *)s, "cmd : set miner sn, doesn't spport");
      sub_3B6AC(5, s, 0, *(_DWORD *)"spport");
    }
    snprintf(a2, 0x14u, "doesn't support sn set in Release mode");
    return v8;
  }
  v8 = strncmp(v4, "/readreg", 8u);
  if ( v8 )
  {
    v8 = strncmp(v4, "/readcorereg", 0xCu);
    if ( v8 )
    {
      v8 = strncmp(v4, "/resetcore", 0xAu);
      if ( v8 )
      {
        if ( !strncmp(v4, "/nonce", 6u) )
        {
          v17 = 0;
          v18 = 0;
          v19 = 0;
          v20 = 0;
          memset(s, 0, 0x100u);
          do
          {
            if ( sub_26C0C(v20) )
            {
              v19 += snprintf(&a2[v19], a3 - v19, "\n asic nonce number for chain[%d]...\n", v20);
              v74 = sub_26A44();
              if ( v74 )
              {
                v31 = 0;
                v75 = a2;
                do
                {
                  v32 = v31 + 1;
                  v18 += sub_39E4C(v20, v31);
                  v33 = sub_39E4C(v20, v31);
                  v34 = snprintf((char *)s + v17, 256 - v17, "asic[%03d]=%-8d ", v31, v33);
                  v35 = sub_26A54();
                  v17 += v34;
                  sub_8F7E4(v31 + 1, v35);
                  if ( !v36 )
                  {
                    v37 = sub_26A54();
                    v38 = sub_8F588(v31, v37);
                    v72 = v18;
                    v17 = 0;
                    v18 = 0;
                    v19 += snprintf(&v75[v19], a3 - v19, "domain %02d %s total=%-8u\n", v38, (const char *)s, v72);
                  }
                  ++v31;
                }
                while ( v74 != v32 );
                a2 = v75;
              }
            }
            ++v20;
          }
          while ( v20 != 4 );
          return 0;
        }
        if ( !strncmp(v4, "/adc", 4u) )
        {
          v15 = 0;
          for ( i = 0; i != 4; ++i )
          {
            if ( sub_26C0C(i) )
            {
              v15 += snprintf(&a2[v15], a3 - v15, "\t\t\td0\td1\td2\td3\tsum\tavg\n");
              v53 = sub_26A44();
              if ( v53 )
              {
                for ( j = 0; j != v53; ++j )
                {
                  sub_451F0(i, j, 0);
                  sub_451F0(i, j, 1);
                  sub_451F0(i, j, 2);
                  sub_451F0(i, j, 3);
                  sub_45200(i, j);
                  sub_45210(i, j);
                  v70 = j;
                  v15 += snprintf(
                           &a2[v15],
                           a3 - v15,
                           "chain %2d asic %03d adc:\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
                           i,
                           v70,
                           v3,
                           v3,
                           v3,
                           v3,
                           v3,
                           v3);
                }
              }
            }
          }
          return 0;
        }
        v8 = strncmp(v4, "/flush", 6u);
        if ( !v8 )
        {
          sub_6ACE0();
          return v8;
        }
        v8 = strncmp(v4, "/power", 6u);
        if ( v8 )
        {
          v8 = strncmp(v4, "/miner_power", 0xCu);
          if ( v8 )
          {
            v8 = strncmp(v4, "/history_power_status", 0x15u);
            if ( v8 )
            {
              v8 = strncmp(v4, "/input_status", 0xDu);
              if ( v8 )
              {
                v8 = strncmp(v4, "/enable_status", 0xEu);
                if ( v8 )
                {
                  v8 = strncmp(v4, "/uart", 5u);
                  if ( v8 )
                  {
                    v8 = strncmp(v4, "/readvol", 8u);
                    if ( v8 )
                    {
                      return -1;
                    }
                    else
                    {
                      v58 = sub_226A8();
                      v59 = sub_21FE8(0);
                      v60 = sub_65C64(v59);
                      snprintf(a2, a3, "read current voltage:%d feedback:%f power status:%d\n", v58, v3, v60);
                    }
                  }
                  else
                  {
                    strcpy((char *)delim, "-");
                    if ( strtok(v4, (const char *)delim)
                      && (v61 = strtok(0, (const char *)delim)) != 0
                      && (v62 = strtol(v61, 0, 10) - 1, v62 <= 4) )
                    {
                      v63 = (int)*(&off_93864 + v62);
                    }
                    else
                    {
                      v63 = 115200;
                    }
                    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4 )
                    {
                      snprintf((char *)s, 0x800u, "set uart to %d\n", v63);
                      sub_3B6AC(5, s, 0, v64);
                    }
                    sub_34DE8(v63);
                  }
                }
                else
                {
                  v65 = sub_2295C();
                  if ( v65 < 0 )
                    snprintf(a2, a3, "can not get enable sta", v65);
                  else
                    snprintf(a2, a3, "power enable sta: 0x%x", v65);
                }
              }
              else
              {
                v66 = sub_22958();
                if ( v66 < 0 )
                  snprintf(a2, a3, "can not get power input sta", v66);
                else
                  snprintf(a2, a3, "power input sta: 0x%x", v66);
              }
            }
            else
            {
              v67 = sub_22954(0);
              if ( v67 < 0 )
                snprintf(a2, a3, "can not get histroy sta", v67);
              else
                snprintf(a2, a3, "history sta: 0x%x", v67);
            }
          }
          else
          {
            v68 = sub_22950();
            if ( v68 < 0 )
              snprintf(a2, a3, "can not get power", v68);
            else
              snprintf(a2, a3, "power: %d", v68);
          }
          return v8;
        }
        s[0] = 0;
        if ( _isoc99_sscanf(v4, "/power-%d", s) == 1 )
        {
          v69 = s[0];
          if ( s[0] <= 3 )
          {
            sub_21FE8(s[0]);
            snprintf(a2, a3, "chain %d power is %.2f", v69, v3);
            return v8;
          }
        }
LABEL_92:
        snprintf(a2, a3, "404 not found");
        return v8;
      }
      strcpy((char *)delim, "-");
      if ( !strtok(v4, (const char *)delim) )
        goto LABEL_92;
      v48 = strtok(0, (const char *)delim);
      if ( !v48 )
        goto LABEL_92;
      v49 = strtol(v48, 0, 10);
      v50 = strtok(0, (const char *)delim);
      if ( !v50 )
        goto LABEL_92;
      v51 = strtol(v50, 0, 10);
      if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4 )
      {
        snprintf((char *)s, 0x800u, "recvBuf = %s, chain = %d, asic = %d\n", a1, v49, v51);
        sub_3B6AC(5, s, 0, v52);
      }
      snprintf(a2, a3, "reset chain %d asic %d core success!!!.", v49, v51);
    }
    else
    {
      v76 = 45;
      memset(delim, 0, sizeof(delim));
      if ( !strtok(v4, (const char *)&v76) )
        goto LABEL_92;
      v39 = strtok(0, (const char *)&v76);
      if ( !v39 )
        goto LABEL_92;
      v40 = strtol(v39, 0, 10);
      v41 = strtok(0, (const char *)&v76);
      if ( !v41 )
        goto LABEL_92;
      v42 = strtol(v41, 0, 10);
      v43 = strtok(0, (const char *)&v76);
      if ( !v43 )
        goto LABEL_92;
      v44 = strtol(v43, 0, 16);
      v45 = v44;
      if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4 )
      {
        snprintf((char *)s, 0x800u, "recvBuf = %s, chain = %d, asic = %d, reg = 0x%x\n", a1, v40, v42, v44);
        sub_3B6AC(5, s, 0, v46);
      }
      v47 = sub_39278(v45, v42, v40, delim);
      if ( v47 )
      {
        snprintf(a2, a3, "500 server error");
      }
      else
      {
        v55 = sub_26A74();
        if ( v55 > 0 )
        {
          v56 = 0;
          v57 = v55;
          do
          {
            v71 = v56;
            v73 = delim[v56++];
            v47 += snprintf(
                     &a2[v47],
                     a3 - v47,
                     "asic\t%03d\tcore\t%03d\treg\t0x%02x\tval\t0x%08x\n",
                     v42,
                     v71,
                     v45,
                     v73);
          }
          while ( v56 != v57 );
          return 0;
        }
      }
    }
  }
  else
  {
    strcpy((char *)delim, "-");
    if ( !strtok(v4, (const char *)delim) )
      goto LABEL_92;
    v21 = strtok(0, (const char *)delim);
    if ( !v21 )
      goto LABEL_92;
    v22 = strtol(v21, 0, 10);
    v23 = strtok(0, (const char *)delim);
    if ( !v23 )
      goto LABEL_92;
    v24 = strtol(v23, 0, 10);
    v25 = strtok(0, (const char *)delim);
    if ( !v25 )
      goto LABEL_92;
    v26 = strtol(v25, 0, 16);
    v27 = v26;
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 4 )
    {
      snprintf((char *)s, 0x800u, "recvBuf = %s, chain = %d, asic = %d, reg = 0x%x\n", a1, v22, v24, v26);
      sub_3B6AC(5, s, 0, v28);
    }
    v29 = sub_26AB4();
    v30 = sub_39018(v27, v24 * v29, v22);
    snprintf(a2, a3, "reg 0x%08x of asic %2d @ chain %2d, val = 0x%08x", v27, v24, v22, v30);
  }
  return v8;
}
