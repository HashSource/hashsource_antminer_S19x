int __fastcall sub_29E78(int *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r12
  int v4; // r3

  if ( *a2 > *a3 )
    return -1;
  if ( *a2 == *a3 && a2[1] > a3[1] )
    return -1;
  v3 = *a3 - *a2;
  *a1 = v3;
  v4 = a3[1] - a2[1];
  a1[1] = v4;
  if ( v4 < 0 )
  {
    *a1 = v3 - 1;
    a1[1] = v4 + 1000000;
  }
  return 0;
}
