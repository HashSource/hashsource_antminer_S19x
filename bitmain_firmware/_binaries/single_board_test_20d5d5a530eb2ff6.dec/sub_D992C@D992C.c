int __fastcall sub_D992C(_DWORD *a1)
{
  int v2; // r0
  int v4; // r0

  if ( !a1 )
    return 0;
  v2 = sub_EAAB4(*a1);
  if ( !sub_EA46C(v2, 2, a1) )
    return 0;
  v4 = sub_EAB40(*a1);
  return sub_EA46C(v4, 2, a1);
}
