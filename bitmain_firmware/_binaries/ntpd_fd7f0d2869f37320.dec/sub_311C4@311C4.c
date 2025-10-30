int __fastcall sub_311C4(int result)
{
  int v1; // r7
  unsigned int v2; // r2
  unsigned int i; // r0
  int v4; // r1

  v1 = result;
  if ( result )
  {
    if ( mon_enabled )
    {
      mon_enabled |= result;
    }
    else
    {
      if ( !dword_BBE98 )
        sub_3104C();
      v2 = (((unsigned int)mru_maxdepth >> 3) + 1) >> 1;
      if ( v2 )
      {
        for ( i = 1; ; i = (unsigned __int8)(i + 1) )
        {
          v2 >>= 1;
          if ( !v2 )
            break;
        }
        if ( i < 4 )
          LOBYTE(i) = 4;
        if ( (unsigned __int8)i >= 0x10u )
          LOBYTE(i) = 16;
        v4 = 4 << i;
      }
      else
      {
        v4 = 64;
        LOBYTE(i) = 4;
      }
      mon_hash_bits = i;
      result = sub_64B04(mon_hash, v4, 0, 1);
      mon_enabled = v1;
      mon_hash = result;
    }
  }
  return result;
}
