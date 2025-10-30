int __fastcall sub_11DAD0(int a1, int a2, int a3, int a4)
{
  int v5; // r5
  char v6; // r2

  v5 = sub_E6770(*(_DWORD *)a1, a2, a3, a4, *(_DWORD *)(a1 + 64));
  sub_E6498((int)"DWARF 2");
  sub_E64AC(*(_DWORD *)(a1 + 72));
  v6 = *(_BYTE *)(a1 + 192);
  byte_47898D = 2;
  *(_BYTE *)(a1 + 192) = v6 & 0xBF;
  return v5;
}
