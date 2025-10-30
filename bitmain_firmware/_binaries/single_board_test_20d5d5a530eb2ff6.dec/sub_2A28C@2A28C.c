int __fastcall sub_2A28C(int a1)
{
  const char *v2; // r0
  char *v3; // r6
  _DWORD *v5; // r6
  int *v6; // r4
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r4
  _BYTE *v12; // r6
  size_t n; // [sp+10h] [bp-23Ch] BYREF
  int v14; // [sp+14h] [bp-238h] BYREF
  char v15[48]; // [sp+18h] [bp-234h] BYREF
  _BYTE s[256]; // [sp+48h] [bp-204h] BYREF
  _BYTE s2[260]; // [sp+148h] [bp-104h] BYREF

  memset(s, 0, sizeof(s));
  s[0] = -1;
  memset(s2, 0, 0x100u);
  s2[0] = -1;
  n = 256;
  sub_1E938(v15, 0x30u);
  printf("%s ", v15);
  printf("%s : Pattern test done. gPattern_test_counter: %d\n\n", "do_PT2_summary_work", a1);
  snprintf(byte_60FDD4, 0x100u, "Pattern test done. gPattern_test_counter: %d\n", a1);
  sub_3CC5C(byte_60FDD4, v15);
  v2 = (const char *)dword_223680;
  if ( !*(_BYTE *)(dword_223680 + 260) )
    return sub_262F4(a1);
  v3 = &byte_2333A8[(_DWORD)&loc_40A50 * a1];
  if ( !v3[265808] && v3[1032] && v3[1033] )
  {
    if ( !sub_295F4(a1, 1, (int)s, (int)&n, (int)&v14) )
    {
      sub_6FBF4(0);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "prepare");
      sub_1F650(2, "eeprom data");
      sub_1F650(3, "fail");
      sub_1E938(v15, 0x30u);
      printf("%s ", v15);
      printf("%s : prepare eeprom data fail\n", "do_PT2_summary_work");
      strcpy(byte_60FED4, "prepare eeprom data fail");
      sub_3CC5C(byte_60FED4, v15);
      return 12;
    }
    sub_1E938(v15, 0x30u);
    printf("%s ", v15);
    printf("%s : write 0x%x..+0x%x\n", "do_PT2_summary_work", v14, n);
    snprintf(byte_60FFD4, 0x100u, "write 0x%x..+0x%x", v14, n);
    sub_3CC5C(byte_60FFD4, v15);
    if ( !sub_70A44(dword_21B3A4, (unsigned __int8)v14, s, n) )
    {
      sub_1E938(v15, 0x30u);
      v5 = &unk_6100D4;
      printf("%s ", v15);
      LOWORD(v6) = (unsigned __int16)"Write EEPROM ok\n";
      printf("%s : Write EEPROM ok\n\n", "do_PT2_summary_work");
LABEL_9:
      HIWORD(v6) = (unsigned int)"Write EEPROM ok\n" >> 16;
      v7 = *v6;
      v8 = v6[1];
      v9 = v6[2];
      v10 = v6[3];
      v11 = v6[4];
      *v5 = v7;
      v5[1] = v8;
      v5[2] = v9;
      v5[3] = v10;
      v12 = v5 + 4;
      *v12 = v11;
      sub_3CC5C(v12 - 16, v15);
      v2 = (const char *)dword_223680;
      goto LABEL_10;
    }
    if ( sub_70B40(dword_21B3A4, (unsigned __int8)v14, s2, n) )
    {
      v3[1034] = 0;
      sub_1E938(v15, 0x30u);
      printf("%s ", v15);
      printf("%s : Read EEPROM fail\n\n", "do_PT2_summary_work");
      strcpy(byte_6101D4, "Read EEPROM fail\n");
      sub_3CC5C(byte_6101D4, v15);
      v2 = (const char *)dword_223680;
    }
    else
    {
      if ( !memcmp(s, s2, n) )
      {
        LOWORD(v6) = 16268;
        sub_1E938(v15, 0x30u);
        v5 = &unk_6102D4;
        printf("%s ", v15);
        printf("%s : Write EEPROM ok\n\n", "do_PT2_summary_work");
        goto LABEL_9;
      }
      v3[1034] = 0;
      sub_1E938(v15, 0x30u);
      printf("%s ", v15);
      printf("%s : Check EEPROM data fail\n\n", "do_PT2_summary_work");
      strcpy(byte_6103D4, "Check EEPROM data fail\n");
      sub_3CC5C(byte_6103D4, v15);
      v2 = (const char *)dword_223680;
    }
  }
LABEL_10:
  if ( !strncmp(v2, "PT2", 3u) )
  {
    sub_2146C("Report data", "waiting...", 0);
    sub_2A09C();
  }
  return sub_262F4(a1);
}
