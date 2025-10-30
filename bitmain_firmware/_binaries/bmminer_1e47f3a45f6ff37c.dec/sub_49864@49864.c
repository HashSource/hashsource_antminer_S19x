int __fastcall sub_49864(int a1, int a2, unsigned int a3, int a4)
{
  int v5; // r6
  int v6; // r5
  unsigned __int16 v7; // r11
  _DWORD *v8; // r2
  int v10; // r10
  int v12; // r9
  int v13; // r0
  _DWORD *v14; // r2
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int result; // r0
  int v20; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v5 = HIWORD(a3);
  v6 = a4 + 4 * ((a1 << 8) + a2) + 0x800000;
  v7 = a3;
  v8 = (_DWORD *)(a4 + 4 * ((a1 << 8) + a2) + 8425472);
  v10 = *(_DWORD *)(dword_535D8C + 4);
  v12 = (a1 << 8) + a2;
  *v8 += v5;
  v13 = sub_26A84();
  v15 = 4 * a1;
  if ( v5 <= 8 * v13 )
    v14 = (_DWORD *)(a4 + v15);
  v16 = a4 + v15;
  if ( v5 <= 8 * v13 )
    v14 += 0x200000;
  v17 = v16 + 0x800000;
  if ( v5 <= 8 * v13 )
    v14 += 10240;
  v18 = v17 + 40960;
  if ( v5 <= 8 * v13 )
    *v14 += v5;
  *(_DWORD *)(v18 + 2144) += v7 - v5;
  *(_BYTE *)(v10 + v12) = 1;
  result = sub_26A84();
  if ( v5 > 8 * result && (unsigned int)dword_B308C > 3 )
  {
    snprintf(
      s,
      0x800u,
      "Nonce counter overflow: chain = %d, asic = %d, nonce_return = %d, nonce_match = %d, nonce_accumulate = %d\n",
      a1,
      a2,
      v7,
      v5,
      *(_DWORD *)(v6 + 36864));
    return sub_3B6AC(3, s, 0, v20);
  }
  return result;
}
