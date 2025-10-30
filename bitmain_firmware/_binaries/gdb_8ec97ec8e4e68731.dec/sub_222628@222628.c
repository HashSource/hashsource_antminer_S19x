void __fastcall sub_222628(_DWORD *a1, char *a2, _DWORD *a3, unsigned int a4)
{
  char *v5; // r9
  char *v6; // r10
  char **v7; // r7
  char *v8; // r11
  unsigned int v9; // r1
  unsigned int v10; // r8
  size_t v11; // r8
  _DWORD *v12; // r6
  int v13; // r4
  char *v14; // r1
  int v15; // r12
  char *v16; // r12
  _DWORD *v17; // lr
  unsigned int v18; // r4
  char *v19; // r12
  unsigned int v20; // lr
  _DWORD *v21; // [sp+0h] [bp-Ch]
  void **v22; // [sp+4h] [bp-8h]

  v5 = (char *)*a1;
  v6 = (char *)a1[1];
  v7 = (char **)a1;
  v8 = &a2[-*a1];
  v9 = (int)&v6[-*a1] >> 4;
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
    v21 = a3;
    v22 = (void **)a4;
    a1 = sub_9836C(v11 * 4);
    v5 = *v7;
    v6 = v7[1];
    v12 = a1;
    a3 = v21;
    a4 = (unsigned int)v22;
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
  v14 = &v8[(_DWORD)v12];
  if ( &v8[(_DWORD)v12] )
  {
    v15 = *a3;
    a3 = 0;
    a1 = *(_DWORD **)a4;
    *(_DWORD *)&v8[(_DWORD)v12] = v15;
    *((_DWORD *)v14 + 1) = a1;
    *((_DWORD *)v14 + 2) = 0;
    *((_DWORD *)v14 + 3) = 0;
  }
  if ( a2 != v5 )
  {
    v16 = v5 + 16;
    a4 = a2 - (v5 + 16);
    v17 = v12;
    v18 = a4 >> 4;
    do
    {
      if ( v17 )
      {
        a1 = (_DWORD *)*((_DWORD *)v16 - 4);
        v14 = (char *)*((_DWORD *)v16 - 3);
        a3 = (_DWORD *)*((_DWORD *)v16 - 2);
        a4 = *((_DWORD *)v16 - 1);
      }
      v16 += 16;
      if ( v17 )
      {
        *v17 = a1;
        v17[1] = v14;
        v17[2] = a3;
        v17[3] = a4;
      }
      v17 += 4;
    }
    while ( v16 != a2 + 16 );
    v13 = (int)&v12[4 * v18 + 8];
  }
  if ( a2 != v6 )
  {
    v19 = a2 + 16;
    v20 = v13 + ((v6 - (a2 + 16)) & 0xFFFFFFF0) + 16;
    do
    {
      if ( v13 )
      {
        a1 = (_DWORD *)*((_DWORD *)v19 - 4);
        v14 = (char *)*((_DWORD *)v19 - 3);
        a3 = (_DWORD *)*((_DWORD *)v19 - 2);
        a4 = *((_DWORD *)v19 - 1);
      }
      v19 += 16;
      if ( v13 )
      {
        *(_DWORD *)v13 = a1;
        *(_DWORD *)(v13 + 4) = v14;
        *(_DWORD *)(v13 + 8) = a3;
        *(_DWORD *)(v13 + 12) = a4;
      }
      v13 += 16;
    }
    while ( v13 != v20 );
  }
  if ( v5 )
    sub_339E64(v5);
  *v7 = (char *)v12;
  v7[1] = (char *)v13;
  v7[2] = (char *)v10;
}
