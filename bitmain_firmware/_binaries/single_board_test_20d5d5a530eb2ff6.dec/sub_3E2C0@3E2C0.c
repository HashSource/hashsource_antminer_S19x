char *sub_3E2C0()
{
  int v0; // r4
  int v1; // r0
  int v2; // r5
  char *result; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  char v8[48]; // [sp+8h] [bp-30h] BYREF

  v0 = 0;
  do
  {
    v1 = v0++;
    v2 = sub_6DD90(v1);
    result = v8;
    if ( v2 == -1 )
      break;
    sub_1E938(v8, 0x30u);
    v4 = printf("%s ", v8);
    v5 = sub_6DDE8(v4);
    v6 = printf("%s : fan [%d:%d] speed cur = %d\n", "print_fan_speed", v0, v5, v2);
    v7 = sub_6DDE8(v6);
    snprintf(byte_6362CC, 0x100u, "fan [%d:%d] speed cur = %d", v0, v7, v2);
    result = (char *)sub_3CC5C((int)byte_6362CC, v8);
  }
  while ( v0 != 4 );
  return result;
}
