void __fastcall sub_6FCBC(char **a1, char *a2, _DWORD *a3, _DWORD *a4, int *a5)
{
  char *v7; // r0
  char *v10; // r5
  int v11; // r9
  unsigned int v12; // r1
  unsigned int v13; // r8
  int v14; // r8
  int v15; // r0
  int v16; // r3
  _DWORD *v17; // r7
  int v18; // r8
  _DWORD *v19; // r2
  _DWORD *v20; // r0
  _DWORD *v21; // r1
  int v22; // r3
  int v23; // r0
  int v24; // r12
  int v25; // r2
  _DWORD *v26; // r3
  _DWORD *v27; // lr
  _DWORD *v28; // r0
  _DWORD *v29; // r8
  int v30; // r1
  char *v31; // r3
  char *v32; // r4
  unsigned int v33; // r12
  char *v34; // r2
  char *v35; // r0
  int v36; // r3
  int v37; // r0
  int v38; // r3
  char *v39; // r4
  void *v40; // r0
  void *v41; // r0
  void *v42; // r3
  int v43; // r10
  int v44; // r9
  int v45; // r8
  int v46; // r5
  int v47; // lr
  int v48; // r0
  int v49; // lr
  int v50; // r0
  int v51; // r3
  int v52; // [sp+4h] [bp-8h]

  v7 = *a1;
  v10 = a2;
  v11 = a2 - v7;
  v12 = (a1[1] - v7) >> 5;
  if ( !v12 )
  {
    v13 = 1;
    goto LABEL_37;
  }
  v13 = 2 * v12;
  if ( v12 > 2 * v12 || v13 > 0x7FFFFFF )
  {
    v14 = -32;
LABEL_4:
    v15 = sub_9836C(v14);
    v16 = v15 + v14;
    v17 = (_DWORD *)v15;
    v18 = v15 + 32;
    v52 = v16;
    goto LABEL_5;
  }
  if ( v13 )
  {
LABEL_37:
    v14 = 32 * v13;
    goto LABEL_4;
  }
  v17 = 0;
  v52 = 0;
  v18 = 32;
LABEL_5:
  v19 = (_DWORD *)((char *)v17 + v11);
  if ( (_DWORD *)((char *)v17 + v11) )
  {
    v21 = a4 + 2;
    v20 = (_DWORD *)*a4;
    *(_DWORD *)((char *)v17 + v11) = *a3;
    v19[1] = v19 + 3;
    if ( v20 == a4 + 2 )
    {
      v49 = a4[3];
      v50 = a4[4];
      v19[3] = *v21;
      v51 = a4[5];
      v19[4] = v49;
      v19[5] = v50;
      v19[6] = v51;
    }
    else
    {
      v22 = a4[2];
      v19[1] = v20;
      v19[3] = v22;
    }
    v23 = a4[1];
    *((_BYTE *)a4 + 8) = 0;
    v24 = *a5;
    *a4 = v21;
    a4[1] = 0;
    v19[7] = v24;
    v19[2] = v23;
    *a5 = 0;
  }
  if ( *a1 != a2 )
  {
    v25 = (int)(*a1 + 32);
    v26 = v17;
    v27 = (_DWORD *)((char *)v17 + ((unsigned int)&a2[-v25] & 0xFFFFFFE0) + 32);
    while ( 1 )
    {
      v28 = (_DWORD *)(v25 - 20);
      if ( v26 )
      {
        *v26 = *(_DWORD *)(v25 - 32);
        v26[1] = v26 + 3;
        v29 = *(_DWORD **)(v25 - 28);
        if ( v28 == v29 )
        {
          v43 = *(_DWORD *)(v25 - 16);
          v44 = *(_DWORD *)(v25 - 12);
          v45 = *(_DWORD *)(v25 - 8);
          v26[3] = *v28;
          v26[4] = v43;
          v26[5] = v44;
          v26[6] = v45;
        }
        else
        {
          v26[1] = v29;
          v26[3] = *(_DWORD *)(v25 - 20);
        }
        v30 = *(_DWORD *)(v25 - 4);
        v26[2] = *(_DWORD *)(v25 - 24);
        *(_DWORD *)(v25 - 28) = v28;
        *(_DWORD *)(v25 - 24) = 0;
        *(_BYTE *)(v25 - 20) = 0;
        *(_DWORD *)(v25 - 4) = 0;
        v26[7] = v30;
      }
      v25 += 32;
      if ( v26 + 8 == v27 )
        break;
      v26 += 8;
    }
    v18 = (int)(v26 + 16);
  }
  v31 = a1[1];
  if ( v31 != a2 )
  {
    v32 = a2 + 32;
    v33 = v18 + ((v31 - v32) & 0xFFFFFFE0) + 32;
    do
    {
      v34 = v32 - 20;
      if ( v18 )
      {
        v35 = (char *)*((_DWORD *)v32 - 7);
        *(_DWORD *)v18 = *((_DWORD *)v32 - 8);
        *(_DWORD *)(v18 + 4) = v18 + 12;
        if ( v35 == v34 )
        {
          v46 = *((_DWORD *)v32 - 4);
          v47 = *((_DWORD *)v32 - 3);
          *(_DWORD *)(v18 + 12) = *(_DWORD *)v34;
          v48 = *((_DWORD *)v32 - 2);
          *(_DWORD *)(v18 + 16) = v46;
          *(_DWORD *)(v18 + 20) = v47;
          *(_DWORD *)(v18 + 24) = v48;
        }
        else
        {
          v36 = *((_DWORD *)v32 - 5);
          *(_DWORD *)(v18 + 4) = v35;
          *(_DWORD *)(v18 + 12) = v36;
        }
        v37 = *((_DWORD *)v32 - 6);
        v38 = *((_DWORD *)v32 - 1);
        *((_DWORD *)v32 - 7) = v34;
        *(v32 - 20) = 0;
        *(_DWORD *)(v18 + 8) = v37;
        *((_DWORD *)v32 - 6) = 0;
        *(_DWORD *)(v18 + 28) = v38;
        *((_DWORD *)v32 - 1) = 0;
      }
      v18 += 32;
      v32 += 32;
    }
    while ( v18 != v33 );
    v10 = a1[1];
  }
  v39 = *a1;
  if ( *a1 != v10 )
  {
    do
    {
      v40 = (void *)*((_DWORD *)v39 + 7);
      if ( v40 )
        free(v40);
      v41 = (void *)*((_DWORD *)v39 + 1);
      v42 = v39 + 12;
      v39 += 32;
      if ( v41 != v42 )
        sub_339E64(v41);
    }
    while ( v39 != v10 );
    v10 = *a1;
  }
  if ( v10 )
    sub_339E64(v10);
  *a1 = (char *)v17;
  a1[1] = (char *)v18;
  a1[2] = (char *)v52;
}
