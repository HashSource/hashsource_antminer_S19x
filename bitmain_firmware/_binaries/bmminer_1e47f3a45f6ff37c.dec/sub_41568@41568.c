int sub_41568()
{
  int i; // r4
  int result; // r0
  int v2; // r0
  int v3; // r3
  int v4; // r0
  int v5; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result && (unsigned int)dword_B308C > 3 )
    {
      v2 = sub_1A390(i);
      snprintf(s, 0x800u, "Chain [%d] PCB Version: 0x%04x\n", i, v2);
      sub_3B6AC(3, s, 0, v3);
      result = i;
      if ( (unsigned int)dword_B308C > 3 )
      {
        v4 = sub_1A434(i);
        snprintf(s, 0x800u, "Chain [%d] BOM Version: 0x%04x\n", i, v4);
        result = sub_3B6AC(3, s, 0, v5);
      }
    }
  }
  return result;
}
