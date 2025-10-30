unsigned int __fastcall sub_30DFC(unsigned int result)
{
  int *v1; // r6
  int v2; // r9
  int *v3; // r7

  if ( mon_enabled )
  {
    if ( (result & mon_enabled) != 0 )
    {
      mon_enabled &= ~result;
      if ( !mon_enabled )
      {
        v1 = (int *)dword_108314;
        if ( (_UNKNOWN *)dword_108314 != &mon_mru_list )
        {
          v2 = dword_BAE94;
          while ( 1 )
          {
            v3 = (int *)v1[2];
            memset(v1 + 1, 0, 0x44u);
            *v1 = v2;
            dword_BAE94 = (int)v1;
            v2 = (int)v1;
            if ( v3 == (int *)&mon_mru_list )
              break;
            v1 = v3;
          }
        }
        dword_108314 = (int)&mon_mru_list;
        dword_108310 = (int)&mon_mru_list;
        mru_entries = 0.0;
        return (unsigned int)memset((void *)mon_hash, 0, 4 << mon_hash_bits);
      }
    }
  }
  return result;
}
