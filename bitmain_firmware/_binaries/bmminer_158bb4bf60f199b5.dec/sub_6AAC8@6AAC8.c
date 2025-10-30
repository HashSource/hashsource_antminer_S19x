int __fastcall sub_6AAC8(int a1, int a2)
{
  int v2; // r0

  v2 = a1 + 4;
  while ( *(_DWORD *)(a2 + 4) != v2 )
    a2 = *(_DWORD *)(a2 + 4);
  return a2;
}
