void __fastcall sub_C5504(void **a1, char *a2, _DWORD *a3)
{
  char *v6; // r5
  int v7; // r9
  int v8; // r0
  unsigned int v9; // r8
  size_t v10; // r11
  char *v11; // r7
  char *v12; // r11
  int v13; // r8
  char *v14; // r3
  _DWORD *v15; // r1
  _DWORD *v16; // r2
  int v17; // r0
  int v18; // r0
  int v19; // r3
  _DWORD *v20; // r1
  char *v21; // r2
  char *v22; // r8
  char *v23; // r12
  int *v24; // r0
  int *v25; // r5
  char *v26; // r3
  char *v27; // r4
  unsigned int v28; // r2
  _DWORD *v29; // r3
  unsigned int v30; // r1
  char *v31; // r2
  char *v32; // r0
  int v33; // lr
  int v34; // r0
  char *v35; // r9
  _DWORD *v36; // r4
  _DWORD *v37; // r0
  bool v38; // zf
  int v39; // r10
  int v40; // r5
  int v41; // r5
  int v42; // lr
  int v43; // r0
  int v44; // lr
  int v45; // r12
  int v46; // r1
  int v47; // [sp+4h] [bp-8h]

  v6 = a2;
  v7 = a2 - (_BYTE *)*a1;
  v8 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( !(-1431655765 * v8) )
  {
    v9 = 1;
    goto LABEL_36;
  }
  v9 = 1431655766 * v8;
  if ( -1431655765 * v8 > (unsigned int)(1431655766 * v8) || v9 > 0xAAAAAAA )
  {
    v10 = -16;
LABEL_4:
    v11 = (char *)sub_9836C(v10);
    v12 = &v11[v10];
    v13 = (int)(v11 + 24);
    goto LABEL_5;
  }
  if ( v9 )
  {
LABEL_36:
    v10 = 24 * v9;
    goto LABEL_4;
  }
  v12 = 0;
  v13 = 24;
  v11 = 0;
LABEL_5:
  v14 = &v11[v7];
  if ( &v11[v7] )
  {
    v16 = a3 + 2;
    v15 = (_DWORD *)*a3;
    *(_DWORD *)&v11[v7] = v14 + 8;
    if ( v15 == a3 + 2 )
    {
      v44 = a3[3];
      v45 = a3[4];
      *((_DWORD *)v14 + 2) = *v16;
      v46 = a3[5];
      *((_DWORD *)v14 + 3) = v44;
      *((_DWORD *)v14 + 4) = v45;
      *((_DWORD *)v14 + 5) = v46;
    }
    else
    {
      v17 = a3[2];
      *(_DWORD *)v14 = v15;
      *((_DWORD *)v14 + 2) = v17;
    }
    v18 = a3[1];
    *a3 = v16;
    a3[1] = 0;
    *((_DWORD *)v14 + 1) = v18;
    *((_BYTE *)a3 + 8) = 0;
  }
  if ( *a1 != a2 )
  {
    v19 = (int)*a1 + 24;
    v20 = v11 + 8;
    v21 = v11;
    v22 = v6;
    v23 = &v11[24 * ((178956971 * ((unsigned int)&a2[-v19] >> 3)) & 0x1FFFFFFF) + 24];
    while ( 1 )
    {
      v24 = (int *)(v19 - 16);
      if ( v21 )
      {
        *(v20 - 2) = v20;
        v25 = *(int **)(v19 - 24);
        if ( v25 == v24 )
        {
          v39 = *v24;
          v47 = *(_DWORD *)(v19 - 8);
          v40 = *(_DWORD *)(v19 - 4);
          v20[1] = *(_DWORD *)(v19 - 12);
          *v20 = v39;
          v20[3] = v40;
          v20[2] = v47;
        }
        else
        {
          *(v20 - 2) = v25;
          *v20 = *(_DWORD *)(v19 - 16);
        }
        *(v20 - 1) = *(_DWORD *)(v19 - 20);
        *(_DWORD *)(v19 - 24) = v24;
        *(_DWORD *)(v19 - 20) = 0;
        *(_BYTE *)(v19 - 16) = 0;
      }
      v19 += 24;
      v20 += 6;
      if ( v21 + 24 == v23 )
        break;
      v21 += 24;
    }
    v6 = v22;
    v13 = (int)(v21 + 48);
  }
  v26 = (char *)a1[1];
  if ( v26 != a2 )
  {
    v27 = a2 + 24;
    v28 = (unsigned int)(v26 - v27) >> 3;
    v29 = (_DWORD *)(v13 + 8);
    v30 = v13 + 24 * (((178956971 * v28) & 0x1FFFFFFF) + 1);
    do
    {
      v31 = v27 - 16;
      if ( v13 )
      {
        v32 = (char *)*((_DWORD *)v27 - 6);
        *(v29 - 2) = v29;
        if ( v32 == v31 )
        {
          v41 = *((_DWORD *)v27 - 3);
          v42 = *((_DWORD *)v27 - 2);
          *v29 = *(_DWORD *)v31;
          v43 = *((_DWORD *)v27 - 1);
          v29[1] = v41;
          v29[2] = v42;
          v29[3] = v43;
        }
        else
        {
          v33 = *((_DWORD *)v27 - 4);
          *(v29 - 2) = v32;
          *v29 = v33;
        }
        v34 = *((_DWORD *)v27 - 5);
        *((_DWORD *)v27 - 6) = v31;
        *(v27 - 16) = 0;
        *(v29 - 1) = v34;
        *((_DWORD *)v27 - 5) = 0;
      }
      v13 += 24;
      v27 += 24;
      v29 += 6;
    }
    while ( v13 != v30 );
    v6 = (char *)a1[1];
  }
  v35 = (char *)*a1;
  if ( *a1 != v6 )
  {
    v36 = v35 + 8;
    do
    {
      v37 = (_DWORD *)*(v36 - 2);
      v35 += 24;
      v38 = v37 == v36;
      v36 += 6;
      if ( !v38 )
        sub_339E64(v37);
    }
    while ( v6 != v35 );
    v6 = (char *)*a1;
  }
  if ( v6 )
    sub_339E64(v6);
  *a1 = v11;
  a1[1] = (void *)v13;
  a1[2] = v12;
}
