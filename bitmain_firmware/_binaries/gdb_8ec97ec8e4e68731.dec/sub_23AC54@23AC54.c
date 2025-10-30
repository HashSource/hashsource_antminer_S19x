void __fastcall sub_23AC54(_DWORD *a1, unsigned int a2)
{
  char **v2; // r7
  char *v3; // lr
  char *v4; // r5
  char *v5; // r12
  unsigned int v6; // r9
  unsigned int v7; // r3
  unsigned int v8; // r8
  size_t v9; // r8
  _DWORD *v10; // r6
  int v11; // r4
  char *v12; // r3
  _DWORD *v13; // r2
  unsigned int v14; // r4
  char *v15; // r3
  unsigned int v16; // r2

  v2 = (char **)a1;
  v3 = (char *)*a1;
  v4 = (char *)a2;
  v5 = (char *)a1[1];
  v6 = a2 - *a1;
  v7 = (int)&v5[-*a1] >> 3;
  if ( !v7 )
  {
    v8 = 1;
    goto LABEL_26;
  }
  v8 = 2 * v7;
  if ( v7 > 2 * v7 || v8 > 0x1FFFFFFF )
  {
    v9 = -2;
LABEL_4:
    a1 = sub_9836C(v9 * 4);
    v3 = *v2;
    v10 = a1;
    v5 = v2[1];
    v8 = (unsigned int)&a1[v9];
    v11 = (int)(a1 + 2);
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_26:
    v9 = 2 * v8;
    goto LABEL_4;
  }
  v11 = 8;
  v10 = 0;
LABEL_5:
  if ( (_DWORD *)((char *)v10 + v6) )
  {
    *(_DWORD *)((char *)v10 + v6) = 0;
    *(_DWORD *)((char *)v10 + v6 + 4) = 0;
  }
  if ( v4 != v3 )
  {
    v12 = v3 + 8;
    a2 = v4 - (v3 + 8);
    v13 = v10;
    v14 = a2 >> 3;
    do
    {
      if ( v13 )
      {
        a1 = (_DWORD *)*((_DWORD *)v12 - 2);
        a2 = *((_DWORD *)v12 - 1);
      }
      v12 += 8;
      if ( v13 )
      {
        *v13 = a1;
        v13[1] = a2;
      }
      v13 += 2;
    }
    while ( v12 != v4 + 8 );
    v11 = (int)&v10[2 * v14 + 4];
  }
  if ( v4 != v5 )
  {
    v15 = v4 + 8;
    v16 = v11 + ((v5 - (v4 + 8)) & 0xFFFFFFF8) + 8;
    do
    {
      if ( v11 )
      {
        a1 = (_DWORD *)*((_DWORD *)v15 - 2);
        a2 = *((_DWORD *)v15 - 1);
      }
      v15 += 8;
      if ( v11 )
      {
        *(_DWORD *)v11 = a1;
        *(_DWORD *)(v11 + 4) = a2;
      }
      v11 += 8;
    }
    while ( v11 != v16 );
  }
  if ( v3 )
    sub_339E64(v3);
  *v2 = (char *)v10;
  v2[1] = (char *)v11;
  v2[2] = (char *)v8;
}
