int __fastcall sub_8E278(int a1, int a2, int a3)
{
  bool v6; // zf
  int result; // r0

  CRYPTO_free(*(_DWORD *)(a1 + 484), "ssl/ssl_sess.c", 934);
  v6 = a3 == 0;
  if ( a3 )
    v6 = a2 == 0;
  if ( v6 )
  {
    *(_DWORD *)(a1 + 484) = 0;
    *(_DWORD *)(a1 + 488) = 0;
    return 1;
  }
  else
  {
    result = sub_E9E68(a2, a3, "ssl/ssl_sess.c", 940);
    *(_DWORD *)(a1 + 484) = result;
    if ( result )
    {
      *(_DWORD *)(a1 + 488) = a3;
      return 1;
    }
    else
    {
      *(_DWORD *)(a1 + 488) = 0;
    }
  }
  return result;
}
