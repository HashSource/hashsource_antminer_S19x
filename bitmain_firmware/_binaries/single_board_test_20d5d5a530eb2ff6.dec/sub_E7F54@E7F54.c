int __fastcall sub_E7F54(int a1, const void *a2, size_t a3, int a4)
{
  char v6; // r6
  void (__fastcall *v8)(__int128 *, _BYTE *, int); // r6
  int v9; // r2
  _BYTE *v10; // r5
  char v11; // r3
  char v12; // r2
  int v13; // lr
  int v14; // r0
  int v15; // r1
  int v16; // r7
  int v17; // r0
  int v18; // r6
  int v19; // r1
  int v20; // r9
  int v21; // r8
  int v22; // r12
  int v23; // lr
  int v24; // r6
  int v25; // r0
  int v26; // r1
  int v27; // r7
  int v28; // r10
  int v29; // r5
  int v31; // [sp+0h] [bp-54h]
  _BYTE v32[12]; // [sp+8h] [bp-4Ch] BYREF
  int v33; // [sp+14h] [bp-40h]
  __int128 v34; // [sp+18h] [bp-3Ch] BYREF
  __int128 v35; // [sp+28h] [bp-2Ch] BYREF
  int v36; // [sp+38h] [bp-1Ch]
  int v37; // [sp+3Ch] [bp-18h]
  int v38; // [sp+40h] [bp-14h]
  int v39; // [sp+44h] [bp-10h]
  __int16 v40; // [sp+48h] [bp-Ch]
  __int16 v41; // [sp+4Ah] [bp-Ah]
  __int16 v42; // [sp+4Ch] [bp-8h]
  __int16 v43; // [sp+4Eh] [bp-6h]
  _BYTE v44[4]; // [sp+50h] [bp-4h] BYREF

  if ( a3 - 1 > 0xE || (unsigned int)(a4 - 1) > 0xF )
    return -1;
  v6 = a4;
  memset((void *)(a1 + 72), 0, 0x50u);
  LOBYTE(v35) = 16 * v6;
  *(_DWORD *)((char *)&v35 + 9) = 0;
  *(_QWORD *)((char *)&v35 + 1) = 0;
  HIDWORD(v35) = 0;
  memcpy((char *)&v35 + 16 - a3, a2, a3);
  v8 = *(void (__fastcall **)(__int128 *, _BYTE *, int))a1;
  v44[15 - a3 - 40] |= 1u;
  v34 = v35;
  v9 = *(_DWORD *)(a1 + 8);
  HIBYTE(v34) = HIBYTE(v35) & 0xC0;
  v8(&v34, v32, v9);
  v10 = &v44[(HIBYTE(v35) >> 3) & 7];
  v36 = *(_DWORD *)v32;
  v37 = *(_DWORD *)&v32[4];
  v38 = *(_DWORD *)&v32[8];
  v39 = v33;
  v11 = HIBYTE(v35) & 7;
  v12 = 8 - (HIBYTE(v35) & 7);
  v40 = *(_WORD *)&v32[1] ^ *(_WORD *)v32;
  v41 = *(_WORD *)&v32[2] ^ *(_WORD *)&v32[3];
  v42 = *(_WORD *)&v32[4] ^ *(_WORD *)&v32[5];
  v43 = *(_WORD *)&v32[6] ^ *(_WORD *)&v32[7];
  v13 = (unsigned __int8)*(v10 - 9);
  v14 = (unsigned __int8)*(v10 - 10);
  v15 = (unsigned __int8)*(v10 - 11);
  v16 = (unsigned __int8)*(v10 - 12);
  v31 = v13 << (HIBYTE(v35) & 7);
  *(_BYTE *)(a1 + 134) = (v13 >> v12) | (v14 << (HIBYTE(v35) & 7));
  *(_BYTE *)(a1 + 133) = (v15 << v11) | (v14 >> v12);
  v17 = (unsigned __int8)*(v10 - 14);
  v18 = (unsigned __int8)*(v10 - 13);
  *(_BYTE *)(a1 + 132) = (v15 >> v12) | (v16 << v11);
  v19 = (unsigned __int8)*(v10 - 15);
  v20 = (unsigned __int8)*(v10 - 16);
  v21 = (unsigned __int8)*(v10 - 17);
  v22 = (unsigned __int8)*(v10 - 18);
  *(_BYTE *)(a1 + 130) = (v17 << v11) | (v18 >> v12);
  LOBYTE(v16) = (v18 << v11) | (v16 >> v12);
  v23 = (unsigned __int8)*(v10 - 19);
  *(_BYTE *)(a1 + 129) = (v19 << v11) | (v17 >> v12);
  v24 = (unsigned __int8)*(v10 - 21);
  v25 = (unsigned __int8)*(v10 - 22);
  *(_BYTE *)(a1 + 128) = (v20 << v11) | (v19 >> v12);
  v26 = (unsigned __int8)*(v10 - 23);
  *(_BYTE *)(a1 + 131) = v16;
  *(_BYTE *)(a1 + 127) = (v21 << v11) | (v20 >> v12);
  v27 = (unsigned __int8)*(v10 - 20);
  v28 = (unsigned __int8)*(v10 - 24);
  v29 = (unsigned __int8)*(v10 - 8);
  *(_BYTE *)(a1 + 126) = (v22 << v11) | (v21 >> v12);
  *(_BYTE *)(a1 + 125) = (v23 << v11) | (v22 >> v12);
  *(_BYTE *)(a1 + 135) = ((v29 & (255 << v12)) >> v12) | v31;
  *(_BYTE *)(a1 + 124) = ((_BYTE)v27 << v11) | (v23 >> v12);
  *(_BYTE *)(a1 + 123) = (v27 >> v12) | (v24 << v11);
  *(_BYTE *)(a1 + 122) = (v25 << v11) | (v24 >> v12);
  *(_BYTE *)(a1 + 121) = ((_BYTE)v26 << v11) | (v25 >> v12);
  *(_BYTE *)(a1 + 120) = (v28 << v11) | (v26 >> v12);
  return 1;
}
