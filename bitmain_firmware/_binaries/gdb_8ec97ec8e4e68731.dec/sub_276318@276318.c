void __fastcall sub_276318(int a1, char *a2, _DWORD *a3)
{
  char *v4; // r10
  char *v5; // r4
  char *v6; // r8
  char *v7; // r11
  unsigned int v8; // r3
  unsigned int v9; // r7
  size_t v10; // r7
  char *v11; // r0
  char *v12; // r6
  int v13; // r9
  char *v14; // r2
  char *v15; // r3
  bool v16; // zf
  char *v17; // r3
  int v18; // r2
  bool v19; // zf
  _DWORD *v20; // r4
  _DWORD *v21; // t1
  void *v22; // r3
  void *v23; // r0
  _DWORD *v24; // [sp+4h] [bp-8h]

  v4 = *(char **)a1;
  v5 = a2;
  v6 = *(char **)(a1 + 4);
  v7 = &a2[-*(_DWORD *)a1];
  v8 = (int)&v6[-*(_DWORD *)a1] >> 2;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_32;
  }
  v9 = 2 * v8;
  if ( v8 > 2 * v8 || v9 > 0x3FFFFFFF )
  {
    v10 = -4;
LABEL_4:
    v24 = a3;
    v11 = (char *)sub_9836C(v10);
    v4 = *(char **)a1;
    v12 = v11;
    v6 = *(char **)(a1 + 4);
    v9 = (unsigned int)&v11[v10];
    a3 = v24;
    v13 = (int)(v11 + 4);
    goto LABEL_5;
  }
  if ( v9 )
  {
LABEL_32:
    v10 = 4 * v9;
    goto LABEL_4;
  }
  v13 = 4;
  v12 = 0;
LABEL_5:
  if ( &v7[(_DWORD)v12] )
    *(_DWORD *)&v7[(_DWORD)v12] = *a3;
  if ( v5 != v4 )
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
        *((_DWORD *)v14 - 1) = a2;
      }
    }
    while ( v5 != v15 );
    v13 = (int)&v12[v5 - v4 + 4];
    if ( v5 == v6 )
    {
      do
      {
LABEL_22:
        v21 = *(_DWORD **)v4;
        v4 += 4;
        v20 = v21;
        v22 = v21 + 3;
        if ( v21 )
        {
          v23 = (void *)v20[1];
          if ( v23 != v22 )
            sub_339E64(v23);
          sub_33AC04(v20);
        }
      }
      while ( v6 != v4 );
LABEL_27:
      v6 = *(char **)a1;
      goto LABEL_28;
    }
LABEL_15:
    v17 = v5;
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
    while ( v17 != v6 );
    v13 += ((v6 - (v5 + 4)) & 0xFFFFFFFC) + 4;
    if ( v4 == v6 )
      goto LABEL_27;
    goto LABEL_22;
  }
  if ( v5 != v6 )
    goto LABEL_15;
LABEL_28:
  if ( v6 )
    sub_339E64(v6);
  *(_DWORD *)a1 = v12;
  *(_DWORD *)(a1 + 4) = v13;
  *(_DWORD *)(a1 + 8) = v9;
}
