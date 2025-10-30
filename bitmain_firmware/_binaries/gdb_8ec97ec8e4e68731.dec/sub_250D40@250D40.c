int __fastcall sub_250D40(int a1, int a2, int a3)
{
  int v3; // r3

  v3 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v3 + 16 * a2) = a3;
  *(_DWORD *)(v3 + 16 * a2 + 4) = 0;
  return 0;
}
