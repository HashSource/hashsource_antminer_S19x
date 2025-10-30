int sub_23A5C()
{
  _DWORD *v0; // r6
  int *v1; // r3
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  const char *v7; // r1
  char v8[48]; // [sp+0h] [bp-30h] BYREF

  sub_71AF4(dword_21B3A4);
  usleep(0xF4240u);
  if ( *(_BYTE *)(dword_223680 + 89) )
  {
    if ( sub_724E0((unsigned __int8)dword_21B3A4) )
    {
      if ( sub_724E0((unsigned __int8)dword_21B3A4) )
      {
        v7 = (const char *)(dword_223680 + 32);
        byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1039] = 0;
        sub_1F650(0, v7);
        sub_1F650(1, "PIC Power on");
        sub_1F650(2, "fail");
        sub_1E938(v8, 0x30u);
        printf("%s ", v8);
        printf("%s : PIC_EN enable fail\n", "pic_power_on_hashboard");
        strcpy(byte_6068C4, "PIC_EN enable fail");
        sub_3CC5C(byte_6068C4, v8);
        return 0;
      }
      sub_1E938(v8, 0x30u);
      v0 = &unk_6069C4;
      printf("%s ", v8);
      printf("%s : PIC power on ok\n", "pic_power_on_hashboard");
      LOWORD(v1) = 5612;
    }
    else
    {
      sub_1E938(v8, 0x30u);
      v0 = &unk_606AC4;
      printf("%s ", v8);
      printf("%s : PIC power on ok\n", "pic_power_on_hashboard");
      LOWORD(v1) = (unsigned __int16)"PIC power on ok";
    }
    HIWORD(v1) = (unsigned int)"PIC power on ok" >> 16;
    v2 = *v1;
    v3 = v1[1];
    v4 = v1[2];
    v5 = v1[3];
    *v0 = v2;
    v0[1] = v3;
    v0[2] = v4;
    v0[3] = v5;
    sub_3CC5C(v0, v8);
  }
  usleep(0xF4240u);
  if ( !strcmp((const char *)dword_223680, "Reset_Low") )
    return 1;
  sub_71B24(dword_21B3A4);
  usleep((__useconds_t)&loc_493E0);
  sub_71AF4(dword_21B3A4);
  usleep(0xF4240u);
  sub_71B24(dword_21B3A4);
  usleep((__useconds_t)&loc_493E0);
  sub_1E938(v8, 0x30u);
  printf("%s ", v8);
  printf("%s : fpga reset one more time\n", "pic_power_on_hashboard");
  strcpy(byte_606BC4, "fpga reset one more time");
  sub_3CC5C(byte_606BC4, v8);
  return 1;
}
