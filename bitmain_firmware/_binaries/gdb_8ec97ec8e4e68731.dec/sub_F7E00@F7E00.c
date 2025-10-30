void __fastcall sub_F7E00(int a1, void **a2, _DWORD *a3)
{
  void **v4; // r4
  void **v5; // r8
  void **v6; // r10
  int v7; // r11
  unsigned int v8; // r3
  unsigned int v9; // r7
  size_t v10; // r7
  char *v11; // r0
  char *v12; // r6
  int v13; // r9
  char *v14; // r2
  void **v15; // r3
  bool v16; // zf
  void **v17; // r3
  int v18; // r2
  bool v19; // zf
  void *v20; // r0
  void *v21; // t1
  _DWORD *v22; // [sp+4h] [bp-8h]

  v4 = *(void ***)a1;
  v5 = *(void ***)(a1 + 4);
  v6 = a2;
  v7 = (int)a2 - *(_DWORD *)a1;
  v8 = ((int)v5 - *(_DWORD *)a1) >> 2;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_30;
  }
  v9 = 2 * v8;
  if ( v8 > 2 * v8 || v9 > 0x3FFFFFFF )
  {
    v10 = -4;
LABEL_4:
    v22 = a3;
    v11 = (char *)sub_9836C(v10);
    v4 = *(void ***)a1;
    v5 = *(void ***)(a1 + 4);
    v12 = v11;
    a3 = v22;
    v9 = (unsigned int)&v11[v10];
    v13 = (int)(v11 + 4);
    goto LABEL_5;
  }
  if ( v9 )
  {
LABEL_30:
    v10 = 4 * v9;
    goto LABEL_4;
  }
  v13 = 4;
  v12 = 0;
LABEL_5:
  if ( &v12[v7] )
    *(_DWORD *)&v12[v7] = *a3;
  if ( v6 != v4 )
  {
    v14 = v12;
    v15 = v4;
    do
    {
      v16 = v14 == 0;
      ++v15;
      if ( v14 )
        a2 = (void **)*(v15 - 1);
      v14 += 4;
      if ( !v16 )
      {
        *(v15 - 1) = 0;
        *((_DWORD *)v14 - 1) = a2;
      }
    }
    while ( v6 != v15 );
    v13 = (int)&v12[(char *)v6 - (char *)v4 + 4];
    if ( v6 == v5 )
    {
      do
      {
LABEL_22:
        v21 = *v4++;
        v20 = v21;
        if ( v21 )
          free(v20);
      }
      while ( v5 != v4 );
LABEL_25:
      v5 = *(void ***)a1;
      goto LABEL_26;
    }
LABEL_15:
    v17 = v6;
    v18 = v13;
    do
    {
      v19 = v18 == 0;
      ++v17;
      if ( v18 )
        a2 = (void **)*(v17 - 1);
      v18 += 4;
      if ( !v19 )
      {
        *(v17 - 1) = 0;
        *(_DWORD *)(v18 - 4) = a2;
      }
    }
    while ( v17 != v5 );
    v13 += (((char *)v5 - (char *)(v6 + 1)) & 0xFFFFFFFC) + 4;
    if ( v4 == v5 )
      goto LABEL_25;
    goto LABEL_22;
  }
  if ( v6 != v5 )
    goto LABEL_15;
LABEL_26:
  if ( v5 )
    sub_339E64(v5);
  *(_DWORD *)a1 = v12;
  *(_DWORD *)(a1 + 4) = v13;
  *(_DWORD *)(a1 + 8) = v9;
}
