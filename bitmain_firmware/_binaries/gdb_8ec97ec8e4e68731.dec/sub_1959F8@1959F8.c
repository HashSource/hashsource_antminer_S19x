int __fastcall sub_1959F8(_DWORD *a1, _DWORD *a2)
{
  unsigned int v4; // r6
  unsigned int v5; // r3

  v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(sub_2209DC(*a1) + 4) + 4) + 16);
  v5 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(sub_2209DC(*a2) + 4) + 4) + 16);
  if ( v4 >= v5 )
  {
    if ( v4 > v5 )
      return 1;
    if ( *a1 >= *a2 )
      return *a1 > *a2;
  }
  return -1;
}
