bool __fastcall sub_148204(int a1, int a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r3

  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(_DWORD *)(v2 + 8 * a2);
  v4 = v2 + 8 * a2;
  return !v3 && *(_DWORD *)(v4 + 4) != 0;
}
