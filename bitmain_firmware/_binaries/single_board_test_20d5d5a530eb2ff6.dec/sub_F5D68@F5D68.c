int __fastcall sub_F5D68(_DWORD *a1, int a2, int a3)
{
  int v4; // r3
  _DWORD *v5; // r12
  _DWORD *v6; // r0
  int v9; // lr
  int v10; // r4
  int v11; // r1
  int v12; // r2
  int v13; // r7
  int v14; // r6
  int v15; // r5
  _DWORD *v16; // r4
  int v17; // r1
  int v18; // r2
  _DWORD *v19; // r0
  int v20; // r8
  int v21; // r6
  int result; // r0
  int v23; // r12
  _DWORD *v24; // r5
  int v25; // r7
  int v26; // r9
  int v27; // lr
  unsigned __int8 v28; // r3
  int v29; // r11
  int v30; // r6
  int v31; // r10
  int v32; // r9
  char v33; // r0
  int v34; // r11
  int v35; // lr
  unsigned __int8 v36; // r3
  int v37; // r0
  int v38; // lr
  int v39; // r7
  unsigned __int8 v40; // r3
  int v41; // r10
  char v42; // r0
  int v43; // r9
  unsigned __int8 v44; // r3
  int v45; // r7
  int v46; // r3
  int v47; // r7
  int v48; // r3
  int v49; // r7
  int v50; // r6
  int v51; // r7
  int v52; // r12
  int *v53; // r7
  int v54; // r8
  int v55; // r3
  char v56; // r5
  int v57; // r0
  int v58; // r9
  char v59; // r6
  int v60; // lr
  int v61; // r10
  int v62; // r6
  int v63; // r5
  int v64; // r8
  int v65; // r6
  char v66; // r3
  int v67; // lr
  int v68; // r6
  char v69; // r3
  int v70; // r5
  int v71; // [sp+0h] [bp-Ch]

  v4 = 0;
  v5 = a1 + 2;
  v6 = a1 + 31;
  *a1 = 0;
  a1[1] = 0;
  do
  {
    *(v6 - 29) = v4;
    v9 = v4 + 1;
    v10 = v4 + 2;
    v11 = v4 + 3;
    v12 = v4 + 4;
    v13 = v4 + 5;
    v14 = v4 + 6;
    v15 = v4 + 7;
    v4 += 8;
    __pld(v6);
    *(v6 - 28) = v9;
    *(v6 - 27) = v10;
    v6 += 8;
    *(v6 - 34) = v11;
    *(v6 - 33) = v12;
    *(v6 - 32) = v13;
    *(v6 - 31) = v14;
    *(v6 - 30) = v15;
  }
  while ( v4 != 248 );
  v16 = v5;
  v17 = a2;
  v18 = a3;
  v19 = a1 + 249;
  do
  {
    v19[1] = v4;
    ++v19;
    ++v4;
  }
  while ( v4 != 256 );
  v20 = 0;
  LOBYTE(v21) = 0;
  result = 0;
  v23 = 64;
  v24 = a1 + 17;
  do
  {
    v25 = *(v24 - 15);
    v26 = result + 2;
    if ( result + 1 == v17 )
      v27 = 0;
    else
      v27 = result + 1;
    __pld(v24);
    if ( result + 1 == v17 )
      v26 = 1;
    v28 = v21 + v25 + *(_BYTE *)(v18 + result);
    v29 = v26 + 1;
    if ( v17 == v26 )
      v29 = 1;
    v30 = v29 + 1;
    if ( v17 == v29 )
      v30 = 1;
    if ( v17 == v30 )
      v30 = 0;
    if ( v17 == v26 )
      v31 = 0;
    else
      v31 = v26;
    if ( v17 == v29 )
      v32 = 0;
    else
      v32 = v29;
    v20 += 8;
    *(v24 - 15) = v16[v28];
    v23 -= 2;
    v16[v28] = v25;
    v33 = *(_BYTE *)(v18 + v27);
    if ( v17 == v30 + 1 )
      v34 = 0;
    else
      v34 = v30 + 1;
    v35 = *(v24 - 14);
    v24 += 8;
    v36 = v28 + v33 + v35;
    v37 = v30 + 2;
    if ( v17 == v30 + 1 )
      v37 = 1;
    *(v24 - 22) = v16[v36];
    v16[v36] = v35;
    if ( v17 == v37 )
      v38 = 0;
    else
      v38 = v37;
    v39 = *(v24 - 21);
    v40 = v36 + *(_BYTE *)(v18 + v31) + v39;
    v41 = v37 + 1;
    if ( v17 == v37 )
      v41 = 1;
    *(v24 - 21) = v16[v40];
    v16[v40] = v39;
    v42 = *(_BYTE *)(v18 + v32);
    if ( v17 == v41 )
      v43 = 0;
    else
      v43 = v41;
    v71 = *(v24 - 20);
    v44 = v40 + v42 + v71;
    result = v41 + 1;
    if ( v17 == v41 )
      result = 1;
    if ( v17 == result )
      result = 0;
    *(v24 - 20) = v16[v44];
    v16[v44] = v71;
    v45 = *(v24 - 19);
    v46 = (unsigned __int8)(v44 + *(_BYTE *)(v18 + v30) + v45);
    *(v24 - 19) = v16[v46];
    v16[v46] = v45;
    v47 = *(v24 - 18);
    v48 = (unsigned __int8)(v46 + *(_BYTE *)(v18 + v34) + v47);
    *(v24 - 18) = v16[v48];
    v16[v48] = v47;
    v49 = *(v24 - 17);
    v50 = (unsigned __int8)(*(_BYTE *)(v18 + v38) + v49 + v48);
    *(v24 - 17) = v16[v50];
    v16[v50] = v49;
    v51 = *(v24 - 16);
    v21 = (unsigned __int8)(v50 + *(_BYTE *)(v18 + v43) + v51);
    *(v24 - 16) = v16[v21];
    v16[v21] = v51;
  }
  while ( v20 != 248 );
  v52 = (int)&v16[4 * v23 + 248];
  v53 = a1 + 250;
  do
  {
    v54 = *v53;
    v55 = result + 1;
    v56 = *(_BYTE *)(v18 + result);
    v57 = result + 2;
    if ( v17 == v55 )
    {
      v57 = 1;
      v58 = 0;
    }
    else
    {
      v58 = v55;
    }
    v59 = v21 + v54;
    if ( v17 == v57 )
      v60 = 0;
    else
      v60 = v57;
    v61 = v57 + 1;
    v62 = (unsigned __int8)(v59 + v56);
    if ( v17 == v57 )
      v61 = 1;
    if ( v17 == v61 )
      v63 = 0;
    else
      v63 = v61;
    result = v61 + 1;
    if ( v17 == v61 )
      result = 1;
    v53 += 4;
    if ( v17 == result )
      result = 0;
    *(v53 - 4) = v16[v62];
    v16[v62] = v54;
    v64 = *(v53 - 3);
    v65 = (unsigned __int8)(v62 + *(_BYTE *)(v18 + v58) + v64);
    *(v53 - 3) = v16[v65];
    v16[v65] = v64;
    v66 = *(_BYTE *)(v18 + v60);
    v67 = *(v53 - 2);
    v68 = (unsigned __int8)(v65 + v66 + v67);
    *(v53 - 2) = v16[v68];
    v16[v68] = v67;
    v69 = *(_BYTE *)(v18 + v63);
    v70 = *(v53 - 1);
    v21 = (unsigned __int8)(v68 + v69 + v70);
    *(v53 - 1) = v16[v21];
    v16[v21] = v70;
  }
  while ( v53 != (int *)v52 );
  return result;
}
