int __fastcall sub_46A00(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // r3
  int v10; // r0
  int v11; // r3
  int v12; // r6
  const char *v13; // r0
  int v14; // r0
  int v15; // r3
  int v16; // r8
  int v17; // r8
  int *v18; // r11
  int i; // r9
  int v20; // r3
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r8
  char *v25; // r11
  int v26; // r9
  char *v27; // r6
  unsigned int v28; // r4
  int v29; // r1
  int v30; // r0
  int v31; // r1
  int v32; // r1
  int v33; // r9
  int v34; // r0
  int v35; // r1
  int *v36; // r3
  int v37; // r4
  int v38; // r11
  int v39; // r4
  int v40; // r3
  int v41; // r0
  int v42; // r4
  int *v43; // r9
  int v44; // r1
  _WORD *v45; // r4
  _WORD *v46; // r10
  int v47; // r9
  int *v48; // r12
  int *v49; // lr
  int v50; // r0
  int v51; // r1
  int v52; // r2
  int v53; // r3
  int v54; // r1
  int v55; // r2
  int v56; // r3
  int v57; // r0
  unsigned __int8 v58; // r0
  unsigned int v59; // r3
  int v60; // r4
  int v61; // r4
  int v62; // r3
  int v63; // r0
  int v64; // r0
  int v65; // r9
  _BOOL4 v66; // r2
  int v67; // r6
  int v68; // r4
  int v69; // r4
  int v70; // r7
  int v71; // r0
  int v72; // r0
  int v73; // r3
  unsigned int v74; // [sp+8h] [bp-B54h]
  char v75[12]; // [sp+10h] [bp-B4Ch] BYREF
  char v76[12]; // [sp+1Ch] [bp-B40h] BYREF
  char v77[12]; // [sp+28h] [bp-B34h] BYREF
  int v78; // [sp+34h] [bp-B28h]
  int v79; // [sp+38h] [bp-B24h]
  int v80; // [sp+3Ch] [bp-B20h]
  int v81; // [sp+40h] [bp-B1Ch]
  int v82; // [sp+44h] [bp-B18h]
  int v83; // [sp+48h] [bp-B14h]
  int v84; // [sp+4Ch] [bp-B10h]
  int v85; // [sp+50h] [bp-B0Ch]
  char dest[68]; // [sp+54h] [bp-B08h] BYREF
  _DWORD src[24]; // [sp+98h] [bp-AC4h] BYREF
  _BYTE v88[256]; // [sp+F8h] [bp-A64h] BYREF
  int v89[88]; // [sp+1F8h] [bp-964h] BYREF
  char s[2088]; // [sp+358h] [bp-804h] BYREF
  int varg_r0; // [sp+B88h] [bp+2Ch]
  int varg_r1; // [sp+B8Ch] [bp+30h]
  int varg_r2; // [sp+B90h] [bp+34h]
  int varg_r3; // [sp+B94h] [bp+38h]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  if ( !sub_43DC0() && (unsigned int)dword_B308C > 3 )
  {
    strcpy(s, "Miner Bootsup");
    sub_3C288(3, s, 0);
  }
  v78 = varg_r0;
  v79 = varg_r1;
  v80 = varg_r2;
  v81 = varg_r3;
  v82 = a5;
  v83 = a6;
  v84 = a7;
  v85 = a8;
  *(_DWORD *)&byte_9CD8B0 = varg_r0;
  *(_DWORD *)&byte_9CD8B4 = varg_r1;
  unk_9CD8B8 = varg_r2;
  *(_DWORD *)&word_9CD8BC = varg_r3;
  unk_9CD8C0 = a5;
  unk_9CD8C4 = a6;
  unk_9CD8C8 = a7;
  unk_9CD8CC = a8;
  if ( (unsigned __int8)varg_r0 != 81 )
  {
    if ( (unsigned int)dword_B308C <= 4 )
      return 0;
    snprintf(s, 0x800u, "config_parameter.token_type != 0x%x, it is 0x%x\n", 81, (unsigned __int8)v78);
LABEL_8:
    sub_3B6AC(4, s, 0, v9);
    return 0;
  }
  v10 = sub_3F180((int)&byte_9CD8B0, 30);
  if ( v10 != (unsigned __int16)word_9CD8CE )
  {
    if ( (unsigned int)dword_B308C <= 4 )
      return 0;
    snprintf(
      s,
      0x800u,
      "config_parameter.crc = 0x%x, but we calculate it as 0x%x\n",
      (unsigned __int16)word_9CD8CE,
      v10);
    goto LABEL_8;
  }
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(
      s,
      0x800u,
      "fan_eft : %d  fan_pwm : %d\n",
      ((unsigned __int8)byte_9CD8B4 >> 1) & 1,
      (unsigned __int8)byte_9CD8BA);
    sub_3B6AC(4, s, 0, v11);
  }
  v12 = dword_B32C0[0];
  if ( !dword_B32C0[0] )
  {
    v33 = (unsigned __int8)sub_48E18(161);
    do
    {
      if ( sub_26C0C(v12) )
        sub_78648((unsigned __int8)v12);
      ++v12;
    }
    while ( v12 != 4 );
    if ( v33 )
      return 0;
  }
  if ( (unsigned __int8)sub_33AAC() )
    return 0;
  if ( !dword_B6EB4 )
  {
    dword_B3708 = 16;
    if ( sub_1BD14() )
      dword_B3708 = 20;
    dword_B370C = 28;
    if ( sub_1ABF0() )
      dword_B370C = 23;
  }
  v13 = (const char *)sub_26A14();
  if ( !strcmp(v13, "BHB56903") && dword_B6EB4 == 2 )
  {
    v89[0] = *(_DWORD *)"6";
    v89[1] = *(_DWORD *)"9";
    v89[2] = *(_DWORD *)";";
    v89[3] = *(_DWORD *)">";
    v89[4] = *(_DWORD *)"B";
    v89[5] = *(_DWORD *)"D";
    v89[6] = *(_DWORD *)"G";
    *(_DWORD *)s = 0;
    *(_DWORD *)&s[4] = 0;
    *(_DWORD *)&s[8] = 10;
    *(_DWORD *)&s[12] = 20;
    *(_DWORD *)&s[16] = 20;
    *(_DWORD *)&s[20] = 30;
    *(_DWORD *)&s[24] = 50;
    dword_B3790 = 7;
    dword_B3710 = *(_DWORD *)"6";
    unk_B3714 = *(_DWORD *)"9";
    unk_B3718 = *(_DWORD *)";";
    unk_B371C = *(_DWORD *)">";
    unk_B3720 = *(_DWORD *)"B";
    unk_B3724 = *(_DWORD *)"D";
    unk_B3728 = *(_DWORD *)"G";
    unk_B3750 = 0;
    unk_B3754 = 0;
    unk_B3758 = 10;
    unk_B375C = 20;
    unk_B3760 = 20;
    unk_B3764 = 30;
    unk_B3768 = 50;
  }
  if ( byte_534B59 && (byte_9CD8B4 & 0x10) != 0 )
  {
    dword_533B38 = (unsigned __int16)word_9CD8BE;
    v14 = sub_40CF4();
    dword_533B38 = v14;
    if ( v14 >= 0 )
    {
LABEL_24:
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "fixed working voltage = %d\n", dword_533B38);
        sub_3B6AC(3, s, 0, v15);
      }
      goto LABEL_26;
    }
  }
  else
  {
    v14 = sub_40CF4();
    if ( v14 > 0 )
    {
      dword_533B38 = v14;
      goto LABEL_24;
    }
  }
  if ( (_BYTE)v14 )
    return 0;
