int __fastcall sub_1A3600(int a1, int a2, int a3)
{
  int v3; // r0
  _DWORD v5[5]; // [sp+8h] [bp-14h] BYREF

  v5[2] = 0;
  v5[0] = a2;
  v5[1] = a3;
  v3 = *(_DWORD *)(a1 + 20);
  v5[3] = 0;
  return sub_3270BC(v3, sub_1A3DAC, v5, 0, a2, a3);
}
