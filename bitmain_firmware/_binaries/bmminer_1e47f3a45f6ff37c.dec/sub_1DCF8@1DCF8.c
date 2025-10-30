int __fastcall sub_1DCF8(int a1, char a2)
{
  *(_BYTE *)(*(_DWORD *)(a1 + 300) + 1) &= 0xFu;
  *(_BYTE *)(*(_DWORD *)(a1 + 300) + 1) |= 16 * a2;
  return 0;
}
