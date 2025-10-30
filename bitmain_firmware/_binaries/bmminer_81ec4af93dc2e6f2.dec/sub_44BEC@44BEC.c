int __fastcall sub_44BEC(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // r3
  int v10; // r0
  int v11; // r7
  int v12; // r9
  const char *v13; // r0
  int v14; // r0
  int v15; // r3
  int v16; // r8
  int v17; // r4
  int i; // r4
  int v19; // r3
  unsigned __int8 v20; // r0
  int v21; // r11
  int v22; // r8
  int v23; // r4
  int v24; // r3
  int v25; // r3
  int v26; // r0
  int v27; // r1
  _DWORD *v28; // r3
  int v29; // r4
  int v30; // r0
  int v31; // r3
  int v32; // r8
  unsigned int v33; // r11
  int v34; // r8
  unsigned int v35; // r4
  _QWORD *j; // r9
  int v37; // r7
  int v38; // r0
  int v39; // r1
  int v40; // r1
  int v41; // r0
  int *v42; // r8
  int *v43; // r9
  int v44; // r4
  int v45; // r1
  int *v46; // r11
  int *v47; // r4
  int *v48; // r12
  int v49; // r0
  int v50; // r1
  int v51; // r2
  int v52; // r3
  int *v53; // lr
  int v54; // r1
  int v55; // r2
  int v56; // r3
  int v57; // r0
  unsigned __int8 v58; // r0
  int v59; // r4
  int v60; // r3
  int v61; // r0
  int v62; // r8
  _BOOL4 v63; // r2
  int v64; // r6
  int v65; // r4
  int v66; // r4
  int v67; // r6
  int v68; // r0
  int v69; // r0
  char v70[12]; // [sp+18h] [bp-B4Ch] BYREF
  char v71[12]; // [sp+24h] [bp-B40h] BYREF
  char v72[12]; // [sp+30h] [bp-B34h] BYREF
  int v73; // [sp+3Ch] [bp-B28h]
  int v74; // [sp+40h] [bp-B24h]
  int v75; // [sp+44h] [bp-B20h]
  int v76; // [sp+48h] [bp-B1Ch]
  int v77; // [sp+4Ch] [bp-B18h]
  int v78; // [sp+50h] [bp-B14h]
  int v79; // [sp+54h] [bp-B10h]
  int v80; // [sp+58h] [bp-B0Ch]
  char dest[68]; // [sp+5Ch] [bp-B08h] BYREF
  _QWORD src[12]; // [sp+A0h] [bp-AC4h] BYREF
  _BYTE v83[256]; // [sp+100h] [bp-A64h] BYREF
  int v84[88]; // [sp+200h] [bp-964h] BYREF
  char s[2080]; // [sp+360h] [bp-804h] BYREF
  int varg_r0; // [sp+B88h] [bp+24h]
  int varg_r1; // [sp+B8Ch] [bp+28h]
  int varg_r2; // [sp+B90h] [bp+2Ch]
  int varg_r3; // [sp+B94h] [bp+30h]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  if ( !sub_42180() && (unsigned int)off_AFC24 > 3 )
  {
    strcpy(s, "Miner Bootsup");
    sub_3BAF0(3, s, 0);
  }
  v73 = varg_r0;
  v74 = varg_r1;
  v75 = varg_r2;
  v76 = varg_r3;
  v77 = a5;
  v78 = a6;
  v79 = a7;
  v80 = a8;
  *(_DWORD *)&byte_9C89F8 = varg_r0;
  *(_DWORD *)&byte_9C89FC = varg_r1;
  unk_9C8A00 = varg_r2;
  *(_DWORD *)&word_9C8A04 = varg_r3;
  unk_9C8A08 = a5;
  unk_9C8A0C = a6;
  unk_9C8A10 = a7;
  unk_9C8A14 = a8;
  if ( (unsigned __int8)varg_r0 != 81 )
  {
    if ( (unsigned int)off_AFC24 <= 4 )
      return 0;
    snprintf(s, 0x800u, "config_parameter.token_type != 0x%x, it is 0x%x\n", 81, (unsigned __int8)v73);
LABEL_8:
    sub_3AF5C(4, s, 0, v9);
    return 0;
  }
  v10 = sub_3EA90((int)&byte_9C89F8, 30);
  if ( v10 != (unsigned __int16)word_9C8A16 )
  {
    if ( (unsigned int)off_AFC24 <= 4 )
      return 0;
    snprintf(
      s,
      0x800u,
      "config_parameter.crc = 0x%x, but we calculate it as 0x%x\n",
      (unsigned __int16)word_9C8A16,
      v10);
    goto LABEL_8;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(
      s,
      0x800u,
      "fan_eft : %d  fan_pwm : %d\n",
      ((unsigned __int8)byte_9C89FC >> 1) & 1,
      (unsigned __int8)byte_9C8A02);
    sub_3AF5C(4, s, 0, v24);
  }
  v11 = dword_AFE58[0];
  if ( !dword_AFE58[0] )
  {
    v12 = (unsigned __int8)sub_46F38(161);
    do
    {
      if ( sub_266F0(v11) )
        sub_751EC((unsigned __int8)v11);
      ++v11;
    }
    while ( v11 != 4 );
    if ( v12 )
      return 0;
  }
  if ( (unsigned __int8)sub_33424() )
    return 0;
  if ( !dword_B413C )
  {
    dword_B02A0 = 16;
    if ( sub_1BE98() )
      dword_B02A0 = 20;
    dword_B02A4 = 28;
    if ( sub_1A760() )
      dword_B02A4 = 23;
  }
  v13 = (const char *)sub_26510();
  if ( !strcmp(v13, "BHB56903") && dword_B413C == 2 )
  {
    v84[0] = *(_DWORD *)"6";
    v84[1] = *(_DWORD *)"9";
    v84[2] = *(_DWORD *)";";
    v84[3] = *(_DWORD *)">";
    v84[4] = *(_DWORD *)"B";
    v84[5] = *(_DWORD *)"D";
    v84[6] = *(_DWORD *)"G";
    *(_DWORD *)s = 0;
    *(_DWORD *)&s[4] = 0;
    *(_DWORD *)&s[8] = 10;
    *(_DWORD *)&s[12] = 20;
    *(_DWORD *)&s[16] = 20;
    *(_DWORD *)&s[20] = 30;
    *(_DWORD *)&s[24] = 50;
    dword_B0328 = 7;
    dword_B02A8 = *(_DWORD *)"6";
    unk_B02AC = *(_DWORD *)"9";
    unk_B02B0 = *(_DWORD *)";";
    unk_B02B4 = *(_DWORD *)">";
    unk_B02B8 = *(_DWORD *)"B";
    unk_B02BC = *(_DWORD *)"D";
    unk_B02C0 = *(_DWORD *)"G";
    unk_B02E8 = 0;
    unk_B02EC = 0;
    unk_B02F0 = 10;
    unk_B02F4 = 20;
    unk_B02F8 = 20;
    unk_B02FC = 30;
    unk_B0300 = 50;
  }
  if ( byte_4B6CCD && (byte_9C89FC & 0x10) != 0 )
  {
    dword_4B6CAC = (unsigned __int16)word_9C8A06;
    v14 = sub_3F1B8();
    dword_4B6CAC = v14;
    if ( v14 >= 0 )
    {
LABEL_29:
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(s, 0x800u, "fixed working voltage = %d\n", dword_4B6CAC);
        sub_3AF5C(3, s, 0, v15);
      }
      goto LABEL_31;
    }
  }
  else
  {
    v14 = sub_3F1B8();
    if ( v14 > 0 )
    {
      dword_4B6CAC = v14;
      goto LABEL_29;
    }
  }
  if ( (_BYTE)v14 )
    return 0;
