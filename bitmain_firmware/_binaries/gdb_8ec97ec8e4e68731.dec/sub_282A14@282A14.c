int __fastcall sub_282A14(int a1, int a2, int a3)
{
  int v6; // r10
  int v7; // r0

  while ( a1 )
  {
    v6 = dword_4900D8;
    if ( dword_4900D8 >= dword_4900DC )
      break;
    sub_2825F4(1, a2);
    if ( dword_4900D8 < v6 )
      ++dword_4900D8;
    if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
      sub_295A08(1, a2);
    else
      sub_294F3C(a3);
    --a1;
  }
  v7 = sub_29534C(1, a2);
  sub_292748(v7);
  return 0;
}
