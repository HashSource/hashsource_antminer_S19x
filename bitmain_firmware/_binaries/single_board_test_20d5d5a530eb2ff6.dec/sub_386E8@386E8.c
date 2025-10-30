int __fastcall sub_386E8(int a1, char a2)
{
  int v3; // r4

  v3 = *(_DWORD *)(a1 + 300);
  *(_BYTE *)(v3 + 1) &= 0xF0u;
  *(_BYTE *)(*(_DWORD *)(a1 + 300) + 1) |= a2 & 0xF;
  return 0;
}
