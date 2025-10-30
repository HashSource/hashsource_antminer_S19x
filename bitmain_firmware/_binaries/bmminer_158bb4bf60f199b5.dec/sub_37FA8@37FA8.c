int __fastcall sub_37FA8(int result)
{
  unsigned int v1; // r8
  unsigned int v2; // r7
  int i; // r4
  int v4; // r0
  char v5[2048]; // [sp+0h] [bp-800h] BYREF

  v1 = result;
  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(v5, 0x800u, "[DEBUG] Set chain serial, chain_serial_count = %d.\n", result);
    result = sub_47AB4(4, v5, 0);
  }
  v2 = 0;
  for ( i = 0; i != 16; ++i )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 )
      {
        result = i;
        if ( v1 <= v2 )
          return result;
        result = sub_37D44(i);
        if ( !result )
          break;
      }
      if ( ++i == 16 )
        return result;
    }
    v4 = i;
    ++v2;
    result = sub_37BD4(v4, 1);
  }
  return result;
}
