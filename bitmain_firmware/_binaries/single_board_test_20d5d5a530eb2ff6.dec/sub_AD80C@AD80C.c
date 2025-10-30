int __fastcall sub_AD80C(int *a1, _DWORD *a2)
{
  bool v2; // zf
  int v3; // r2
  int v4; // r3

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  v3 = v2;
  if ( v2 )
    return -1;
  v4 = *a1;
  if ( *a1 != *a2 )
    return -1;
  switch ( v4 )
  {
    case 5:
      return v3;
    case 6:
      return sub_EB338(a1[1], a2[1], v3);
    case 1:
      return a1[1] - a2[1];
  }
  return sub_AE280(a1[1], a2[1], v3);
}
