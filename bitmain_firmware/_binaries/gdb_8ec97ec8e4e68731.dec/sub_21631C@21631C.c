void __fastcall sub_21631C(void **a1, char *a2, char **a3, int *a4)
{
  int v8; // r8
  char *v9; // r5
  unsigned int v10; // r0
  unsigned int v11; // r11
  size_t v12; // r0
  char *v13; // r7
  char *v14; // r1
  char *v15; // r8
  int v16; // r2
  size_t v17; // r0
  _BYTE *v18; // r3
  void *v19; // r2
  int v20; // r9
  char *v21; // r1
  int v22; // r3
  _DWORD *v23; // r2
  char *v24; // r8
  char *v25; // r12
  int *v26; // r0
  int v27; // r7
  int v28; // r7
  char *v29; // r3
  char *v30; // r8
  char *v31; // r4
  unsigned int v32; // r0
  _DWORD *v33; // r3
  char *v34; // r2
  int v35; // r5
  int v36; // r1
  char *v37; // r12
  char *v38; // r0
  int v39; // r9
  int v40; // r9
  int v41; // r12
  int v42; // r3
  char *v43; // r9
  _DWORD *v44; // r4
  _DWORD *v45; // r0
  int v46; // r10
  int v47; // r7
  int v48; // r10
  int v49; // r9
  int v50; // r12
  char *v51; // [sp+4h] [bp-20h]
  int v52; // [sp+4h] [bp-20h]
  void *ptr[2]; // [sp+8h] [bp-1Ch] BYREF
  _BYTE v54[20]; // [sp+10h] [bp-14h] BYREF

  v8 = a2 - (_BYTE *)*a1;
  v9 = a2;
  v10 = -1227133513 * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2);
  if ( !v10 )
  {
    v11 = 1;
    goto LABEL_39;
  }
  v11 = 2 * v10;
  if ( v10 > 2 * v10 )
  {
    v11 = 153391689;
    v12 = -4;
LABEL_4:
    v13 = (char *)sub_9836C(v12);
    goto LABEL_5;
  }
  if ( v11 > 0x9249249 )
  {
    v11 = 153391689;
    v12 = -4;
    goto LABEL_4;
  }
  if ( v11 )
  {
LABEL_39:
    v12 = 28 * v11;
    goto LABEL_4;
  }
  v13 = 0;
LABEL_5:
  v14 = *a3;
  v15 = &v13[v8];
  ptr[0] = v54;
  if ( v14 )
  {
    v51 = v14;
    v17 = strlen(v14);
    v14 = v51;
    v16 = (int)&v51[v17];
  }
  else
  {
    v16 = -1;
  }
  sub_211AC4(ptr, v14, v16);
  v18 = ptr[0];
  if ( v15 )
  {
    v19 = ptr[1];
    *(_DWORD *)v15 = v15 + 8;
    v20 = *a4;
    sub_211AC4(v15, v18, (int)v19 + (_DWORD)v18);
    v18 = ptr[0];
    *((_DWORD *)v15 + 6) = v20;
  }
  if ( v18 != v54 )
    sub_339E64(v18);
  if ( *a1 == a2 )
  {
    v21 = v13;
  }
  else
  {
    v22 = (int)*a1 + 28;
    v23 = v13 + 8;
    v21 = v13;
    v24 = v13;
    v25 = &v13[28 * ((920350135 * ((unsigned int)&a2[-v22] >> 2)) & 0x3FFFFFFF) + 28];
    do
    {
      if ( v21 )
      {
        *(v23 - 2) = v23;
        v26 = (int *)(v22 - 20);
        v27 = *(_DWORD *)(v22 - 28);
        if ( v27 == v22 - 20 )
        {
          v46 = *v26;
          v52 = *(_DWORD *)(v22 - 12);
          v47 = *(_DWORD *)(v22 - 8);
          v23[1] = *(_DWORD *)(v22 - 16);
          *v23 = v46;
          v23[3] = v47;
          v23[2] = v52;
        }
        else
        {
          *(v23 - 2) = v27;
          *v23 = *(_DWORD *)(v22 - 20);
        }
        v28 = *(_DWORD *)(v22 - 4);
        *(v23 - 1) = *(_DWORD *)(v22 - 24);
        *(_DWORD *)(v22 - 28) = v26;
        *(_DWORD *)(v22 - 24) = 0;
        *(_BYTE *)(v22 - 20) = 0;
        v23[4] = v28;
      }
      v21 += 28;
      v22 += 28;
      v23 += 7;
    }
    while ( v21 != v25 );
    v13 = v24;
  }
  v29 = (char *)a1[1];
  v30 = v21 + 28;
  if ( v29 != a2 )
  {
    v31 = a2 + 28;
    v32 = (unsigned int)(v29 - v31) >> 2;
    v33 = v21 + 36;
    v34 = v21 + 28;
    v35 = (920350135 * v32) & 0x3FFFFFFF;
    v36 = (int)&v21[28 * v35 + 56];
    do
    {
      if ( v34 )
      {
        v37 = (char *)*((_DWORD *)v31 - 7);
        v38 = v31 - 20;
        *(v33 - 2) = v33;
        if ( v31 - 20 == v37 )
        {
          v48 = *((_DWORD *)v31 - 4);
          v49 = *((_DWORD *)v31 - 3);
          *v33 = *(_DWORD *)v38;
          v50 = *((_DWORD *)v31 - 2);
          v33[1] = v48;
          v33[2] = v49;
          v33[3] = v50;
        }
        else
        {
          v39 = *((_DWORD *)v31 - 5);
          *(v33 - 2) = v37;
          *v33 = v39;
        }
        v40 = *((_DWORD *)v31 - 6);
        v41 = *((_DWORD *)v31 - 1);
        *((_DWORD *)v31 - 7) = v38;
        *(v31 - 20) = 0;
        *(v33 - 1) = v40;
        *((_DWORD *)v31 - 6) = 0;
        v33[4] = v41;
      }
      v34 += 28;
      v31 += 28;
      v33 += 7;
    }
    while ( v34 != (char *)v36 );
    v42 = v35 + 1;
    v9 = (char *)a1[1];
    v30 += 28 * v42;
  }
  v43 = (char *)*a1;
  if ( *a1 != v9 )
  {
    v44 = v43 + 8;
    do
    {
      v45 = (_DWORD *)*(v44 - 2);
      if ( v45 != v44 )
        sub_339E64(v45);
      v43 += 28;
      v44 += 7;
    }
    while ( v43 != v9 );
    v9 = (char *)*a1;
  }
  if ( v9 )
    sub_339E64(v9);
  *a1 = v13;
  a1[1] = v30;
  a1[2] = &v13[28 * v11];
}
