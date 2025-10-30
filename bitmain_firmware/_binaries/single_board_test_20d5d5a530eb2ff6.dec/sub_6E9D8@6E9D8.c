int __fastcall sub_6E9D8(int a1, unsigned int a2)
{
  int v2; // r4
  int v3; // r4
  int v5; // r5
  char v6[2052]; // [sp+0h] [bp-804h] BYREF

  if ( a1 > 2 )
  {
    v3 = -3;
    strcpy(v6, "bad param\n");
    nullsub_8();
    return v3;
  }
  v2 = a1 - 1;
  if ( a1 != 1 )
  {
    v3 = 0;
    snprintf(v6, 0x800u, "pwm type %d not supported\n", a1 - 1);
    nullsub_8();
    return v3;
  }
  if ( a2 >= 0x64 )
    a2 = 100;
  v5 = (100 - a2) | (a2 << 16);
  sub_6E0BC(19, v5);
  sub_6E0BC(23, v5);
  return v2;
}
