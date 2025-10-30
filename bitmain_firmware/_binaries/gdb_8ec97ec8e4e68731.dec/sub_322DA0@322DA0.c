bool __fastcall sub_322DA0(int a1, int a2)
{
  int v3; // r6
  int v5; // r7
  unsigned int v6; // r4

  v3 = *(_DWORD *)a1;
  v5 = *(_DWORD *)(a1 + 4);
  v6 = __clz(sub_322D08(a2, *(_DWORD *)a1, *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 16)));
  return (__PAIR64__(v6 >> 5, sub_322D08(a2, v3, v5, *(_DWORD *)(a1 + 28), 1u)) - 1) >> 32 == 0;
}
