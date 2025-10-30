int __fastcall sub_2F61F4(int a1, int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r2
  unsigned int v5; // r3

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a2 + 4);
  if ( v2 >= v3 )
  {
    if ( v2 > v3 )
      return 1;
    v4 = *(_DWORD *)(a1 + 8);
    v5 = *(_DWORD *)(a2 + 8);
    if ( v4 >= v5 )
      return v4 > v5;
  }
  return -1;
}
