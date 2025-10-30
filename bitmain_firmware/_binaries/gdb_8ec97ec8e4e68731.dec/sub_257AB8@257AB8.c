void __fastcall sub_257AB8(int a1, void **a2, _DWORD *a3)
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
  int v14; // r3
  char *v15; // r2
  void **v16; // r3
  bool v17; // zf
  void **v18; // r3
  int v19; // r2
  bool v20; // zf
  void *v21; // r0
  void *v22; // t1
  _DWORD *v23; // [sp+4h] [bp-8h]

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
    v23 = a3;
    v11 = (char *)sub_9836C(v10);
    v4 = *(void ***)a1;
    v5 = *(void ***)(a1 + 4);
    v12 = v11;
    a3 = v23;
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
  {
    v14 = *a3;
    a2 = 0;
    *a3 = 0;
    *(_DWORD *)&v12[v7] = v14;
  }
  if ( v6 != v4 )
  {
    v15 = v12;
    v16 = v4;
    do
    {
      v17 = v15 == 0;
      ++v16;
      if ( v15 )
        a2 = (void **)*(v16 - 1);
      v15 += 4;
      if ( !v17 )
      {
        *(v16 - 1) = 0;
        *((_DWORD *)v15 - 1) = a2;
      }
    }
    while ( v6 != v16 );
    v13 = (int)&v12[(char *)v6 - (char *)v4 + 4];
    if ( v6 == v5 )
    {
      do
      {
LABEL_22:
        v22 = *v4++;
        v21 = v22;
        if ( v22 )
          sub_33AC04(v21);
      }
      while ( v5 != v4 );
LABEL_25:
      v5 = *(void ***)a1;
      goto LABEL_26;
    }
LABEL_15:
    v18 = v6;
    v19 = v13;
    do
    {
      v20 = v19 == 0;
      ++v18;
      if ( v19 )
        a2 = (void **)*(v18 - 1);
      v19 += 4;
      if ( !v20 )
      {
        *(v18 - 1) = 0;
        *(_DWORD *)(v19 - 4) = a2;
      }
    }
    while ( v18 != v5 );
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
