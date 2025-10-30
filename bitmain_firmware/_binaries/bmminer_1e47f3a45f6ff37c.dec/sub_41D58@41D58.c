size_t __fastcall sub_41D58(_DWORD *a1, int a2, int a3)
{
  bool v3; // r12
  int v5; // r2
  int v6; // r3
  int v7; // r0
  char *v8; // r10
  size_t v9; // r4
  size_t v10; // r2
  int v11; // r1
  double v12; // r8
  int v13; // r11
  size_t v14; // r9
  char *v15; // r6
  int v16; // r10
  char *v17; // r4
  int v18; // r5
  int v19; // r10
  _DWORD *v20; // t1
  int v21; // r12
  int v22; // r0
  int v23; // r1
  int v24; // r12
  int v25; // r0
  int v26; // r1
  __int16 v27; // r0
  void *v28; // r0
  double src; // [sp+10h] [bp-86Ch] BYREF
  _DWORD v32[24]; // [sp+18h] [bp-864h] BYREF
  char v33[2052]; // [sp+78h] [bp-804h] BYREF

  v32[3] = a3;
  v3 = a3 != dword_B32D8;
  dword_B32D8 = a3;
  BYTE1(v32[2]) = BYTE1(v32[2]) & 0xFE | v3 | 2;
  LOBYTE(v32[2]) = dword_B32D0;
  src = 0.0;
  LOWORD(v32[0]) = 82;
  BYTE2(v32[2]) = 15;
  if ( byte_534B68 )
  {
    v5 = *(_DWORD *)(a2 + 664);
    v6 = *(_DWORD *)(a2 + 668);
    LOBYTE(v32[20]) = *(_BYTE *)(a2 + 660);
    v32[21] = v5;
    v32[22] = v6;
  }
  sub_3D430(&v32[4], (unsigned __int8 *)(a2 + 1796), 4);
  sub_3D430(&v32[5], (unsigned __int8 *)(a2 + 1728), 32);
  sub_3D430(&v32[14], (unsigned __int8 *)(a2 + 1808), 4);
  sub_3D430(&v32[13], (unsigned __int8 *)(a2 + 1820), 4);
  v7 = *(_DWORD *)(a2 + 1592);
  v8 = *(char **)(a2 + 1584);
  v9 = *(_DWORD *)(a2 + 1588);
  v10 = *(_DWORD *)(a2 + 648);
  HIWORD(v32[15]) = v7;
  LOWORD(v32[15]) = v9;
  LOWORD(v32[16]) = v10;
  v11 = *(_DWORD *)&v8[v7 + 4];
  v12 = *(double *)(a2 + 640);
  v32[18] = *(_DWORD *)&v8[v7];
  v32[19] = v11;
  src = v12;
  memcpy(&v32[18], &src, v10);
  v13 = *(_DWORD *)(a2 + 1724);
  v14 = v9 + 32 * v13;
  HIWORD(v32[16]) = v13;
  v15 = (char *)malloc(v14 + 98);
  if ( !v15 )
  {
    strcpy(v33, "Failed to malloc tmp_buf");
    sub_3B6AC(3, v33, 1, *(int *)"lloc tmp_buf");
    nullsub_1();
    v8 = *(char **)(a2 + 1584);
    v9 = *(_DWORD *)(a2 + 1588);
    v13 = *(_DWORD *)(a2 + 1724);
  }
  v32[1] = v14 + 90;
  memset(v15, 0, v14 + 98);
  memcpy(v15, v32, 0x60u);
  memcpy(v15 + 96, v8, v9);
  if ( v13 > 0 )
  {
    v16 = *(_DWORD *)(a2 + 692);
    v17 = &v15[v9 + 96];
    v18 = 0;
    v19 = v16 - 4;
    do
    {
      v20 = *(_DWORD **)(v19 + 4);
      v19 += 4;
      ++v18;
      v17 += 32;
      v21 = v20[1];
      v22 = v20[2];
      v23 = v20[3];
      *((_DWORD *)v17 - 8) = *v20;
      *((_DWORD *)v17 - 7) = v21;
      *((_DWORD *)v17 - 6) = v22;
      *((_DWORD *)v17 - 5) = v23;
      v24 = v20[5];
      v25 = v20[6];
      v26 = v20[7];
      *((_DWORD *)v17 - 4) = v20[4];
      *((_DWORD *)v17 - 3) = v24;
      *((_DWORD *)v17 - 2) = v25;
      *((_DWORD *)v17 - 1) = v26;
    }
    while ( v18 != v13 );
  }
  v27 = sub_3F180((int)v15, (unsigned __int16)(v14 + 96));
  ++*(_QWORD *)&dword_B32D0;
  *(_WORD *)&v15[v14 + 96] = v27;
  v28 = malloc(v14 + 98);
  *a1 = v28;
  memcpy(v28, v15, v14 + 98);
  free(v15);
  return v14 + 98;
}
