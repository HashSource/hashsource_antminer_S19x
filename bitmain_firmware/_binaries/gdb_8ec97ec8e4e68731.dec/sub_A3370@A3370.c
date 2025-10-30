int __fastcall sub_A3370(int a1, int a2)
{
  int v4; // r0
  int v6; // r0

  v4 = sub_26BC70(a2);
  if ( a1 == sub_A0870(v4) )
    return a2;
  if ( sub_9AAB0(a1) )
  {
    if ( a1 != sub_26BC70(a2) )
      return sub_A330C(a1, a2);
    return a2;
  }
  v6 = sub_26BC70(a2);
  if ( sub_9AAB0(v6) )
    return sub_A32C8(a1, a2);
  else
    return sub_2647C8(a1, a2);
}