LABEL_31:
  LOBYTE(v16) = sub_4460C();
  if ( sub_26E44() )
  {
    sub_21C14();
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "test low temp poweron find asic num end, poweroff,and exit program");
      sub_3AF5C(3, s, 0, v25);
    }
    exit(0);
  }
  v16 = (unsigned __int8)v16;
  if ( (_BYTE)v16 )
    return 0;
  if ( byte_4B6CCD && (byte_9C89FC & 8) != 0 )
  {
    dword_4B6CC8 = (unsigned __int16)word_9C8A04;
    do
    {
      if ( sub_266F0(v16) )
        dword_4B6CB8[v16] = (unsigned __int16)word_9C8A04;
      ++v16;
    }
    while ( v16 != 4 );
    v17 = 0;
    v84[0] = 0;
    memset(s, 0, 16);
    do
    {
      if ( sub_266F0(v17) )
      {
        v32 = sub_1A2CC(v17, (unsigned __int8)dword_B413C, v84);
        if ( !v32 )
        {
          v33 = v84[0];
          dword_4B6CB8[v17] = v84[0];
          while ( v33 <= *(_DWORD *)&s[4 * v32] )
          {
            if ( ++v32 > v17 )
              goto LABEL_41;
          }
          memmove(&s[4 * v32 + 4], &s[4 * v32], 4 * (3 - v32));
          *(_DWORD *)&s[4 * v32] = v33;
        }
      }
LABEL_41:
      ++v17;
    }
    while ( v17 != 4 );
    if ( *(int *)s <= 0 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "failed to load freq in eeprom, using default");
        sub_3AF5C(3, s, 0, *(int *)"");
      }
      v59 = 0;
      dword_4B6CC8 = 200;
      do
      {
        if ( sub_266F0(v59) )
          dword_4B6CB8[v59] = 200;
        ++v59;
      }
      while ( v59 != 4 );
    }
    else
    {
      dword_4B6CC8 = *(_DWORD *)s;
      if ( (unsigned int)off_AFC24 > 4 )
      {
        snprintf(s, 0x800u, "test get eeprom freq %d", *(_DWORD *)s);
        sub_3AF5C(4, s, 0, v60);
      }
    }
  }
  else
  {
    v29 = 0;
    dword_4B6CC8 = 200;
    do
    {
      if ( sub_266F0(v29) )
        dword_4B6CB8[v29] = 200;
      ++v29;
    }
    while ( v29 != 4 );
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_266F0(i) )
    {
      v26 = sub_26540();
      if ( v26 > 0 )
      {
        v27 = dword_4B6CB8[i];
        v28 = &dword_52FE68[256 * i];
        do
          *v28++ = v27;
        while ( &dword_52FE68[256 * i + v26] != v28 );
      }
    }
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "fixed frequency is %d\n", dword_4B6CC8);
    sub_3AF5C(3, s, 0, v19);
  }
  if ( dword_B413C == 1 || dword_4B6CAC <= 0 )
  {
    sub_21C14();
    sub_16E7C(0);
    sub_3D9D4();
  }
  else
  {
    v30 = sub_265B0();
    if ( (unsigned __int8)sub_185C4(v30) )
    {
      sub_29B68(1);
      sub_43B4C(0x10u, "Can't get temperature sensor type!");
    }
    else
    {
      sub_29B68(0);
    }
  }
  if ( dword_B0F00 == 3 )
    dword_9C8A18 = sub_18D7C();
  else
    dword_9C8A18 = sub_18C30();
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(s, 0x800u, "Bring up temperature is %d\n", dword_9C8A18);
    sub_3AF5C(3, s, 0, v31);
    if ( !byte_B4190 )
      goto LABEL_57;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "press any key to start rising frequency...");
      sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
    }
