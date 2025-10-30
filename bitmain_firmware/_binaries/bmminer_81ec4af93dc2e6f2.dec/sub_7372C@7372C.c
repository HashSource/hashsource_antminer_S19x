int __fastcall sub_7372C(_DWORD *a1, unsigned int a2, int a3)
{
  if ( !a3 )
    return -1;
  if ( a1 && *a1 == 1 && a1 != (_DWORD *)a3 && a2 < a1[3] )
  {
    sub_728D0(*(_DWORD *)(a1[4] + 4 * a2));
    *(_DWORD *)(a1[4] + 4 * a2) = a3;
    return 0;
  }
  else
  {
    sub_728D0(a3);
    return -1;
  }
}
