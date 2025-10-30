int __fastcall sub_8B878(int a1, int a2)
{
  int v2; // r1

  v2 = a2 | *(_DWORD *)(a1 + 1260);
  *(_DWORD *)(a1 + 1260) = v2;
  return v2;
}