LABEL_95:
    IO_getc((_IO_FILE *)stdin);
    goto LABEL_57;
  }
  if ( byte_B4190 )
    goto LABEL_95;
LABEL_57:
  pthread_mutex_lock(&stru_B0F20);
  sub_34738(12000000);
  pthread_mutex_unlock(&stru_B0F20);
  v20 = sub_33F20();
  v21 = v20;
  if ( v20 )
    return 0;
  do
  {
    if ( sub_266F0(v21) )
    {
      v34 = 0;
      v35 = 0;
      for ( j = (_QWORD *)((char *)&unk_9C69D8 + 2048 * v21); ; ++j )
      {
        v37 = v35 + v34;
        if ( v35 >= sub_26AEC(v21) )
          break;
        v38 = sub_26550();
        sub_8C474(v35, v38);
        if ( !v39 )
        {
          ++v34;
          v40 = v37;
          v37 = v35 + v34;
          sub_26CA0(v21, v40, 32);
        }
        ++v35;
        sub_26CA0(v21, v37, 111);
        *j = 0;
      }
      sub_26CA0(v21, v35 + v34, 111);
    }
    ++v21;
  }
  while ( v21 != 4 );
  if ( (unsigned __int8)sub_33538() )
    return 0;
  if ( byte_B4184 )
    sub_34034();
  sub_34148();
  v22 = dword_4B6CAC;
  sub_22178();
  v23 = sub_22178();
  if ( sub_223FC() && v22 < v23 )
  {
    while ( sub_66F00() > 4299 )
    {
      if ( v22 >= v23 - 19 )
      {
        sub_21E80(v22);
        sub_3D9D4();
        break;
      }
      v23 -= 20;
      sub_21E80(v23);
      sub_3D9D4();
      if ( v22 >= v23 )
        break;
    }
  }
  sub_41828();
  sub_18204();
  if ( byte_AFC01 && sub_18C30() <= 9 )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "opt_bitmain_high_voltage_open_core");
      sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
    }
    if ( sub_26E54() )
    {
LABEL_161:
      v69 = sub_26E54();
      sub_21E80(v69);
      goto LABEL_115;
    }
  }
  else
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "noraml inc freq voltage");
      sub_3AF5C(3, s, 0, *(int *)"req voltage");
    }
    if ( sub_26E54() )
    {
      if ( dword_9C8A18 > 34 )
      {
        v41 = sub_26E54();
        sub_21E80(v41 - 80);
        goto LABEL_115;
      }
      goto LABEL_161;
    }
  }
  sub_21E80(dword_4B6CAC);
