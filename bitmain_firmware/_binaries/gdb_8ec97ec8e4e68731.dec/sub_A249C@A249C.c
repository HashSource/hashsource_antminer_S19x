bool __fastcall sub_A249C(int a1)
{
  int v1; // r0
  int v2; // r4
  int v3; // r0
  int v5; // r0

  v1 = sub_A0870(a1);
  v2 = v1;
  if ( !v1 || **(_BYTE **)(v1 + 24) == 1 )
    return 0;
  if ( sub_A0A04(v1) )
  {
    v3 = sub_A15F8(v2);
    if ( v3 != 1 )
      return 0;
  }
  else
  {
    if ( !sub_A0C94(v2) )
      return 0;
    v3 = sub_A15F8(v2);
    if ( v3 != 1 )
      return 0;
  }
  v5 = sub_A1770(v2, v3);
  return sub_A23E8(v5);
}
