int __fastcall sub_99CCC(_DWORD *a1, int a2)
{
  if ( *(_DWORD *)(a2 + 4) )
  {
    sub_95494(a1, 50, 507, 159, (int)"ssl/statem/statem_clnt.c", 3666);
    return 0;
  }
  else if ( (a1[315] & 0x40000000) != 0 )
  {
    sub_83FEC(a1, 1, 100);
    return 1;
  }
  else
  {
    if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 8) != 0 )
      sub_88FB4(a1);
    else
      sub_89040(a1);
    return 1;
  }
}
