void __fastcall sub_222760(_DWORD *a1, char *a2, _DWORD *a3, unsigned int a4, void **a5)
{
  char *v6; // r9
  char *v7; // r10
  char **v8; // r7
  char *v9; // r11
  unsigned int v10; // r1
  unsigned int v11; // r8
  size_t v12; // r8
  _DWORD *v13; // r6
  int v14; // r4
  char *v15; // r1
  int v16; // r12
  int v17; // lr
  char *v18; // r12
  _DWORD *v19; // lr
  unsigned int v20; // r4
  char *v21; // r12
  unsigned int v22; // lr
  _DWORD *v23; // [sp+0h] [bp-Ch]
  void **v24; // [sp+4h] [bp-8h]

  v6 = (char *)*a1;
  v7 = (char *)a1[1];
  v8 = (char **)a1;
  v9 = &a2[-*a1];
  v10 = (int)&v7[-*a1] >> 4;
  if ( !v10 )
  {
    v11 = 1;
    goto LABEL_26;
  }
  v11 = 2 * v10;
  if ( v10 > 2 * v10 || v11 > 0xFFFFFFF )
  {
    v12 = -4;
LABEL_4:
    v23 = a3;
    v24 = (void **)a4;
    a1 = sub_9836C(v12 * 4);
    v6 = *v8;
    v7 = v8[1];
    v13 = a1;
    a3 = v23;
    a4 = (unsigned int)v24;
    v11 = (unsigned int)&a1[v12];
    v14 = (int)(a1 + 4);
    goto LABEL_5;
  }
  if ( v11 )
  {
LABEL_26:
    v12 = 4 * v11;
    goto LABEL_4;
  }
  v14 = 16;
  v13 = 0;
LABEL_5:
  v15 = &v9[(_DWORD)v13];
  if ( &v9[(_DWORD)v13] )
  {
    v16 = *(_DWORD *)a4;
    a4 = (unsigned int)a5;
    v17 = *a3;
    a3 = 0;
    a1 = *a5;
    *(_DWORD *)&v9[(_DWORD)v13] = v17;
    *((_DWORD *)v15 + 2) = v16;
    *((_DWORD *)v15 + 3) = a1;
    *((_DWORD *)v15 + 1) = 0;
  }
  if ( a2 != v6 )
  {
    v18 = v6 + 16;
    a4 = a2 - (v6 + 16);
    v19 = v13;
    v20 = a4 >> 4;
    do
    {
      if ( v19 )
      {
        a1 = (_DWORD *)*((_DWORD *)v18 - 4);
        v15 = (char *)*((_DWORD *)v18 - 3);
        a3 = (_DWORD *)*((_DWORD *)v18 - 2);
        a4 = *((_DWORD *)v18 - 1);
      }
      v18 += 16;
      if ( v19 )
      {
        *v19 = a1;
        v19[1] = v15;
        v19[2] = a3;
        v19[3] = a4;
      }
      v19 += 4;
    }
    while ( v18 != a2 + 16 );
    v14 = (int)&v13[4 * v20 + 8];
  }
  if ( a2 != v7 )
  {
    v21 = a2 + 16;
    v22 = v14 + ((v7 - (a2 + 16)) & 0xFFFFFFF0) + 16;
    do
    {
      if ( v14 )
      {
        a1 = (_DWORD *)*((_DWORD *)v21 - 4);
        v15 = (char *)*((_DWORD *)v21 - 3);
        a3 = (_DWORD *)*((_DWORD *)v21 - 2);
        a4 = *((_DWORD *)v21 - 1);
      }
      v21 += 16;
      if ( v14 )
      {
        *(_DWORD *)v14 = a1;
        *(_DWORD *)(v14 + 4) = v15;
        *(_DWORD *)(v14 + 8) = a3;
        *(_DWORD *)(v14 + 12) = a4;
      }
      v14 += 16;
    }
    while ( v14 != v22 );
  }
  if ( v6 )
    sub_339E64(v6);
  *v8 = (char *)v13;
  v8[1] = (char *)v14;
  v8[2] = (char *)v11;
}
