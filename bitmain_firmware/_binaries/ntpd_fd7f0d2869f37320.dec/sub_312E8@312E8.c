unsigned int __fastcall sub_312E8(unsigned int result)
{
  int *v1; // r4
  int v2; // r8
  int *v3; // r6

  if ( mon_enabled )
  {
    if ( (result & mon_enabled) != 0 )
    {
      mon_enabled &= ~result;
      if ( !mon_enabled )
      {
        v1 = (int *)dword_109334;
        if ( (_UNKNOWN *)dword_109334 != &mon_mru_list )
        {
          v2 = dword_BBE9C;
          while ( 1 )
          {
            v3 = (int *)v1[2];
            memset(v1, 0, 0x48u);
            *v1 = v2;
            v2 = (int)v1;
            dword_BBE9C = (int)v1;
            if ( v3 == (int *)&mon_mru_list )
              break;
            v1 = v3;
          }
        }
        dword_109334 = (int)&mon_mru_list;
        dword_109330 = (int)&mon_mru_list;
        mru_entries = 0.0;
        return (unsigned int)memset((void *)mon_hash, 0, 4 << mon_hash_bits);
      }
    }
  }
  return result;
}
