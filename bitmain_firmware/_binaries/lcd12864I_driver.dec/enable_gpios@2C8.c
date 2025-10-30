int __fastcall enable_gpios(int a1)
{
  int v1; // r3
  int result; // r0
  int v3; // [sp+4h] [bp-4h]

  v1 = *(_DWORD *)gpio_enable_addr;
  __dsb(0xFu);
  v3 = v1 | 0x330000;
  __dsb(0xEu);
  result = arm_heavy_mb(a1);
  *(_DWORD *)gpio_enable_addr = v3;
  return result;
}
