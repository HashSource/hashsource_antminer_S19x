void __fastcall sub_274FE4(void **a1, char *a2)
{
  char *v3; // r3
  char *v4; // r5
  int v5; // r6
  int v6; // r0
  unsigned int v7; // r8
  size_t v8; // r8
  _DWORD *v9; // r0
  _DWORD *v10; // r7
  int v11; // r4
  char *v12; // r2
  char *v13; // r3
  _DWORD *v14; // r4
  _DWORD *v15; // r1
  char *v16; // r2
  int v17; // r6
  char *v18; // r0
  char *v19; // r3
  char *v20; // r1
  unsigned int v21; // r2
  char *v22; // r3
  char *v23; // r0
  int v24; // r10
  int v25; // r6
  int v26; // r5
  int v27; // r12
  int v28; // r0
  char *v29; // r6
  void *v30; // r0
  void *v31; // r3
  int v32; // r10
  int v33; // r6
  int v34; // r0
  int v35; // r6
  int v36; // r5
  int v37; // r0

  v3 = (char *)*a1;
  v4 = a2;
  v5 = a2 - (_BYTE *)*a1;
  v6 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( !(954437177 * v6) )
  {
    v7 = 1;
    goto LABEL_33;
  }
  v7 = 1908874354 * v6;
  if ( 954437177 * v6 > (unsigned int)(1908874354 * v6) || v7 > 0x71C71C7 )
  {
    v8 = -1;
LABEL_4:
    v9 = sub_9836C(v8 * 4);
    v3 = (char *)*a1;
    v10 = v9;
    v7 = (unsigned int)&v9[v8];
    v11 = (int)(v9 + 9);
    goto LABEL_5;
  }
  if ( v7 )
  {
LABEL_33:
    v8 = 9 * v7;
    goto LABEL_4;
  }
  v11 = 36;
  v10 = 0;
LABEL_5:
  v12 = (char *)v10 + v5;
  if ( (_DWORD *)((char *)v10 + v5) )
  {
    *(_DWORD *)((char *)v10 + v5) = 0;
    *((_DWORD *)v12 + 1) = 0;
    *((_DWORD *)v12 + 2) = 0;
    *((_DWORD *)v12 + 4) = 0;
    v12[20] = 0;
    *((_DWORD *)v12 + 3) = v12 + 20;
  }
  if ( v4 != v3 )
  {
    v13 = v3 + 36;
    v14 = v10;
    v15 = &v10[9 * ((954437177 * ((unsigned int)(v4 - v13) >> 2)) & 0x3FFFFFFF) + 9];
    while ( 1 )
    {
      v16 = v13 - 16;
      if ( v14 )
      {
        v17 = *((_DWORD *)v13 - 7);
        *v14 = *((_DWORD *)v13 - 9);
        v14[1] = *((_DWORD *)v13 - 8);
        v14[2] = v17;
        v14[3] = v14 + 5;
        v18 = (char *)*((_DWORD *)v13 - 6);
        if ( v18 == v16 )
        {
          v32 = *((_DWORD *)v13 - 3);
          v33 = *((_DWORD *)v13 - 2);
          v34 = *((_DWORD *)v13 - 1);
          v14[5] = *(_DWORD *)v16;
          v14[6] = v32;
          v14[7] = v33;
          v14[8] = v34;
        }
        else
        {
          v14[3] = v18;
          v14[5] = *((_DWORD *)v13 - 4);
        }
        v14[4] = *((_DWORD *)v13 - 5);
        *((_DWORD *)v13 - 6) = v16;
        *((_DWORD *)v13 - 5) = 0;
        *(v13 - 16) = 0;
      }
      v13 += 36;
      if ( v14 + 9 == v15 )
        break;
      v14 += 9;
    }
    v11 = (int)(v14 + 18);
  }
  v19 = (char *)a1[1];
  if ( v19 != v4 )
  {
    v20 = v4 + 36;
    v21 = v11 + 36 * (((954437177 * ((unsigned int)(v19 - (v4 + 36)) >> 2)) & 0x3FFFFFFF) + 1);
    do
    {
      v22 = v20 - 16;
      if ( v11 )
      {
        v23 = (char *)*((_DWORD *)v20 - 6);
        v24 = *((_DWORD *)v20 - 9);
        v25 = *((_DWORD *)v20 - 8);
        v26 = *((_DWORD *)v20 - 7);
        *(_DWORD *)(v11 + 12) = v11 + 20;
        *(_DWORD *)v11 = v24;
        *(_DWORD *)(v11 + 4) = v25;
        *(_DWORD *)(v11 + 8) = v26;
        if ( v22 == v23 )
        {
          v35 = *((_DWORD *)v20 - 3);
          v36 = *((_DWORD *)v20 - 2);
          *(_DWORD *)(v11 + 20) = *(_DWORD *)v22;
          v37 = *((_DWORD *)v20 - 1);
          *(_DWORD *)(v11 + 24) = v35;
          *(_DWORD *)(v11 + 28) = v36;
          *(_DWORD *)(v11 + 32) = v37;
        }
        else
        {
          v27 = *((_DWORD *)v20 - 4);
          *(_DWORD *)(v11 + 12) = v23;
          *(_DWORD *)(v11 + 20) = v27;
        }
        v28 = *((_DWORD *)v20 - 5);
        *((_DWORD *)v20 - 6) = v22;
        *(v20 - 16) = 0;
        *(_DWORD *)(v11 + 16) = v28;
        *((_DWORD *)v20 - 5) = 0;
      }
      v11 += 36;
      v20 += 36;
    }
    while ( v11 != v21 );
    v4 = (char *)a1[1];
  }
  v29 = (char *)*a1;
  if ( *a1 != v4 )
  {
    do
    {
      v30 = (void *)*((_DWORD *)v29 + 3);
      v31 = v29 + 20;
      v29 += 36;
      if ( v30 != v31 )
        sub_339E64(v30);
    }
    while ( v29 != v4 );
    v4 = (char *)*a1;
  }
  if ( v4 )
    sub_339E64(v4);
  *a1 = v10;
  a1[1] = (void *)v11;
  a1[2] = (void *)v7;
}
