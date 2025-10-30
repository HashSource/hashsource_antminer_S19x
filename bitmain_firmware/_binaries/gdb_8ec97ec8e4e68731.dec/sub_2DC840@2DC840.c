int __fastcall sub_2DC840(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r2
  unsigned int v5; // r3

  if ( __SPAIR64__(a1[1] == 1, a2[1] - 1) < 1 )
    return 1;
  if ( (a1[1] == 1) > (a2[1] == 1) )
    return -1;
  v2 = a1[3] & *a1;
  v3 = a2[3] & *a2;
  if ( v2 >= v3 )
  {
    if ( v2 > v3 )
      return 1;
    v4 = a1[2];
    v5 = a2[2];
    if ( v4 >= v5 )
      return v4 > v5;
  }
  return -1;
}
