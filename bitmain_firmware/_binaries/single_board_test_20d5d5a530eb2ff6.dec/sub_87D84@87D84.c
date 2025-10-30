int __fastcall sub_87D84(_DWORD *a1, unsigned int a2, unsigned int a3, unsigned int a4, _BYTE *src, int a6)
{
  _BYTE *v10; // r0
  int v11; // r2
  _DWORD *v12; // r9
  void *v13; // r0
  int v14; // r1
  void *v15; // r2
  int v16; // r6
  int v17; // r10
  unsigned __int8 *v18; // r0
  unsigned int v19; // r3
  unsigned int v20; // r3
  int v22; // r3
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r0
  int v27; // r1
  int v28; // r2
  _BYTE *v29; // [sp+Ch] [bp-Ch] BYREF
  int v30; // [sp+10h] [bp-8h] BYREF
  int v31; // [sp+14h] [bp-4h] BYREF

  if ( a1[38] )
  {
    if ( a6 < 0 )
    {
      sub_D0048(20, 394, 189, "ssl/ssl_lib.c", 307);
      return 0;
    }
    if ( a2 > 3 )
    {
      sub_D0048(20, 394, 184, "ssl/ssl_lib.c", 312);
      return 0;
    }
    if ( a3 > 1 )
    {
      sub_D0048(20, 394, 202, "ssl/ssl_lib.c", 317);
      return 0;
    }
    if ( a4 )
    {
      v22 = a1[37];
      if ( *(unsigned __int8 *)(v22 + 8) < a4 || (v23 = *(_DWORD *)(*(_DWORD *)v22 + 4 * a4)) == 0 )
      {
        sub_D0048(20, 394, 200, "ssl/ssl_lib.c", 324);
        return 0;
      }
      if ( a6 != sub_D8C78(v23) )
      {
        sub_D0048(20, 394, 192, "ssl/ssl_lib.c", 330);
        return 0;
      }
    }
    if ( !src )
    {
      sub_D0048(20, 394, 203, "ssl/ssl_lib.c", 334);
      return 0;
    }
    v10 = (_BYTE *)sub_E0740(16, "ssl/ssl_lib.c", 338);
    v11 = 339;
    v12 = v10;
    if ( !v10 )
      goto LABEL_46;
    *v10 = a2;
    v10[1] = a3;
    v10[2] = a4;
    v13 = (void *)CRYPTO_malloc(a6, "ssl/ssl_lib.c", 346);
    v12[1] = v13;
    if ( !v13 )
    {
      sub_878F8((int)v12);
      v11 = 349;
LABEL_46:
      sub_D0048(20, 394, 65, "ssl/ssl_lib.c", v11);
      return -1;
    }
    memcpy(v13, src, a6);
    v12[2] = a6;
    if ( a4 )
    {
LABEL_16:
      v16 = 0;
      v17 = sub_10C010(a1[38], v14, v15);
      if ( v17 > 0 )
      {
        do
        {
          v18 = (unsigned __int8 *)sub_10C01C(a1[38], v16);
          v19 = *v18;
          if ( a2 >= v19 )
          {
            if ( a2 > v19 )
              break;
            v20 = v18[1];
            if ( a3 >= v20
              && (a3 > v20
               || *(unsigned __int8 *)(*(_DWORD *)(a1[37] + 4) + v18[2]) <= (unsigned int)*(unsigned __int8 *)(*(_DWORD *)(a1[37] + 4) + a4)) )
            {
              break;
            }
          }
          ++v16;
        }
        while ( v17 != v16 );
      }
      if ( sub_10BA90(a1[38], v12, v16) )
      {
        a1[42] |= 1 << a2;
        return 1;
      }
      CRYPTO_free(v12[1], "ssl/ssl_lib.c", 186);
      sub_DA240(v12[3]);
      CRYPTO_free(v12, "ssl/ssl_lib.c", 188);
      v11 = 451;
      goto LABEL_46;
    }
    v30 = 0;
    v31 = 0;
    v29 = src;
    if ( a3 == 1 )
    {
      if ( !d2i_PUBKEY(&v31, &v29, a6) || (v15 = src, src > v29) || a6 != v29 - src )
      {
        CRYPTO_free(v12[1], "ssl/ssl_lib.c", 186);
        sub_DA240(v12[3]);
        CRYPTO_free(v12, "ssl/ssl_lib.c", 188);
        sub_D0048(20, 394, 201, "ssl/ssl_lib.c", 401);
        return 0;
      }
      if ( a2 == 2 )
        v12[3] = v31;
      else
        sub_DA240(v31);
      goto LABEL_16;
    }
    if ( !d2i_X509(&v30, &v29, a6) || src > v29 || a6 != v29 - src )
    {
      CRYPTO_free(v12[1], "ssl/ssl_lib.c", 186);
      sub_DA240(v12[3]);
      CRYPTO_free(v12, "ssl/ssl_lib.c", 188);
      sub_D0048(20, 394, 180, "ssl/ssl_lib.c", 366);
      return 0;
    }
    if ( sub_10E89C(v30) )
    {
      if ( ((5u >> a2) & 1) != 0 )
      {
        v26 = a1[39];
        if ( !v26 && (v26 = sub_10BFCC(0), (a1[39] = v26) == 0) || !sub_10BD3C(v26, v30) )
        {
          sub_D0048(20, 394, 65, "ssl/ssl_lib.c", 390);
          X509_free(v30, v27, v28);
          sub_878F8((int)v12);
          return -1;
        }
      }
      else
      {
        X509_free(v30, v24, v25);
      }
      goto LABEL_16;
    }
    sub_878F8((int)v12);
    sub_D0048(20, 394, 180, "ssl/ssl_lib.c", 371);
    return 0;
  }
  else
  {
    sub_D0048(20, 394, 175, "ssl/ssl_lib.c", 302);
    return -1;
  }
}
