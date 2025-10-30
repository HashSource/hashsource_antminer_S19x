size_t __fastcall sub_401B8(_DWORD *a1, int a2, int a3)
{
  bool v4; // r12
  int v5; // r2
  int v6; // r3
  int v7; // r0
  char *v8; // r9
  size_t v9; // r4
  size_t v10; // r2
  int v11; // r1
  __int64 v12; // r6
  int v13; // r10
  size_t v14; // r11
  char *v15; // r6
  _DWORD **v16; // lr
  char *v17; // r4
  _DWORD **v18; // r3
  _DWORD *v19; // t1
  int v20; // r12
  int v21; // r0
  int v22; // r1
  int v23; // r12
  int v24; // r0
  int v25; // r1
  __int16 v26; // r0
  __int64 v27; // kr00_8
  void *v28; // r0
  __int64 src; // [sp+8h] [bp-86Ch] BYREF
  _DWORD v32[24]; // [sp+10h] [bp-864h] BYREF
  char v33[2052]; // [sp+70h] [bp-804h] BYREF

  v32[3] = a3;
  v4 = dword_AFE70 != a3;
  dword_AFE70 = a3;
  BYTE1(v32[2]) = BYTE1(v32[2]) & 0xFE | v4 | 2;
  LOBYTE(v32[2]) = qword_AFE68;
  src = 0;
  LOWORD(v32[0]) = 82;
  BYTE2(v32[2]) = 15;
  if ( byte_4B6CDC )
  {
    v5 = *(_DWORD *)(a2 + 648);
    v6 = *(_DWORD *)(a2 + 652);
    LOBYTE(v32[20]) = *(_BYTE *)(a2 + 644);
    v32[21] = v5;
    v32[22] = v6;
  }
  sub_3CC24(&v32[4], (unsigned __int8 *)(a2 + 1780), 4);
  sub_3CC24(&v32[5], (unsigned __int8 *)(a2 + 1712), 32);
  sub_3CC24(&v32[14], (unsigned __int8 *)(a2 + 1792), 4);
  sub_3CC24(&v32[13], (unsigned __int8 *)(a2 + 1804), 4);
  v7 = *(_DWORD *)(a2 + 1576);
  v8 = *(char **)(a2 + 1568);
  v9 = *(_DWORD *)(a2 + 1572);
  v10 = *(_DWORD *)(a2 + 632);
  HIWORD(v32[15]) = v7;
  LOWORD(v32[15]) = v9;
  LOWORD(v32[16]) = v10;
  v11 = *(_DWORD *)&v8[v7 + 4];
  v12 = *(_QWORD *)(a2 + 624);
  v32[18] = *(_DWORD *)&v8[v7];
  v32[19] = v11;
  src = v12;
  memcpy(&v32[18], &src, v10);
  v13 = *(_DWORD *)(a2 + 1708);
  HIWORD(v32[16]) = v13;
  v14 = v9 + 32 * v13;
  v15 = (char *)malloc(v14 + 98);
  if ( !v15 )
  {
    strcpy(v33, "Failed to malloc tmp_buf");
    sub_3AF5C(3, v33, 1, *(int *)"lloc tmp_buf");
    nullsub_1();
    v13 = *(_DWORD *)(a2 + 1708);
    v8 = *(char **)(a2 + 1568);
    v9 = *(_DWORD *)(a2 + 1572);
  }
  v32[1] = v14 + 90;
  memset(v15, 0, v14 + 98);
  memcpy(v15, v32, 0x60u);
  memcpy(v15 + 96, v8, v9);
  if ( v13 > 0 )
  {
    v16 = *(_DWORD ***)(a2 + 676);
    v17 = &v15[v9 + 96];
    v18 = &v16[v13];
    do
    {
      v19 = *v16++;
      v17 += 32;
      v20 = v19[1];
      v21 = v19[2];
      v22 = v19[3];
      *((_DWORD *)v17 - 8) = *v19;
      *((_DWORD *)v17 - 7) = v20;
      *((_DWORD *)v17 - 6) = v21;
      *((_DWORD *)v17 - 5) = v22;
      v23 = v19[5];
      v24 = v19[6];
      v25 = v19[7];
      *((_DWORD *)v17 - 4) = v19[4];
      *((_DWORD *)v17 - 3) = v23;
      *((_DWORD *)v17 - 2) = v24;
      *((_DWORD *)v17 - 1) = v25;
    }
    while ( v16 != v18 );
  }
  v26 = sub_3EA90((int)v15, (unsigned __int16)(v14 + 96));
  v27 = qword_AFE68;
  *(_WORD *)&v15[v14 + 96] = v26;
  qword_AFE68 = v27 + 1;
  v28 = malloc(v14 + 98);
  *a1 = v28;
  memcpy(v28, v15, v14 + 98);
  free(v15);
  return v14 + 98;
}
