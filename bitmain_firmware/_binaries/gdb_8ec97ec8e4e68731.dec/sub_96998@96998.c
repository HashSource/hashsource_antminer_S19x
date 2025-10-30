int __fastcall sub_96998(int *a1)
{
  int v2; // r4

  v2 = pipe2(a1, 0x80000);
  if ( v2 == -1 )
    return v2;
  if ( dword_47551C > 0 )
    return v2;
  sub_96444(*a1);
  if ( dword_47551C > 0 )
    return v2;
  sub_96444(a1[1]);
  return v2;
}
