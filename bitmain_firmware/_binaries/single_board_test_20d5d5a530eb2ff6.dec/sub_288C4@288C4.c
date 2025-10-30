int sub_288C4()
{
  int v0; // r4
  int v1; // r8
  int v3; // r0
  const char *v4; // r7
  int v5; // r0
  int (__fastcall *v6)(int, int *, size_t *); // r3
  int v7; // r4
  int v8; // r1
  int v9; // r4
  int *v10; // r3
  int v11; // r0
  __int16 v12; // r1
  char v13; // r3
  int *v14; // r3
  int v15; // r0
  __int16 v16; // r1
  char v17; // r3
  size_t v18; // [sp+Ch] [bp-15Ch] BYREF
  char s1[40]; // [sp+10h] [bp-158h] BYREF
  char v20[48]; // [sp+38h] [bp-130h] BYREF
  _BYTE s[256]; // [sp+68h] [bp-100h] BYREF

  memset(s, 0, sizeof(s));
  v0 = dword_6032C0;
  v1 = *(unsigned __int8 *)(dword_223680 + 673);
  s[0] = -1;
  v18 = dword_6032C0;
  if ( v1 )
  {
    strcpy(src, "12345678901234567");
    strcpy((char *)&dword_6E3318, "20200320003(YZ)");
    strcpy((char *)&dword_6E3348, "S13020AH01");
    byte_5FE77C = 3;
    strcpy((char *)&dword_6E3338, "ED");
    strcpy(dword_6E3358, "BIN1");
    strcpy(haystack, "F1V01B4C1");
    strcpy(dword_6E3380, "TMP75A");
    strcpy(dword_6E3390, "10010BB");
    strcpy((char *)&dword_6E33A0, "0123");
    goto LABEL_3;
  }
  memset(s, 255, dword_6032C0);
  v3 = sub_70B40(dword_21B3A4, 0, s, v0);
  if ( v3 )
  {
    v4 = "READ ERROR";
    goto LABEL_8;
  }
  v5 = sub_385B0(s, v18);
  dword_60DED0 = v5;
  if ( !v5 )
  {
    if ( s[1] != 72 )
    {
      v4 = "LEN ERROR";
      sub_1E938(v20, 0x30u);
      printf("%s ", v20);
      printf("%s : enc 0x%x len 0x%x\n", "load_board_info_from_format_v3", s[0], s[1]);
      snprintf(byte_60DED4, 0x100u, "enc 0x%x len 0x%x", s[0], s[1]);
      v3 = sub_3CC5C(byte_60DED4, v20);
      goto LABEL_8;
    }
    v3 = sub_38498(&s[2], 72, 1);
    if ( !v3 )
    {
      v4 = "DEC FAILED";
      goto LABEL_8;
    }
    v7 = s[1];
    memcpy(&byte_6E3274, s, s[1]);
    v8 = v7 - 1;
    v9 = (unsigned __int8)v20[v7 + 47];
    byte_6E32BA = v9;
    v3 = sub_2883C(s, 8 * v8);
    if ( v9 != v3 )
    {
      v4 = "CRC5 ERROR";
      goto LABEL_8;
    }
    memset(src, 0, 0x20u);
    *(_DWORD *)src = off_6E3277;
    dword_6E33B5 = dword_6E327B;
    dword_6E3344 = 0;
    dword_6E33B9 = dword_6E327F;
    dword_6E3340 = 0;
    dword_6E33BD = dword_6E3283;
    LOBYTE(word_6E33C1) = byte_6E3287;
    dword_6E3338 = (unsigned __int16)word_6E3288;
    dword_6E3348 = (int)off_6E328A;
    dword_6E3350 = dword_6E3292;
    dword_6E334C = dword_6E328E;
    dword_6E3354 = (unsigned __int8)byte_6E3296;
    dword_6E333C = 0;
    dword_6E336C = dword_6E329C;
    *(_DWORD *)haystack = off_6E3298;
    dword_6E3374 = 0;
    dword_6E3370 = (unsigned __int8)byte_6E32A0;
    v3 = *(_DWORD *)"BIN";
    strcpy(dword_6E3358, "BIN");
    if ( (unsigned int)(unsigned __int8)byte_6E3297 - 1 <= 8 )
    {
      dword_6E3358[3] = byte_6E3297 + 48;
      if ( *(_BYTE *)(dword_223680 + 89) )
      {
        switch ( byte_6E32A6 & 0x7F )
        {
          case 1:
            goto LABEL_63;
          case 5:
            goto LABEL_62;
          case 0xA:
            goto LABEL_59;
          case 0xB:
            goto LABEL_43;
          case 0xC:
            goto LABEL_58;
          case 0xD:
            goto LABEL_57;
          case 0xE:
            goto LABEL_56;
          case 0xF:
            goto LABEL_55;
          case 0x10:
            goto LABEL_54;
          case 0x11:
            goto LABEL_53;
          case 0x12:
            goto LABEL_61;
          case 0x13:
            goto LABEL_60;
          default:
            goto LABEL_52;
        }
      }
      if ( *(_BYTE *)(dword_223680 + 90) )
      {
        switch ( byte_6E32A1 & 0x7F )
        {
          case 1:
LABEL_63:
            v10 = &dword_18FCF0;
            break;
          case 5:
LABEL_62:
            v10 = &dword_18FCF8;
            break;
          case 0xA:
LABEL_59:
            strcpy(dword_6E3380, "LM75A");
            goto LABEL_45;
          case 0xB:
LABEL_43:
            v10 = (int *)"TMP75A";
            break;
          case 0xC:
LABEL_58:
            strcpy(dword_6E3380, "DS75S");
            goto LABEL_45;
          case 0xD:
LABEL_57:
            strcpy(dword_6E3380, "GM452");
            goto LABEL_45;
          case 0xE:
LABEL_56:
            strcpy(dword_6E3380, "CT75");
            goto LABEL_45;
          case 0xF:
LABEL_55:
            strcpy(dword_6E3380, "DS75SPlus");
            goto LABEL_45;
          case 0x10:
LABEL_54:
            strcpy(dword_6E3380, "TMP75");
            goto LABEL_45;
          case 0x11:
LABEL_53:
            strcpy(dword_6E3380, "SD177");
            goto LABEL_45;
          case 0x12:
LABEL_61:
            strcpy(dword_6E3380, "GX21M");
            goto LABEL_45;
          case 0x13:
LABEL_60:
            strcpy(dword_6E3380, "NT175");
            goto LABEL_45;
          default:
LABEL_52:
            v4 = "SENSOR TYPE";
            goto LABEL_8;
        }
        v11 = *v10;
        v12 = *((_WORD *)v10 + 2);
        v13 = *((_BYTE *)v10 + 6);
        *(_DWORD *)dword_6E3380 = v11;
        LOWORD(dword_6E3384) = v12;
        BYTE2(dword_6E3384) = v13;
      }
LABEL_45:
      sub_1E938(v20, 0x30u);
      printf("%s ", v20);
      printf("%s : pcb_version_v1: [0x%x] = %x\n", "load_board_info_from_format_v3", 52, (unsigned __int8)byte_6E32A8);
      snprintf(byte_60DFD4, 0x100u, "pcb_version_v1: [0x%x] = %x", 52, (unsigned __int8)byte_6E32A8);
      sub_3CC5C(byte_60DFD4, v20);
      sub_1E938(v20, 0x30u);
      printf("%s ", v20);
      printf("%s : pcb_version_v2: [0x%x] = %x\n", "load_board_info_from_format_v3", 53, (unsigned __int8)byte_6E32A9);
      snprintf(byte_60E0D4, 0x100u, "pcb_version_v2: [0x%x] = %x", 53, (unsigned __int8)byte_6E32A9);
      sub_3CC5C(byte_60E0D4, v20);
      sub_1E938(v20, 0x30u);
      printf("%s ", v20);
      printf("%s : bom_version_v1: [0x%x] = %x\n", "load_board_info_from_format_v3", 54, (unsigned __int8)byte_6E32AA);
      snprintf(byte_60E1D4, 0x100u, "bom_version_v1: [0x%x] = %x", 54, (unsigned __int8)byte_6E32AA);
      sub_3CC5C(byte_60E1D4, v20);
      sub_1E938(v20, 0x30u);
      printf("%s ", v20);
      printf("%s : bom_version_v2: [0x%x] = %x\n", "load_board_info_from_format_v3", 55, (unsigned __int8)byte_6E32AB);
      snprintf(byte_60E2D4, 0x100u, "bom_version_v2: [0x%x] = %x", 55, (unsigned __int8)byte_6E32AB);
      sub_3CC5C(byte_60E2D4, v20);
      sprintf(dword_6E3390, "%x", (unsigned __int8)byte_6E32A9 | ((unsigned __int8)byte_6E32A8 << 8));
      sprintf(&dword_6E3390[3], "%x", (unsigned __int8)byte_6E32AB | ((unsigned __int8)byte_6E32AA << 8));
      strcpy((char *)&dword_6E3318, "FXDZ20210308001-Z(YZ)");
      *(_WORD *)((char *)&dword_6E3394 + 1) = word_6E32AC;
      goto LABEL_3;
    }
LABEL_36:
    v4 = "CHIP BIN";
    goto LABEL_8;
  }
  (*(void (**)(void))(v5 + 292))();
  if ( !*(_BYTE *)(dword_223680 + 261) )
  {
LABEL_3:
    sub_1E938(v20, 0x30u);
    v1 = 1;
    printf("%s ", v20);
    printf("%s : sn %s\n", "read_board_info_from_eeprom", src);
    snprintf(byte_60E5D4, 0x100u, "sn %s", src);
    sub_3CC5C(byte_60E5D4, v20);
    sub_1E938(v20, 0x30u);
    printf("%s ", v20);
    printf("%s : BIN %s\n", "read_board_info_from_eeprom", dword_6E3358);
    snprintf(byte_60E6D4, 0x100u, "BIN %s", dword_6E3358);
    sub_3CC5C(byte_60E6D4, v20);
    sub_1E938(v20, 0x30u);
    printf("%s ", v20);
    printf("%s : DIE %s\n", "read_board_info_from_eeprom", (const char *)&dword_6E3338);
    snprintf(byte_60E7D4, 0x100u, "DIE %s", (const char *)&dword_6E3338);
    sub_3CC5C(byte_60E7D4, v20);
    sub_1E938(v20, 0x30u);
    printf("%s ", v20);
    printf("%s : FT %s\n", "read_board_info_from_eeprom", haystack);
    snprintf(byte_60E8D4, 0x100u, "FT %s", haystack);
    sub_3CC5C(byte_60E8D4, v20);
    sub_1E938(v20, 0x30u);
    printf("%s ", v20);
    printf("%s : marking %s\n", "read_board_info_from_eeprom", (const char *)&dword_6E3348);
    snprintf(byte_60E9D4, 0x100u, "marking %s", (const char *)&dword_6E3348);
    sub_3CC5C(byte_60E9D4, v20);
    sub_1E938(v20, 0x30u);
    printf("%s ", v20);
    printf("%s : factory_job %s\n", "read_board_info_from_eeprom", (const char *)&dword_6E3318);
    snprintf(byte_60EAD4, 0x100u, "factory_job %s", (const char *)&dword_6E3318);
    sub_3CC5C(byte_60EAD4, v20);
    sub_1E938(v20, 0x30u);
    printf("%s ", v20);
    printf("%s : hashboard_ctrl_code %s\n", "read_board_info_from_eeprom", dword_6E3390);
    snprintf(byte_60EBD4, 0x100u, "hashboard_ctrl_code %s", dword_6E3390);
    sub_3CC5C(byte_60EBD4, v20);
    if ( dword_60DED0 )
    {
      v1 = 1;
      (*(void (**)(void))(dword_60DED0 + 296))();
      dword_60DED0 = 0;
    }
    return v1;
  }
  memset(&dword_6E3318, 0, 0x20u);
  v18 = 32;
  v3 = (*(int (__fastcall **)(int, int *, size_t *))(dword_60DED0 + 180))(dword_60DED0, &dword_6E3318, &v18);
  if ( v3 < 0 )
  {
    v4 = "factory job";
    goto LABEL_8;
  }
  v18 = 32;
  memset(src, 0, 0x20u);
  v3 = (*(int (__fastcall **)(int, char *, size_t *))(dword_60DED0 + 44))(dword_60DED0, src, &v18);
  if ( v3 < 0 )
  {
    v4 = "BOARD SN";
    goto LABEL_8;
  }
  byte_6E33B0 = strlen(src);
  dword_6E3340 = 0;
  dword_6E3344 = 0;
  dword_6E3338 = 0;
  dword_6E333C = 0;
  v6 = *(int (__fastcall **)(int, int *, size_t *))(dword_60DED0 + 52);
  v18 = 16;
  v3 = v6(dword_60DED0, &dword_6E3338, &v18);
  if ( v3 < 0 )
  {
    v4 = "CHIP DIE";
    goto LABEL_8;
  }
  dword_6E3348 = 0;
  dword_6E334C = 0;
  dword_6E3350 = 0;
  dword_6E3354 = 0;
  v18 = 16;
  v3 = (*(int (__fastcall **)(int, int *, size_t *))(dword_60DED0 + 60))(dword_60DED0, &dword_6E3348, &v18);
  if ( v3 < 0 )
  {
    v4 = "MARKING";
    goto LABEL_8;
  }
  *(_DWORD *)haystack = 0;
  dword_6E336C = 0;
  dword_6E3370 = 0;
  dword_6E3374 = 0;
  v18 = 16;
  v3 = (*(int (__fastcall **)(int, char *, size_t *))(dword_60DED0 + 68))(dword_60DED0, haystack, &v18);
  if ( v3 < 0 )
  {
    v4 = "FT VERSION";
    goto LABEL_8;
  }
  strncpy(dword_6E3358, "BIN0", 0x10u);
  v3 = (*(int (**)(void))(dword_60DED0 + 84))();
  if ( (unsigned int)(v3 - 1) > 8 )
    goto LABEL_36;
  dword_6E3358[3] = v3 + 48;
  if ( *(_BYTE *)(dword_223680 + 89) )
  {
    v3 = (*(int (**)(void))(dword_60DED0 + 108))() & 0xFFFFFF7F;
    switch ( v3 )
    {
      case 1:
LABEL_76:
        v14 = &dword_18FCF0;
        break;
      case 5:
LABEL_75:
        v14 = &dword_18FCF8;
        break;
      case 10:
LABEL_74:
        strcpy(dword_6E3380, "LM75A");
        goto LABEL_20;
      case 11:
LABEL_72:
        v14 = (int *)"TMP75A";
        break;
      case 12:
LABEL_71:
        strcpy(dword_6E3380, "DS75S");
        goto LABEL_20;
      case 13:
LABEL_70:
        strcpy(dword_6E3380, "GM452");
        goto LABEL_20;
      case 14:
LABEL_69:
        strcpy(dword_6E3380, "CT75");
        goto LABEL_20;
      case 15:
LABEL_68:
        strcpy(dword_6E3380, "DS75SPlus");
        goto LABEL_20;
      case 16:
LABEL_67:
        strcpy(dword_6E3380, "TMP75");
        goto LABEL_20;
      case 17:
LABEL_66:
        strcpy(dword_6E3380, "SD177");
        goto LABEL_20;
      case 18:
LABEL_65:
        strcpy(dword_6E3380, "GX21M");
        goto LABEL_20;
      case 19:
LABEL_64:
        strcpy(dword_6E3380, "NT175");
        goto LABEL_20;
      default:
        goto LABEL_52;
    }
    v15 = *v14;
    v16 = *((_WORD *)v14 + 2);
    v17 = *((_BYTE *)v14 + 6);
    *(_DWORD *)dword_6E3380 = v15;
    LOWORD(dword_6E3384) = v16;
    BYTE2(dword_6E3384) = v17;
  }
  else if ( *(_BYTE *)(dword_223680 + 90) )
  {
    v3 = (*(int (**)(void))(dword_60DED0 + 92))() & 0xFFFFFF7F;
    switch ( v3 )
    {
      case 1:
        goto LABEL_76;
      case 5:
        goto LABEL_75;
      case 10:
        goto LABEL_74;
      case 11:
        goto LABEL_72;
      case 12:
        goto LABEL_71;
      case 13:
        goto LABEL_70;
      case 14:
        goto LABEL_69;
      case 15:
        goto LABEL_68;
      case 16:
        goto LABEL_67;
      case 17:
        goto LABEL_66;
      case 18:
        goto LABEL_65;
      case 19:
        goto LABEL_64;
      default:
        goto LABEL_52;
    }
  }
LABEL_20:
  v3 = (*(int (**)(void))(dword_60DED0 + 124))();
  if ( (unsigned int)v3 < 0x10000 )
  {
    sprintf(dword_6E3390, "%x", v3);
    v3 = (*(int (**)(void))(dword_60DED0 + 132))();
    if ( (unsigned int)v3 < 0x10000 )
    {
      sprintf(&dword_6E3390[3], "%x", v3);
      v18 = 2;
      v3 = (*(int (__fastcall **)(int, char *, size_t *))(dword_60DED0 + 76))(
             dword_60DED0,
             (char *)&dword_6E3394 + 1,
             &v18);
      if ( v3 < 0 )
      {
        v4 = "CHIP TECH";
      }
      else
      {
        strncpy(s2, (const char *)&dword_6E3394 + 1, v18);
        v18 = 40;
        if ( (*(int (__fastcall **)(int, char *, size_t *))(dword_60DED0 + 172))(dword_60DED0, s1, &v18) >= 0
          && !strncmp(s1, (const char *)(dword_223680 + 32), 8u) )
        {
          goto LABEL_3;
        }
        sub_1E938(v20, 0x30u);
        printf("%s ", v20);
        printf(
          "%s : readout boardname:%s,cfg:%s.\n",
          "read_board_info_from_eeprom",
          s1,
          (const char *)(dword_223680 + 32));
        snprintf(byte_60E3D4, 0x100u, "readout boardname:%s,cfg:%s.", s1, (const char *)(dword_223680 + 32));
        sub_3CC5C(byte_60E3D4, v20);
        sub_1E938(v20, 0x30u);
        printf("%s ", v20);
        printf("%s : EnableRepaire:%d\n", "read_board_info_from_eeprom", *(unsigned __int8 *)(dword_223680 + 673));
        snprintf(byte_60E4D4, 0x100u, "EnableRepaire:%d", *(unsigned __int8 *)(dword_223680 + 673));
        v3 = sub_3CC5C(byte_60E4D4, v20);
        if ( *(_BYTE *)(dword_223680 + 673) )
          goto LABEL_3;
        v4 = "BOARD NAME";
      }
    }
    else
    {
      v4 = "BOM VERSION";
    }
  }
  else
  {
    v4 = "PCB VERSION";
  }
LABEL_8:
  sub_6FBF4(v3);
  sub_1F650(0, (const char *)(dword_223680 + 32));
  sub_1F650(1, "EEPROM data");
  sub_1F650(2, "     ERROR");
  sub_1F650(3, v4);
  sub_1E938(v20, 0x30u);
  printf("%s ", v20);
  printf("%s : EEPROM error: %s\n", "read_board_info_from_eeprom", v4);
  snprintf(byte_60ECD4, 0x100u, "EEPROM error: %s", v4);
  sub_3CC5C(byte_60ECD4, v20);
  if ( !dword_60DED0 )
    return v1;
  (*(void (**)(void))(dword_60DED0 + 296))();
  dword_60DED0 = 0;
  return 0;
}
