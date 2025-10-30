int __fastcall sub_80004(_BYTE *a1, _DWORD *a2, size_t a3)
{
  unsigned int v3; // r6
  unsigned int v4; // r9
  bool v5; // cc
  int v6; // r3
  _BYTE *v8; // r7
  int v11; // r8
  int v12; // r3
  int v13; // r1
  int v14; // r12
  char *v15; // r11
  char v16; // t1
  int v17; // r4
  int v18; // r2
  _BYTE *v19; // r0
  char v20; // r4
  char v21; // r1
  char v23; // [sp+8h] [bp-8Ch]
  _BYTE v24[132]; // [sp+10h] [bp-84h] BYREF

  v4 = a2[3];
  v5 = a3 > 0x40;
  if ( a3 <= 0x40 )
    v5 = a3 > v4;
  v6 = !v5;
  if ( v5 )
    return v6;
  if ( v4 <= a3 + 256 )
    v3 = 0;
  v8 = &v24[-(int)v24 & 0x3F];
  if ( v4 > a3 + 256 )
    v3 = v4 - 256 - a3;
  v11 = a2[2];
  memset(&v24[-(int)v24 & 0x3F], 0, a3);
  if ( v3 >= v4 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = (char *)(a2[5] + v3);
    do
    {
      v16 = *v15++;
      v17 = (v11 ^ v3 | (v3 - v11) ^ v11) ^ v3;
      v18 = (((v11 - a3) ^ v3) - 1) & ~((v11 - a3) ^ v3);
      ++v3;
      v18 >>= 31;
      v14 = (v18 | v14) & (v17 >> 31);
      v12 |= v18 & v13;
      v8[v13] |= v16 & (unsigned __int8)v14;
      v13 = (v13 + 1) & ((int)(((v13 + 1 - a3) ^ a3 | a3 ^ (v13 + 1)) ^ (v13 + 1)) >> 31);
    }
    while ( v4 != v3 );
  }
  if ( a3 )
  {
    v19 = a1;
    do
    {
      v20 = v8[v12 & 0xFFFFFFDF];
      v21 = v8[v12 | 0x20];
      v23 = (int)(((v12 & 0xFFFFFFDF ^ v12) - 1) & ~(v12 & 0xFFFFFFDF ^ v12)) >> 31;
      v12 = (v12 + 1) & ((int)(((v12 + 1 - a3) ^ a3 | a3 ^ (v12 + 1)) ^ (v12 + 1)) >> 31);
      *v19++ = ~v23 & v21 | v20 & v23;
    }
    while ( &a1[a3] != v19 );
  }
  return 1;
}
