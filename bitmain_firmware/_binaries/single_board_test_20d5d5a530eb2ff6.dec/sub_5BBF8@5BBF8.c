int __fastcall sub_5BBF8(int a1)
{
  char v3[52]; // [sp+8h] [bp-34h] BYREF

  sub_1E938(v3, 0x30u);
  printf("%s ", v3);
  printf("%s : base:%d,Flex:%d\n", "get_freq_comp", a1, *(_DWORD *)(dword_223680 + 644));
  snprintf(byte_647838, 0x100u, "base:%d,Flex:%d", a1, *(_DWORD *)(dword_223680 + 644));
  sub_3CC5C((int)byte_647838, v3);
  return *(_DWORD *)(dword_223680 + 644) + a1;
}
