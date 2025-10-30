int __fastcall sub_8B888(int a1, int a2)
{
  int v2; // r1

  v2 = *(_DWORD *)(a1 + 172) & ~a2;
  *(_DWORD *)(a1 + 172) = v2;
  return v2;
}
