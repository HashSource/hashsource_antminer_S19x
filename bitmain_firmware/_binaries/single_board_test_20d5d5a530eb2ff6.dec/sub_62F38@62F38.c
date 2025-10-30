int __fastcall sub_62F38(int a1, int a2)
{
  char v5[52]; // [sp+8h] [bp-34h] BYREF

  if ( a1 < *(_DWORD *)(dword_223680 + 628) )
    return 1;
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf("%s : Max temp out of protect temp,min:%d,max:%d\n", "board_temp_protect_check", a2, a1);
  snprintf(byte_651440, 0x100u, "Max temp out of protect temp,min:%d,max:%d", a2, a1);
  sub_3CC5C((int)byte_651440, v5);
  return 0;
}
