void __fastcall sub_250124(void **a1, char *a2, char *a3)
{
  char *v6; // r5
  int v7; // r8
  int v8; // r0
  unsigned int v9; // r11
  size_t v10; // r0
  char *v11; // r7
  size_t v12; // r0
  char *v13; // r1
  int v14; // r3
  _DWORD *v15; // r2
  char *v16; // r8
  char *v17; // r12
  int *v18; // r0
  int v19; // r5
  char *v20; // r3
  char *v21; // r8
  char *v22; // r4
  unsigned int v23; // r0
  _DWORD *v24; // r3
  char *v25; // r2
  int v26; // r5
  int v27; // r1
  char *v28; // r12
  char *v29; // r0
  int v30; // r9
  int v31; // r12
  int v32; // r3
  char *v33; // r9
  _DWORD *v34; // r4
  _DWORD *v35; // r0
  int v36; // r10
  int v37; // r5
  int v38; // r10
  int v39; // r9
  int v40; // r12
  int v41; // [sp+4h] [bp-8h]

  v6 = a2;
  v7 = a2 - (_BYTE *)*a1;
  v8 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( !(-1431655765 * v8) )
  {
    v9 = 1;
    goto LABEL_34;
  }
  v9 = 1431655766 * v8;
  if ( -1431655765 * v8 > (unsigned int)(1431655766 * v8) )
  {
    v9 = 178956970;
    v10 = -16;
LABEL_4:
    v11 = (char *)sub_9836C(v10);
    goto LABEL_5;
  }
  if ( v9 > 0xAAAAAAA )
  {
    v9 = 178956970;
    v10 = -16;
    goto LABEL_4;
  }
  if ( v9 )
  {
LABEL_34:
    v10 = 24 * v9;
    goto LABEL_4;
  }
  v11 = 0;
LABEL_5:
  if ( &v11[v7] )
  {
    *(_DWORD *)&v11[v7] = &v11[v7 + 8];
    v12 = strlen(a3);
    sub_248B24(&v11[v7], a3, (int)&a3[v12]);
  }
  if ( *a1 == a2 )
  {
    v13 = v11;
  }
  else
  {
    v14 = (int)*a1 + 24;
    v15 = v11 + 8;
    v13 = v11;
    v16 = v6;
    v17 = &v11[24 * ((178956971 * ((unsigned int)&a2[-v14] >> 3)) & 0x1FFFFFFF) + 24];
    do
    {
      if ( v13 )
      {
        *(v15 - 2) = v15;
        v18 = (int *)(v14 - 16);
        v19 = *(_DWORD *)(v14 - 24);
        if ( v19 == v14 - 16 )
        {
          v36 = *v18;
          v41 = *(_DWORD *)(v14 - 8);
          v37 = *(_DWORD *)(v14 - 4);
          v15[1] = *(_DWORD *)(v14 - 12);
          *v15 = v36;
          v15[3] = v37;
          v15[2] = v41;
        }
        else
        {
          *(v15 - 2) = v19;
          *v15 = *(_DWORD *)(v14 - 16);
        }
        *(v15 - 1) = *(_DWORD *)(v14 - 20);
        *(_DWORD *)(v14 - 24) = v18;
        *(_DWORD *)(v14 - 20) = 0;
        *(_BYTE *)(v14 - 16) = 0;
      }
      v13 += 24;
      v14 += 24;
      v15 += 6;
    }
    while ( v13 != v17 );
    v6 = v16;
  }
  v20 = (char *)a1[1];
  v21 = v13 + 24;
  if ( v20 != a2 )
  {
    v22 = a2 + 24;
    v23 = (unsigned int)(v20 - v22) >> 3;
    v24 = v13 + 32;
    v25 = v13 + 24;
    v26 = (178956971 * v23) & 0x1FFFFFFF;
    v27 = (int)&v13[24 * v26 + 48];
    do
    {
      if ( v25 )
      {
        v28 = (char *)*((_DWORD *)v22 - 6);
        v29 = v22 - 16;
        *(v24 - 2) = v24;
        if ( v28 == v22 - 16 )
        {
          v38 = *((_DWORD *)v22 - 3);
          v39 = *((_DWORD *)v22 - 2);
          *v24 = *(_DWORD *)v29;
          v40 = *((_DWORD *)v22 - 1);
          v24[1] = v38;
          v24[2] = v39;
          v24[3] = v40;
        }
        else
        {
          v30 = *((_DWORD *)v22 - 4);
          *(v24 - 2) = v28;
          *v24 = v30;
        }
        v31 = *((_DWORD *)v22 - 5);
        *((_DWORD *)v22 - 6) = v29;
        *(v22 - 16) = 0;
        *(v24 - 1) = v31;
        *((_DWORD *)v22 - 5) = 0;
      }
      v25 += 24;
      v22 += 24;
      v24 += 6;
    }
    while ( v25 != (char *)v27 );
    v32 = v26 + 1;
    v6 = (char *)a1[1];
    v21 += 24 * v32;
  }
  v33 = (char *)*a1;
  if ( *a1 != v6 )
  {
    v34 = v33 + 8;
    do
    {
      v35 = (_DWORD *)*(v34 - 2);
      if ( v35 != v34 )
        sub_339E64(v35);
      v33 += 24;
      v34 += 6;
    }
    while ( v6 != v33 );
    v6 = (char *)*a1;
  }
  if ( v6 )
    sub_339E64(v6);
  *a1 = v11;
  a1[1] = v21;
  a1[2] = &v11[24 * v9];
}
