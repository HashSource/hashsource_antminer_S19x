int __fastcall sub_295DBC(int a1, int a2)
{
  int v5; // r4
  char v6[20]; // [sp+0h] [bp-14h] BYREF

  if ( a1 > 0 )
  {
    if ( _ctype_get_mb_cur_max() > 1 && !dword_48BB60 )
      sub_293580(a2, v6, 16);
    sub_2926F8();
    v5 = 0;
    do
    {
      if ( _ctype_get_mb_cur_max() <= 1 || dword_48BB60 )
      {
        sub_294B58(1, a2);
      }
      else if ( v6[0] )
      {
        sub_294748(v6);
      }
      ++v5;
      if ( dword_4900D8 < dword_4900DC )
        sub_295C9C(1, a2);
    }
    while ( a1 != v5 );
  }
  else
  {
    sub_2926F8();
  }
  sub_292748();
  return 0;
}
