int __fastcall sub_2C5B30(int a1)
{
  int v1; // r4

  v1 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(v1 + 44) != 4 )
  {
    sub_2A6BBC("elf32-arm.c", 6910);
    __und(0);
  }
  sub_2B8F94(*(const char ***)(v1 + 360), *(_DWORD *)(v1 + 276), ".glue_7");
  sub_2B8F94(*(const char ***)(v1 + 360), *(_DWORD *)(v1 + 272), ".glue_7t");
  sub_2B8F94(*(const char ***)(v1 + 360), *(_DWORD *)(v1 + 344), ".vfp11_veneer");
  sub_2B8F94(*(const char ***)(v1 + 360), *(_DWORD *)(v1 + 348), ".text.stm32l4xx_veneer");
  sub_2B8F94(*(const char ***)(v1 + 360), *(_DWORD *)(v1 + 280), ".v4_bx");
  return 1;
}
