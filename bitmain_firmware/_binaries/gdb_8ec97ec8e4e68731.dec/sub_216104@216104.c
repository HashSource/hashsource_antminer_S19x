void __fastcall sub_216104(_DWORD *a1, char *a2, unsigned int *a3, int *a4)
{
  char *v5; // r12
  char **v6; // r6
  char *v9; // lr
  char *v10; // r11
  unsigned int v11; // r1
  unsigned int v12; // r8
  size_t v13; // r8
  _DWORD *v14; // r7
  int v15; // r4
  int v16; // r2
  char *v17; // r3
  _DWORD *v18; // r2
  unsigned int v19; // r4
  char *v20; // r3
  unsigned int v21; // r2

  v5 = (char *)*a1;
  v6 = (char **)a1;
  v9 = (char *)a1[1];
  v10 = &a2[-*a1];
  v11 = (int)&v9[-*a1] >> 3;
  if ( !v11 )
  {
    v12 = 1;
    goto LABEL_26;
  }
  v12 = 2 * v11;
  if ( v11 > 2 * v11 || v12 > 0x1FFFFFFF )
  {
    v13 = -2;
LABEL_4:
    a1 = sub_9836C(v13 * 4);
    v5 = *v6;
    v9 = v6[1];
    v14 = a1;
    v12 = (unsigned int)&a1[v13];
    v15 = (int)(a1 + 2);
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_26:
    v13 = 2 * v12;
    goto LABEL_4;
  }
  v15 = 8;
  v14 = 0;
LABEL_5:
  if ( &v10[(_DWORD)v14] )
  {
    v11 = *a3;
    v16 = *a4;
    *(_DWORD *)&v10[(_DWORD)v14] = *a3;
    *(_DWORD *)&v10[(_DWORD)v14 + 4] = v16;
  }
  if ( a2 != v5 )
  {
    v17 = v5 + 8;
    v11 = a2 - (v5 + 8);
    v18 = v14;
    v19 = v11 >> 3;
    do
    {
      if ( v18 )
      {
        a1 = (_DWORD *)*((_DWORD *)v17 - 2);
        v11 = *((_DWORD *)v17 - 1);
      }
      v17 += 8;
      if ( v18 )
      {
        *v18 = a1;
        v18[1] = v11;
      }
      v18 += 2;
    }
    while ( v17 != a2 + 8 );
    v15 = (int)&v14[2 * v19 + 4];
  }
  if ( a2 != v9 )
  {
    v20 = a2 + 8;
    v21 = v15 + ((v9 - (a2 + 8)) & 0xFFFFFFF8) + 8;
    do
    {
      if ( v15 )
      {
        a1 = (_DWORD *)*((_DWORD *)v20 - 2);
        v11 = *((_DWORD *)v20 - 1);
      }
      v20 += 8;
      if ( v15 )
      {
        *(_DWORD *)v15 = a1;
        *(_DWORD *)(v15 + 4) = v11;
      }
      v15 += 8;
    }
    while ( v15 != v21 );
  }
  if ( v5 )
    sub_339E64(v5);
  *v6 = (char *)v14;
  v6[1] = (char *)v15;
  v6[2] = (char *)v12;
}
