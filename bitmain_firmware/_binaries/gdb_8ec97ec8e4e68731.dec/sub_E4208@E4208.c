void __fastcall sub_E4208(char **a1, char *a2, int a3, unsigned int a4)
{
  char *v4; // r9
  char **v5; // r6
  char *v6; // r5
  char *v7; // r10
  int v8; // r11
  unsigned int v9; // r2
  unsigned int v10; // r8
  size_t v11; // r8
  char **v12; // r7
  int v13; // r4
  _DWORD *v14; // r12
  char *v15; // r12
  char ***v16; // lr
  unsigned int v17; // r4
  char *v18; // r12
  unsigned int v19; // lr

  v4 = *a1;
  v5 = a1;
  v6 = a2;
  v7 = a1[1];
  v8 = a2 - *a1;
  v9 = (v7 - *a1) >> 4;
  if ( !v9 )
  {
    v10 = 1;
    goto LABEL_26;
  }
  v10 = 2 * v9;
  if ( v9 > 2 * v9 || v10 > 0xFFFFFFF )
  {
    v11 = -4;
LABEL_4:
    a1 = (char **)sub_9836C(v11 * 4);
    v4 = *v5;
    v7 = v5[1];
    v12 = a1;
    v10 = (unsigned int)&a1[v11];
    v13 = (int)(a1 + 4);
    goto LABEL_5;
  }
  if ( v10 )
  {
LABEL_26:
    v11 = 4 * v10;
    goto LABEL_4;
  }
  v13 = 16;
  v12 = 0;
LABEL_5:
  v14 = (char **)((char *)v12 + v8);
  if ( (char **)((char *)v12 + v8) )
  {
    a1 = *(char ***)a3;
    a2 = *(char **)(a3 + 4);
    v9 = *(_DWORD *)(a3 + 8);
    a4 = *(_DWORD *)(a3 + 12);
    *v14 = *(_DWORD *)a3;
    v14[1] = a2;
    v14[2] = v9;
    v14[3] = a4;
  }
  if ( v6 != v4 )
  {
    v15 = v4 + 16;
    a4 = v6 - (v4 + 16);
    v16 = (char ***)v12;
    v17 = a4 >> 4;
    do
    {
      if ( v16 )
      {
        a1 = (char **)*((_DWORD *)v15 - 4);
        a2 = (char *)*((_DWORD *)v15 - 3);
        v9 = *((_DWORD *)v15 - 2);
        a4 = *((_DWORD *)v15 - 1);
      }
      v15 += 16;
      if ( v16 )
      {
        *v16 = a1;
        v16[1] = (char **)a2;
        v16[2] = (char **)v9;
        v16[3] = (char **)a4;
      }
      v16 += 4;
    }
    while ( v15 != v6 + 16 );
    v13 = (int)&v12[4 * v17 + 8];
  }
  if ( v6 != v7 )
  {
    v18 = v6 + 16;
    v19 = v13 + ((v7 - (v6 + 16)) & 0xFFFFFFF0) + 16;
    do
    {
      if ( v13 )
      {
        a1 = (char **)*((_DWORD *)v18 - 4);
        a2 = (char *)*((_DWORD *)v18 - 3);
        v9 = *((_DWORD *)v18 - 2);
        a4 = *((_DWORD *)v18 - 1);
      }
      v18 += 16;
      if ( v13 )
      {
        *(_DWORD *)v13 = a1;
        *(_DWORD *)(v13 + 4) = a2;
        *(_DWORD *)(v13 + 8) = v9;
        *(_DWORD *)(v13 + 12) = a4;
      }
      v13 += 16;
    }
    while ( v13 != v19 );
  }
  if ( v4 )
    sub_339E64(v4);
  *v5 = (char *)v12;
  v5[1] = (char *)v13;
  v5[2] = (char *)v10;
}
