int __fastcall sub_8E570(int a1, int a2, int a3)
{
  bool v6; // zf
  int result; // r0

  CRYPTO_free(*(_DWORD *)(a1 + 500), "ssl/ssl_sess.c", 1241);
  v6 = a3 == 0;
  if ( a3 )
    v6 = a2 == 0;
  *(_DWORD *)(a1 + 504) = 0;
  if ( v6 )
  {
    *(_DWORD *)(a1 + 500) = 0;
    return 1;
  }
  else
  {
    result = sub_E9E68(a2, a3, "ssl/ssl_sess.c", 1247);
    *(_DWORD *)(a1 + 500) = result;
    if ( result )
    {
      *(_DWORD *)(a1 + 504) = a3;
      return 1;
    }
  }
  return result;
}
