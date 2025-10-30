bool __fastcall sub_9904C(int *a1, int *a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r12

  v2 = *a2;
  v3 = a2[1];
  if ( *a2 == -1 )
  {
    if ( !v3 && !a2[2] )
      return 1;
    v4 = *a1;
  }
  else
  {
    v4 = *a1;
    if ( v2 && !v3 && !a2[2] )
      return v2 == v4;
  }
  return v2 == v4 && v3 == a1[1] && a1[2] == a2[2];
}
