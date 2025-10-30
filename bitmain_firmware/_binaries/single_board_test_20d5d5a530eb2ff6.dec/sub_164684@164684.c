bool __fastcall sub_164684(int a1, int *a2, unsigned int a3, int *a4, size_t a5, int *a6, size_t a7)
{
  int v7; // r9
  int v12; // lr
  unsigned int v13; // r2
  int v14; // r3
  int *v15; // r1
  int v16; // r5
  int v17; // r7
  unsigned int v18; // r3
  int v19; // r6
  unsigned int v20; // r5
  int v21; // r3
  unsigned int v22; // r7
  int v23; // r5
  unsigned int v24; // r6
  int v25; // r7
  unsigned int v26; // r3
  int v27; // r6
  unsigned int v28; // r5
  int v29; // r3
  unsigned int v30; // r7
  int v31; // r5
  unsigned int v32; // r6
  int v33; // r7
  unsigned int v34; // r3
  int v35; // r6
  unsigned int v36; // r5
  int v37; // r3
  unsigned int v38; // r7
  int v39; // r5
  unsigned int v40; // r6
  unsigned int v41; // r3
  int v42; // r5

  if ( !a2 )
    return 0;
  v7 = a1 + 124;
  memset((void *)(a1 + 124), 0, 0x20u);
  *(_DWORD *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  if ( !sub_D8440(*(int **)(a1 + 100), 0, 0, v7, 0, -1) )
    return 0;
  v12 = *(unsigned __int8 *)(a1 + 171);
  v13 = a3;
  v14 = *(unsigned __int8 *)(a1 + 170);
  v15 = a2;
  v16 = *(unsigned __int8 *)(a1 + 169);
  v17 = *(unsigned __int8 *)(a1 + 168);
  *(_BYTE *)(a1 + 171) = v12 + 1;
  v18 = v14 + ((unsigned int)(v12 + 1) >> 8);
  v19 = *(unsigned __int8 *)(a1 + 167);
  v20 = v16 + (v18 >> 8);
  *(_BYTE *)(a1 + 170) = v18;
  v21 = *(unsigned __int8 *)(a1 + 166);
  v22 = v17 + (v20 >> 8);
  *(_BYTE *)(a1 + 169) = v20;
  v23 = *(unsigned __int8 *)(a1 + 165);
  v24 = v19 + (v22 >> 8);
  *(_BYTE *)(a1 + 168) = v22;
  v25 = *(unsigned __int8 *)(a1 + 164);
  v26 = v21 + (v24 >> 8);
  *(_BYTE *)(a1 + 167) = v24;
  v27 = *(unsigned __int8 *)(a1 + 163);
  v28 = v23 + (v26 >> 8);
  *(_BYTE *)(a1 + 166) = v26;
  v29 = *(unsigned __int8 *)(a1 + 162);
  v30 = v25 + (v28 >> 8);
  *(_BYTE *)(a1 + 165) = v28;
  v31 = *(unsigned __int8 *)(a1 + 161);
  v32 = v27 + (v30 >> 8);
  *(_BYTE *)(a1 + 164) = v30;
  v33 = *(unsigned __int8 *)(a1 + 160);
  v34 = v29 + (v32 >> 8);
  *(_BYTE *)(a1 + 163) = v32;
  v35 = *(unsigned __int8 *)(a1 + 159);
  v36 = v31 + (v34 >> 8);
  *(_BYTE *)(a1 + 162) = v34;
  v37 = *(unsigned __int8 *)(a1 + 158);
  v38 = v33 + (v36 >> 8);
  *(_BYTE *)(a1 + 161) = v36;
  v39 = *(unsigned __int8 *)(a1 + 157);
  v40 = v35 + (v38 >> 8);
  *(_BYTE *)(a1 + 160) = v38;
  LOBYTE(v38) = *(_BYTE *)(a1 + 156);
  v41 = v37 + (v40 >> 8);
  *(_BYTE *)(a1 + 159) = v40;
  v42 = v39 + (v41 >> 8);
  *(_BYTE *)(a1 + 158) = v41;
  *(_BYTE *)(a1 + 157) = v42;
  *(_BYTE *)(a1 + 156) = v38 + BYTE1(v42);
  return sub_163170(a1, v15, v13, a6, a7, a4, a5);
}