LABEL_26:
  v16 = (unsigned __int8)sub_463EC();
  if ( sub_27398() )
  {
    sub_2212C();
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "test low temp poweron find asic num end, poweroff,and exit program");
      sub_3B6AC(3, s, 0, v73);
    }
    exit(0);
  }
  if ( v16 )
    return 0;
  if ( byte_534B59 && (byte_9CD8B4 & 8) != 0 )
  {
    dword_534B54 = (unsigned __int16)word_9CD8BC;
    do
    {
      if ( sub_26C0C(v16) )
        dword_534B44[v16] = (unsigned __int16)word_9CD8BC;
      ++v16;
    }
    while ( v16 != 4 );
    v17 = 0;
    v89[0] = 0;
    memset(s, 0, 16);
    do
    {
      if ( sub_26C0C(v17) && !sub_1A758(v17, (unsigned __int8)dword_B6EB4, v89) )
      {
        v59 = v89[0];
        v60 = 0;
        dword_534B44[v17] = v89[0];
        while ( v59 <= *(_DWORD *)&s[4 * v60] )
        {
          if ( ++v60 > v17 )
            goto LABEL_36;
        }
        v74 = v59;
        memmove(&s[4 * v60 + 4], &s[4 * v60], 4 * (3 - v60));
        *(_DWORD *)&s[4 * v60] = v74;
      }
LABEL_36:
      ++v17;
    }
    while ( v17 != 4 );
    if ( *(int *)s <= 0 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(s, "failed to load freq in eeprom, using default");
        sub_3B6AC(3, s, 0, *(int *)"");
      }
      v61 = 0;
      dword_534B54 = 200;
      do
      {
        if ( sub_26C0C(v61) )
          dword_534B44[v61] = 200;
        ++v61;
      }
      while ( v61 != 4 );
    }
    else
    {
      dword_534B54 = *(_DWORD *)s;
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(s, 0x800u, "test get eeprom freq %d", *(_DWORD *)s);
        sub_3B6AC(4, s, 0, v62);
      }
    }
  }
  else
  {
    v39 = 0;
    dword_534B54 = 200;
    do
    {
      if ( sub_26C0C(v39) )
        dword_534B44[v39] = 200;
      ++v39;
    }
    while ( v39 != 4 );
  }
  v18 = &dword_533B40;
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_26C0C(i) )
    {
      v34 = sub_26A44();
      if ( v34 > 0 )
      {
        v35 = dword_534B44[i];
        v36 = v18;
        do
        {
          v36[1] = v35;
          ++v36;
        }
        while ( v36 != &dword_533B44[256 * i + v34 - 1] );
      }
    }
    v18 += 256;
  }
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(s, 0x800u, "fixed frequency is %d\n", dword_534B54);
    sub_3B6AC(3, s, 0, v20);
  }
  if ( dword_B6EB4 == 1 || dword_533B38 <= 0 )
  {
    sub_2212C();
    sub_1718C(0);
    sub_3E0F0();
  }
  else
  {
    v21 = sub_26AB4();
    v22 = (unsigned __int8)sub_189BC(v21);
    if ( (_BYTE)v22 )
    {
      sub_2A0EC(1);
      sub_458A0(0x10u, "Can't get temperature sensor type!");
    }
    else
    {
      sub_2A0EC(v22);
    }
  }
  if ( dword_B3C70 == 3 )
    dword_9CD8D0 = sub_191B8();
  else
    dword_9CD8D0 = sub_19058();
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(s, 0x800u, "Bring up temperature is %d\n", dword_9CD8D0);
    sub_3B6AC(3, s, 0, v40);
    if ( !byte_B6F08 )
      goto LABEL_54;
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "press any key to start rising frequency...");
      sub_3B6AC(3, s, 0, *(unsigned __int16 *)"");
    }
    goto LABEL_53;
  }
  if ( byte_B6F08 )
