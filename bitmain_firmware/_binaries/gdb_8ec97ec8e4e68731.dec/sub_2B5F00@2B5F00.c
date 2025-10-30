int __fastcall sub_2B5F00(int a1, int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3

  if ( *(_DWORD *)a1 > *(_DWORD *)a2 )
    return 1;
  if ( *(_DWORD *)a1 < *(_DWORD *)a2 )
    return -1;
  v2 = *(unsigned __int8 *)(a1 + 4);
  v3 = *(unsigned __int8 *)(a2 + 4);
  if ( v2 > v3 )
    return 1;
  if ( v2 >= v3 )
    return 0;
  return -1;
}
