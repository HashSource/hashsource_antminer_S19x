void __fastcall sub_23B110(int a1, char *a2, _DWORD *a3)
{
  char *v4; // r7
  char *v5; // r9
  char *v6; // r10
  char *v7; // r11
  unsigned int v8; // r3
  unsigned int v9; // r6
  size_t v10; // r6
  char *v11; // r0
  int v12; // r5
  int v13; // r8
  int v14; // r2
  char *v15; // r3
  bool v16; // zf
  char *v17; // r3
  bool v18; // zf
  int v19; // r3
  int v20; // t1
  int v21; // r0
  _DWORD *v22; // [sp+4h] [bp-8h]

  v4 = *(char **)a1;
  v5 = *(char **)(a1 + 4);
  v6 = a2;
  v7 = &a2[-*(_DWORD *)a1];
  v8 = (int)&v5[-*(_DWORD *)a1] >> 2;
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
    v4 = *(char **)a1;
    v5 = *(char **)(a1 + 4);
    v12 = (int)v11;
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
        v20 = *(_DWORD *)v4;
        v4 += 4;
        v19 = v20;
        v21 = v20;
        if ( v20 )
          (*(void (__fastcall **)(int, char *, int))(*(_DWORD *)v19 + 8))(v21, a2, v14);
      }
      while ( v5 != v4 );
LABEL_25:
      v5 = *(char **)a1;
      goto LABEL_26;
    }
LABEL_15:
    v14 = v13;
    v17 = v6;
    do
    {
      v18 = v14 == 0;
      v17 += 4;
      if ( v14 )
        a2 = (char *)*((_DWORD *)v17 - 1);
      v14 += 4;
      if ( !v18 )
      {
        *((_DWORD *)v17 - 1) = 0;
        *(_DWORD *)(v14 - 4) = a2;
      }
    }
    while ( v17 != v5 );
    v13 += ((v5 - (v6 + 4)) & 0xFFFFFFFC) + 4;
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
