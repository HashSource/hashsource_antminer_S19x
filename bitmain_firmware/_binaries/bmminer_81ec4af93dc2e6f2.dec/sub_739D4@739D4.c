int __fastcall sub_739D4(_DWORD *a1, int a2)
{
  if ( !a2 )
    return -1;
  if ( a1 && *a1 == 1 && a1 != (_DWORD *)a2 && sub_738C4(a1, 1, 1) )
  {
    *(_DWORD *)(a1[4] + 4 * a1[3]++) = a2;
    return 0;
  }
  else
  {
    sub_728D0(a2);
    return -1;
  }
}
