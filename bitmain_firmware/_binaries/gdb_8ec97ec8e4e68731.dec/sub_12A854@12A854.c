int __fastcall sub_12A854(int a1, int a2)
{
  int v2; // r3
  int v3; // r0
  unsigned int v4; // r3

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a2 + 36);
  v4 = v2 - 1;
  if ( v4 >= (*(_DWORD *)(a2 + 40) - v3) >> 2 )
    return 0;
  else
    return *(_DWORD *)(v3 + 4 * v4);
}
