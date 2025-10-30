int __fastcall sub_169150(int a1, int a2)
{
  int v2; // r1
  int v3; // r2
  int v4; // r8
  unsigned int v5; // lr
  int v6; // r3
  unsigned int v7; // r7
  int v8; // r9
  int v9; // r4
  int v10; // r0
  int v11; // r3
  int v12; // r5
  unsigned int v13; // r2
  const char *v14; // r12
  int v15; // r4
  int v16; // t1
  _BYTE *v17; // r7
  unsigned int v18; // r2
  bool v19; // zf
  _BYTE *v20; // r9
  int v21; // r3
  _BYTE *v22; // r8
  _BYTE *v23; // r0
  int v24; // r3
  unsigned int v26; // [sp+0h] [bp-14h]
  int v27; // [sp+4h] [bp-10h]
  int v28; // [sp+8h] [bp-Ch]
  unsigned int v29; // [sp+Ch] [bp-8h]
  _BYTE v30[4]; // [sp+10h] [bp-4h] BYREF

  v2 = a2 - 4;
  v3 = (*(unsigned __int8 *)(a1 + 13) << 16) | (*(unsigned __int8 *)(a1 + 12) << 24);
  v4 = *(unsigned __int8 *)(a1 + 14);
  v5 = _byteswap_ulong(*(_DWORD *)a1) ^ 0xA3B1BAC6;
  v6 = *(unsigned __int8 *)(a1 + 15);
  v7 = _byteswap_ulong(*(_DWORD *)(a1 + 4));
  v8 = *(unsigned __int8 *)(a1 + 10);
  v9 = (*(unsigned __int8 *)(a1 + 9) << 16) | (*(unsigned __int8 *)(a1 + 8) << 24) | *(unsigned __int8 *)(a1 + 11);
  v26 = v5;
  v10 = v3 | v6;
  v11 = (v9 | (v8 << 8)) ^ 0x677D9197;
  v12 = v7 ^ 0x56AA3350;
  v13 = (v10 | (v4 << 8)) ^ 0xB27022DC;
  v27 = v7 ^ 0x56AA3350;
  v14 = "C3";
  v15 = 0;
  v28 = v11;
  v29 = v13;
  while ( 1 )
  {
    v16 = *((_DWORD *)v14 + 1);
    v14 += 4;
    v17 = &v30[4 * (v15 & 3)];
    v18 = v13 ^ v11 ^ v12 ^ v16;
    v19 = v15 == 31;
    v20 = &v30[4 * (((_BYTE)v15 + 2) & 3)];
    v21 = byte_1DFAEC[(unsigned __int8)v18 + 128]
        | (byte_1DFAEC[HIBYTE(v18) + 128] << 24)
        | (byte_1DFAEC[BYTE2(v18) + 128] << 16)
        | (byte_1DFAEC[BYTE1(v18) + 128] << 8);
    v22 = &v30[4 * (((_BYTE)v15 + 3) & 3)];
    v23 = &v30[4 * (++v15 & 3)];
    v24 = v21 ^ __ROR4__(v21, 19) ^ __ROR4__(v21, 9) ^ v5;
    *(_DWORD *)(v2 + 4) = v24;
    v2 += 4;
    *((_DWORD *)v17 - 4) = v24;
    if ( v19 )
      break;
    v12 = *((_DWORD *)v20 - 4);
    v11 = *((_DWORD *)v22 - 4);
    v13 = *((_DWORD *)v17 - 4);
    v5 = *((_DWORD *)v23 - 4);
  }
  return 1;
}
