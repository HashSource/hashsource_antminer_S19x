int __fastcall sub_1F690(int a1, char a2)
{
  int v2; // r12

  v2 = *(_DWORD *)(a1 + 300);
  *(_BYTE *)(v2 + 1) &= 0xF0u;
  *(_BYTE *)(*(_DWORD *)(a1 + 300) + 1) |= a2 & 0xF;
  return 0;
}
