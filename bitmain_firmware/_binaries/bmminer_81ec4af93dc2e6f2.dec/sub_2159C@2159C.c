int __fastcall sub_2159C(_DWORD *a1, int a2, int a3, int a4)
{
  char *v7; // r0
  int v8; // r5
  _DWORD *v9; // r3
  _DWORD *v10; // r5

  v7 = sub_2143C(a4);
  if ( a3 == 1 )
  {
    if ( (a2 & 7) != 0 )
    {
      if ( (unsigned int)off_AFC24 > 3 )
        return sub_213B8();
      else
        return 0;
    }
    else
    {
      sub_2188C(a1, a2 / 4, v7);
      return 1;
    }
  }
  else
  {
    if ( a3 == 2 )
    {
      v8 = a2 / 4;
      if ( v8 > 0 )
      {
        v9 = a1;
        v10 = &a1[v8];
        do
          *v9++ ^= *(_DWORD *)v7;
        while ( v9 != v10 );
      }
    }
    return 1;
  }
}
