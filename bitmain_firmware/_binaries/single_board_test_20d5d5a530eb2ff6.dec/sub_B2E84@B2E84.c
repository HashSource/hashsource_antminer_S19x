int __fastcall sub_B2E84(unsigned int a1, unsigned int a2)
{
  int *v5; // r4
  int v6; // r8
  int v7; // r0
  int v8; // r0
  int i; // r5
  int v10; // r0
  int v11; // r5

  if ( a2 > a1 )
  {
    sub_D0048(51, 101, 103, "crypto/async/async.c", 322);
    return 0;
  }
  else
  {
    if ( !sub_DE05C(256, 0, 0) || !sub_DE414(1, 0) )
      return 0;
    v5 = (int *)sub_E0740(12, "crypto/async/async.c", 332);
    if ( v5 )
    {
      v6 = sub_10BF44(0, a2);
      *v5 = v6;
      if ( v6 )
      {
        v5[2] = a1;
        if ( a2 )
        {
          v10 = sub_E0740(24, "crypto/async/async.c", 82);
          v11 = v10;
          if ( !v10 )
          {
            sub_D0048(51, 102, 65, "crypto/async/async.c", 84);
            v5[1] = 0;
            if ( sub_10C5BC(&unk_6DF3AC, v5) )
              return 1;
LABEL_12:
            sub_D0048(51, 101, 101, "crypto/async/async.c", 365);
            v7 = *v5;
            if ( *v5 )
            {
              v8 = sub_10BD80(v7);
              for ( i = v8; v8; i = v8 )
              {
                CRYPTO_free(*(_DWORD *)(v8 + 8), "crypto/async/async.c", 96);
                CRYPTO_free(i, "crypto/async/async.c", 98);
                v8 = sub_10BD80(*v5);
              }
              v7 = *v5;
            }
            sub_10BDB4(v7);
            CRYPTO_free(v5, "crypto/async/async.c", 373);
            return 0;
          }
          *(_DWORD *)(v10 + 16) = 0;
          CRYPTO_free(*(_DWORD *)(v10 + 8), "crypto/async/async.c", 96);
          CRYPTO_free(v11, "crypto/async/async.c", 98);
        }
        v5[1] = 0;
        if ( sub_10C5BC(&unk_6DF3AC, v5) )
          return 1;
        goto LABEL_12;
      }
      sub_D0048(51, 101, 65, "crypto/async/async.c", 340);
      CRYPTO_free(v5, "crypto/async/async.c", 341);
      return 0;
    }
    else
    {
      sub_D0048(51, 101, 65, "crypto/async/async.c", 334);
      return 0;
    }
  }
}
