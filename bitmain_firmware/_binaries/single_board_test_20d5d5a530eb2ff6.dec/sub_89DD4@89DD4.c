int __fastcall sub_89DD4(int a1, int a2, unsigned int a3)
{
  bool v3; // zf
  unsigned int v5; // r3
  int v7; // r2
  int v8; // r7

  v3 = a2 == 0;
  if ( a2 )
    v3 = a3 == 0;
  if ( v3 )
  {
    CRYPTO_free(*(_DWORD *)(a1 + 1428), "ssl/ssl_lib.c", 2910);
    *(_DWORD *)(a1 + 1428) = 0;
    *(_DWORD *)(a1 + 1432) = 0;
    return 0;
  }
  else
  {
    v5 = 0;
    if ( a3 > 1 )
    {
      while ( 1 )
      {
        v7 = *(unsigned __int8 *)(a2 + v5);
        v5 += v7 + 1;
        if ( !v7 )
          break;
        if ( a3 <= v5 )
        {
          if ( a3 != v5 )
            return 1;
          v8 = sub_E9E68(a2, a3, "ssl/ssl_lib.c", 2919);
          if ( v8 )
          {
            CRYPTO_free(*(_DWORD *)(a1 + 1428), "ssl/ssl_lib.c", 2924);
            *(_DWORD *)(a1 + 1428) = v8;
            *(_DWORD *)(a1 + 1432) = a3;
            return 0;
          }
          else
          {
            sub_D0048(20, 344, 65, "ssl/ssl_lib.c", 2921);
            return 1;
          }
        }
      }
    }
    return 1;
  }
}
