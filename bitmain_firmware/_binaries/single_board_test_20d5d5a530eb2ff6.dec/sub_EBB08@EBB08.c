int __fastcall sub_EBB08(int a1, int a2)
{
  int v3; // r4
  int v4; // r0

  v3 = *(_DWORD *)(a1 + 16);
  if ( !v3 )
  {
    v3 = sub_EB5A0();
    *(_DWORD *)(a1 + 16) = v3;
    if ( !v3 )
      return 0;
  }
  if ( !a2 )
    return 1;
  v4 = *(_DWORD *)(v3 + 12);
  if ( !v4 )
  {
    v4 = sub_10BFCC(0);
    *(_DWORD *)(v3 + 12) = v4;
    if ( !v4 )
      return 0;
  }
  if ( !sub_10BD3C(v4, a2) )
    return 0;
  sub_10FD18(a2);
  return 1;
}
