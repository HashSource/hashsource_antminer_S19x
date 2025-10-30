int __fastcall sub_2C92C(const char *a1, char *a2, size_t a3)
{
  double v3; // d0
  char *v5; // r9
  int v8; // r6
  int v9; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r5
  int v14; // r0
  int v15; // r7
  int i; // r6
  int v17; // r9
  int v18; // r10
  int v19; // r7
  int v20; // r11
  char *v21; // r6
  char *v22; // r0
  int v23; // r10
  char *v24; // r0
  int v25; // r8
  char *v26; // r0
  int v27; // r0
  int v28; // r9
  int v29; // r3
  int v30; // r0
  int v31; // r0
  char *v32; // r0
  int v33; // r9
  char *v34; // r0
  int v35; // r10
  char *v36; // r0
  int v37; // r0
  int v38; // r11
  int v39; // r3
  int v40; // r4
  int v41; // r8
  int v42; // r0
  int v43; // r0
  int v44; // r1
  int v45; // r0
  int v46; // r0
  char *v47; // r0
  int v48; // r8
  char *v49; // r0
  int v50; // r9
  int v51; // r3
  int v52; // r8
  int v53; // r7
  int v54; // r9
  int v55; // r12
  int v56; // r7
  int v57; // r0
  int v58; // r0
  char *v59; // r0
  int v60; // r3
  int v61; // r4
  int v62; // r3
  int v63; // r3
  int v64; // r3
  int v65; // r3
  int v66; // r7
  int v67; // [sp+0h] [bp-C64h]
  int v68; // [sp+0h] [bp-C64h]
  char *v69; // [sp+3Ch] [bp-C28h]
  int v70; // [sp+3Ch] [bp-C28h]
  int v71; // [sp+3Ch] [bp-C28h]
  char *v72; // [sp+40h] [bp-C24h]
  int v73; // [sp+54h] [bp-C10h]
  __int16 v74; // [sp+5Ch] [bp-C08h] BYREF
  _DWORD delim[256]; // [sp+60h] [bp-C04h] BYREF
  int s[512]; // [sp+460h] [bp-804h] BYREF

  v5 = (char *)(a1 + 4);
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
      sub_435BC();
      sub_16E7C((unsigned __int8)v13);
      snprintf(a2, 0x1Eu, "set fan pwm:%d", v13);
    }
    return v8;
  }
  v8 = strncmp(v5, "/rate", 5u);
  if ( !v8 )
  {
    if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
    {
      strcpy((char *)s, "cmd : get rate");
      sub_3AF5C(7, s, 0, *(_DWORD *)"te");
    }
    v9 = sub_229C0();
    sub_2C890(a2, a3, v9);
    return v8;
  }
  v8 = strncmp(v5, "/ideal_rate", 0xBu);
  if ( !v8 )
  {
    if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
    {
      strcpy((char *)s, "cmd : get ideal rate");
      sub_3AF5C(7, s, 0, *(_DWORD *)"eal rate");
    }
    v11 = sub_227EC();
    sub_2C890(a2, a3, v11);
    return v8;
  }
  v8 = strncmp(v5, "/max_rate", 9u);
  if ( !v8 )
  {
    if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
    {
      strcpy((char *)s, "cmd : get max rate");
      sub_3AF5C(7, s, 0, *(unsigned __int16 *)"");
    }
    v14 = sub_225F8();
    sub_2C890(a2, a3, v14);
    return v8;
  }
  v8 = strncmp(v5, "/miner_status", 0xDu);
  if ( !v8 )
  {
    if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
    {
      strcpy((char *)s, "cmd : get miner status");
      sub_3AF5C(7, s, 0, *(unsigned __int16 *)"");
      return v8;
    }
    return 0;
  }
  v8 = strncmp(v5, "/board_type", 0xBu);
  if ( !v8 )
  {
    if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
    {
      strcpy((char *)s, "cmd : get hash board type");
      sub_3AF5C(7, s, 0, *(_DWORD *)"sh board type");
    }
    snprintf(a2, 0x20u, "%s", byte_4B6CE0);
    return v8;
  }
  v8 = strncmp(v5, "/productName", 0xCu);
  if ( !v8 )
  {
    if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
    {
      strcpy((char *)s, "cmd : get miner type");
      sub_3AF5C(7, s, 0, *(_DWORD *)"ner type");
    }
    snprintf(a2, 0x100u, "%s", dest);
    return v8;
  }
  v8 = strncmp(v5, "/min_boot_reset", 0xFu);
  if ( !v8 )
  {
    if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
    {
      strcpy((char *)s, "cmd : min boot reset");
      sub_3AF5C(7, s, 0, *(_DWORD *)"ot reset");
    }
    remove("/config/min_boot");
    strcpy(a2, "min boot config reset");
    return v8;
  }
  v8 = strncmp(v5, "/get_sn", 7u);
  if ( !v8 )
  {
    if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
    {
      strcpy((char *)s, "cmd : get miner sn");
      sub_3AF5C(7, s, 0, *(unsigned __int16 *)"");
    }
    if ( byte_B12B0 )
      snprintf(a2, 0x100u, "%s", &byte_B12B0);
    else
      strcpy(a2, "no miner sn stored on board");
    return v8;
  }
  v8 = strncmp(v5, "/set_sn", 7u);
  if ( !v8 )
  {
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
    {
      strcpy((char *)s, "cmd : set miner sn, doesn't spport");
      sub_3AF5C(5, s, 0, *(unsigned __int16 *)"");
    }
    snprintf(a2, 0x14u, "doesn't support sn set in Release mode");
    return v8;
  }
  v8 = strncmp(v5, "/readreg", 8u);
  if ( v8 )
  {
    v8 = strncmp(v5, "/readcorereg", 0xCu);
    if ( v8 )
    {
      v8 = strncmp(v5, "/resetcore", 0xAu);
      if ( v8 )
      {
        if ( !strncmp(v5, "/nonce", 6u) )
        {
          v17 = 0;
          v18 = 0;
          memset(s, 0, 0x100u);
          v19 = 0;
          v20 = 0;
          v21 = a2;
          do
          {
            if ( sub_266F0(v20) )
            {
              snprintf(&v21[v19], a3 - v19, "\n asic nonce number for chain[%d]...\n", v20);
              v19 += 36;
              v72 = (char *)sub_26540();
              if ( v72 )
              {
                v40 = 0;
                do
                {
                  v41 = sub_39788(v20, v40) + v18;
                  v69 = (char *)(v40 + 1);
                  v42 = sub_39788(v20, v40);
                  v73 = snprintf((char *)s + v17, 256 - v17, "asic[%03d]=%-8d ", v40, v42);
                  v43 = sub_26550();
                  sub_8C474(v40 + 1, v43);
                  v18 = v44;
                  if ( v44 )
                    v18 = v41;
                  v17 += v73;
                  if ( !v44 )
                  {
                    v45 = sub_26550();
                    v46 = sub_8C218(v40, v45);
                    v17 = v18;
                    v19 += snprintf(&v21[v19], a3 - v19, "domain %02d %s total=%-8u\n", v46, s, v41);
                  }
                  ++v40;
                }
                while ( v69 != v72 );
              }
            }
            ++v20;
          }
          while ( v20 != 4 );
          return 0;
        }
        if ( !strncmp(v5, "/adc", 4u) )
        {
          v15 = 0;
          for ( i = 0; i != 4; ++i )
          {
            if ( sub_266F0(i) )
            {
              v52 = 0;
              snprintf(&a2[v15], a3 - v15, "\t\t\td0\td1\td2\td3\tsum\tavg\n");
              v15 += 23;
              v70 = sub_26540();
              while ( v52 != v70 )
              {
                sub_4348C(i, v52, 0);
                sub_4348C(i, v52, 1);
                sub_4348C(i, v52, 2);
                sub_4348C(i, v52, 3);
                sub_434A0(i, v52);
                sub_434B0(i, v52);
                v67 = v52++;
                v15 += snprintf(
                         &a2[v15],
                         a3 - v15,
                         "chain %2d asic %03d adc:\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
                         i,
                         v67,
                         v3,
                         v3,
                         v3,
                         v3,
                         v3,
                         v3);
              }
            }
          }
          return 0;
        }
        v8 = strncmp(v5, "/flush", 6u);
        if ( !v8 )
        {
          sub_5C4F8();
          return v8;
        }
        v8 = strncmp(v5, "/power", 6u);
        if ( v8 )
        {
          v8 = strncmp(v5, "/miner_power", 0xCu);
          if ( v8 )
          {
            v8 = strncmp(v5, "/history_power_status", 0x15u);
            if ( v8 )
            {
              v8 = strncmp(v5, "/input_status", 0xDu);
              if ( v8 )
              {
                v8 = strncmp(v5, "/enable_status", 0xEu);
                if ( v8 )
                {
                  v8 = strncmp(v5, "/uart", 5u);
                  if ( v8 )
                  {
                    v8 = strncmp(v5, "/readvol", 8u);
                    if ( v8 )
                    {
                      return -1;
                    }
                    else
                    {
                      v56 = sub_22178();
                      v57 = sub_21AE0(0);
                      v58 = sub_6687C(v57);
                      snprintf(a2, a3, "read current voltage:%d feedback:%f power status:%d\n", v56, v3, v58);
                    }
                  }
                  else
                  {
                    strcpy((char *)delim, "-");
                    if ( strtok(v5, (const char *)delim) && (v59 = strtok(0, (const char *)delim)) != 0 )
                    {
                      switch ( strtol(v59, 0, 10) )
                      {
                        case 1:
                          v61 = (int)&unk_F4240;
                          break;
                        case 2:
                          v61 = (int)&unk_16E360;
                          break;
                        case 3:
                          v61 = (int)&unk_2DC6C0;
                          break;
                        case 4:
                          v61 = (int)&unk_5B8D80;
                          break;
                        case 5:
                          v61 = 12000000;
                          break;
                        default:
                          goto LABEL_153;
                      }
                    }
                    else
                    {
LABEL_153:
                      v61 = 115200;
                    }
                    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
                    {
                      snprintf((char *)s, 0x800u, "set uart to %d\n", v61);
                      sub_3AF5C(5, s, 0, v62);
                    }
                    sub_34738(v61);
                  }
                }
                else
                {
                  v60 = sub_22424();
                  if ( v60 < 0 )
                    snprintf(a2, a3, "can not get enable sta", v60);
                  else
                    snprintf(a2, a3, "power enable sta: 0x%x", v60);
                }
              }
              else
              {
                v63 = sub_22420();
                if ( v63 < 0 )
                  snprintf(a2, a3, "can not get power input sta", v63);
                else
                  snprintf(a2, a3, "power input sta: 0x%x", v63);
              }
            }
            else
            {
              v64 = sub_2241C(0);
              if ( v64 < 0 )
                snprintf(a2, a3, "can not get histroy sta", v64);
              else
                snprintf(a2, a3, "history sta: 0x%x", v64);
            }
          }
          else
          {
            v65 = sub_22418();
            if ( v65 < 0 )
              snprintf(a2, a3, "can not get power", v65);
            else
              snprintf(a2, a3, "power: %d", v65);
          }
          return v8;
        }
        s[0] = 0;
        if ( _isoc99_sscanf(v5, "/power-%d", s) == 1 )
        {
          v66 = s[0];
          if ( s[0] <= 3 )
          {
            sub_21AE0(s[0]);
            snprintf(a2, a3, "chain %d power is %.2f", v66, v3);
            return v8;
          }
        }
LABEL_92:
        snprintf(a2, a3, "404 not found");
        return v8;
      }
      strcpy((char *)delim, "-");
      if ( !strtok(v5, (const char *)delim) )
        goto LABEL_92;
      v47 = strtok(0, (const char *)delim);
      if ( !v47 )
        goto LABEL_92;
      v48 = strtol(v47, 0, 10);
      v49 = strtok(0, (const char *)delim);
      if ( !v49 )
        goto LABEL_92;
      v50 = strtol(v49, 0, 10);
      if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
      {
        snprintf((char *)s, 0x800u, "recvBuf = %s, chain = %d, asic = %d\n", a1, v48, v50);
        sub_3AF5C(5, s, 0, v51);
      }
      snprintf(a2, a3, "reset chain %d asic %d core success!!!.", v48, v50);
    }
    else
    {
      v74 = 45;
      memset(delim, 0, sizeof(delim));
      if ( !strtok(v5, (const char *)&v74) )
        goto LABEL_92;
      v32 = strtok(0, (const char *)&v74);
      if ( !v32 )
        goto LABEL_92;
      v33 = strtol(v32, 0, 10);
      v34 = strtok(0, (const char *)&v74);
      if ( !v34 )
        goto LABEL_92;
      v35 = strtol(v34, 0, 10);
      v36 = strtok(0, (const char *)&v74);
      if ( !v36 )
        goto LABEL_92;
      v37 = strtol(v36, 0, 16);
      v38 = v37;
      if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
      {
        snprintf((char *)s, 0x800u, "recvBuf = %s, chain = %d, asic = %d, reg = 0x%x\n", a1, v33, v35, v37);
        sub_3AF5C(5, s, 0, v39);
      }
      if ( sub_38C48(v38, v35, v33, delim) )
      {
        snprintf(a2, a3, "500 server error");
      }
      else
      {
        v53 = 0;
        v54 = 0;
        v71 = sub_26570();
        while ( v54 < v71 )
        {
          v55 = delim[v54];
          v68 = v54++;
          v53 += snprintf(&a2[v53], a3 - v53, "asic\t%03d\tcore\t%03d\treg\t0x%02x\tval\t0x%08x\n", v35, v68, v38, v55);
        }
      }
    }
  }
  else
  {
    strcpy((char *)delim, "-");
    if ( !strtok(v5, (const char *)delim) )
      goto LABEL_92;
    v22 = strtok(0, (const char *)delim);
    if ( !v22 )
      goto LABEL_92;
    v23 = strtol(v22, 0, 10);
    v24 = strtok(0, (const char *)delim);
    if ( !v24 )
      goto LABEL_92;
    v25 = strtol(v24, 0, 10);
    v26 = strtok(0, (const char *)delim);
    if ( !v26 )
      goto LABEL_92;
    v27 = strtol(v26, 0, 16);
    v28 = v27;
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 4 )
    {
      snprintf((char *)s, 0x800u, "recvBuf = %s, chain = %d, asic = %d, reg = 0x%x\n", a1, v23, v25, v27);
      sub_3AF5C(5, s, 0, v29);
    }
    v30 = sub_265B0();
    v31 = sub_389CC(v28, v25 * v30, v23);
    snprintf(a2, a3, "reg 0x%08x of asic %2d @ chain %2d, val = 0x%08x", v28, v25, v23, v31);
  }
  return v8;
}
