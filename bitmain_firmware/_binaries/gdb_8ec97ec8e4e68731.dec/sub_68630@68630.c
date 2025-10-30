void __fastcall sub_68630(int *a1, char *a2, int *a3)
{
  char *v6; // r5
  int v7; // r0
  unsigned int v8; // r2
  unsigned int v9; // r3
  int v10; // r0
  unsigned int *v11; // r7
  int v12; // r4
  int v13; // r9
  int v14; // r5
  unsigned int v15; // r8
  int v16; // r0
  _DWORD *v17; // r5
  char *v18; // r9
  char *v19; // r8
  char *v20; // r0
  char *v21; // r5
  char *v22; // r2
  _DWORD *v23; // r3
  unsigned int v24; // r12
  int v25; // r4
  int v26; // r4
  _DWORD *v27; // r4
  char *v28; // r3
  _DWORD *v29; // r2
  int v30; // lr
  int v31; // r12
  char *v32; // r9
  _DWORD *v33; // r11
  _DWORD *v34; // r7
  _DWORD *v35; // r10
  _DWORD *v36; // r0
  _DWORD *v37; // r0
  int ptr; // [sp+0h] [bp-Ch]
  int v39; // [sp+4h] [bp-8h]

  v6 = &a2[-*a1];
  v7 = (a1[1] - *a1) >> 2;
  if ( !(-1431655765 * v7) )
  {
    v39 = 1;
    goto LABEL_40;
  }
  v8 = 1431655766 * v7;
  v39 = 1431655766 * v7;
  LOWORD(v9) = 21845;
  if ( -1431655765 * v7 > (unsigned int)(1431655766 * v7) )
  {
    v10 = -4;
    HIWORD(v9) = 5461;
    v39 = v9;
LABEL_4:
    ptr = sub_9836C(v10);
    goto LABEL_5;
  }
  HIWORD(v9) = 5461;
  if ( v8 > v9 )
  {
    v39 = v9;
    v10 = -4;
    goto LABEL_4;
  }
  if ( v8 )
  {
LABEL_40:
    v10 = 12 * v39;
    goto LABEL_4;
  }
  ptr = 1431655766 * v7;
LABEL_5:
  v11 = (unsigned int *)&v6[ptr];
  if ( &v6[ptr] )
  {
    v12 = *a3;
    v13 = a3[1];
    *(_DWORD *)&v6[ptr] = 0;
    v11[1] = 0;
    v14 = v13 - v12;
    v11[2] = 0;
    v15 = -1431655765 * ((v13 - v12) >> 4);
    if ( v15 )
    {
      if ( v15 > 0x5555555 )
        sub_33D01C();
      v16 = sub_9836C(v13 - v12);
      v12 = *a3;
      v13 = a3[1];
      v15 = v16;
    }
    v11[2] = v15 + v14;
    v17 = (_DWORD *)v15;
    *v11 = v15;
    for ( v11[1] = v15; v13 != v12; v17 += 12 )
    {
      if ( v17 )
      {
        *v17 = v17 + 2;
        sub_63198(v17, *(_BYTE **)v12, *(_DWORD *)v12 + *(_DWORD *)(v12 + 4));
        v17[6] = v17 + 8;
        sub_63198(v17 + 6, *(_BYTE **)(v12 + 24), *(_DWORD *)(v12 + 24) + *(_DWORD *)(v12 + 28));
      }
      v12 += 48;
    }
    v11[1] = (unsigned int)v17;
  }
  v18 = (char *)*a1;
  v19 = (char *)a1[1];
  v20 = (char *)*a1;
  if ( (char *)*a1 == a2 )
  {
    v27 = (_DWORD *)(ptr + 12);
    if ( a2 == v19 )
      goto LABEL_42;
  }
  else
  {
    v21 = v18 + 12;
    v22 = v18 + 12;
    v23 = (_DWORD *)ptr;
    v24 = (715827883 * ((unsigned int)(a2 - (v18 + 12)) >> 2)) & 0x3FFFFFFF;
    do
    {
      if ( v23 )
      {
        v23[1] = 0;
        v23[2] = 0;
        *v23 = 0;
        *v23 = *((_DWORD *)v22 - 3);
        *((_DWORD *)v22 - 3) = 0;
        v25 = v23[1];
        v23[1] = *((_DWORD *)v22 - 2);
        *((_DWORD *)v22 - 2) = v25;
        v26 = v23[2];
        v23[2] = *((_DWORD *)v22 - 1);
        *((_DWORD *)v22 - 1) = v26;
      }
      v23 += 3;
      v22 += 12;
    }
    while ( (_DWORD *)(ptr + 12 * (v24 + 1)) != v23 );
    v27 = (_DWORD *)(ptr + 12 * v24 + 24);
    if ( a2 == v19 )
      goto LABEL_26;
  }
  v28 = a2 + 12;
  v29 = &v27[3 * ((715827883 * ((unsigned int)(v19 - (a2 + 12)) >> 2)) & 0x3FFFFFFF) + 3];
  do
  {
    if ( v27 )
    {
      v30 = *((_DWORD *)v28 - 2);
      v31 = *((_DWORD *)v28 - 1);
      *v27 = *((_DWORD *)v28 - 3);
      *((_DWORD *)v28 - 3) = 0;
      v27[1] = v30;
      *((_DWORD *)v28 - 2) = 0;
      v27[2] = v31;
      *((_DWORD *)v28 - 1) = 0;
    }
    v27 += 3;
    v28 += 12;
  }
  while ( v27 != v29 );
  if ( v18 != v19 )
  {
    v21 = v18 + 12;
LABEL_26:
    v32 = v21;
    while ( 1 )
    {
      v33 = (_DWORD *)*((_DWORD *)v20 + 1);
      v34 = (_DWORD *)*((_DWORD *)v32 - 3);
      if ( v34 != v33 )
      {
        v35 = v34 + 8;
        do
        {
          v36 = (_DWORD *)v34[6];
          if ( v36 != v35 )
            sub_339E64(v36);
          v37 = (_DWORD *)*(v35 - 8);
          if ( v37 != v34 + 2 )
            sub_339E64(v37);
          v34 += 12;
          v35 += 12;
        }
        while ( v33 != v34 );
        v33 = (_DWORD *)*((_DWORD *)v32 - 3);
      }
      if ( v33 )
        sub_339E64(v33);
      v32 += 12;
      v20 = v21;
      if ( v21 == v19 )
        break;
      v21 += 12;
    }
    v19 = (char *)*a1;
  }
LABEL_42:
  if ( v19 )
    sub_339E64(v19);
  *a1 = ptr;
  a1[1] = (int)v27;
  a1[2] = ptr + 12 * v39;
}
