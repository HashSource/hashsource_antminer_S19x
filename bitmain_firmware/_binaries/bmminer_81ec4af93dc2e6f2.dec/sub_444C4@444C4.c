int sub_444C4()
{
  int v0; // r4
  int v1; // r4
  int v2; // r5
  char v3; // r4
  int v5; // r4
  int v6; // r3
  int v7; // r5
  int v8; // r0
  int v9; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  sleep(1u);
  v0 = sub_18A2C();
  v1 = v0 - sub_18C30();
  if ( v1 < 0 )
    v1 = -v1;
  v1 = (__int16)v1;
  v2 = 1;
  while ( 1 )
  {
    v3 = v1 > 3;
    if ( v2 <= 119 )
      v3 |= 1u;
    if ( v2++ == 240 || !(v3 & 1) )
      break;
    sleep(1u);
    v5 = sub_18A2C();
    v1 = v5 - sub_18C30();
    if ( v1 < 0 )
      v1 = -v1;
    v1 = (__int16)v1;
    if ( v2 == 10 * (v2 / 0xAu) && (unsigned int)off_AFC24 > 3 )
    {
      snprintf(s, 0x800u, "Slept %d seconds, diff = %d.\n", v2, (__int16)v1);
      sub_3AF5C(3, s, v2 % 0xAu, v6);
    }
  }
  v7 = sub_18A2C();
  v8 = sub_18C30();
  v9 = v7 - v8;
  if ( v7 - v8 < 0 )
    v9 = v8 - v7;
  if ( v9 > 10 )
  {
    sub_46318(9, 0);
    sub_29B50(1);
    sub_43B4C(0x12u, "temp diff too high!");
    while ( 1 )
      sleep(0xAu);
  }
  return 0;
}
