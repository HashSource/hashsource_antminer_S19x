bool __fastcall sub_8E1F0(int a1, int a2)
{
  int v4; // r3

  CRYPTO_free(*(_DWORD *)(a1 + 460), "ssl/ssl_sess.c", 883);
  if ( a2 )
  {
    v4 = sub_E9E3C(a2, "ssl/ssl_sess.c", 888);
    *(_DWORD *)(a1 + 460) = v4;
    return v4 != 0;
  }
  else
  {
    *(_DWORD *)(a1 + 460) = 0;
    return 1;
  }
}
