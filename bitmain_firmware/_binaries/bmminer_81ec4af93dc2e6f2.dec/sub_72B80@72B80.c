int __fastcall sub_72B80(_DWORD *a1, char *a2, int a3)
{
  if ( !a3 )
    return -1;
  if ( a2 && a1 && !*a1 && a1 != (_DWORD *)a3 && !sub_6EA08(a1 + 2, a2, a3) )
    return 0;
  sub_728D0(a3);
  return -1;
}
