int __fastcall sub_25E14(int a1)
{
  char *v1; // r3
  int result; // r0
  int v3; // r4
  int v4; // lr
  _DWORD *v5; // r6
  const char *v6; // r3
  int v7; // r1
  int v8; // r2
  unsigned int v9; // r7
  int v10; // r0
  unsigned int v11; // r1
  int v12; // r3
  int v13; // r4
  char *v14; // r2
  char *v15; // r2
  char s[4]; // [sp+8h] [bp-54h] BYREF
  int v17; // [sp+Ch] [bp-50h]
  int v18; // [sp+10h] [bp-4Ch]
  int v19; // [sp+14h] [bp-48h]
  int v20; // [sp+18h] [bp-44h]
  int v21; // [sp+1Ch] [bp-40h]
  int v22; // [sp+20h] [bp-3Ch]
  int v23; // [sp+24h] [bp-38h]
  char v24[52]; // [sp+28h] [bp-34h] BYREF

  v21 = 0;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  sub_6FBF4(a1);
  v1 = &byte_2333A8[264784 * (unsigned __int8)byte_5FE894];
  if ( !v1[1034] || *(_BYTE *)(dword_223680 + 89) && !v1[1035] )
  {
    if ( v1[1032] )
    {
      sub_1F650(0, "ASIC:   OK");
      sub_1E938(v24, 0x30u);
      printf("%s ", v24);
      v3 = 0;
      printf("%s : ASIC:   OK\n\n", "PT1_plus_display_result_on_LCD");
      strcpy(byte_609CD0, "ASIC:   OK\n");
      sub_3CC5C(byte_609CD0, v24);
      v4 = (unsigned __int8)byte_5FE894;
      goto LABEL_9;
    }
LABEL_15:
    sub_1F650(0, "ASIC:   NG");
    sub_1E938(v24, 0x30u);
    printf("%s ", v24);
    printf("%s : ASIC:   NG\n\n", "PT1_plus_display_result_on_LCD");
    strcpy(byte_609DD0, "ASIC:   NG\n");
    sub_3CC5C(byte_609DD0, v24);
    v4 = (unsigned __int8)byte_5FE894;
    v9 = *(_DWORD *)(dword_223680 + 64);
    if ( !v9 )
      goto LABEL_22;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    do
    {
      v14 = &byte_2333A8[(_DWORD)&loc_40A50 * v4 + v12];
      v12 = (unsigned __int8)(v12 + 1);
      if ( !v14[265528] )
      {
        v13 = (unsigned __int8)(v13 + 1);
        v15 = &v24[4 * v11 + 48];
        if ( v11 <= 3 )
        {
          v11 = (unsigned __int8)(v11 + 1);
          *((_DWORD *)v15 - 16) = v10;
        }
      }
      v10 = (unsigned __int8)v12;
    }
    while ( (unsigned __int8)v12 < v9 );
    if ( v13 )
    {
      v17 = 0;
      *(_DWORD *)s = 0;
      v18 = 0;
      v19 = 0;
      switch ( v13 )
      {
        case 1:
          sprintf(s, "B_A: %d", v20);
          break;
        case 2:
          sprintf(s, "B_A: %d %d", v20, v21);
          break;
        case 3:
          sprintf(s, "B_A: %d %d %d", v20, v21, v22);
          break;
        default:
          sprintf(s, "B_A: %d %d %d %d", v20, v21, v22, v23);
          break;
      }
      sub_1F650(3, s);
      v3 = (v13 << 8) | 6;
      v4 = (unsigned __int8)byte_5FE894;
    }
    else
    {
LABEL_22:
      v3 = 6;
    }
LABEL_9:
    if ( byte_2333A8[264784 * v4 + 1034] )
    {
      v5 = &unk_609ED0;
      sub_1F650(1, "EEPROM: OK");
      sub_1E938(v24, 0x30u);
      printf("%s ", v24);
      printf("%s : EEPROM: OK\n\n", "PT1_plus_display_result_on_LCD");
      v6 = "EEPROM: OK\n";
    }
    else
    {
      v3 = 11;
      sub_1F650(1, "EEPROM: NG");
      sub_1E938(v24, 0x30u);
      v5 = &unk_609FD0;
      printf("%s ", v24);
      printf("%s : EEPROM: NG\n\n", "PT1_plus_display_result_on_LCD");
      v6 = "EEPROM: NG\n";
    }
    v7 = *((_DWORD *)v6 + 1);
    v8 = *((_DWORD *)v6 + 2);
    *v5 = *(_DWORD *)v6;
    v5[1] = v7;
    v5[2] = v8;
    sub_3CC5C(v5, v24);
    if ( *(_BYTE *)(dword_223680 + 89) )
    {
      if ( !byte_2333A8[264784 * (unsigned __int8)byte_5FE894 + 1035] )
      {
        sub_1F650(2, "PIC sensor: NG");
        sub_1E938(v24, 0x30u);
        printf("%s ", v24);
        printf("%s : PIC sensor: NG\n\n", "PT1_plus_display_result_on_LCD");
        strcpy(byte_60A1D0, "PIC sensor: NG\n");
        sub_3CC5C(byte_60A1D0, v24);
        return 10;
      }
      sub_1F650(2, "PIC sensor: OK");
      sub_1E938(v24, 0x30u);
      printf("%s ", v24);
      printf("%s : PIC sensor: OK\n\n", "PT1_plus_display_result_on_LCD");
      strcpy(byte_60A0D0, "PIC sensor: OK\n");
      sub_3CC5C(byte_60A0D0, v24);
    }
    return v3;
  }
  if ( !v1[1032] )
    goto LABEL_15;
  sub_1F650(0, (const char *)(dword_223680 + 32));
  sub_1F650(1, "ASIC:   OK");
  sub_1E938(v24, 0x30u);
  printf("%s ", v24);
  printf("%s : ASIC:   OK\n\n", "PT1_plus_display_result_on_LCD");
  strcpy(byte_6099D0, "ASIC:   OK\n");
  sub_3CC5C(byte_6099D0, v24);
  sub_1F650(2, "EEPROM: OK");
  sub_1E938(v24, 0x30u);
  printf("%s ", v24);
  printf("%s : EEPROM: OK\n\n", "PT1_plus_display_result_on_LCD");
  strcpy(byte_609AD0, "EEPROM: OK\n");
  sub_3CC5C(byte_609AD0, v24);
  result = *(unsigned __int8 *)(dword_223680 + 89);
  if ( *(_BYTE *)(dword_223680 + 89) )
  {
    sub_1F650(3, "PIC sensor: OK");
    sub_1E938(v24, 0x30u);
    printf("%s ", v24);
    printf("%s : PIC sensor: OK\n\n", "PT1_plus_display_result_on_LCD");
    strcpy(byte_609BD0, "PIC sensor: OK\n");
    sub_3CC5C(byte_609BD0, v24);
    return 0;
  }
  return result;
}
