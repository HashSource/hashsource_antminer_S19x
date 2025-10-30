int __fastcall sub_8B224(_DWORD *a1, int a2, int a3, _DWORD *a4)
{
  int v5; // r3
  _BOOL4 v9; // r5
  int v11; // r2
  int v12; // r0

  if ( !a1[7] )
  {
    v11 = 1825;
    goto LABEL_15;
  }
  v5 = a1[26];
  if ( v5 == 8 )
  {
LABEL_8:
    a1[26] = 9;
    if ( sub_8B204(a1) <= 0 )
    {
      v9 = 0;
      a1[26] = 8;
      return v9;
    }
    goto LABEL_10;
  }
  if ( v5 != 10 )
  {
    if ( v5 )
    {
      v9 = 0;
      sub_D0048(20, 529, 66, "ssl/ssl_lib.c", 1870);
      return v9;
    }
    if ( sub_95464(a1) )
      goto LABEL_8;
    v11 = 1833;
LABEL_15:
    sub_D0048(20, 529, 66, "ssl/ssl_lib.c", v11);
    return 0;
  }
LABEL_10:
  if ( a1[363] == 2 )
  {
    a1[26] = 11;
    v12 = sub_8895C(a1, a2, a3, a4);
    if ( v12 > 0 || a1[26] != 12 )
    {
      v9 = v12 > 0;
      a1[26] = 10;
      return v9;
    }
  }
  else
  {
    a1[26] = 12;
  }
  *a4 = 0;
  return 2;
}
