int __fastcall sub_2F6198(_DWORD *a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r3
  unsigned int v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r3

  if ( *a1 < *a2 )
    return -1;
  if ( *a1 > *a2 )
    return 1;
  v2 = a1[2];
  v3 = a2[2];
  v4 = *(_DWORD *)(v2 + 4);
  v5 = *(_DWORD *)(v3 + 4);
  if ( v4 < v5 )
    return 1;
  if ( v4 > v5 )
    return -1;
  v6 = *(unsigned __int8 *)(v2 + 24);
  v7 = *(unsigned __int8 *)(v3 + 24);
  if ( v6 < v7 )
    return 1;
  if ( v6 <= v7 )
    return 0;
  else
    return -1;
}
