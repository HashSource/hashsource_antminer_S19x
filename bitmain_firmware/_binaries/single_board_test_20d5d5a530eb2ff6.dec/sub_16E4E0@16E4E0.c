int __fastcall sub_16E4E0(int a1, int a2)
{
  char v2; // r6
  unsigned int v3; // r3
  int v5; // r5
  unsigned int v6; // r1
  bool v7; // zf
  int v8; // r3
  unsigned int v9; // r2
  char v10; // r3
  int *v11; // r7
  void *v12; // r0
  size_t v13; // r2
  unsigned int v14; // r3
  int v15; // r8
  int v16; // r12
  int v17; // lr
  unsigned int v18; // r10
  int v19; // r6
  int v20; // r0
  unsigned int v21; // r3
  unsigned int v22; // r0
  unsigned int v23; // r6
  int v24; // r3
  int *v25; // r3
  int v26; // r6
  int v27; // r0
  int v28; // r1
  int v29; // r2

  v3 = *(_DWORD *)(a2 + 128);
  v5 = a1;
  v6 = v3 >> 3;
  v8 = v3 & 7;
  v7 = v8 == 0;
  if ( v8 )
  {
    a1 = a2 + v6;
    v8 = 128 >> v8;
    v2 = *(_BYTE *)(a2 + v6 + 64);
  }
  v9 = v6 + 1;
  if ( v7 )
  {
    v10 = 0x80;
    a1 = a2 + v6;
  }
  else
  {
    v10 = v8 | v2;
  }
  *(_BYTE *)(a1 + 64) = v10;
  if ( v9 > 0x20 )
  {
    if ( v9 <= 0x3F )
      memset((void *)(v6 + 65 + a2), 0, 63 - v6);
    v11 = (int *)(a2 + 64);
    sub_17E158(a2, a2 + 64, 1);
    v12 = (void *)(a2 + 64);
    v13 = 32;
    goto LABEL_10;
  }
  if ( v6 != 31 )
  {
    v13 = 31 - v6;
    v12 = (void *)(a2 + v6 + 65);
    v11 = (int *)(a2 + 64);
LABEL_10:
    memset(v12, 0, v13);
    goto LABEL_11;
  }
  v11 = (int *)(a2 + 64);
LABEL_11:
  v14 = *(_DWORD *)(a2 + 132);
  v15 = *(_DWORD *)(a2 + 136);
  v16 = *(_DWORD *)(a2 + 140);
  v17 = *(_DWORD *)(a2 + 144);
  *(_BYTE *)(a2 + 123) = v15;
  *(_BYTE *)(a2 + 119) = v16;
  v18 = HIWORD(v14);
  *(_BYTE *)(a2 + 126) = BYTE1(v14);
  v19 = *(_DWORD *)(a2 + 148);
  *(_BYTE *)(a2 + 124) = HIBYTE(v14);
  v20 = *(_DWORD *)(a2 + 152);
  *(_BYTE *)(a2 + 122) = BYTE1(v15);
  *(_BYTE *)(a2 + 115) = v17;
  *(_BYTE *)(a2 + 127) = v14;
  *(_BYTE *)(a2 + 120) = HIBYTE(v15);
  v21 = *(_DWORD *)(a2 + 156);
  *(_BYTE *)(a2 + 118) = BYTE1(v16);
  *(_BYTE *)(a2 + 111) = v19;
  *(_BYTE *)(a2 + 107) = v20;
  *(_BYTE *)(a2 + 116) = HIBYTE(v16);
  *(_BYTE *)(a2 + 103) = v21;
  *(_BYTE *)(a2 + 114) = BYTE1(v17);
  *(_BYTE *)(a2 + 125) = v18;
  *(_BYTE *)(a2 + 113) = BYTE2(v17);
  *(_BYTE *)(a2 + 112) = HIBYTE(v17);
  *(_BYTE *)(a2 + 121) = BYTE2(v15);
  *(_BYTE *)(a2 + 109) = BYTE2(v19);
  *(_BYTE *)(a2 + 108) = HIBYTE(v19);
  *(_BYTE *)(a2 + 106) = BYTE1(v20);
  *(_BYTE *)(a2 + 105) = BYTE2(v20);
  *(_BYTE *)(a2 + 104) = HIBYTE(v20);
  v22 = HIWORD(v21);
  *(_BYTE *)(a2 + 117) = BYTE2(v16);
  *(_BYTE *)(a2 + 110) = BYTE1(v19);
  *(_BYTE *)(a2 + 102) = BYTE1(v21);
  v23 = HIBYTE(v21);
  v24 = *(_DWORD *)(a2 + 160);
  *(_BYTE *)(a2 + 100) = v23;
  *(_BYTE *)(a2 + 101) = v22;
  *(_BYTE *)(a2 + 99) = v24;
  *(_BYTE *)(a2 + 98) = BYTE1(v24);
  *(_BYTE *)(a2 + 97) = BYTE2(v24);
  *(_BYTE *)(a2 + 96) = HIBYTE(v24);
  sub_17E158(a2, v11, 1);
  if ( !v5 )
    return 0;
  v25 = (int *)a2;
  do
  {
    v26 = *v25;
    v25 += 4;
    v27 = *(v25 - 3);
    v5 += 16;
    v28 = *(v25 - 2);
    v29 = *(v25 - 1);
    *(_DWORD *)(v5 - 16) = v26;
    *(_DWORD *)(v5 - 12) = v27;
    *(_DWORD *)(v5 - 8) = v28;
    *(_DWORD *)(v5 - 4) = v29;
  }
  while ( v25 != v11 );
  sub_E07F8((void *)a2, 0xA8u);
  return 1;
}
