int __fastcall sub_F85D8(int a1, int a2, int a3)
{
  int v3; // r0

  v3 = sub_10C010(*(_DWORD *)(a1 + 48), a2, a3);
  return v3 & ~(v3 >> 31);
}
