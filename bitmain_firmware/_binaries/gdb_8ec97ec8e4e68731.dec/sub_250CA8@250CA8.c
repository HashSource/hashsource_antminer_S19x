bool __fastcall sub_250CA8(int a1, int a2)
{
  int v2; // r3

  v2 = a1 + 16 * a2;
  return *(int *)(v2 + 8) >= 0 && (*(_DWORD *)(a1 + 16 * a2) & *(_DWORD *)(v2 + 4)) == -1;
}
