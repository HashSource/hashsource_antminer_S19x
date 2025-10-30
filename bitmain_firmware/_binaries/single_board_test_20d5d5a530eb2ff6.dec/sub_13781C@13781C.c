int __fastcall sub_13781C(_BYTE **a1, size_t a2, size_t a3, int a4)
{
  int v4; // r3
  _BYTE v6[4]; // [sp+0h] [bp-24h] BYREF
  size_t v7[3]; // [sp+4h] [bp-20h] BYREF
  _DWORD v8[5]; // [sp+10h] [bp-14h] BYREF

  v4 = 8 * a4;
  v7[1] = a3;
  v7[0] = a2;
  v6[3] = v4;
  v6[0] = HIBYTE(v4);
  v6[1] = BYTE2(v4);
  v6[2] = BYTE1(v4);
  v8[0] = 4;
  v8[1] = 4;
  v8[2] = v6;
  v8[3] = 0;
  v7[2] = (size_t)v8;
  return sub_B0FDC(v7, a1, byte_2101F0);
}
