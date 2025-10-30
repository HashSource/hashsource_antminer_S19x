int __fastcall sub_758BC(int a1, int a2)
{
  int v5; // [sp+Ch] [bp-4h] BYREF

  sub_75D9C(0, a1, a2, 24, &v5);
  BYTE1(v5) |= 0x40u;
  LOBYTE(v5) = v5 & 0x8F | 0x30;
  return sub_748C4(a1, 0, a2, 24, v5);
}
