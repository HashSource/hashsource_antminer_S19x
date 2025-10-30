int __fastcall sub_E4788(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3

  v2 = a1[1];
  v3 = a2[1];
  if ( v2 < v3 )
    return -1;
  if ( v2 > v3 )
    return 1;
  return *a1 - *a2;
}
