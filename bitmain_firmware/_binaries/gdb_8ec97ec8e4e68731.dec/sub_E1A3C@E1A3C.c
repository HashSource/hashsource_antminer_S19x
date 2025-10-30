int __fastcall sub_E1A3C(_DWORD *a1, _DWORD *a2)
{
  int v2; // r3
  int v3; // r2
  int v5; // r0

  if ( *a1 == *a2 )
  {
    v2 = a1[1];
    v3 = a2[1];
    if ( v2 == v3 )
      return a1[2] - a2[2];
    else
      return v2 - v3;
  }
  else
  {
    v5 = sub_15CD0();
    return sub_E1A74(v5);
  }
}
