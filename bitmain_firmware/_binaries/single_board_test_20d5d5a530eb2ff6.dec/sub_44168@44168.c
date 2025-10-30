int __fastcall sub_44168(char *a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r4
  int v8; // r0
  int v9; // r5
  int v10; // r3
  char v12[16]; // [sp+0h] [bp-60h] BYREF
  char v13[16]; // [sp+10h] [bp-50h] BYREF
  char s[16]; // [sp+20h] [bp-40h] BYREF
  char v15[48]; // [sp+30h] [bp-30h] BYREF

  sub_1E938(v15, 0x30u);
  printf("%s ", v15);
  printf("%s : wait board temp come to %d\n", "wait_board_temp", a3);
  snprintf(byte_641BD8, 0x100u, "wait board temp come to %d", a3);
  sub_3CC5C((int)byte_641BD8, v15);
  v6 = sub_3DD40(a1, a2);
  if ( !a3 || a3 <= v6 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v9 = sub_3DD40(a1, a2);
    v10 = sub_62120() ? 42 : 20;
    if ( v10 <= v9 )
      sub_3EEA4();
    snprintf(s, 0x10u, "Time:%d", v7);
    snprintf(v12, 0x10u, "Max:%d", v9);
    v8 = sub_3DD78(a1, a2);
    ++v7;
    snprintf(v13, 0x10u, "Min:%d", v8);
    sub_2146C(s, v12, v13);
    sub_3E2C0();
    sleep(1u);
    if ( v7 == 301 )
      break;
    if ( a3 <= v9 )
      return 0;
  }
  sub_1E938(v15, 0x30u);
  printf("%s ", v15);
  printf("%s : can not warm up to target temp:%d!!!\n", "wait_board_temp", a3);
  snprintf(byte_641CD8, 0x100u, "can not warm up to target temp:%d!!!", a3);
  sub_3CCE0((int)byte_641CD8);
  return -1;
}
