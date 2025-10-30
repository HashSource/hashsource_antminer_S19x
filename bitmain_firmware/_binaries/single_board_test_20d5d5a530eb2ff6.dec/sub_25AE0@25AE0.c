int __fastcall sub_25AE0(int a1)
{
  char *v1; // r3
  int v2; // r4
  int v3; // r6
  int v4; // r8
  _DWORD *v5; // r7
  const char *v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  char *v10; // r3
  int v11; // r10
  int result; // r0
  char v13[48]; // [sp+0h] [bp-30h] BYREF

  sub_6FBF4(a1);
  v1 = &byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894];
  v2 = (unsigned __int8)v1[1032];
  if ( v1[1032] )
  {
    sub_1F650(1, "ASIC:   OK");
    sub_1E938(v13, 0x30u);
    printf("%s ", v13);
    v3 = 0;
    printf("%s : ASIC:   OK\n\n", "PT1_display_result_on_LCD");
    v4 = 1;
    strcpy(byte_6092D0, "ASIC:   OK\n");
    sub_3CC5C(byte_6092D0, v13);
  }
  else
  {
    sub_2597C();
    if ( dword_5FE780 )
    {
      v4 = v2;
      v3 = (dword_5FE780 << 8) | 3;
    }
    else
    {
      v4 = 0;
      v3 = 2;
    }
  }
  if ( byte_2333A8[264784 * (unsigned __int8)byte_5FE894 + 1034] )
  {
    v5 = &unk_6093D0;
    sub_1F650(2, "EEPROM: OK");
    sub_1E938(v13, 0x30u);
    printf("%s ", v13);
    printf("%s : EEPROM: OK\n\n", "PT1_display_result_on_LCD");
    v6 = "EEPROM: OK\n";
  }
  else
  {
    v4 = (unsigned __int8)byte_2333A8[264784 * (unsigned __int8)byte_5FE894 + 1034];
    sub_1F650(2, "EEPROM: NG");
    sub_1E938(v13, 0x30u);
    v3 = 11;
    printf("%s ", v13);
    v5 = &unk_6094D0;
    printf("%s : EEPROM: NG\n\n", "PT1_display_result_on_LCD");
    v6 = "EEPROM: NG\n";
  }
  v7 = *((_DWORD *)v6 + 1);
  v8 = *((_DWORD *)v6 + 2);
  *v5 = *(_DWORD *)v6;
  v5[1] = v7;
  v5[2] = v8;
  sub_3CC5C(v5, v13);
  v9 = dword_223680;
  if ( !*(_BYTE *)(dword_223680 + 89) )
  {
LABEL_8:
    if ( !*(_BYTE *)(v9 + 88) )
      goto LABEL_14;
    goto LABEL_9;
  }
  v10 = &byte_2333A8[264784 * (unsigned __int8)byte_5FE894];
  v11 = (unsigned __int8)v10[1035];
  if ( v10[1035] )
  {
    sub_1F650(3, "PIC sensor: OK");
    sub_1E938(v13, 0x30u);
    printf("%s ", v13);
    printf("%s : PIC sensor: OK\n\n", "PT1_display_result_on_LCD");
    strcpy(byte_6095D0, "PIC sensor: OK\n");
    sub_3CC5C(byte_6095D0, v13);
    v9 = dword_223680;
    goto LABEL_8;
  }
  sub_1F650(3, "PIC sensor: NG");
  sub_1E938(v13, 0x30u);
  printf("%s ", v13);
  printf("%s : PIC sensor: NG\n\n", "PT1_display_result_on_LCD");
  strcpy(byte_6096D0, "PIC sensor: NG\n");
  sub_3CC5C(byte_6096D0, v13);
  if ( !*(_BYTE *)(dword_223680 + 88) )
    return 10;
  v4 = v11;
  v3 = 10;
LABEL_9:
  if ( !byte_2333A8[264784 * (unsigned __int8)byte_5FE894 + 1037] )
  {
    sub_1F650(3, "CB sensor: NG");
    sub_1E938(v13, 0x30u);
    printf("%s ", v13);
    printf("%s : CBoard sensor: NG\n\n", "PT1_display_result_on_LCD");
    strcpy(byte_6098D0, "CBoard sensor: NG\n");
    sub_3CC5C(byte_6098D0, v13);
    return 10;
  }
  sub_1F650(3, "CB sensor: OK");
  sub_1E938(v13, 0x30u);
  printf("%s ", v13);
  printf("%s : CBoard sensor: OK\n\n", "PT1_display_result_on_LCD");
  strcpy(byte_6097D0, "CBoard sensor: OK\n");
  sub_3CC5C(byte_6097D0, v13);
LABEL_14:
  result = v3;
  if ( v4 )
  {
    sub_1F650(0, (const char *)(dword_223680 + 32));
    return 0;
  }
  return result;
}
