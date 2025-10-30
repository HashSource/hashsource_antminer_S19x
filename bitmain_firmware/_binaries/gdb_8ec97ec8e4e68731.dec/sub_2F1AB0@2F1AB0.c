int __fastcall sub_2F1AB0(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3

  if ( *a1 > *a2 )
    return 1;
  if ( *a1 < *a2 )
    return -1;
  v2 = a1[1];
  v3 = a2[1];
  if ( v2 > v3 )
    return 1;
  if ( v2 >= v3 )
    return 0;
  return -1;
}
