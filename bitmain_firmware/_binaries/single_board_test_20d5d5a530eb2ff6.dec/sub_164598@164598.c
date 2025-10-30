bool __fastcall sub_164598(_BYTE *a1, int *a2, unsigned int a3, int *a4, size_t a5)
{
  int v5; // r6
  int v6; // r5
  unsigned int v7; // r7
  int v8; // lr
  unsigned int v9; // r6
  int v10; // r7
  unsigned int v11; // r5
  int v12; // r6
  unsigned int v13; // lr
  int v14; // r5
  unsigned int v15; // r7
  int v16; // lr
  unsigned int v17; // r6
  int v18; // r7
  unsigned int v19; // r5
  int v20; // r6
  unsigned int v21; // lr
  int v22; // r5
  unsigned int v23; // r7
  int v24; // lr
  unsigned int v25; // r6
  int v26; // r7
  unsigned int v27; // r5
  int v28; // r6
  unsigned int v29; // lr
  int v30; // r5
  unsigned int v31; // r7
  unsigned int v32; // r6
  int v33; // r5

  if ( !a2 )
    return 0;
  v5 = (unsigned __int8)a1[170];
  v6 = (unsigned __int8)a1[169];
  v7 = (unsigned __int8)a1[171] + 1;
  v8 = (unsigned __int8)a1[168];
  a1[171] = v7;
  v9 = v5 + (v7 >> 8);
  v10 = (unsigned __int8)a1[167];
  v11 = v6 + (v9 >> 8);
  a1[170] = v9;
  v12 = (unsigned __int8)a1[166];
  v13 = v8 + (v11 >> 8);
  a1[169] = v11;
  v14 = (unsigned __int8)a1[165];
  v15 = v10 + (v13 >> 8);
  a1[168] = v13;
  v16 = (unsigned __int8)a1[164];
  v17 = v12 + (v15 >> 8);
  a1[167] = v15;
  v18 = (unsigned __int8)a1[163];
  v19 = v14 + (v17 >> 8);
  a1[166] = v17;
  v20 = (unsigned __int8)a1[162];
  v21 = v16 + (v19 >> 8);
  a1[165] = v19;
  v22 = (unsigned __int8)a1[161];
  v23 = v18 + (v21 >> 8);
  a1[164] = v21;
  v24 = (unsigned __int8)a1[160];
  v25 = v20 + (v23 >> 8);
  a1[163] = v23;
  v26 = (unsigned __int8)a1[159];
  v27 = v22 + (v25 >> 8);
  a1[162] = v25;
  v28 = (unsigned __int8)a1[158];
  v29 = v24 + (v27 >> 8);
  a1[161] = v27;
  v30 = (unsigned __int8)a1[157];
  v31 = v26 + (v29 >> 8);
  a1[160] = v29;
  LOBYTE(v29) = a1[156];
  v32 = v28 + (v31 >> 8);
  a1[159] = v31;
  v33 = v30 + (v32 >> 8);
  a1[158] = v32;
  a1[157] = v33;
  a1[156] = v29 + BYTE1(v33);
  return sub_163170((int)a1, a2, a3, a4, a5, 0, 0);
}
