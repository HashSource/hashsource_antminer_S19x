bool __fastcall sub_110644(int a1, int a2)
{
  int v5; // r6
  int v6; // r0
  int v7; // r0
  __int64 v8; // r2
  int v9; // r0

  if ( sub_10ED20(a1) < 0 )
  {
    if ( sub_10ED20(a2) < 0 )
      return 1;
    v5 = 0;
  }
  else
  {
    if ( sub_10ED20(a1) != -1 )
      return 0;
    v9 = sub_10ED38(a1);
    v5 = sub_11054C(v9);
    if ( sub_10ED20(a2) < 0 )
      return !v5;
  }
  if ( sub_10ED20(a2) != -1 )
    return 0;
  v6 = sub_10ED38(a2);
  v7 = sub_11054C(v6);
  HIDWORD(v8) = v7 == 0;
  LODWORD(v8) = v5 == 0;
  if ( ((unsigned int)v8 & HIDWORD(v8)) != 0 )
    return 1;
  if ( v8 )
    return 0;
  return sub_1280A0(v5, v7) == 0;
}
