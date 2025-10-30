int __fastcall sub_AB07C(int a1)
{
  _BYTE *v2; // r3
  int result; // r0
  int v4; // r4
  int v5; // r0

  v2 = *(_BYTE **)(sub_26BC70(a1) + 24);
  result = a1;
  if ( *v2 == 18 )
  {
    v4 = sub_26EA24(a1);
    v5 = sub_26BC70(v4);
    if ( sub_A2974(v5, "_tag", 0, 1) )
      v4 = sub_A98C0(v4);
    return sub_AAF94(v4);
  }
  return result;
}
