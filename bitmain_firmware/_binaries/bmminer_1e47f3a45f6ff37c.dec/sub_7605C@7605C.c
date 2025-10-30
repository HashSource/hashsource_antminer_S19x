int __fastcall sub_7605C(_DWORD *a1, char *a2, int a3)
{
  if ( !a3 )
    return -1;
  if ( a2 && a1 && !*a1 && a1 != (_DWORD *)a3 && !sub_71F3C(a1 + 2, a2, a3) )
    return 0;
  sub_75DB8(a3);
  return -1;
}
