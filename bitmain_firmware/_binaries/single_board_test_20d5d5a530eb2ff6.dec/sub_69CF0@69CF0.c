int __fastcall sub_69CF0(const char *a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r3
  int v5; // r5
  int v6; // r2
  int v7; // r5
  const char *v8; // r2
  const char *v9; // r3
  const char *v10; // r3
  const char *v11; // r2
  const char *v12; // r3
  const char *v13; // r6
  const char *v14; // r0
  const char *v15; // r3
  int v17; // r0
  unsigned int v18; // r3
  const char *v19; // [sp+0h] [bp-50h]
  const char *v20; // [sp+0h] [bp-50h]
  const char *v21; // [sp+4h] [bp-4Ch]
  char dest[4]; // [sp+10h] [bp-40h] BYREF
  int v23; // [sp+14h] [bp-3Ch]
  int v24; // [sp+18h] [bp-38h]
  int v25; // [sp+1Ch] [bp-34h]
  char v26[48]; // [sp+20h] [bp-30h] BYREF

  v2 = strcmp(a1, "BM1366");
  if ( v2 )
  {
    v23 = 0;
    *(_DWORD *)dest = 0;
    v24 = 0;
    v25 = 0;
    sub_6FBF4(v2);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Don't support");
    strcpy(dest, a1);
    sub_1F650(2, dest);
    sub_1E938(v26, 0x30u);
    printf("%s ", v26);
    printf("%s : Don't support %s. asic should be BM1366\n", "BTC_check_config_information", a1);
    snprintf(byte_65AE44, 0x100u, "Don't support %s. asic should be BM1366", a1);
    sub_3CC5C((int)byte_65AE44, v26);
    return 0;
  }
  v3 = dword_223680;
  v4 = *(unsigned __int8 *)dword_223680;
  v5 = 80 - v4;
  if ( v4 != 80
    || *(_BYTE *)(dword_223680 + 1) != 84
    || *(_BYTE *)(dword_223680 + 2) != 49
    || *(_BYTE *)(dword_223680 + 3) )
  {
    v2 = strcmp((const char *)dword_223680, "PT1new");
    if ( v2 )
    {
      v2 = strcmp((const char *)v3, "PT1+");
      if ( v2 )
      {
        if ( v5 || *(_BYTE *)(v3 + 1) != 84 || *(_BYTE *)(v3 + 2) != 50 || *(_BYTE *)(v3 + 3) )
        {
          v2 = strcmp((const char *)v3, "Reset_Low");
          if ( v2 )
          {
            v2 = strcmp((const char *)v3, "SWEEP");
            if ( v2 )
            {
              if ( v5 || *(_BYTE *)(v3 + 1) != 84 || *(_BYTE *)(v3 + 2) != 51 || *(_BYTE *)(v3 + 3) )
              {
                sub_6FBF4(v2);
                sub_1F650(0, (const char *)(dword_223680 + 32));
                sub_1F650(1, "test process");
                sub_1F650(2, "error");
                sub_1E938(v26, 0x30u);
                printf("%s ", v26);
                printf("%s : test process (%s) error.\n", "BTC_check_config_information", (const char *)dword_223680);
                snprintf(byte_65AF44, 0x100u, "test process (%s) error.", (const char *)dword_223680);
                sub_3CC5C((int)byte_65AF44, v26);
                return 0;
              }
            }
          }
        }
      }
    }
  }
  v6 = *(unsigned __int8 *)(v3 + 269);
  v7 = *(unsigned __int8 *)(v3 + 268);
  if ( *(_BYTE *)(v3 + 269) )
    v7 = (unsigned __int8)(*(_BYTE *)(v3 + 268) + 1);
  if ( *(_BYTE *)(v3 + 270) )
    v7 = (unsigned __int8)(v7 + 1);
  if ( *(_BYTE *)(v3 + 271) )
    v7 = (unsigned __int8)(v7 + 1);
  if ( v7 == 1 )
  {
    if ( *(_BYTE *)(v3 + 268) )
    {
      if ( *(_DWORD *)(v3 + 272) != 8 )
      {
        sub_6FBF4(v2);
        sub_1F650(0, (const char *)(dword_223680 + 32));
        sub_1F650(1, "midstate number");
        sub_1F650(2, "error");
        sub_1E938(v26, 0x30u);
        printf("%s ", v26);
        printf(
          "%s : In software pattern mode, midstate number is %d, error\n",
          "BTC_check_config_information",
          *(_DWORD *)(dword_223680 + 272));
        snprintf(
          byte_65B144,
          0x100u,
          "In software pattern mode, midstate number is %d, error",
          *(_DWORD *)(dword_223680 + 272));
        v2 = sub_3CC5C((int)byte_65B144, v26);
        v3 = dword_223680;
        if ( *(_DWORD *)(dword_223680 + 272) != 8 )
        {
          if ( !*(_BYTE *)(dword_223680 + 269) )
            goto LABEL_54;
          goto LABEL_66;
        }
      }
      if ( (*(_DWORD *)(v3 + 312) & 1) != 0 )
      {
        sub_6FBF4(v2);
        sub_1F650(0, (const char *)(dword_223680 + 32));
        sub_1F650(1, "Pattern Number");
        sub_1F650(2, "midstate number");
        sub_1F650(3, "error");
        sub_1E938(v26, 0x30u);
        printf("%s ", v26);
        printf(
          "%s : When BM1366 test 8 midstate, Pattern_Number %% 2 must be equal 0. Now Pattern_Number: %d\n",
          "BTC_check_config_information",
          *(_DWORD *)(dword_223680 + 312));
        snprintf(
          byte_65B244,
          0x100u,
          "When BM1366 test 8 midstate, Pattern_Number %% 2 must be equal 0. Now Pattern_Number: %d",
          *(_DWORD *)(dword_223680 + 312));
        sub_3CC5C((int)byte_65B244, v26);
        return 0;
      }
      v3 = dword_223680;
      v6 = *(unsigned __int8 *)(dword_223680 + 269);
    }
    if ( !v6 )
      goto LABEL_54;
    if ( *(_DWORD *)(v3 + 272) == 8 )
    {
LABEL_52:
      if ( (*(_DWORD *)(v3 + 312) & 1) != 0 )
      {
        sub_6FBF4(v2);
        sub_1F650(0, (const char *)(dword_223680 + 32));
        sub_1F650(1, "Pattern Number");
        sub_1F650(2, "midstate number");
        sub_1F650(3, "error");
        sub_1E938(v26, 0x30u);
        printf("%s ", v26);
        printf(
          "%s : When BM1366 test 8 midstate, Pattern_Number %% 2 must be equal 0. Now Pattern_Number: %d\n",
          "BTC_check_config_information",
          *(_DWORD *)(dword_223680 + 312));
        snprintf(
          byte_65B444,
          0x100u,
          "When BM1366 test 8 midstate, Pattern_Number %% 2 must be equal 0. Now Pattern_Number: %d",
          *(_DWORD *)(dword_223680 + 312));
        sub_3CC5C((int)byte_65B444, v26);
        return 0;
      }
      v3 = dword_223680;
LABEL_54:
      if ( *(_BYTE *)(v3 + 270) )
      {
        dword_6140E0 = (int)&unk_376400;
        dword_6140DC = 333;
        *(_DWORD *)(v3 + 272) = 1;
      }
      if ( *(_BYTE *)(v3 + 271) )
        *(_DWORD *)(v3 + 272) = 8;
      *(_DWORD *)(v3 + 72) = 894;
      *(_DWORD *)(v3 + 76) = 8;
      *(_DWORD *)(v3 + 68) = 112;
      sub_1E938(v26, 0x30u);
      printf("%s ", v26);
      printf("%s : test =================================\n", "BTC_check_config_information");
      strcpy(byte_65B544, "test =================================");
      v17 = sub_3CC5C((int)byte_65B544, v26);
      v18 = *(_DWORD *)(dword_223680 + 64);
      if ( v18 > 0x80 )
      {
        dword_6084C8 = 1;
      }
      else if ( v18 <= 0x40 )
      {
        if ( v18 <= 0x20 )
        {
          sub_6FBF4(v17);
          sub_1F650(0, (const char *)(dword_223680 + 32));
          sub_1F650(1, "Asic_Num < 32");
          sub_1F650(3, "error");
          sub_1E938(v26, 0x30u);
          printf("%s ", v26);
          printf("%s : ERROR: Asic_Num == %d\n", "BTC_check_config_information", *(_DWORD *)(dword_223680 + 64));
          snprintf(byte_65B644, 0x100u, "ERROR: Asic_Num == %d", *(_DWORD *)(dword_223680 + 64));
          sub_3CC5C((int)byte_65B644, v26);
          return 0;
        }
        dword_6084C8 = 4;
      }
      else
      {
        dword_6084C8 = 2;
      }
      dword_6032C0 = 256;
      return 1;
    }
LABEL_66:
    sub_6FBF4(v2);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "midstate number");
    sub_1F650(2, "error");
    sub_1E938(v26, 0x30u);
    printf("%s ", v26);
    printf(
      "%s : In super software pattern mode, midstate number is %d, error\n",
      "BTC_check_config_information",
      *(_DWORD *)(dword_223680 + 272));
    snprintf(
      byte_65B344,
      0x100u,
      "In super software pattern mode, midstate number is %d, error",
      *(_DWORD *)(dword_223680 + 272));
    v2 = sub_3CC5C((int)byte_65B344, v26);
    v3 = dword_223680;
    if ( *(_DWORD *)(dword_223680 + 272) != 8 )
      goto LABEL_54;
    goto LABEL_52;
  }
  sub_6FBF4(v2);
  sub_1F650(0, (const char *)(dword_223680 + 32));
  sub_1F650(1, "test method");
  sub_1F650(2, "conflict");
  sub_1E938(v26, 0x30u);
  printf("%s ", v26);
  if ( *(_BYTE *)(dword_223680 + 270) )
    v8 = "true";
  else
    v8 = "false";
  if ( *(_BYTE *)(dword_223680 + 271) )
    v9 = "true";
  else
    v9 = "false";
  v19 = v8;
  v21 = v9;
  if ( *(_BYTE *)(dword_223680 + 269) )
    v10 = "true";
  else
    v10 = "false";
  if ( *(_BYTE *)(dword_223680 + 268) )
    v11 = "true";
  else
    v11 = "false";
  printf(
    "%s : test method conflict. Software_Pattern: %s,Super_Software_Pattern: %s, Hardware_Pattern: %s, Autogen_Pattern: %s\n",
    "BTC_check_config_information",
    v11,
    v10,
    v19,
    v21);
  if ( *(_BYTE *)(dword_223680 + 269) )
    v12 = "true";
  else
    v12 = "false";
  if ( *(_BYTE *)(dword_223680 + 270) )
    v13 = "true";
  else
    v13 = "false";
  v20 = v12;
  if ( *(_BYTE *)(dword_223680 + 271) )
    v14 = "true";
  else
    v14 = "false";
  if ( *(_BYTE *)(dword_223680 + 268) )
    v15 = "true";
  else
    v15 = "false";
  snprintf(
    byte_65B044,
    0x100u,
    "test method conflict. Software_Pattern: %s,Super_Software_Pattern: %s, Hardware_Pattern: %s, Autogen_Pattern: %s",
    v15,
    v20,
    v13,
    v14);
  sub_3CC5C((int)byte_65B044, v26);
  return 0;
}
