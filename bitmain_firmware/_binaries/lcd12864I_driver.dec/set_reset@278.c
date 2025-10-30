int __fastcall set_reset(int a1)
{
  int v1; // r2
  unsigned int v2; // r3
  int result; // r0
  unsigned int v4; // [sp+4h] [bp-4h]

  v1 = *(_DWORD *)gpio_value_addr;
  __dsb(0xFu);
  if ( a1 )
    v2 = v1 | 0x200000;
  else
    v2 = v1 & 0xFFDFFFFF;
  v4 = v2;
  __dsb(0xEu);
  result = arm_heavy_mb(a1);
  *(_DWORD *)gpio_value_addr = v4;
  return result;
}
