void __fastcall sub_24FDDC(void **a1, char *a2, _BYTE *a3, int *a4)
{
  int v8; // r1
  char *v9; // r5
  unsigned int v10; // r0
  unsigned int v11; // r11
  size_t v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r7
  int v15; // r2
  char *v16; // r1
  int v17; // r3
  _DWORD *v18; // r2
  unsigned int v19; // r9
  char *v20; // r12
  int *v21; // r0
  int v22; // r8
  char *v23; // r3
  char *v24; // r8
  char *v25; // r4
  unsigned int v26; // r0
  _DWORD *v27; // r3
  _DWORD *v28; // r2
  int v29; // r5
  int v30; // r1
  char *v31; // r12
  char *v32; // r0
  int v33; // r9
  int v34; // r12
  int v35; // r3
  char *v36; // r9
  _DWORD *v37; // r4
  _DWORD *v38; // r0
  int v39; // r11
  int v40; // r8
  int v41; // r10
  int v42; // r9
  int v43; // r12
  int v44; // [sp+4h] [bp-8h]
  int v45; // [sp+4h] [bp-8h]

  v8 = a2 - (_BYTE *)*a1;
  v9 = a2;
  v10 = -1431655765 * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( !v10 )
  {
    v11 = 1;
    goto LABEL_34;
  }
  v11 = 2 * v10;
  if ( v10 > 2 * v10 )
  {
    v11 = 178956970;
    v12 = -16;
LABEL_4:
    v44 = v8;
    v13 = sub_9836C(v12);
    v8 = v44;
    v14 = v13;
    goto LABEL_5;
  }
  if ( v11 > 0xAAAAAAA )
  {
    v11 = 178956970;
    v12 = -16;
    goto LABEL_4;
  }
  if ( v11 )
  {
LABEL_34:
    v12 = 24 * v11;
    goto LABEL_4;
  }
  v14 = 0;
LABEL_5:
  if ( (_DWORD *)((char *)v14 + v8) )
  {
    v15 = *a4;
    *(_DWORD *)((char *)v14 + v8) = (char *)v14 + v8 + 8;
    sub_248B24((_DWORD *)((char *)v14 + v8), a3, (int)&a3[v15]);
  }
  if ( *a1 == a2 )
  {
    v16 = (char *)v14;
  }
  else
  {
    v17 = (int)*a1 + 24;
    v18 = v14 + 2;
    v16 = (char *)v14;
    v19 = v11;
    v20 = (char *)&v14[6 * ((178956971 * ((unsigned int)&a2[-v17] >> 3)) & 0x1FFFFFFF) + 6];
    do
    {
      if ( v16 )
      {
        *(v18 - 2) = v18;
        v21 = (int *)(v17 - 16);
        v22 = *(_DWORD *)(v17 - 24);
        if ( v22 == v17 - 16 )
        {
          v39 = *v21;
          v45 = *(_DWORD *)(v17 - 8);
          v40 = *(_DWORD *)(v17 - 4);
          v18[1] = *(_DWORD *)(v17 - 12);
          *v18 = v39;
          v18[3] = v40;
          v18[2] = v45;
        }
        else
        {
          *(v18 - 2) = v22;
          *v18 = *(_DWORD *)(v17 - 16);
        }
        *(v18 - 1) = *(_DWORD *)(v17 - 20);
        *(_DWORD *)(v17 - 24) = v21;
        *(_DWORD *)(v17 - 20) = 0;
        *(_BYTE *)(v17 - 16) = 0;
      }
      v16 += 24;
      v17 += 24;
      v18 += 6;
    }
    while ( v16 != v20 );
    v11 = v19;
  }
  v23 = (char *)a1[1];
  v24 = v16 + 24;
  if ( v23 != a2 )
  {
    v25 = a2 + 24;
    v26 = (unsigned int)(v23 - v25) >> 3;
    v27 = v16 + 32;
    v28 = v16 + 24;
    v29 = (178956971 * v26) & 0x1FFFFFFF;
    v30 = (int)&v16[24 * v29 + 48];
    do
    {
      if ( v28 )
      {
        v31 = (char *)*((_DWORD *)v25 - 6);
        v32 = v25 - 16;
        *(v27 - 2) = v27;
        if ( v31 == v25 - 16 )
        {
          v41 = *((_DWORD *)v25 - 3);
          v42 = *((_DWORD *)v25 - 2);
          *v27 = *(_DWORD *)v32;
          v43 = *((_DWORD *)v25 - 1);
          v27[1] = v41;
          v27[2] = v42;
          v27[3] = v43;
        }
        else
        {
          v33 = *((_DWORD *)v25 - 4);
          *(v27 - 2) = v31;
          *v27 = v33;
        }
        v34 = *((_DWORD *)v25 - 5);
        *((_DWORD *)v25 - 6) = v32;
        *(v25 - 16) = 0;
        *(v27 - 1) = v34;
        *((_DWORD *)v25 - 5) = 0;
      }
      v28 += 6;
      v25 += 24;
      v27 += 6;
    }
    while ( v28 != (_DWORD *)v30 );
    v35 = v29 + 1;
    v9 = (char *)a1[1];
    v24 += 24 * v35;
  }
  v36 = (char *)*a1;
  if ( *a1 != v9 )
  {
    v37 = v36 + 8;
    do
    {
      v38 = (_DWORD *)*(v37 - 2);
      if ( v38 != v37 )
        sub_339E64(v38);
      v36 += 24;
      v37 += 6;
    }
    while ( v36 != v9 );
    v9 = (char *)*a1;
  }
  if ( v9 )
    sub_339E64(v9);
  *a1 = v14;
  a1[1] = v24;
  a1[2] = &v14[6 * v11];
}
