int __fastcall sub_82154(int a1, int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3

  v2 = *(_DWORD *)(a1 + 12);
  v3 = *(_DWORD *)(a2 + 12);
  if ( v2 == v3 )
    return 0;
  if ( v2 >= v3 )
    return 1;
  return -1;
}
