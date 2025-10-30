int __fastcall sub_8E37C(int *a1, const void *a2, size_t a3)
{
  int v7; // r0
  int v8; // r6
  void *v9; // r0

  if ( *a1 <= 768 )
    return 0;
  CRYPTO_free(a1[352], "ssl/ssl_sess.c", 1021);
  a1[352] = 0;
  v7 = CRYPTO_malloc(a3 + 8, "ssl/ssl_sess.c", 1024);
  v8 = v7;
  a1[352] = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      *(_WORD *)v7 = a3;
      v9 = (void *)(v7 + 8);
      *(_DWORD *)(v8 + 4) = v9;
      memcpy(v9, a2, a3);
    }
    else
    {
      *(_WORD *)v7 = 0;
      *(_DWORD *)(v7 + 4) = 0;
    }
    return 1;
  }
  else
  {
    sub_D0048(20, 294, 65, "ssl/ssl_sess.c", 1026);
    return 0;
  }
}
