int __fastcall sub_7575C(int a1)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  sub_75D9C(0, a1, 0, 144, &v3);
  LOBYTE(v3) = v3 & 0x7D | 2;
  BYTE1(v3) &= ~8u;
  return sub_748C4(a1, 1, 0, 144, v3);
}
