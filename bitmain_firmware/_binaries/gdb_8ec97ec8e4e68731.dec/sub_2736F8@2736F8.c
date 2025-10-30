void __fastcall sub_2736F8(_DWORD *a1, char *a2, _DWORD *a3)
{
  char *v4; // r12
  char *v5; // r8
  char *v8; // r5
  int v9; // r2
  unsigned int v10; // r7
  size_t v11; // r7
  char *v12; // r0
  char *v13; // r9
  int v14; // r10
  char *v15; // r3
  char *v16; // r5
  _DWORD *v17; // r1
  char *v18; // r3
  int v19; // r11
  int v20; // r2
  char v21; // r10
  int v22; // r10
  int v23; // r10
  int v24; // r10
  char *v25; // r4
  unsigned int v26; // r3
  char v27; // r5
  char v28; // lr
  char v29; // r0
  int v30; // r1
  char v31; // r5
  int v32; // lr
  int v33; // r0
  int v34; // r1
  void *v35; // r0
  bool v36; // zf
  unsigned int v37; // [sp+4h] [bp-8h]

  v4 = (char *)*a1;
  v5 = (char *)a1[1];
  v8 = &a2[-*a1];
  v9 = (int)&v5[-*a1] >> 2;
  if ( !(-1227133513 * v9) )
  {
    v10 = 1;
    goto LABEL_28;
  }
  v10 = 1840700270 * v9;
  if ( -1227133513 * v9 > (unsigned int)(1840700270 * v9) || v10 > 0x9249249 )
  {
    v11 = -4;
LABEL_4:
    v12 = (char *)sub_9836C(v11);
    v4 = (char *)*a1;
    v13 = v12;
    v5 = (char *)a1[1];
    v10 = (unsigned int)&v12[v11];
    v14 = (int)(v12 + 28);
    goto LABEL_5;
  }
  if ( v10 )
  {
LABEL_28:
    v11 = 28 * v10;
    goto LABEL_4;
  }
  v14 = 28;
  v13 = 0;
LABEL_5:
  v15 = &v8[(_DWORD)v13];
  if ( &v8[(_DWORD)v13] )
  {
    *(_DWORD *)&v8[(_DWORD)v13] = *a3;
    v15[4] = 0;
    v15[5] = 0;
    v15[6] = 0;
    *((_DWORD *)v15 + 2) = 0;
    v15[12] = 0;
    *((_DWORD *)v15 + 4) = 0;
    *((_DWORD *)v15 + 5) = 0;
    *((_DWORD *)v15 + 6) = 0;
  }
  if ( a2 != v4 )
  {
    v16 = v4 + 28;
    v17 = v4 + 28;
    v18 = v13;
    v37 = (920350135 * ((unsigned int)(a2 - (v4 + 28)) >> 2)) & 0x3FFFFFFF;
    do
    {
      if ( v18 )
      {
        v19 = *(v17 - 7);
        v20 = *(v17 - 5);
        v18[4] = *((_BYTE *)v17 - 24);
        v21 = *((_BYTE *)v17 - 23);
        *(_DWORD *)v18 = v19;
        *((_DWORD *)v18 + 2) = v20;
        v18[5] = v21;
        v18[6] = *((_BYTE *)v17 - 22);
        LOBYTE(v19) = *((_BYTE *)v17 - 16);
        *((_DWORD *)v18 + 5) = 0;
        *((_DWORD *)v18 + 6) = 0;
        *((_DWORD *)v18 + 4) = 0;
        v22 = *(v17 - 3);
        v18[12] = v19;
        *((_DWORD *)v18 + 4) = v22;
        *(v17 - 3) = 0;
        v23 = *((_DWORD *)v18 + 5);
        *((_DWORD *)v18 + 5) = *(v17 - 2);
        *(v17 - 2) = v23;
        v24 = *((_DWORD *)v18 + 6);
        *((_DWORD *)v18 + 6) = *(v17 - 1);
        *(v17 - 1) = v24;
      }
      v18 += 28;
      v17 += 7;
    }
    while ( v18 != &v13[28 * v37 + 28] );
    v14 = (int)&v13[28 * v37 + 56];
    if ( a2 == v5 )
      goto LABEL_19;
    goto LABEL_13;
  }
  if ( a2 != v5 )
  {
LABEL_13:
    v25 = a2 + 28;
    v26 = v14 + 28 * (((920350135 * ((unsigned int)(v5 - v25) >> 2)) & 0x3FFFFFFF) + 1);
    do
    {
      if ( v14 )
      {
        v27 = *(v25 - 24);
        v28 = *(v25 - 23);
        v29 = *(v25 - 22);
        *(_DWORD *)v14 = *((_DWORD *)v25 - 7);
        v30 = *((_DWORD *)v25 - 5);
        *(_BYTE *)(v14 + 4) = v27;
        *(_BYTE *)(v14 + 5) = v28;
        v31 = *(v25 - 16);
        v32 = *((_DWORD *)v25 - 3);
        *(_BYTE *)(v14 + 6) = v29;
        *(_DWORD *)(v14 + 8) = v30;
        v33 = *((_DWORD *)v25 - 2);
        v34 = *((_DWORD *)v25 - 1);
        *(_BYTE *)(v14 + 12) = v31;
        *(_DWORD *)(v14 + 16) = v32;
        *((_DWORD *)v25 - 3) = 0;
        *(_DWORD *)(v14 + 20) = v33;
        *((_DWORD *)v25 - 2) = 0;
        *(_DWORD *)(v14 + 24) = v34;
        *((_DWORD *)v25 - 1) = 0;
      }
      v14 += 28;
      v25 += 28;
    }
    while ( v14 != v26 );
    if ( v4 == v5 )
      goto LABEL_23;
    v16 = v4 + 28;
    do
    {
LABEL_19:
      v35 = (void *)*((_DWORD *)v4 + 4);
      if ( v35 )
        sub_339E64(v35);
      v36 = v16 == v5;
      v4 = v16;
      v16 += 28;
    }
    while ( !v36 );
LABEL_23:
    v5 = (char *)*a1;
  }
  if ( v5 )
    sub_339E64(v5);
  *a1 = v13;
  a1[1] = v14;
  a1[2] = v10;
}
