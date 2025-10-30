unsigned int __fastcall sub_DD774(unsigned int *a1, _BYTE *a2, _DWORD *a3)
{
  unsigned int v4; // r3
  unsigned int v5; // r3
  unsigned int v6; // r2
  unsigned int v8; // [sp+0h] [bp-Ch] BYREF
  unsigned int v9; // [sp+4h] [bp-8h]

  v4 = _byteswap_ulong(a1[1]);
  v8 = _byteswap_ulong(*a1);
  v9 = v4;
  sub_DCCAC((int *)&v8, a3);
  v5 = v8;
  v6 = v9;
  a2[3] = v8;
  *a2 = HIBYTE(v5);
  a2[1] = BYTE2(v5);
  a2[2] = BYTE1(v5);
  a2[7] = v6;
  a2[4] = HIBYTE(v6);
  a2[5] = BYTE2(v6);
  a2[6] = BYTE1(v6);
  return HIWORD(v6);
}
