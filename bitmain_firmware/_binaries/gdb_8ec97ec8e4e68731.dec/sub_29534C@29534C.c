int __fastcall sub_29534C(int a1, int a2)
{
  int v4; // r1
  int v5; // r0
  bool v6; // cc

  if ( _ctype_get_mb_cur_max() == 1 || dword_48BB60 )
    return sub_295244(a1);
  if ( a1 < 0 )
    return sub_295408(-a1, a2);
  if ( !a1 )
    return 0;
  v4 = dword_4900D8;
  if ( dword_4900D8 > 0 )
  {
    do
    {
      --a1;
      v5 = sub_29B610(dword_48AAD4, v4, 1);
      v6 = a1 <= 0;
      if ( a1 > 0 )
        v6 = v5 <= 0;
      v4 = v5;
    }
    while ( !v6 );
    if ( !a1 )
    {
      dword_4900D8 = v5;
      return 0;
    }
  }
  dword_4900D8 = 0;
  sub_2945C8();
  return 0;
}
