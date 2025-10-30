size_t __fastcall sub_23D5C(_DWORD *a1, int a2, int a3)
{
  char v4; // r3
  char v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r0
  char *v9; // r9
  size_t v10; // r4
  size_t v11; // r2
  int v12; // r1
  __int64 v13; // r6
  int v14; // r10
  size_t v15; // r11
  char *v16; // r0
  char *v17; // r6
  _DWORD **v18; // lr
  char *v19; // r4
  _DWORD **v20; // r3
  _DWORD *v21; // t1
  int v22; // r12
  int v23; // r0
  int v24; // r1
  int v25; // r12
  int v26; // r0
  int v27; // r1
  __int16 v28; // r0
  __int64 v29; // kr00_8
  void *v30; // r0
  __int64 src; // [sp+8h] [bp-864h] BYREF
  _DWORD v34[22]; // [sp+10h] [bp-85Ch] BYREF
  char v35[2052]; // [sp+68h] [bp-804h] BYREF

  v4 = BYTE1(v34[2]) & 0xFE | *(_BYTE *)(a2 + 680) & 1;
  v34[3] = a3;
  BYTE1(v34[2]) = v4 | 2;
  src = 0;
  v5 = 82;
  LOWORD(v34[0]) = 82;
  v6 = 15;
  if ( byte_A0D90 )
    v5 = *(_BYTE *)(a2 + 644);
  BYTE2(v34[2]) = 15;
  if ( byte_A0D90 )
  {
    v6 = *(_DWORD *)(a2 + 648);
    LOBYTE(v34[20]) = v5;
  }
  LOBYTE(v34[2]) = qword_A0D88;
  v7 = a2 + 1780;
  if ( byte_A0D90 )
    v34[21] = v6;
  sub_49940(&v34[4], v7);
  sub_49940(&v34[5], a2 + 1712);
  sub_49940(&v34[14], a2 + 1792);
  sub_49940(&v34[13], a2 + 1804);
  v8 = *(_DWORD *)(a2 + 1576);
  v9 = *(char **)(a2 + 1568);
  v10 = *(_DWORD *)(a2 + 1572);
  v11 = *(_DWORD *)(a2 + 632);
  HIWORD(v34[15]) = v8;
  LOWORD(v34[15]) = v10;
  LOWORD(v34[16]) = v11;
  v12 = *(_DWORD *)&v9[v8 + 4];
  v13 = *(_QWORD *)(a2 + 624);
  v34[18] = *(_DWORD *)&v9[v8];
  v34[19] = v12;
  src = v13;
  memcpy(&v34[18], &src, v11);
  v14 = *(_DWORD *)(a2 + 1708);
  HIWORD(v34[16]) = v14;
  v15 = v10 + 32 * v14;
  v16 = (char *)malloc(v15 + 90);
  v17 = v16;
  if ( !v16 )
  {
    strcpy(v35, "Failed to malloc tmp_buf");
    sub_47AB4(3, v35, 1);
    sub_62EC0(1);
  }
  v34[1] = v15 + 82;
  memset(v16, 0, v15 + 90);
  memcpy(v17, v34, 0x58u);
  memcpy(v17 + 88, v9, v10);
  if ( v14 > 0 )
  {
    v18 = *(_DWORD ***)(a2 + 676);
    v19 = &v17[v10 + 88];
    v20 = &v18[v14];
    do
    {
      v21 = *v18++;
      v19 += 32;
      v22 = v21[1];
      v23 = v21[2];
      v24 = v21[3];
      *((_DWORD *)v19 - 8) = *v21;
      *((_DWORD *)v19 - 7) = v22;
      *((_DWORD *)v19 - 6) = v23;
      *((_DWORD *)v19 - 5) = v24;
      v25 = v21[5];
      v26 = v21[6];
      v27 = v21[7];
      *((_DWORD *)v19 - 4) = v21[4];
      *((_DWORD *)v19 - 3) = v25;
      *((_DWORD *)v19 - 2) = v26;
      *((_DWORD *)v19 - 1) = v27;
    }
    while ( v18 != v20 );
  }
  v28 = sub_514F8(v17, (unsigned __int16)(v15 + 88));
  v29 = qword_A0D88;
  *(_WORD *)&v17[v15 + 88] = v28;
  qword_A0D88 = v29 + 1;
  v30 = malloc(v15 + 90);
  *a1 = v30;
  memcpy(v30, v17, v15 + 90);
  free(v17);
  return v15 + 90;
}
