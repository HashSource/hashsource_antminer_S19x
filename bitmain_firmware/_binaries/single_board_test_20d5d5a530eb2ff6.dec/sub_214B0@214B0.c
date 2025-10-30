int __fastcall sub_214B0(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r7
  int v7; // r4
  int v8; // r0
  int v9; // r0
  int v11; // r7
  int v12; // r0
  char v13; // [sp+Eh] [bp-36h] BYREF
  char v14; // [sp+Fh] [bp-35h] BYREF
  char v15[52]; // [sp+10h] [bp-34h] BYREF

  v13 = 0;
  v14 = 0;
  if ( byte_5FE77C != 3 )
  {
    sub_71AA8(0);
    usleep(0x249F0u);
    sub_1E938(v15, 0x30u);
    v1 = printf("%s ", v15);
    v2 = sub_71D48(v1);
    v3 = printf("%s : FPGA version is 0x%08x\n", "scan_code_from_hashboard", v2);
    v4 = sub_71D48(v3);
    snprintf(byte_601ABC, 0x100u, "FPGA version is 0x%08x", v4);
    v5 = sub_3CC5C(byte_601ABC, v15);
    sub_71BDC(v5);
    v6 = sub_204F8();
    if ( !v6 )
    {
      sub_1E938(v15, 0x30u);
      printf("%s ", v15);
      printf("%s : Scan code gun don't plug on J4\n", "scan_code_from_hashboard");
      strcpy(byte_601BBC, "Scan code gun don't plug on J4");
      sub_3CC5C(byte_601BBC, v15);
      sub_2146C("Scan code gun", "don't plug on", "J4");
      return v6;
    }
    v7 = 0;
    v8 = sub_71D60(dword_21B3A8, 26);
    v9 = sub_37B10(v8);
    byte_5FE77C = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v7 == 3 )
        {
          sub_1E938(v15, 0x30u);
          printf("%s ", v15);
          printf("%s : SN data::[%s]\n", "scan_code_from_hashboard", src);
          snprintf(&byte_6020BC[256], 0x100u, "SN data::[%s]", src);
          sub_3CC5C(&byte_6020BC[256], v15);
          sub_1E938(v15, 0x30u);
          printf("%s ", v15);
          printf("%s : QR code data::\n", "scan_code_from_hashboard");
          strcpy(byte_6022BC, "QR code data::");
          sub_3CC5C(byte_6022BC, v15);
          sub_1E938(v15, 0x30u);
          printf("%s ", v15);
          printf("%s : factory_job::[%s].\n", "scan_code_from_hashboard", (const char *)&dword_6E3318);
          snprintf(byte_6023BC, 0x100u, "factory_job::[%s].", (const char *)&dword_6E3318);
          sub_3CC5C(byte_6023BC, v15);
          sub_1E938(v15, 0x30u);
          printf("%s ", v15);
          printf("%s : chip_die::[%s].\n", "scan_code_from_hashboard", (const char *)&dword_6E3338);
          snprintf(&byte_6023BC[256], 0x100u, "chip_die::[%s].", (const char *)&dword_6E3338);
          sub_3CC5C(&byte_6023BC[256], v15);
          sub_1E938(v15, 0x30u);
          printf("%s ", v15);
          printf("%s : chip_marking::[%s].\n", "scan_code_from_hashboard", (const char *)&dword_6E3348);
          snprintf(&byte_6023BC[512], 0x100u, "chip_marking::[%s].", (const char *)&dword_6E3348);
          sub_3CC5C(&byte_6023BC[512], v15);
          sub_1E938(v15, 0x30u);
          printf("%s ", v15);
          printf("%s : chip_bin::[%s].\n", "scan_code_from_hashboard", dword_6E3358);
          snprintf(&byte_6023BC[768], 0x100u, "chip_bin::[%s].", dword_6E3358);
          sub_3CC5C(&byte_6023BC[768], v15);
          sub_1E938(v15, 0x30u);
          printf("%s ", v15);
          printf("%s : chip_ftversion::[%s].\n", "scan_code_from_hashboard", haystack);
          snprintf(&byte_6023BC[1024], 0x100u, "chip_ftversion::[%s].", haystack);
          sub_3CC5C(&byte_6023BC[1024], v15);
          sub_1E938(v15, 0x30u);
          printf("%s ", v15);
          printf("%s : temp_sensor_type::[%s].\n", "scan_code_from_hashboard", dword_6E3380);
          snprintf(&byte_6023BC[1280], 0x100u, "temp_sensor_type::[%s].", dword_6E3380);
          sub_3CC5C(&byte_6023BC[1280], v15);
          sub_1E938(v15, 0x30u);
          printf("%s ", v15);
          printf("%s : hashboard_ctrl_code::[%s].\n", "scan_code_from_hashboard", dword_6E3390);
          snprintf(&byte_6023BC[1536], 0x100u, "hashboard_ctrl_code::[%s].", dword_6E3390);
          sub_3CC5C(&byte_6023BC[1536], v15);
          sub_1E938(v15, 0x30u);
          printf("%s ", v15);
          printf("%s : hashboard_index::[%s].\n", "scan_code_from_hashboard", (const char *)&dword_6E33A0);
          snprintf(&byte_6023BC[1792], 0x100u, "hashboard_index::[%s].", (const char *)&dword_6E33A0);
          sub_3CC5C(&byte_6023BC[1792], v15);
          v12 = sub_20914((int)&byte_6E33B0, (const char *)&dword_6E3318);
          v6 = v12;
          if ( !v12 )
          {
            byte_5FE77C = 0;
            return 0;
          }
          sub_6FBF4(v12);
          sub_1F650(0, (const char *)(dword_223680 + 32));
          sub_1F650(1, "Got Scan code");
          sub_1F650(2, "wait for find");
          sub_1F650(3, "test standard");
          sub_1E938(v15, 0x30u);
          printf("%s ", v15);
          printf("%s : got scan code\n", "scan_code_from_hashboard");
          strcpy(byte_602BBC, "got scan code");
          sub_3CC5C(byte_602BBC, v15);
          return v6;
        }
        v13 = 0;
        v14 = 0;
        if ( !sub_6FB00(v9) )
        {
          sub_6FBF4(0);
          sub_1F650(0, (const char *)(dword_223680 + 32));
          sub_1F650(1, "Please Scan code");
          sub_1F650(2, "first");
          sub_1E938(v15, 0x30u);
          printf("%s ", v15);
          printf("%s : Please Scan code first\n", "scan_code_from_hashboard");
          strcpy(byte_601CBC, "Please Scan code first");
          sub_3CC5C(byte_601CBC, v15);
        }
        v9 = sub_37BA0(&byte_6E33B0, &dword_6E3318, &v13, &v14, 1000);
        if ( v13 )
        {
          byte_5FE77C |= 1u;
          sub_1E938(v15, 0x30u);
          printf("%s ", v15);
          printf(
            "%s : Got SN code... gScanCodeGun_data_ready = %d\n",
            "scan_code_from_hashboard",
            (unsigned __int8)byte_5FE77C);
          snprintf(byte_601DBC, 0x100u, "Got SN code... gScanCodeGun_data_ready = %d", (unsigned __int8)byte_5FE77C);
          v9 = sub_3CC5C(byte_601DBC, v15);
        }
        if ( !v14 )
          break;
        byte_5FE77C |= 2u;
        sub_1E938(v15, 0x30u);
        printf("%s ", v15);
        printf(
          "%s : Got QR code... gScanCodeGun_data_ready = %d\n",
          "scan_code_from_hashboard",
          (unsigned __int8)byte_5FE77C);
        snprintf(byte_601EBC, 0x100u, "Got QR code... gScanCodeGun_data_ready = %d", (unsigned __int8)byte_5FE77C);
        v9 = sub_3CC5C(byte_601EBC, v15);
        v7 = (unsigned __int8)byte_5FE77C;
        if ( byte_5FE77C != 1 )
          goto LABEL_8;
LABEL_15:
        sub_6FBF4(v9);
        sub_1F650(0, (const char *)(dword_223680 + 32));
        sub_1F650(v7, "SN  OK");
        sub_1F650(2, "Scan QR code");
        sub_1E938(v15, 0x30u);
        printf("%s ", v15);
        printf("%s : Got SN code\n", "scan_code_from_hashboard");
        strcpy(byte_601FBC, "Got SN code");
        v9 = sub_3CC5C(byte_601FBC, v15);
        v7 = (unsigned __int8)byte_5FE77C;
        if ( byte_5FE77C == 2 )
        {
LABEL_16:
          sub_6FBF4(v9);
          sub_1F650(0, (const char *)(dword_223680 + 32));
          sub_1F650(1, "QR code OK");
          sub_1F650(v7, "Scan SN code");
          sub_1E938(v15, 0x30u);
          printf("%s ", v15);
          printf("%s : Got QR code\n", "scan_code_from_hashboard");
          strcpy(byte_6020BC, "Got QR code");
          v9 = sub_3CC5C(byte_6020BC, v15);
          v7 = (unsigned __int8)byte_5FE77C;
        }
      }
      v7 = (unsigned __int8)byte_5FE77C;
      if ( byte_5FE77C == 1 )
        goto LABEL_15;
LABEL_8:
      if ( v7 == 2 )
        goto LABEL_16;
    }
  }
  v11 = (unsigned __int8)byte_21B3B4;
  if ( !byte_21B3B4 )
    return 1;
  sub_6FBF4(a1);
  sub_1F650(0, (const char *)(dword_223680 + 32));
  sub_1F650(1, "Got Scan code");
  sub_1F650(2, "Press");
  sub_1F650(3, "Start Key");
  sub_1E938(v15, 0x30u);
  printf("%s ", v15);
  printf("%s : No need scan code, Press Start Key to Begin Test\n", "scan_code_from_hashboard");
  strcpy(byte_602CBC, "No need scan code, Press Start Key to Begin Test");
  sub_3CC5C(byte_602CBC, v15);
  byte_21B3B4 = 0;
  return v11;
}
