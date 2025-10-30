int sub_20EC8()
{
  int v0; // r6
  int v1; // r5
  int v2; // r0
  bool v3; // cc
  int v4; // r4
  int result; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v0 = sub_16940();
  v1 = sub_1A1B0();
  v2 = sub_1A1C0();
  v3 = v1 <= v2;
  if ( v1 != v2 )
    v3 = v0 <= 26;
  v4 = v2;
  result = !v3;
  if ( !v3 )
  {
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "current PCB min temperature is %d\n", v0);
      sub_47AB4(3, s, 0);
      if ( (unsigned int)dword_9E31C > 3 )
      {
        snprintf(s, 0x800u, "current voltage is %d, recovery to %d\n", v4, v1);
        sub_47AB4(3, s, 0);
      }
    }
    sub_1A3B8();
    return -1;
  }
  return result;
}
