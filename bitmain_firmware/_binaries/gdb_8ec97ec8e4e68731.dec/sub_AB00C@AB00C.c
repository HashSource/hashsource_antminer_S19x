int __fastcall sub_AB00C(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r3

  v2 = sub_26BC70(a1);
  v3 = sub_A0870(v2);
  if ( sub_A0C94(v3) )
  {
    v4 = **(char **)(v3 + 24);
  }
  else
  {
    if ( !sub_A0CFC(v3) )
      return sub_AAF94(a1);
    v4 = **(char **)(v3 + 24);
    if ( v4 == 1 )
      return sub_AAF94(a1);
  }
  if ( v4 == 23 )
    return sub_A8A3C(a1);
  else
    return sub_A8AAC(a1);
}
