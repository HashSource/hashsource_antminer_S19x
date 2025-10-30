int sub_2210C()
{
  char *v0; // r3
  int v1; // r4
  char *v2; // r0
  const char *v3; // r2
  const char *v4; // r3
  char v6; // [sp+6h] [bp-32h] BYREF
  unsigned __int8 v7; // [sp+7h] [bp-31h] BYREF
  char v8[48]; // [sp+8h] [bp-30h] BYREF

  v6 = 90;
  v7 = 0;
  v0 = &byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894];
  v1 = (unsigned __int8)v0[1034];
  if ( v0[1034] )
  {
    if ( sub_70A44(dword_21B3A4, (unsigned __int8)(dword_6032C0 - 1), &v6, 1) )
    {
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      printf("%s : Write marker into EEPROM fail\n", "write_EEPROM_PT1_marker");
      strcpy(byte_6032C4, "Write marker into EEPROM fail");
      v2 = byte_6032C4;
      goto LABEL_15;
    }
    if ( sub_70B40(dword_21B3A4, (unsigned __int8)(dword_6032C0 - 1), &v7, 1) )
    {
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      printf("%s : Read marker from EEPROM fail\n", "write_EEPROM_PT1_marker");
      strcpy(byte_6033C4, "Read marker from EEPROM fail");
      sub_3CC5C(byte_6033C4, v8);
      byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1034] = 0;
      return 0;
    }
    else
    {
      if ( v7 != 90 )
      {
        sub_1E938(v8, 0x30u);
        printf("%s ", v8);
        printf("%s : check EEPROM marker fail. read bak is: 0x%02x\n", "write_EEPROM_PT1_marker", v7);
        snprintf(byte_6035C4, 0x100u, "check EEPROM marker fail. read bak is: 0x%02x", v7);
        v2 = byte_6035C4;
LABEL_15:
        sub_3CC5C(v2, v8);
        byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1034] = 0;
        return 0;
      }
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      printf("%s : check marker saved in EEPROM success\n", "write_EEPROM_PT1_marker");
      strcpy(byte_6034C4, "check marker saved in EEPROM success");
      sub_3CC5C(byte_6034C4, v8);
      return 1;
    }
  }
  else
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    if ( byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1034] )
      v3 = "true";
    else
      v3 = "false";
    printf("%s : gEEPROM_OK is %s, so no need write eeprom PT1 marker\n", "write_EEPROM_PT1_marker", v3);
    if ( byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1034] )
      v4 = "true";
    else
      v4 = "false";
    snprintf(byte_6036C4, 0x100u, "gEEPROM_OK is %s, so no need write eeprom PT1 marker", v4);
    sub_3CC5C(byte_6036C4, v8);
    return v1;
  }
}
