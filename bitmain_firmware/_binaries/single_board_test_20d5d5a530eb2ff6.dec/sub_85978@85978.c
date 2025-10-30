int __fastcall sub_85978(_DWORD **a1, _DWORD *a2)
{
  _DWORD *v2; // r3
  int v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r5
  _DWORD *i; // r3
  int *v10; // r8
  int v11; // t1
  _DWORD *v12; // r3
  _DWORD *v13; // r1
  _DWORD *v14; // r0
  _DWORD *v15; // r12
  _DWORD *v16; // lr
  bool v17; // zf
  _DWORD *v18; // r2
  bool v19; // zf
  int v20; // r1
  int v21; // r10

  v2 = *a1;
  if ( *a1 )
  {
    v5 = 0;
    do
    {
      if ( v2[1] && v5 < *(_DWORD *)(*v2 + 56) )
        v5 = *(_DWORD *)(*v2 + 56);
      v2 = (_DWORD *)v2[3];
    }
    while ( v2 );
    v6 = 4 * (v5 + 1);
  }
  else
  {
    v5 = 0;
    v6 = 4;
  }
  v7 = sub_E0740(v6, "ssl/ssl_ciph.c", 929);
  v8 = v7;
  if ( v7 )
  {
    for ( i = *a1; i; i = (_DWORD *)i[3] )
    {
      if ( i[1] )
        ++*(_DWORD *)(v7 + 4 * *(_DWORD *)(*i + 56));
    }
    v10 = (int *)(v7 + 4 * v5);
    do
    {
      v11 = *v10--;
      if ( v11 > 0 )
      {
        v12 = *a1;
        v13 = 0;
        v14 = (_DWORD *)*a2;
        v15 = *a1;
        v16 = (_DWORD *)*a2;
        while ( 1 )
        {
          v17 = v12 == 0;
          if ( v12 )
            v17 = v14 == v13;
          if ( v17 )
            break;
          v18 = (_DWORD *)v12[3];
          if ( v5 == *(_DWORD *)(*v12 + 56) )
          {
            v19 = v12 == v16;
            if ( v12 != v16 )
              v19 = v12[1] == 0;
            if ( !v19 )
            {
              v20 = v12[4];
              if ( v12 == v15 )
                v15 = (_DWORD *)v12[3];
              v21 = v12[3];
              if ( v20 )
              {
                *(_DWORD *)(v20 + 12) = v18;
                v21 = v12[3];
              }
              if ( v21 )
                *(_DWORD *)(v21 + 16) = v20;
              v16[3] = v12;
              v12[4] = v16;
              v16 = v12;
              v12[3] = 0;
            }
          }
          v13 = v12;
          v12 = v18;
        }
        *a1 = v15;
        *a2 = v16;
      }
    }
    while ( v5-- != 0 );
    CRYPTO_free(v8, "ssl/ssl_ciph.c", 953);
    return 1;
  }
  else
  {
    sub_D0048(20, 231, 65, "ssl/ssl_ciph.c", 931);
    return 0;
  }
}
