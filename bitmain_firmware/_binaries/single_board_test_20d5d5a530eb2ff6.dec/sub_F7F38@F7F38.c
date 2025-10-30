int __fastcall sub_F7F38(int a1)
{
  int result; // r0
  int v3; // r3

  result = sub_130600(*(_DWORD *)(a1 + 84));
  v3 = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 64) = v3 & 0xFFFFFF77 | 0x80;
  return result;
}
