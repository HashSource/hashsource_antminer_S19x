int sub_3F0C4()
{
  int i; // r4
  int result; // r0
  int v2; // r3
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  for ( i = 0; i != 4; ++i )
  {
    result = sub_266F0(i);
    if ( result )
    {
      result = sub_77198(i, 5);
      if ( (unsigned int)off_AFC24 > 3 )
      {
        snprintf(v3, 0x800u, "chain_%d set ro ds to 5\n", i);
        result = sub_3AF5C(3, v3, 0, v2);
      }
    }
  }
  return result;
}
