int __fastcall sub_21AAC(_DWORD *a1, int a2, int a3, int a4)
{
  char *v7; // r0
  _DWORD *v8; // r3

  v7 = sub_2194C(a4);
  if ( a3 == 1 )
  {
    if ( (a2 & 7) != 0 )
    {
      if ( (unsigned int)dword_B308C > 3 )
        return sub_218C8();
      else
        return 0;
    }
    else
    {
      sub_21D9C(a1, a2 / 4, v7);
      return 1;
    }
  }
  else
  {
    if ( a3 == 2 && a2 / 4 > 0 )
    {
      v8 = a1;
      do
        *v8++ ^= *(_DWORD *)v7;
      while ( v8 != &a1[a2 / 4] );
    }
    return 1;
  }
}
