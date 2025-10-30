int sub_2B2A0()
{
  int v0; // r5
  int v1; // r0
  unsigned int v2; // r5
  int v3; // r4
  char v5[48]; // [sp+10h] [bp-30h] BYREF

  v0 = dword_6084C8 << 24;
  v1 = sub_2B1CC(*(_DWORD *)(dword_223680 + 68));
  v2 = 20 * sub_189090(v0, v1) / 0x64u;
  v3 = sub_189090(*(_DWORD *)(dword_223680 + 272) * v2, *(_DWORD *)(dword_223680 + 76));
  sub_1E938(v5, 0x30u);
  printf("%s ", v5);
  printf("%s : hcn = 0x%08x = %d, asic_hcn = 0x%08x = %d\n", "calculate_hcn", v2, v2, v3, v3);
  snprintf(&byte_6119D4[512], 0x100u, "hcn = 0x%08x = %d, asic_hcn = 0x%08x = %d", v2, v2, v3, v3);
  sub_3CC5C(&byte_6119D4[512], v5);
  return v3;
}
