_DWORD *__fastcall sub_15AD68(int a1, const char *a2)
{
  _DWORD *result; // r0
  int v4; // r5
  int v5; // r4

  fprintf((FILE *)stderr, "(TEST_ENG_OPENSSL_PKEY)Loading Private key %s\n", a2);
  result = (_DWORD *)sub_B782C((int)a2, "r");
  v4 = (int)result;
  if ( result )
  {
    v5 = sub_EEC84(result, 0, 0, 0);
    BIO_vfree_0(v4);
    return (_DWORD *)v5;
  }
  return result;
}
