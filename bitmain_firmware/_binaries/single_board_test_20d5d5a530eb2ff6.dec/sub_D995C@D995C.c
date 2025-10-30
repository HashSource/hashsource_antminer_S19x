int __fastcall sub_D995C(_DWORD *a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r0
  int v5; // r3
  int v6; // r0
  int v7; // r0

  v2 = sub_EAAB4(*a1);
  if ( !sub_EA46C(v2, 1, a1) )
    return 0;
  v4 = sub_EAB40(*a1);
  result = sub_EA46C(v4, 1, a1);
  if ( !result )
    return 0;
  v5 = a1[1];
  if ( v5 && v5 != *a1 )
  {
    v6 = sub_EAAB4(a1[1]);
    if ( sub_EA46C(v6, 32769, v2) )
    {
      v7 = sub_EAB40(a1[1]);
      return sub_EA46C(v7, 32769, v2);
    }
    return 0;
  }
  return result;
}
