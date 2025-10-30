int sub_5EC4C()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r5
  int v7; // r0
  char v8[52]; // [sp+0h] [bp-34h] BYREF

  sub_70EC4();
  usleep((__useconds_t)&loc_F423E + 2);
  sub_71AA8(0);
  v0 = usleep(0x249F0u);
  v1 = sub_71C04(v0);
  v2 = sub_71C48(v1);
  v3 = sub_70E7C(v2);
  v4 = sub_70E98(v3 & 0xFFFF3F1F | 0x8080);
  v5 = *(_DWORD *)(dword_223680 + 272);
  switch ( v5 )
  {
    case 4:
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      printf("%s : Set midstate as %d\n", "init_fpga", 4);
      snprintf(byte_64B238, 0x100u, "Set midstate as %d", 4);
      sub_3CC5C((int)byte_64B238, v8);
      sub_70F30(4);
      break;
    case 8:
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      printf("%s : Set midstate as %d\n", "init_fpga", 8);
      snprintf(byte_64B338, 0x100u, "Set midstate as %d", 8);
      sub_3CC5C((int)byte_64B338, v8);
      sub_70F30(8);
      break;
    case 1:
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      printf("%s : Set midstate as %d\n", "init_fpga", 1);
      snprintf(byte_64B438, 0x100u, "Set midstate as %d", 1);
      sub_3CC5C((int)byte_64B438, v8);
      sub_70F30(1);
      break;
    default:
      sub_6FBF4(v4);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Midstate Num");
      sub_1F650(2, "error");
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      printf("%s : Midstate Num error !!!\n", "init_fpga");
      strcpy(byte_64B538, "Midstate Num error !!!");
      sub_3CC5C((int)byte_64B538, v8);
      return 0;
  }
  if ( *(_BYTE *)(dword_223680 + 270) )
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : Set midstate as %d\n", "init_fpga", 1);
    snprintf(byte_64B638, 0x100u, "Set midstate as %d", 1);
    sub_3CC5C((int)byte_64B638, v8);
    sub_70F30(1);
    if ( !*(_BYTE *)(dword_223680 + 271) )
      goto LABEL_8;
LABEL_10:
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : Set auto_gen pattern\n", "init_fpga");
    strcpy(byte_64B738, "Set auto_gen pattern");
    v7 = sub_3CC5C((int)byte_64B738, v8);
    sub_71014(v7);
    sub_70F30(*(_DWORD *)(dword_223680 + 272));
    goto LABEL_8;
  }
  if ( *(_BYTE *)(dword_223680 + 271) )
    goto LABEL_10;
LABEL_8:
  usleep(0xC350u);
  return 1;
}
