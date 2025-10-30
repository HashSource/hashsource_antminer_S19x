int __fastcall sub_968FC(int a1, int a2, int a3, int *a4)
{
  int v5; // r4

  v5 = socketpair(a1, a2 | 0x80000, a3, a4);
  if ( v5 == -1 )
    return v5;
  if ( dword_47551C > 0 )
    return v5;
  sub_96444(*a4);
  if ( dword_47551C > 0 )
    return v5;
  sub_96444(a4[1]);
  return v5;
}
