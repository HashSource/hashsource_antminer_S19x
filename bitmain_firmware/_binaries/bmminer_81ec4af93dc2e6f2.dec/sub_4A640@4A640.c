int __fastcall sub_4A640(unsigned int a1)
{
  unsigned int v2; // r5
  int i; // r4
  bool v4; // zf
  int result; // r0
  int v6; // r3
  char v7[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    snprintf(v7, 0x800u, "[DEBUG] Set chain serial, chain_serial_count = %d.\n", a1);
    sub_3AF5C(4, v7, 0, v6);
  }
  v2 = 0;
  for ( i = 0; i != 4; ++i )
  {
    v4 = sub_266F0(i) == 0;
    result = i;
    if ( !v4 )
    {
      if ( a1 <= v2 )
        return result;
      result = sub_4A408(i);
      if ( !result )
      {
        ++v2;
        result = sub_4A294(i, 1);
      }
    }
  }
  return result;
}