LABEL_115:
  sub_3D9D4();
  byte_4B6E4C = 1;
  if ( sub_223FC() )
    sub_3425C();
  v42 = v84;
  v43 = v84;
  v44 = 0;
  strcpy(v70, "171f0d9b");
  strcpy(v71, "5d2c1921");
  strcpy(dest, "a0a7f0f89cec20f3e12dee5a9660f350365786a10015318d0000000000000000");
  strcpy(v72, "20000000");
  memset(v83, 170, sizeof(v83));
  do
  {
    v45 = v44++;
    memset(v43, v45, 0x20u);
    v43 += 8;
  }
  while ( v44 != 11 );
  LOWORD(src[0]) = 82;
  LOBYTE(src[1]) = 0;
  BYTE1(src[1]) |= 3u;
  HIDWORD(src[1]) = 0;
  BYTE2(src[1]) = 15;
  if ( byte_4B6CDC )
  {
    LOBYTE(src[10]) = 1;
    HIDWORD(src[10]) = 8;
    LODWORD(src[11]) = 57344;
  }
  sub_3CC24(&src[2], (unsigned __int8 *)v72, 4);
  sub_3CC24((_BYTE *)&src[2] + 4, (unsigned __int8 *)dest, 32);
  sub_3CC24(&src[7], (unsigned __int8 *)v70, 4);
  sub_3CC24((_BYTE *)&src[6] + 4, (unsigned __int8 *)v71, 4);
  HIDWORD(src[7]) = &unk_7A00D8;
  LODWORD(src[8]) = &unk_B0008;
  src[9] = 0x1234567812345678LL;
  v46 = (int *)malloc(0x29Au);
  if ( !v46 )
  {
    strcpy(s, "Failed to malloc tmp_buf");
    sub_3AF5C(3, s, 1, *(int *)"lloc tmp_buf");
    nullsub_1();
  }
  HIDWORD(src[0]) = 658;
  v47 = v46 + 78;
  memset(v46, 0, 0x29Au);
  memcpy(v46, src, 0x60u);
  memcpy(v46 + 24, v83, 0xD8u);
  do
  {
    v48 = v47;
    v49 = *v42;
    v50 = v42[1];
    v51 = v42[2];
    v52 = v42[3];
    v53 = v42 + 4;
    v47 += 8;
    v42 += 8;
    *v48 = v49;
    v48[1] = v50;
    v48[2] = v51;
    v48[3] = v52;
    v48 += 4;
    v54 = v53[1];
    v55 = v53[2];
    v56 = v53[3];
    *v48 = *v53;
    v48[1] = v54;
    v48[2] = v55;
    v48[3] = v56;
  }
  while ( v47 != v46 + 166 );
  *(_WORD *)v47 = sub_3EA90((int)v46, 664);
  pthread_mutex_lock(&stru_4B6E50);
  sub_4044C((unsigned __int8 *)v46);
  pthread_mutex_unlock(&stru_4B6E50);
  free(v46);
  sub_43B4C(2u, 0);
  if ( sub_26EB8() )
  {
    v57 = sub_26E74();
    sub_435CC(v57);
    sub_33760();
  }
  else
  {
    v61 = sub_26E74();
    sub_3F47C(v61);
    if ( dword_4B6CAC > 0 && sub_22178() != dword_4B6CAC )
    {
      v62 = sub_274DC();
      if ( byte_AFC00 && dword_9C8A18 <= 18 )
      {
        v63 = dword_9C8A18 < -1;
        if ( dword_B413C )
          v63 = 0;
        if ( v63 )
        {
          v65 = v62 * (19 - dword_9C8A18) / 20;
          if ( v62 + 49 < v65 )
            v65 = v62 + 50;
        }
        else
        {
          if ( sub_1A760() )
            v64 = 40;
          else
            v64 = 20;
          v65 = sub_8C490(v62 * (19 - dword_9C8A18));
          if ( v64 + v62 <= v65 )
          {
            if ( sub_1A760() )
              v66 = 40;
            else
              v66 = 20;
            v65 = v66 + v62;
          }
        }
        v67 = dword_4B6CAC;
        if ( v65 + v67 > sub_22188() )
          v68 = sub_22188();
        else
          v68 = v65 + dword_4B6CAC;
      }
      else
      {
        v68 = dword_4B6CAC;
      }
      sub_434C0(v68);
    }
  }
  v58 = sub_33310();
  if ( v58 )
    return 0;
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(s, "Init done!\n");
    sub_3AF5C(3, s, v58, (int)"Init done!\n");
  }
  return 1;
}
