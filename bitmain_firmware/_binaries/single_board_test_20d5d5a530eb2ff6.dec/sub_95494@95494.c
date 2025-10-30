int __fastcall sub_95494(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // r0

  result = sub_D0048(20, a3, a4, a5, a6);
  if ( !a1[18] || a1[11] != 1 )
  {
    a1[18] = 1;
    a1[11] = 1;
    if ( a2 != -1 && a1[24] != 1 )
      return sub_83FEC(a1, 2, a2);
  }
  return result;
}
