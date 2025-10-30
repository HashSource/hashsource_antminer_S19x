void __fastcall sub_272E68(void **a1, int *a2, int *a3)
{
  char *v3; // r4
  int v4; // r1
  int v5; // r2
  char *v7; // r5
  int v9; // r11
  size_t v11; // r8
  char *v12; // r0
  char *v13; // r9
  char *v14; // r3
  int v15; // r1
  char *v16; // r11
  void *v17; // r0
  _DWORD *v18; // r12
  char *v19; // r7
  char *v20; // r1
  char *v21; // r2
  char v22; // r10
  int v23; // r3
  char v24; // r10
  char v25; // r10
  int v26; // r3
  int v27; // r10
  int v28; // r10
  int v29; // r10
  char *v30; // r5
  unsigned int v31; // r2
  int v32; // r0
  int v33; // lr
  char v34; // r1
  char v35; // r1
  int v36; // r1
  int v37; // r1
  int v38; // r1
  void *v39; // r0
  bool v40; // zf
  unsigned int v41; // [sp+4h] [bp-8h]

  v3 = (char *)a1[1];
  if ( v3 != a1[2] )
  {
    if ( v3 )
    {
      v4 = *a2;
      v5 = *a3;
      v3[4] = 0;
      *(_DWORD *)v3 = v4;
      *((_DWORD *)v3 + 2) = v5;
      v3[5] = 0;
      v3[6] = 0;
      v3[12] = 0;
      *((_DWORD *)v3 + 4) = 0;
      *((_DWORD *)v3 + 5) = 0;
      *((_DWORD *)v3 + 6) = 0;
    }
    a1[1] = v3 + 28;
    return;
  }
  v7 = (char *)a1[1];
  v9 = v3 - (_BYTE *)*a1;
  if ( !(-1227133513 * (v9 >> 2)) )
  {
    v11 = 28;
    goto LABEL_8;
  }
  v11 = 1840700270 * (v9 >> 2);
  if ( -1227133513 * (v9 >> 2) > v11 || v11 > 0x9249249 )
  {
    v11 = -4;
LABEL_8:
    v12 = (char *)sub_9836C(v11);
    v3 = (char *)a1[1];
    v13 = v12;
    goto LABEL_9;
  }
  if ( v11 )
  {
    v11 = 8 * (v9 >> 2);
    goto LABEL_8;
  }
  v13 = 0;
LABEL_9:
  v14 = &v13[v9];
  if ( &v13[v9] )
  {
    v15 = *a3;
    *(_DWORD *)&v13[v9] = *a2;
    *((_DWORD *)v14 + 2) = v15;
    v14[4] = 0;
    v14[5] = 0;
    v14[6] = 0;
    v14[12] = 0;
    *((_DWORD *)v14 + 4) = 0;
    *((_DWORD *)v14 + 5) = 0;
    *((_DWORD *)v14 + 6) = 0;
  }
  v16 = (char *)*a1;
  v17 = v3;
  v18 = *a1;
  if ( v7 == *a1 )
  {
    v29 = (int)(v13 + 28);
    if ( v7 == v3 )
      goto LABEL_29;
  }
  else
  {
    v19 = v16 + 28;
    v20 = v16 + 28;
    v21 = v13;
    v41 = (920350135 * ((unsigned int)(v7 - (v16 + 28)) >> 2)) & 0x3FFFFFFF;
    do
    {
      if ( v21 )
      {
        v22 = *(v20 - 24);
        *(_DWORD *)v21 = *((_DWORD *)v20 - 7);
        v23 = *((_DWORD *)v20 - 5);
        v21[4] = v22;
        v24 = *(v20 - 23);
        *((_DWORD *)v21 + 2) = v23;
        v21[5] = v24;
        v21[6] = *(v20 - 22);
        v25 = *(v20 - 16);
        *((_DWORD *)v21 + 5) = 0;
        *((_DWORD *)v21 + 6) = 0;
        *((_DWORD *)v21 + 4) = 0;
        v26 = *((_DWORD *)v20 - 3);
        v21[12] = v25;
        *((_DWORD *)v21 + 4) = v26;
        *((_DWORD *)v20 - 3) = 0;
        v27 = *((_DWORD *)v21 + 5);
        *((_DWORD *)v21 + 5) = *((_DWORD *)v20 - 2);
        *((_DWORD *)v20 - 2) = v27;
        v28 = *((_DWORD *)v21 + 6);
        *((_DWORD *)v21 + 6) = *((_DWORD *)v20 - 1);
        *((_DWORD *)v20 - 1) = v28;
      }
      v21 += 28;
      v20 += 28;
    }
    while ( v21 != &v13[28 * v41 + 28] );
    v29 = (int)&v13[28 * v41 + 56];
    if ( v7 == v3 )
      goto LABEL_24;
  }
  v30 = v7 + 28;
  v31 = v29 + 28 * (((920350135 * ((unsigned int)(v3 - v30) >> 2)) & 0x3FFFFFFF) + 1);
  do
  {
    if ( v29 )
    {
      v32 = *((_DWORD *)v30 - 5);
      v33 = *((_DWORD *)v30 - 7);
      *(_BYTE *)(v29 + 4) = *(v30 - 24);
      v34 = *(v30 - 23);
      *(_DWORD *)v29 = v33;
      *(_BYTE *)(v29 + 5) = v34;
      v35 = *(v30 - 22);
      *(_DWORD *)(v29 + 8) = v32;
      *(_BYTE *)(v29 + 6) = v35;
      LOBYTE(v32) = *(v30 - 16);
      *(_DWORD *)(v29 + 20) = 0;
      *(_DWORD *)(v29 + 24) = 0;
      *(_DWORD *)(v29 + 16) = 0;
      v36 = *((_DWORD *)v30 - 3);
      *(_BYTE *)(v29 + 12) = v32;
      *(_DWORD *)(v29 + 16) = v36;
      *((_DWORD *)v30 - 3) = 0;
      v37 = *(_DWORD *)(v29 + 20);
      *(_DWORD *)(v29 + 20) = *((_DWORD *)v30 - 2);
      *((_DWORD *)v30 - 2) = v37;
      v38 = *(_DWORD *)(v29 + 24);
      *(_DWORD *)(v29 + 24) = *((_DWORD *)v30 - 1);
      *((_DWORD *)v30 - 1) = v38;
    }
    v29 += 28;
    v30 += 28;
  }
  while ( v29 != v31 );
  if ( v16 != v3 )
  {
    v19 = v16 + 28;
    do
    {
LABEL_24:
      v39 = (void *)v18[4];
      if ( v39 )
        sub_339E64(v39);
      v40 = v19 == v3;
      v18 = v19;
      v19 += 28;
    }
    while ( !v40 );
    v17 = *a1;
    goto LABEL_29;
  }
  v17 = v16;
LABEL_29:
  if ( v17 )
    sub_339E64(v17);
  *a1 = v13;
  a1[2] = &v13[v11];
  a1[1] = (void *)v29;
}
