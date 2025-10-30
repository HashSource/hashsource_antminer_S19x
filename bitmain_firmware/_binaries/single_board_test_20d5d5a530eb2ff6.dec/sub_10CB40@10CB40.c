void __fastcall sub_10CB40(void *a1)
{
  char *v2; // r0
  int v3; // r4
  int v4; // r5
  int v5; // r0
  int v6; // r8
  int v7; // r0
  int v8; // r12
  unsigned int v9; // r10
  unsigned int v10; // r5
  int v11; // r4
  void *v12; // lr
  _BOOL4 v13; // r3
  void *v14; // r0
  int v15; // r10
  void *v16; // t1

  if ( a1 )
  {
    v2 = (char *)*((_DWORD *)a1 + 2);
    if ( v2 )
    {
      v3 = *(_DWORD *)a1 - 1;
      if ( v3 >= 0 )
      {
        v4 = 4 * v3;
        do
        {
          --v3;
          sub_DF748(*(int **)&v2[v4]);
          v4 -= 4;
          v2 = (char *)*((_DWORD *)a1 + 2);
        }
        while ( v3 != -1 );
      }
      CRYPTO_free(v2);
    }
    CRYPTO_free(*((void **)a1 + 3));
    v5 = *((_DWORD *)a1 + 1);
    if ( v5 )
    {
      v6 = sub_10C010(v5) - 1;
      if ( v6 >= 0 )
      {
        do
        {
          v7 = sub_10C01C(*((_DWORD **)a1 + 1), v6);
          v8 = *(_DWORD *)a1;
          v9 = v7;
          v10 = *(_DWORD *)(v7 + 4 * *(_DWORD *)a1);
          if ( v10 )
          {
            if ( v8 > 0 )
            {
              v11 = 0;
              do
              {
                v12 = *(void **)(v9 + 4 * v11++);
                v13 = v9 > (unsigned int)v12;
                if ( v10 < (unsigned int)v12 )
                  v13 = 1;
                if ( v13 )
                {
                  CRYPTO_free(v12);
                  v8 = *(_DWORD *)a1;
                }
              }
              while ( v11 < v8 );
            }
          }
          else if ( v8 > 0 )
          {
            v15 = v7 - 4;
            do
            {
              v16 = *(void **)(v15 + 4);
              v15 += 4;
              ++v10;
              CRYPTO_free(v16);
            }
            while ( *(_DWORD *)a1 > (signed int)v10 );
          }
          v14 = (void *)sub_10C01C(*((_DWORD **)a1 + 1), v6--);
          CRYPTO_free(v14);
        }
        while ( v6 != -1 );
      }
      sub_10BDB4(*((void ***)a1 + 1));
    }
    CRYPTO_free(a1);
  }
}
