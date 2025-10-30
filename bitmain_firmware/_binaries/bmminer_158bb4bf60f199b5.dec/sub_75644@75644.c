int __fastcall sub_75644(int a1)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  sub_75D9C(0, a1, 0, 108, &v3);
  HIBYTE(v3) |= 0x80u;
  return sub_748C4(a1, 1, 0, 108, v3);
}
