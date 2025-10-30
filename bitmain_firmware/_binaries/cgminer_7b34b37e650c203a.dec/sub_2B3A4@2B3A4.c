void __fastcall sub_2B3A4(int a1)
{
  int v2; // r1
  int *v3; // r2
  unsigned int v4; // t1
  int v5; // [sp+4h] [bp-ECh] BYREF
  char v6[60]; // [sp+8h] [bp-E8h] BYREF
  char v7; // [sp+44h] [bp-ACh] BYREF
  _DWORD v8[34]; // [sp+48h] [bp-A8h] BYREF
  _BYTE v9[32]; // [sp+D0h] [bp-20h] BYREF

  v2 = a1 - 4;
  v3 = &v5;
  do
  {
    v4 = *(_DWORD *)(v2 + 4);
    v2 += 4;
    v3[1] = bswap32(v4);
    ++v3;
  }
  while ( v3 != (int *)&v7 );
  sub_21A6C(v8);
  sub_21A9C((unsigned __int8 *)v8, v6, 0x40u);
  sub_254E8((void *)(a1 + 128), v9, 0x20u, (int)"cgminer.c", (int)"calc_midstate", 2256);
}
