int __fastcall sub_69364(_DWORD *a1)
{
  _BYTE *v1; // r2
  unsigned int v2; // r3
  int v5; // r3

  v1 = (_BYTE *)(*a1)++;
  v2 = (unsigned __int8)*v1;
  if ( v2 == 98 )
    return 8;
  if ( v2 <= 0x62 )
  {
    if ( v2 > 0x37 )
    {
      if ( v2 == 97 )
        return 7;
      return v2;
    }
    else if ( v2 >= 0x30 )
    {
      v5 = ((int (__fastcall *)(unsigned int))loc_EEE94)(v2);
      if ( (unsigned int)*(unsigned __int8 *)*a1 - 48 <= 7 )
      {
        ++*a1;
        v5 = 8 * v5 + ((int (*)(void))loc_EEE94)();
        if ( (unsigned int)*(unsigned __int8 *)*a1 - 48 <= 7 )
        {
          ++*a1;
          return 8 * v5 + ((int (*)(void))loc_EEE94)();
        }
      }
      return v5;
    }
    else
    {
      if ( !*v1 )
      {
        *a1 = v1;
        return v2;
      }
      if ( v2 == 10 )
        return -2;
      return v2;
    }
  }
  else
  {
    if ( v2 == 114 )
      return 13;
    if ( v2 <= 0x72 )
    {
      if ( v2 == 102 )
        return 12;
      if ( v2 == 110 )
        return 10;
      return v2;
    }
    if ( v2 == 116 )
      return 9;
    if ( v2 == 118 )
      return 11;
    return v2;
  }
}
