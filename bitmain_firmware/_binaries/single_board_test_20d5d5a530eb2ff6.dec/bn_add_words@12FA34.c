int __fastcall bn_add_words(_DWORD *a1, _DWORD *a2, int *a3, int a4)
{
  int v4; // r12
  int *v5; // r8
  _DWORD *v6; // r7
  int *v7; // r6
  _DWORD *v8; // r5
  int v9; // lr
  int v10; // r4
  int v11; // r2
  int v12; // r4
  int v13; // lr
  bool v14; // cf
  int v15; // r4
  int v16; // r2
  int v17; // lr
  int v18; // r4
  int v19; // lr
  bool v20; // cf
  int v21; // r4
  int v22; // r2
  int v23; // lr
  int v24; // lr
  int v25; // r4
  bool v26; // cf
  int v27; // lr
  int v28; // r4
  int v29; // r12
  int v30; // r4
  int v31; // lr
  int v32; // r4
  int v33; // r5
  int v34; // r4
  _BOOL4 v35; // lr
  int v36; // r4
  int v37; // r5
  int v38; // r4
  int v39; // r5
  int v40; // r6
  int v41; // r5
  _BOOL4 v42; // r4
  int v43; // r5
  _BOOL4 v44; // lr
  int v45; // r3
  int v46; // r2
  int v47; // lr
  _BOOL4 v48; // r4
  int v49; // r3
  _BOOL4 v50; // lr

  if ( a4 <= 0 )
    return 0;
  v5 = a3;
  if ( (a4 & 0xFFFFFFFC) != 0 )
  {
    v6 = a2 + 4;
    v7 = a3 + 4;
    v8 = a1 + 4;
    v9 = 0;
    do
    {
      v10 = *(v6 - 4);
      a4 -= 4;
      v11 = *(v7 - 4);
      a2 = v6;
      v5 = v7;
      a1 = v8;
      v14 = __CFADD__(v10, v9);
      v12 = v10 + v9;
      v6 += 4;
      v13 = v14;
      v14 = __CFADD__(v12, v11);
      v7 += 4;
      *(v8 - 4) = v12 + v11;
      if ( __CFADD__(v12, v11) )
        v4 = 1;
      v15 = *(v6 - 7);
      if ( !v14 )
        v4 = 0;
      v16 = *(v7 - 7);
      v17 = v13 + v4;
      v8 += 4;
      v14 = __CFADD__(v17, v15);
      v18 = v17 + v15;
      v19 = v14;
      v20 = __CFADD__(v18, v16);
      *(v8 - 7) = v18 + v16;
      if ( __CFADD__(v18, v16) )
        v4 = 1;
      v21 = *(v6 - 6);
      if ( !v20 )
        v4 = 0;
      v22 = *(v7 - 6);
      v23 = v19 + v4;
      v14 = __CFADD__(v23, v21);
      v24 = v23 + v21;
      v25 = v14;
      v26 = __CFADD__(v24, v22);
      *(v8 - 6) = v24 + v22;
      if ( __CFADD__(v24, v22) )
        v4 = 1;
      v27 = *(v6 - 5);
      if ( !v26 )
        v4 = 0;
      v28 = v25 + v4;
      v29 = *(v7 - 5);
      v14 = __CFADD__(v28, v27);
      v30 = v28 + v27;
      v31 = v14;
      v14 = __CFADD__(v30, v29);
      v32 = v30 + v29;
      v4 = v14;
      *(v8 - 5) = v32;
      v9 = v31 + v4;
    }
    while ( (a4 & 0xFFFFFFFC) != 0 );
    if ( !a4 )
      return v9;
  }
  else
  {
    v9 = 0;
  }
  v33 = *v5;
  v34 = v9 + *a2;
  v35 = __CFADD__(v9, *a2);
  v14 = __CFADD__(v34, v33);
  v36 = v34 + v33;
  v37 = v14;
  *a1 = v36;
  v38 = v37 + v35;
  if ( a4 != 1 )
  {
    v39 = a2[1];
    v40 = v5[1];
    v14 = __CFADD__(v39, v38);
    v41 = v39 + v38;
    v42 = v14;
    v14 = __CFADD__(v41, v40);
    v43 = v41 + v40;
    v44 = v14;
    a1[1] = v43;
    v38 = v42 + v44;
    if ( a4 != 2 )
    {
      v45 = a2[2];
      v46 = v5[2];
      v47 = v45 + v38;
      v48 = __CFADD__(v45, v38);
      v49 = v47 + v46;
      v50 = __CFADD__(v47, v46);
      v38 = v48 + v50;
      a1[2] = v49;
    }
  }
  return v38;
}
