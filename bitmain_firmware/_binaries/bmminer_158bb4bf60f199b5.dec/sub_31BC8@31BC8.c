int __fastcall sub_31BC8(int a1)
{
  int v2; // r4
  int result; // r0
  int v4; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(s, 0x800u, "[DEBUG] Check if is unbalanche happen, chain = %d\n", a1);
    sub_47AB4(4, s, 0);
  }
  v2 = 0;
  result = 0;
  do
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(dword_1AEA64 + 4 * ((_DWORD)&loc_74B20 + 78 * a1 + v2 + 2));
      if ( (unsigned int)v4 > 0xBF8 || (double)v4 < 2298.0 )
      {
        result = 1;
        if ( (unsigned int)dword_9E31C > 3 )
          break;
      }
      if ( ++v2 == 78 )
        return result;
    }
    snprintf(s, 0x800u, "Unbalance happened: chain = %d, asic = %d\n", a1, v2++);
    sub_47AB4(3, s, 0);
    result = 1;
  }
  while ( v2 != 78 );
  return result;
}
