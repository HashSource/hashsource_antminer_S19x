void __fastcall sub_275278(_DWORD *a1, char *a2, _DWORD *a3)
{
  char *v4; // r12
  char *v7; // r7
  char *v8; // r9
  int v9; // r0
  unsigned int v10; // r8
  size_t v11; // r11
  char *v12; // r0
  _DWORD *v13; // r5
  char *v14; // r11
  int v15; // r8
  char *v16; // r3
  char *v17; // r2
  _DWORD *v18; // r3
  char *v19; // r8
  char *v20; // r1
  int v21; // r9
  char *v22; // r7
  char *v23; // r3
  char *v24; // r4
  unsigned int v25; // r2
  char *v26; // r3
  char *v27; // r1
  int v28; // r9
  int v29; // r7
  int v30; // lr
  int v31; // r0
  int v32; // r1
  char *v33; // r4
  void *v34; // r0
  void *v35; // r3
  int v36; // r10
  int v37; // r7
  int v38; // r7
  int v39; // lr
  int v40; // r1
  int v41; // [sp+4h] [bp-8h]

  v4 = (char *)*a1;
  v7 = a2;
  v8 = &a2[-*a1];
  v9 = (a1[1] - *a1) >> 2;
  if ( !(954437177 * v9) )
  {
    v10 = 1;
    goto LABEL_33;
  }
  v10 = 1908874354 * v9;
  if ( 954437177 * v9 > (unsigned int)(1908874354 * v9) || v10 > 0x71C71C7 )
  {
    v11 = -4;
LABEL_4:
    v12 = (char *)sub_9836C(v11);
    v4 = (char *)*a1;
    v13 = v12;
    v14 = &v12[v11];
    v15 = (int)(v12 + 36);
    goto LABEL_5;
  }
  if ( v10 )
  {
LABEL_33:
    v11 = 36 * v10;
    goto LABEL_4;
  }
  v14 = 0;
  v15 = 36;
  v13 = 0;
LABEL_5:
  v16 = &v8[(_DWORD)v13];
  if ( &v8[(_DWORD)v13] )
  {
    *(_DWORD *)&v8[(_DWORD)v13] = *a3;
    *((_DWORD *)v16 + 1) = 0;
    *((_DWORD *)v16 + 2) = 0;
    *((_DWORD *)v16 + 4) = 0;
    v16[20] = 0;
    *((_DWORD *)v16 + 3) = v16 + 20;
  }
  if ( a2 != v4 )
  {
    v17 = v4 + 36;
    v18 = v13;
    v19 = v7;
    while ( 1 )
    {
      v20 = v17 - 16;
      if ( v18 )
      {
        v21 = *((_DWORD *)v17 - 7);
        *v18 = *((_DWORD *)v17 - 9);
        v18[1] = *((_DWORD *)v17 - 8);
        v18[2] = v21;
        v18[3] = v18 + 5;
        v22 = (char *)*((_DWORD *)v17 - 6);
        if ( v22 == v20 )
        {
          v36 = *(_DWORD *)v20;
          v41 = *((_DWORD *)v17 - 2);
          v37 = *((_DWORD *)v17 - 1);
          v18[6] = *((_DWORD *)v17 - 3);
          v18[5] = v36;
          v18[8] = v37;
          v18[7] = v41;
        }
        else
        {
          v18[3] = v22;
          v18[5] = *((_DWORD *)v17 - 4);
        }
        v18[4] = *((_DWORD *)v17 - 5);
        *((_DWORD *)v17 - 6) = v20;
        *((_DWORD *)v17 - 5) = 0;
        *(v17 - 16) = 0;
      }
      v17 += 36;
      if ( v18 + 9 == &v13[9 * ((954437177 * ((unsigned int)(a2 - (v4 + 36)) >> 2)) & 0x3FFFFFFF) + 9] )
        break;
      v18 += 9;
    }
    v7 = v19;
    v15 = (int)(v18 + 18);
  }
  v23 = (char *)a1[1];
  if ( v23 != a2 )
  {
    v24 = a2 + 36;
    v25 = v15 + 36 * (((954437177 * ((unsigned int)(v23 - v24) >> 2)) & 0x3FFFFFFF) + 1);
    do
    {
      v26 = v24 - 16;
      if ( v15 )
      {
        v27 = (char *)*((_DWORD *)v24 - 6);
        v28 = *((_DWORD *)v24 - 9);
        v29 = *((_DWORD *)v24 - 8);
        v30 = *((_DWORD *)v24 - 7);
        *(_DWORD *)(v15 + 12) = v15 + 20;
        *(_DWORD *)v15 = v28;
        *(_DWORD *)(v15 + 4) = v29;
        *(_DWORD *)(v15 + 8) = v30;
        if ( v26 == v27 )
        {
          v38 = *((_DWORD *)v24 - 3);
          v39 = *((_DWORD *)v24 - 2);
          *(_DWORD *)(v15 + 20) = *(_DWORD *)v26;
          v40 = *((_DWORD *)v24 - 1);
          *(_DWORD *)(v15 + 24) = v38;
          *(_DWORD *)(v15 + 28) = v39;
          *(_DWORD *)(v15 + 32) = v40;
        }
        else
        {
          v31 = *((_DWORD *)v24 - 4);
          *(_DWORD *)(v15 + 12) = v27;
          *(_DWORD *)(v15 + 20) = v31;
        }
        v32 = *((_DWORD *)v24 - 5);
        *((_DWORD *)v24 - 6) = v26;
        *(v24 - 16) = 0;
        *(_DWORD *)(v15 + 16) = v32;
        *((_DWORD *)v24 - 5) = 0;
      }
      v15 += 36;
      v24 += 36;
    }
    while ( v15 != v25 );
    v7 = (char *)a1[1];
  }
  v33 = (char *)*a1;
  if ( (char *)*a1 != v7 )
  {
    do
    {
      v34 = (void *)*((_DWORD *)v33 + 3);
      v35 = v33 + 20;
      v33 += 36;
      if ( v34 != v35 )
        sub_339E64(v34);
    }
    while ( v33 != v7 );
    v7 = (char *)*a1;
  }
  if ( v7 )
    sub_339E64(v7);
  *a1 = v13;
  a1[1] = v15;
  a1[2] = v14;
}
