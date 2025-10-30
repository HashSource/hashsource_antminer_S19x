int sub_46298()
{
  int v0; // r5
  int v1; // r4
  int v2; // r4
  char v3; // r4
  int v5; // r4
  __int16 v6; // r3
  int v7; // r3
  int v8; // r5
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  sleep(1u);
  v0 = 1;
  v1 = sub_18E28();
  v2 = (__int16)abs32(v1 - sub_19058());
  while ( 1 )
  {
    v3 = v2 > 3;
    if ( v0 <= 119 )
      v3 |= 1u;
    if ( v0++ == 240 || !(v3 & 1) )
      break;
    sleep(1u);
    v5 = sub_18E28();
    v6 = abs32(v5 - sub_19058());
    if ( v0 == 10 * (v0 / 10) )
    {
      v2 = v6;
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "Slept %d seconds, diff = %d.\n", v0, v6);
        sub_3B6AC(3, s, v0 % 10, v7);
      }
    }
    else
    {
      v2 = v6;
    }
  }
  v8 = sub_18E28();
  if ( (int)abs32(v8 - sub_19058()) > 10 )
  {
    sub_481F0(9, 0);
    sub_2A0D0(1);
    sub_458A0(0x12u, "temp diff too high!");
    while ( 1 )
      sleep(0xAu);
  }
  return 0;
}
