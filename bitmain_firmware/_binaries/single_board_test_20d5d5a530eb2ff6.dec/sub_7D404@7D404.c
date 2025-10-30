bool __fastcall sub_7D404(int a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(a1 + 16);
  return v1 && *(_DWORD *)(a1 + 20 * (v1 - 1) + 56) != 0;
}
