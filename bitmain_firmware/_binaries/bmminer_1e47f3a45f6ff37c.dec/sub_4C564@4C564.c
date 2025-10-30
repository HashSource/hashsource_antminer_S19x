int __fastcall sub_4C564(unsigned int a1)
{
  unsigned int v2; // r5
  int i; // r4
  bool v4; // zf
  int result; // r0
  int v6; // r3
  char v7[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    snprintf(v7, 0x800u, "[DEBUG] Set chain serial, chain_serial_count = %d.\n", a1);
    sub_3B6AC(4, v7, 0, v6);
  }
  v2 = 0;
  for ( i = 0; i != 4; ++i )
  {
    v4 = sub_26C0C(i) == 0;
    result = i;
    if ( !v4 )
    {
      if ( a1 <= v2 )
        return result;
      result = sub_4C304(i);
      if ( !result )
      {
        result = sub_4C198(i, 1);
        ++v2;
      }
    }
  }
  return result;
}
