int sub_22058()
{
  double v0; // d0
  int v1; // r4
  double v2; // d8
  int result; // r0
  int v4; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v1 = 0;
  v2 = 0.0;
  do
  {
    result = sub_26C0C(v1);
    if ( result )
    {
      result = sub_21FE8(v1);
      if ( v0 > 0.1 )
      {
        if ( v0 >= v2 )
        {
          if ( v2 < 0.1 )
            v2 = v0;
        }
        else
        {
          v2 = v0;
        }
      }
    }
    ++v1;
  }
  while ( v1 != 4 );
  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(s, 0x800u, "the minimal voltage = %.2f", v2);
    return sub_3B6AC(4, s, 0, v4);
  }
  return result;
}
