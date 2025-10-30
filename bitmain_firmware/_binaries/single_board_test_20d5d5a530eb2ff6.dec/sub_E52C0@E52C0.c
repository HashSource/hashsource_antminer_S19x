unsigned __int64 __fastcall sub_E52C0(int a1, int a2, void (__fastcall *a3)(int, int, int))
{
  unsigned __int64 v6; // r0
  __int64 v7; // r8
  unsigned __int64 v8; // r8
  __int64 v9; // r6
  int v10; // r3
  unsigned __int64 v11; // r8
  unsigned int v12; // r10
  signed __int64 v13; // r2
  unsigned __int64 v14; // r6
  unsigned __int64 v15; // r2
  unsigned int v16; // r10
  unsigned __int64 v17; // kr08_8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r0
  unsigned __int64 v20; // r2
  unsigned __int64 v21; // r6
  unsigned __int64 result; // r0
  unsigned __int64 v23; // [sp+0h] [bp-6Ch]
  signed __int64 v24; // [sp+0h] [bp-6Ch]
  unsigned __int64 v25; // [sp+8h] [bp-64h]
  unsigned __int64 v26; // [sp+8h] [bp-64h]
  unsigned __int64 v27; // [sp+10h] [bp-5Ch]
  __int64 v28; // [sp+18h] [bp-54h]
  unsigned __int64 v29; // [sp+18h] [bp-54h]
  signed __int64 v30; // [sp+20h] [bp-4Ch]
  unsigned __int64 v31; // [sp+20h] [bp-4Ch]
  unsigned __int64 v32; // [sp+20h] [bp-4Ch]
  unsigned __int64 v33; // [sp+28h] [bp-44h]
  __int64 v34; // [sp+30h] [bp-3Ch]
  unsigned __int64 v35; // [sp+30h] [bp-3Ch]
  unsigned __int64 v36; // [sp+38h] [bp-34h]
  unsigned __int64 v37; // [sp+38h] [bp-34h]
  unsigned __int64 v38; // [sp+40h] [bp-2Ch]
  unsigned __int64 v39; // [sp+48h] [bp-24h]
  unsigned __int64 v40; // [sp+50h] [bp-1Ch]
  unsigned __int64 v41; // [sp+58h] [bp-14h]
  unsigned __int64 v42; // [sp+60h] [bp-Ch]

  memset((void *)a1, 0, 0x1A8u);
  *(_DWORD *)(a1 + 368) = a3;
  *(_DWORD *)(a1 + 372) = a2;
  a3(a1 + 80, a1 + 80, a2);
  v6 = _byteswap_uint64(*(_QWORD *)(a1 + 80));
  v36 = _byteswap_uint64(*(_QWORD *)(a1 + 88));
  LODWORD(v7) = 0;
  HIDWORD(v7) = (_DWORD)v6 << 31;
  *(_QWORD *)(a1 + 88) = v36;
  v25 = v6;
  v8 = v7 | (v36 >> 1);
  v30 = __PAIR64__(-(v36 & 1) & 0xE1000000, 0) ^ (v6 >> 1);
  HIDWORD(v9) = (unsigned int)(v6 >> 1) << 31;
  *(_QWORD *)(a1 + 232) = v36;
  LODWORD(v9) = 0;
  v10 = v8 & 1;
  v27 = v8;
  v11 = v9 | (v8 >> 1);
  LODWORD(v9) = -v10 & 0xE1000000 ^ ((-(v36 & 1) & 0xE1000000 ^ (v6 >> 1 >> 32)) >> 1);
  v12 = v30 >> 1;
  *(_QWORD *)(a1 + 80) = v6;
  v23 = __PAIR64__(v9, v12);
  LODWORD(v6) = (v12 >> 1) | ((((-(v36 & 1) & 0xE1000000 ^ (v6 >> 1 >> 32)) & 2) != 0) << 31);
  HIDWORD(v6) = ((unsigned int)v9 >> 1) ^ -(v11 & 1) & 0xE1000000;
  LODWORD(v28) = v12 ^ v6;
  HIDWORD(v28) = v9 ^ HIDWORD(v6);
  LODWORD(v34) = v11 >> 1;
  HIDWORD(v34) = (v11 >> 1 >> 32) | (v12 << 31);
  v13 = v30;
  v40 = __PAIR64__(v9, v12) ^ v30;
  v31 = v30 ^ v6;
  *(_QWORD *)(a1 + 240) = v25 ^ v6;
  *(_QWORD *)(a1 + 224) = v25;
  v41 = v27 ^ v11;
  v14 = v36;
  *(_QWORD *)(a1 + 168) = v27;
  *(_QWORD *)(a1 + 160) = v13;
  *(_QWORD *)(a1 + 136) = v11;
  v37 = v36 ^ v11;
  *(_QWORD *)(a1 + 128) = v23;
  v33 = v25 ^ v23;
  *(_QWORD *)(a1 + 112) = v6;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  v24 = v28 ^ v13;
  HIDWORD(v6) = v13;
  v15 = __PAIR64__(HIDWORD(v14), HIDWORD(v13));
  v42 = v25 ^ __PAIR64__(v15, HIDWORD(v6));
  LODWORD(v15) = v14;
  *(_QWORD *)(a1 + 120) = v34;
  *(_QWORD *)(a1 + 144) = v28;
  v29 = v28 ^ v25;
  v17 = v34 ^ v11;
  v16 = (v34 ^ v11) >> 32;
  HIDWORD(v11) = v34 ^ v11;
  *(_QWORD *)(a1 + 176) = v31;
  v32 = v25 ^ v31;
  *(_QWORD *)(a1 + 248) = v34 ^ v14;
  *(_QWORD *)(a1 + 184) = v34 ^ v27;
  v35 = v15 ^ v34 ^ v27;
  *(_QWORD *)(a1 + 152) = v17;
  *(_QWORD *)(a1 + 192) = v40;
  v38 = v25 ^ v40;
  v39 = v25 ^ v24;
  LODWORD(v14) = HIDWORD(v11);
  v18 = v27 ^ __PAIR64__(v16, HIDWORD(v11));
  v19 = v15;
  v20 = v15 ^ __PAIR64__(v16, v14);
  v26 = v19 ^ v27;
  v21 = v19;
  *(_QWORD *)(a1 + 200) = v41;
  result = v19 ^ v41;
  *(_QWORD *)(a1 + 208) = v24;
  *(_QWORD *)(a1 + 216) = v18;
  *(_QWORD *)(a1 + 256) = v33;
  *(_QWORD *)(a1 + 264) = v37;
  *(_QWORD *)(a1 + 272) = v29;
  *(_QWORD *)(a1 + 280) = v20;
  *(_QWORD *)(a1 + 288) = v42;
  *(_QWORD *)(a1 + 296) = v26;
  *(_QWORD *)(a1 + 304) = v32;
  *(_QWORD *)(a1 + 312) = v35;
  *(_QWORD *)(a1 + 320) = v38;
  *(_QWORD *)(a1 + 328) = result;
  *(_QWORD *)(a1 + 336) = v39;
  *(_QWORD *)(a1 + 344) = v21 ^ v18;
  return result;
}
