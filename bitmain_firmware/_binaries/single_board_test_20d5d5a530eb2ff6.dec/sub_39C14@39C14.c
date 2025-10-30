int __fastcall sub_39C14(int a1, char a2)
{
  int v3; // r4

  v3 = *(_DWORD *)(a1 + 300);
  *(_BYTE *)(v3 + 1) &= 0xFu;
  *(_BYTE *)(*(_DWORD *)(a1 + 300) + 1) |= 16 * a2;
  return 0;
}
