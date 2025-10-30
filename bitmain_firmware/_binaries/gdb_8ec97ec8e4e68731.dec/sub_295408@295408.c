int __fastcall sub_295408(int a1, int a2)
{
  int v4; // r4

  if ( _ctype_get_mb_cur_max() == 1 || dword_48BB60 )
    return sub_2952A4(a1);
  if ( a1 < 0 )
    return sub_29534C(-a1, a2);
  if ( a1 )
  {
    if ( dword_4900D8 == dword_4900DC && dword_46DED4 == 1 )
    {
      sub_2945C8();
    }
    else
    {
      v4 = sub_2951B4();
      if ( dword_4900D8 == v4 )
        sub_2945C8();
      dword_4900D8 = v4;
    }
  }
  return 0;
}
