int __fastcall sub_6B928(unsigned int *a1, char *a2, int a3, int a4)
{
  unsigned int v7; // r1
  _DWORD *v8; // r5
  int v9; // r3
  int v10; // r4
  char *v11; // r2
  int v12; // r0
  int v13; // t1
  int v14; // r1
  int *v15; // r5
  int v16; // r0
  int v17; // r10
  int v18; // r0
  int v19; // r3
  int v20; // r3
  size_t v22; // r0
  int v23; // r0
  _DWORD *v24; // r10
  int v25; // r2
  _DWORD *v26; // r3
  int v27; // r3
  int v28; // r10
  int v29; // r0
  _DWORD *v30; // r11
  _DWORD *v31; // r0
  _DWORD *v32; // r3
  _DWORD *v33; // r9
  int v34; // lr
  int v35; // r1
  _DWORD *v36; // r0
  _DWORD *v37; // r1
  _DWORD *v38; // r12
  unsigned int v40; // [sp+4h] [bp-8h]

  v7 = dword_8A954[a1[2]];
  v8 = (_DWORD *)a1[1];
  if ( *a1 >= v7 )
  {
    sub_6D518(a1[1]);
    v27 = a1[2] + 1;
    v28 = dword_8A954[v27];
    a1[2] = v27;
    v29 = sub_6D500(8 * v28);
    v8 = (_DWORD *)v29;
    a1[1] = v29;
    if ( !v29 )
      return -1;
    v30 = a1 + 3;
    v7 = dword_8A954[a1[2]];
    v40 = a1[2];
    if ( v7 )
    {
      v31 = (_DWORD *)(v29 + 8 * v7);
      v32 = v8;
      do
      {
        v32[1] = v30;
        *v32 = v30;
        v32 += 2;
      }
      while ( v31 != v32 );
    }
    v33 = (_DWORD *)a1[4];
    a1[3] = (unsigned int)v30;
    a1[4] = (unsigned int)v30;
    if ( v33 != v30 )
    {
      do
      {
        while ( 1 )
        {
          sub_772CC(*(v33 - 1), v28);
          v36 = (_DWORD *)v8[2 * v35];
          v37 = &v8[2 * v35];
          v38 = (_DWORD *)v33[1];
          if ( v36 == v30 && v30 == (_DWORD *)v37[1] )
            break;
          v34 = *v36;
          v33[1] = v36;
          *v33 = v34;
          *(_DWORD *)(*v36 + 4) = v33;
          *v36 = v33;
          *v37 = v33;
          v33 = v38;
          if ( v38 == v30 )
            goto LABEL_26;
        }
        *v33 = a1[3];
        v33[1] = v30;
        *(_DWORD *)(a1[3] + 4) = v33;
        a1[3] = (unsigned int)v33;
        v37[1] = v33;
        *v37 = v33;
        v33 = v38;
      }
      while ( v38 != v30 );
LABEL_26:
      v8 = (_DWORD *)a1[1];
      v7 = dword_8A954[v40];
    }
  }
  v9 = (unsigned __int8)*a2;
  if ( *a2 )
  {
    v11 = a2;
    v10 = 5381;
    do
    {
      v12 = v9 + 32 * v10;
      v13 = (unsigned __int8)*++v11;
      v9 = v13;
      v10 += v12;
    }
    while ( v13 );
  }
  else
  {
    v10 = 5381;
  }
  sub_772CC(v10, v7);
  v15 = &v8[2 * v14];
  v16 = sub_6B7C4((int)a1, v15, a2, v10);
  v17 = v16;
  if ( v16 )
  {
    v18 = *(_DWORD *)(v16 + 12);
    if ( v18 )
    {
      v19 = *(_DWORD *)(v18 + 4);
      if ( v19 != -1 )
      {
        v20 = v19 - 1;
        *(_DWORD *)(v18 + 4) = v20;
        if ( !v20 )
          sub_6E5DC(v18);
      }
    }
    *(_DWORD *)(v17 + 12) = a4;
    return 0;
  }
  v22 = strlen(a2);
  v23 = sub_6D500(v22 + 21);
  v24 = (_DWORD *)v23;
  if ( !v23 )
    return -1;
  *(_DWORD *)v23 = v10;
  *(_DWORD *)(v23 + 16) = a3;
  strcpy((char *)(v23 + 20), a2);
  v25 = *v15;
  v26 = v24 + 1;
  v24[3] = a4;
  v24[2] = v24 + 1;
  v24[1] = v24 + 1;
  if ( (unsigned int *)v25 == a1 + 3 && v25 == v15[1] )
  {
    v24[1] = a1[3];
    v24[2] = v25;
    *(_DWORD *)(a1[3] + 4) = v26;
    a1[3] = (unsigned int)v26;
    v15[1] = (int)v26;
    *v15 = (int)v26;
  }
  else
  {
    v24[1] = *(_DWORD *)v25;
    v24[2] = v25;
    *(_DWORD *)(*(_DWORD *)v25 + 4) = v26;
    *(_DWORD *)v25 = v26;
    *v15 = (int)v26;
  }
  ++*a1;
  return 0;
}
