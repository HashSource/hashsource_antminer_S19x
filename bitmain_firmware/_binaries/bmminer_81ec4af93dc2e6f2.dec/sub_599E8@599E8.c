int __fastcall sub_599E8(int a1, int a2)
{
  while ( *(_DWORD *)(a2 + 4) != a1 + 4 )
    a2 = *(_DWORD *)(a2 + 4);
  return a2;
}
