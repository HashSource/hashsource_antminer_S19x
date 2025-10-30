void __fastcall sub_23ADBC(_DWORD *a1, char *a2, _DWORD *a3)
{
  char *v4; // r12
  char *v5; // r4
  char *v7; // r8
  char *v8; // r10
  unsigned int v9; // r3
  unsigned int v10; // r7
  size_t v11; // r7
  char *v12; // r0
  char *v13; // r6
  int v14; // r9
  char *v15; // r2
  char *v16; // r3
  bool v17; // zf
  int v18; // r2
  char *v19; // r3
  bool v20; // zf
  char *v21; // r7
  _DWORD *v22; // r4
  _DWORD *v23; // t1
  void (__fastcall *v24)(_DWORD *, char *); // r2
  _DWORD *v25; // r0
  _DWORD *v26; // r0
  _DWORD *v27; // r0
  char *v28; // [sp+4h] [bp-8h]

  v4 = (char *)*a1;
  v5 = a2;
  v7 = (char *)a1[1];
  v8 = &a2[-*a1];
  v9 = (int)&v7[-*a1] >> 2;
  if ( !v9 )
  {
    v10 = 1;
    goto LABEL_38;
  }
  v10 = 2 * v9;
  if ( v9 > 2 * v9 || v10 > 0x3FFFFFFF )
  {
    v11 = -4;
LABEL_4:
    v12 = (char *)sub_9836C(v11);
    v4 = (char *)*a1;
    v13 = v12;
    v7 = (char *)a1[1];
    v14 = (int)(v12 + 4);
    v28 = &v12[v11];
    goto LABEL_5;
  }
  if ( v10 )
  {
LABEL_38:
    v11 = 4 * v10;
    goto LABEL_4;
  }
  v13 = 0;
  v28 = 0;
  v14 = 4;
LABEL_5:
  if ( &v8[(_DWORD)v13] )
    *(_DWORD *)&v8[(_DWORD)v13] = *a3;
  if ( v5 != v4 )
  {
    v15 = v13;
    v16 = v4;
    do
    {
      v17 = v15 == 0;
      v16 += 4;
      if ( v15 )
        a2 = (char *)*((_DWORD *)v16 - 1);
      v15 += 4;
      if ( !v17 )
      {
        *((_DWORD *)v16 - 1) = 0;
        *((_DWORD *)v15 - 1) = a2;
      }
    }
    while ( v5 != v16 );
    v14 = (int)&v13[v5 - v4 + 4];
    if ( v5 == v7 )
    {
LABEL_22:
      v21 = v4;
      do
      {
        v23 = *(_DWORD **)v21;
        v21 += 4;
        v22 = v23;
        if ( v23 )
        {
          v24 = *(void (__fastcall **)(_DWORD *, char *))(*v22 + 8);
          if ( (char *)v24 == (char *)sub_239364 )
          {
            v25 = (_DWORD *)v22[16];
            *v22 = off_3E9AC0;
            if ( v25 != v22 + 18 )
              sub_339E64(v25);
            v26 = (_DWORD *)v22[9];
            if ( v26 != v22 + 11 )
              sub_339E64(v26);
            v27 = (_DWORD *)v22[1];
            if ( v27 != v22 + 3 )
              sub_339E64(v27);
            sub_33AC04(v22);
          }
          else
          {
            v24(v22, a2);
          }
        }
      }
      while ( v7 != v21 );
LABEL_33:
      v7 = (char *)*a1;
      goto LABEL_34;
    }
LABEL_15:
    v18 = v14;
    v19 = v5;
    do
    {
      v20 = v18 == 0;
      v19 += 4;
      if ( v18 )
        a2 = (char *)*((_DWORD *)v19 - 1);
      v18 += 4;
      if ( !v20 )
      {
        *((_DWORD *)v19 - 1) = 0;
        *(_DWORD *)(v18 - 4) = a2;
      }
    }
    while ( v19 != v7 );
    v14 += ((v7 - (v5 + 4)) & 0xFFFFFFFC) + 4;
    if ( v4 == v7 )
      goto LABEL_33;
    goto LABEL_22;
  }
  if ( v5 != v7 )
    goto LABEL_15;
LABEL_34:
  if ( v7 )
    sub_339E64(v7);
  *a1 = v13;
  a1[1] = v14;
  a1[2] = v28;
}
