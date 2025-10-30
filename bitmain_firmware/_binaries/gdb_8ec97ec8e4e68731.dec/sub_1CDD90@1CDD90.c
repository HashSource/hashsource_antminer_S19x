bool __fastcall sub_1CDD90(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4; // lr
  int v5; // r0

  v4 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)(a2 + 8);
  return ((v5 - a3) & v4) < a4 || ((a3 - v5) & v4) < *(_DWORD *)(a2 + 12);
}