LABEL_53:
    IO_getc((_IO_FILE *)stdin);
LABEL_54:
  pthread_mutex_lock(&stru_B3C94);
  sub_34DE8((int)&unk_F4240);
  pthread_mutex_unlock(&stru_B3C94);
  v23 = (unsigned __int8)sub_345D0();
  if ( (_BYTE)v23 )
    return 0;
  v24 = v23;
  v25 = (char *)&unk_9CB888;
  do
  {
    if ( sub_26C0C(v24) )
    {
      v26 = 0;
      v27 = v25;
      v28 = 0;
      while ( v28 < sub_27024(v24) )
      {
        v30 = sub_26A54();
        sub_8F7E4(v28, v30);
        if ( !v31 )
        {
          v32 = v26 + v28;
          ++v26;
          sub_271E8(v24, v32, 32);
        }
        v29 = v26 + v28++;
        sub_271E8(v24, v29, 111);
        *((_QWORD *)v27 + 1) = 0;
        v27 += 8;
      }
      sub_271E8(v24, v28 + v26, 111);
    }
    ++v24;
    v25 += 2048;
  }
  while ( v24 != 4 );
  if ( (unsigned __int8)sub_33BC0() )
    return 0;
  if ( byte_B6EFC )
    sub_346E4();
  sub_347F8();
  v37 = dword_533B38;
  sub_226A8();
  v38 = sub_226A8();
  if ( sub_22934() && v37 < v38 )
  {
    while ( sub_662E0() > 4299 )
    {
      if ( v37 >= v38 - 19 )
      {
        sub_223A0(v37);
        sub_3E0F0();
        break;
      }
      v38 -= 20;
      sub_223A0(v38);
      sub_3E0F0();
      if ( v37 >= v38 )
        break;
    }
  }
  sub_43480();
  sub_185E0();
  if ( byte_B3069 && sub_19058() <= 9 )
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "opt_bitmain_high_voltage_open_core");
      sub_3B6AC(3, s, 0, *(int *)"n_core");
    }
    if ( sub_273A8() )
    {
LABEL_160:
      v72 = sub_273A8();
      sub_223A0(v72);
      goto LABEL_108;
    }
  }
  else
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "noraml inc freq voltage");
      sub_3B6AC(3, s, 0, *(int *)"req voltage");
    }
    if ( sub_273A8() )
    {
      if ( dword_9CD8D0 > 34 )
      {
        v41 = sub_273A8();
        sub_223A0(v41 - 80);
        goto LABEL_108;
      }
      goto LABEL_160;
    }
  }
  sub_223A0(dword_533B38);
