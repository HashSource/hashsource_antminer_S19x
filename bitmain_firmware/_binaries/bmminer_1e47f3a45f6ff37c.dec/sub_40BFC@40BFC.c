int sub_40BFC()
{
  int i; // r4
  int result; // r0
  int v2; // r3
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
    {
      result = sub_7A5E4(i, 5);
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(v3, 0x800u, "chain_%d set ro ds to 5\n", i);
        result = sub_3B6AC(3, v3, 0, v2);
      }
    }
  }
  return result;
}
