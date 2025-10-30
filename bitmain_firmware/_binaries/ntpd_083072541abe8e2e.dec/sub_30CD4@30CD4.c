int __fastcall sub_30CD4(int result)
{
  int v1; // r7
  unsigned int v2; // r3
  unsigned int i; // r1
  int v4; // r1
  unsigned __int8 v5; // r3

  v1 = result;
  if ( result )
  {
    if ( mon_enabled )
    {
      mon_enabled |= result;
    }
    else
    {
      if ( !dword_BAE90 )
        sub_30A38();
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
          v5 = 4;
        else
          v5 = i;
        if ( v5 >= 0x10u )
          v5 = 16;
        v4 = 4 << v5;
      }
      else
      {
        v4 = 64;
        v5 = 4;
      }
      mon_hash_bits = v5;
      result = sub_63BA4(mon_hash, v4, 0, 1);
      mon_enabled = v1;
      mon_hash = result;
    }
  }
  return result;
}