LABEL_108:
  sub_3E0F0();
  byte_534CD8 = 1;
  if ( sub_22934() )
    sub_3490C();
  v42 = 0;
  v43 = v89;
  strcpy(v75, "171f0d9b");
  strcpy(v76, "5d2c1921");
  strcpy(dest, "a0a7f0f89cec20f3e12dee5a9660f350365786a10015318d0000000000000000");
  strcpy(v77, "20000000");
  memset(v88, 170, sizeof(v88));
  do
  {
    v44 = v42++;
    memset(v43, v44, 0x20u);
    v43 += 8;
  }
  while ( v42 != 11 );
  LOWORD(src[0]) = 82;
  LOBYTE(src[2]) = 0;
  BYTE1(src[2]) |= 3u;
  src[3] = 0;
  BYTE2(src[2]) = 15;
  if ( byte_534B68 )
  {
    LOBYTE(src[20]) = 1;
    src[22] = 536862720;
    src[21] = 0x10000;
  }
  sub_3D430(&src[4], (unsigned __int8 *)v77, 4);
  sub_3D430(&src[5], (unsigned __int8 *)dest, 32);
  sub_3D430(&src[14], (unsigned __int8 *)v75, 4);
  sub_3D430(&src[13], (unsigned __int8 *)v76, 4);
  src[15] = 7995608;
  src[16] = 720904;
  src[18] = 305419896;
  src[19] = 305419896;
  v45 = malloc(0x29Au);
  if ( !v45 )
  {
    strcpy(s, "Failed to malloc tmp_buf");
    sub_3B6AC(3, s, 1, *(int *)"lloc tmp_buf");
    nullsub_1();
  }
  src[1] = 658;
  memset(v45, 0, 0x29Au);
  v46 = v45;
  memcpy(v45, src, 0x60u);
  memcpy(v45 + 48, v88, 0xD8u);
  v47 = 0;
  do
  {
    v48 = (int *)(v46 + 156);
    v49 = &v89[8 * v47++];
    v46 += 16;
    v50 = *v49;
    v51 = v49[1];
    v52 = v49[2];
    v53 = v49[3];
    v49 += 4;
    *v48 = v50;
    v48[1] = v51;
    v48[2] = v52;
    v48[3] = v53;
    v48 += 4;
    v54 = v49[1];
    v55 = v49[2];
    v56 = v49[3];
    *v48 = *v49;
    v48[1] = v54;
    v48[2] = v55;
    v48[3] = v56;
  }
  while ( v47 != 11 );
  v45[332] = sub_3F180((int)v45, 664);
  pthread_mutex_lock(&stru_534CDC);
  sub_42000((unsigned __int8 *)v45);
  pthread_mutex_unlock(&stru_534CDC);
  free(v45);
  sub_458A0(2u, 0);
  if ( sub_2740C() )
  {
    v57 = sub_273C8();
    sub_45320(v57);
    sub_33DE8();
  }
  else
  {
    v63 = sub_273C8();
    sub_41064(v63);
    if ( dword_533B38 > 0 && sub_226A8() != dword_533B38 )
    {
      v64 = sub_27A58();
      v65 = v64;
      if ( byte_B3068 && dword_9CD8D0 <= 18 )
      {
        v66 = dword_B6EB4 == 0;
        if ( dword_9CD8D0 >= -1 )
          v66 = 0;
        if ( v66 )
        {
          v68 = sub_8F800(v64 * (19 - dword_9CD8D0));
          if ( v65 + 49 < v68 )
            v68 = v65 + 50;
        }
        else
        {
          if ( sub_1ABF0() )
            v67 = 40;
          else
            v67 = 20;
          v68 = sub_8F800(v65 * (19 - dword_9CD8D0));
          if ( v67 + v65 <= v68 )
          {
            if ( sub_1ABF0() )
              v69 = 40;
            else
              v69 = 20;
            v68 = v69 + v65;
          }
        }
        v70 = dword_533B38;
        if ( v68 + v70 > sub_226B8() )
          v71 = sub_226B8();
        else
          v71 = v68 + dword_533B38;
      }
      else
      {
        v71 = dword_533B38;
      }
      sub_45220(v71);
    }
  }
  v58 = sub_33998();
  if ( v58 )
    return 0;
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(s, "Init done!\n");
    sub_3B6AC(3, s, v58, (int)"Init done!\n");
  }
  return 1;
}
