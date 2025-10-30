void __fastcall sub_596B0(int a1, char *a2, _DWORD *a3)
{
  char *v4; // r4
  char *v5; // r8
  char *v6; // r10
  char *v7; // r11
  unsigned int v8; // r3
  unsigned int v9; // r7
  int v10; // r7
  int v11; // r0
  int v12; // r6
  int v13; // r9
  int v14; // r2
  char *v15; // r3
  bool v16; // zf
  char *v17; // r3
  int v18; // r2
  bool v19; // zf
  int v20; // r10
  int v21; // t1
  void *v22; // r0
  _DWORD *v23; // [sp+4h] [bp-8h]

  v4 = *(char **)a1;
  v5 = *(char **)(a1 + 4);
  v6 = a2;
  v7 = &a2[-*(_DWORD *)a1];
  v8 = (int)&v5[-*(_DWORD *)a1] >> 2;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_34;
  }
  v9 = 2 * v8;
  if ( v8 > 2 * v8 || v9 > 0x3FFFFFFF )
  {
    v10 = -4;
LABEL_4:
    v23 = a3;
    v11 = sub_9836C(v10);
    v4 = *(char **)a1;
    v5 = *(char **)(a1 + 4);
    v12 = v11;
    a3 = v23;
    v9 = v11 + v10;
    v13 = v11 + 4;
    goto LABEL_5;
  }
  if ( v9 )
  {
LABEL_34:
    v10 = 4 * v9;
    goto LABEL_4;
  }
  v13 = 4;
  v12 = 0;
LABEL_5:
  if ( &v7[v12] )
    *(_DWORD *)&v7[v12] = *a3;
  if ( v6 != v4 )
  {
    v14 = v12;
    v15 = v4;
    do
    {
      v16 = v14 == 0;
      v15 += 4;
      if ( v14 )
        a2 = (char *)*((_DWORD *)v15 - 1);
      v14 += 4;
      if ( !v16 )
      {
        *((_DWORD *)v15 - 1) = 0;
        *(_DWORD *)(v14 - 4) = a2;
      }
    }
    while ( v6 != v15 );
    v13 = v12 + v6 - v4 + 4;
    if ( v6 == v5 )
    {
      do
      {
LABEL_22:
        v21 = *(_DWORD *)v4;
        v4 += 4;
        v20 = v21;
        if ( v21 )
        {
          v22 = *(void **)(v20 + 24);
          if ( v22 )
            sub_339E64(v22);
          if ( *(_DWORD *)v20 != v20 + 8 )
            sub_339E64(*(void **)v20);
          sub_33AC04((void *)v20);
        }
      }
      while ( v5 != v4 );
LABEL_29:
      v5 = *(char **)a1;
      goto LABEL_30;
    }
LABEL_15:
    v17 = v6;
    v18 = v13;
    do
    {
      v19 = v18 == 0;
      v17 += 4;
      if ( v18 )
        a2 = (char *)*((_DWORD *)v17 - 1);
      v18 += 4;
      if ( !v19 )
      {
        *((_DWORD *)v17 - 1) = 0;
        *(_DWORD *)(v18 - 4) = a2;
      }
    }
    while ( v17 != v5 );
    v13 += ((v5 - (v6 + 4)) & 0xFFFFFFFC) + 4;
    if ( v4 == v5 )
      goto LABEL_29;
    goto LABEL_22;
  }
  if ( v6 != v5 )
    goto LABEL_15;
LABEL_30:
  if ( v5 )
    sub_339E64(v5);
  *(_DWORD *)a1 = v12;
  *(_DWORD *)(a1 + 4) = v13;
  *(_DWORD *)(a1 + 8) = v9;
}
