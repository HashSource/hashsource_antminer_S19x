int __fastcall sub_752FC(int a1)
{
  int v3; // [sp+Ch] [bp-4h] BYREF

  sub_75D9C(0, a1, 0, 108, &v3);
  LOBYTE(v3) = v3 & 0xF8 | 3;
  BYTE1(v3) = BYTE1(v3) & 0xFC | 2;
  HIBYTE(v3) = HIBYTE(v3) & 0xFC | 2;
  return sub_748C4(a1, 1, 0, 108, v3);
}
