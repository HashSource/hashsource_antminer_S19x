int __fastcall sub_1FF68(int a1)
{
  int v1; // r4
  int v2; // r3
  int v3; // r6
  int v4; // r8
  int *v5; // r4
  int v6; // r6
  _DWORD *v7; // r5
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int *v12; // r4
  _DWORD *v13; // r5
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r4
  int v20; // r0
  int v21; // r3
  _DWORD *v22; // r4
  int *v23; // r5
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int *v28; // r5
  _DWORD *v29; // r4
  int v30; // r0
  int v31; // r1
  int v32; // r2
  int v33; // r3
  int v34; // r5
  int v35; // r0
  char v36[48]; // [sp+8h] [bp-30h] BYREF

  v1 = dword_223680;
  v2 = *(unsigned __int8 *)dword_223680;
  v3 = 80 - v2;
  if ( v2 == 80 && *(_BYTE *)(dword_223680 + 1) == 84 && *(_BYTE *)(dword_223680 + 2) == 49 )
  {
    v4 = *(unsigned __int8 *)(dword_223680 + 3);
    if ( !*(_BYTE *)(dword_223680 + 3) )
    {
      if ( *(_DWORD *)(dword_223680 + 64) != 1 )
      {
        if ( !*(_BYTE *)(dword_223680 + 260) )
          *(_BYTE *)(dword_223680 + 672) = 0;
        sub_1F7E8(a1);
        sub_1E938(v36, 0x30u);
        v5 = (int *)&unk_18F8C4;
        printf("%s ", v36);
        v6 = 1;
        printf("%s : Will do PT1: Only find ASIC test\n", "prepare_test_process");
        v7 = &unk_5FF9B0;
LABEL_14:
        v8 = *v5;
        v9 = v5[1];
        v10 = v5[2];
        v11 = v5[3];
        v12 = v5 + 4;
        *v7 = v8;
        v7[1] = v9;
        v7[2] = v10;
        v7[3] = v11;
        v13 = v7 + 4;
        v14 = *v12;
        v15 = v12[1];
        v16 = v12[2];
        v17 = v12[3];
        v18 = v12[4];
        *v13 = v14;
        v13[1] = v15;
        v13[2] = v16;
        v13[3] = v17;
        v13 += 4;
        *(_BYTE *)v13 = v18;
        sub_3CC5C(v13 - 8, v36);
        return v6;
      }
      sub_6FBF4(a1);
      v22 = &unk_5FF8B0;
      v6 = v4;
      LOWORD(v23) = (unsigned __int16)"Single ASIC don't support PT1 test";
      sub_1F650(v4, (const char *)(dword_223680 + 48));
      sub_1F650(1, "Single ASIC");
      sub_1F650(2, "don't support");
      sub_1F650(3, "PT1 test");
      sub_1E938(v36, 0x30u);
      printf("%s ", v36);
      printf("%s : Single ASIC don't support PT1 test\n", "prepare_test_process");
      goto LABEL_35;
    }
  }
  if ( !strcmp((const char *)dword_223680, "PT1+") )
  {
    if ( *(_DWORD *)(v1 + 64) != 1 )
    {
      if ( !*(_BYTE *)(v1 + 260) )
        *(_BYTE *)(v1 + 672) = 0;
      sub_1F7E8(0);
      sub_1E938(v36, 0x30u);
      v7 = &unk_5FFBB0;
      v5 = (int *)&unk_18F910;
      v6 = 1;
      printf("%s ", v36);
      printf("%s : Will do PT1+: do PT1 and pattern\n", "prepare_test_process");
      goto LABEL_14;
    }
    sub_6FBF4(0);
    LOWORD(v23) = -1928;
    v22 = &unk_5FFAB0;
    v6 = 0;
    sub_1F650(0, (const char *)(dword_223680 + 48));
    sub_1F650(1, "Single ASIC");
    sub_1F650(2, "don't support");
    sub_1F650(3, "PT1 test");
    sub_1E938(v36, 0x30u);
    printf("%s ", v36);
    printf("%s : Single ASIC don't support PT1 test\n", "prepare_test_process");
LABEL_35:
    HIWORD(v23) = (unsigned int)"Single ASIC don't support PT1 test" >> 16;
    v24 = *v23;
    v25 = v23[1];
    v26 = v23[2];
    v27 = v23[3];
    v28 = v23 + 4;
    *v22 = v24;
    v22[1] = v25;
    v22[2] = v26;
    v22[3] = v27;
    v29 = v22 + 4;
    v30 = *v28;
    v31 = v28[1];
    v32 = v28[2];
    v33 = v28[3];
    v34 = v28[4];
    *v29 = v30;
    v29[1] = v31;
    v29[2] = v32;
    v29[3] = v33;
    v29 += 4;
    *(_WORD *)v29 = v34;
    v29 = (_DWORD *)((char *)v29 + 2);
    *(_BYTE *)v29 = BYTE2(v34);
    sub_3CC5C((char *)v29 - 34, v36);
    return v6;
  }
  if ( strcmp((const char *)v1, "PT1new") )
  {
    v20 = strcmp((const char *)v1, "Reset_Low");
    if ( v20 )
    {
      if ( !v3
        && *(_BYTE *)(v1 + 1) == 84
        && ((v21 = *(unsigned __int8 *)(v1 + 2), v21 == 50) || v21 == 51)
        && !*(_BYTE *)(v1 + 3)
        || (v20 = strcmp((const char *)v1, "SWEEP")) == 0 )
      {
        v6 = *(_DWORD *)(v1 + 64);
        if ( v6 == 1 )
        {
          sub_1F7E8(v20);
          sub_1E938(v36, 0x30u);
          printf("%s ", v36);
          printf(
            "%s : You are in single Asic Manual PT2 test mode, please make sure all the configrations are correct!\n",
            "prepare_test_process");
          strcpy(
            byte_5FFFB0,
            "You are in single Asic Manual PT2 test mode, please make sure all the configrations are correct!");
          sub_3CC5C(byte_5FFFB0, v36);
        }
        else if ( *(_BYTE *)(v1 + 260) )
        {
          sub_6FBF4(v20);
          sub_1F650(0, (const char *)(dword_223680 + 32));
          sub_1F650(1, "connect internet");
          sub_1F650(2, "please  wait");
          v6 = sub_2F86C(0);
          if ( v6 )
          {
            if ( sub_30920() && sub_30AF0() && sub_30EF4(0) && sub_31254() )
            {
              v6 = sub_32A40(0);
              if ( v6 )
              {
                v35 = sub_32AA8();
                sub_1F7E8(v35);
              }
              else
              {
                sub_6FBF4(0);
                sub_1F650(0, (const char *)(dword_223680 + 32));
                sub_1F650(1, "parse MES all");
                sub_1F650(2, "config infor");
                sub_1F650(3, "fail");
                sub_1E938(v36, 0x30u);
                printf("%s ", v36);
                printf("%s : parse MES all config infor fail\n", "prepare_test_process");
                strcpy(byte_6001B0, "parse MES all config infor fail");
                sub_3CC5C(byte_6001B0, v36);
              }
            }
            else
            {
              return 0;
            }
          }
          else
          {
            sub_6FBF4(0);
            sub_1F650(0, (const char *)(dword_223680 + 32));
            sub_1F650(1, "Prepare all");
            sub_1F650(2, "config handshake");
            sub_1F650(3, "fail");
            sub_1E938(v36, 0x30u);
            printf("%s ", v36);
            printf("%s : Prepare all config handshake fail\n", "prepare_test_process");
            strcpy(byte_6000B0, "Prepare all config handshake fail");
            sub_3CC5C(byte_6000B0, v36);
          }
        }
        else
        {
          sub_1F7E8(v20);
          sub_1E938(v36, 0x30u);
          v6 = 1;
          printf("%s ", v36);
          printf(
            "%s : You are in Manual PT2 test mode, please make sure all the configrations are correct!\n",
            "prepare_test_process");
          strcpy(byte_6002B0, "You are in Manual PT2 test mode, please make sure all the configrations are correct!");
          sub_3CC5C(byte_6002B0, v36);
        }
      }
      else
      {
        v6 = 0;
        sub_1F7E8(v20);
      }
    }
    else
    {
      sub_1F7E8(0);
      sub_1E938(v36, 0x30u);
      v6 = 1;
      printf("%s ", v36);
      printf(
        "%s : Will do Reset_Low: keep reset low then power on, modify Close_Power_Delay to keep power on\n",
        "prepare_test_process");
      strcpy(byte_5FFEB0, "Will do Reset_Low: keep reset low then power on, modify Close_Power_Delay to keep power on");
      sub_3CC5C(byte_5FFEB0, v36);
    }
    return v6;
  }
  if ( *(_DWORD *)(v1 + 64) == 1 )
  {
    sub_6FBF4(0);
    LOWORD(v23) = -1928;
    v22 = &unk_5FFCB0;
    v6 = 0;
    sub_1F650(0, (const char *)(dword_223680 + 48));
    sub_1F650(1, "Single ASIC");
    sub_1F650(2, "don't support");
    sub_1F650(3, "PT1 test");
    sub_1E938(v36, 0x30u);
    printf("%s ", v36);
    printf("%s : Single ASIC don't support PT1 test\n", "prepare_test_process");
    goto LABEL_35;
  }
  if ( *(_BYTE *)(v1 + 673) )
    *(_BYTE *)(v1 + 261) = 1;
  sub_1F7E8(0);
  sub_1E938(v36, 0x30u);
  printf("%s ", v36);
  printf("%s : Will do PT1new: do PT1 and scan bar code and store chip info\n", "prepare_test_process");
  strcpy(byte_5FFDB0, "Will do PT1new: do PT1 and scan bar code and store chip info");
  sub_3CC5C(byte_5FFDB0, v36);
  return 1;
}
