_DWORD *__fastcall sub_162510(int a1, int a2, const char *a3, size_t a4, int a5, int a6, int a7, size_t *a8)
{
  int *v12; // r5
  _DWORD *result; // r0

  if ( a1 == -1 )
  {
    v12 = (int *)sub_173680(a2, a7, a5, a6);
  }
  else if ( sub_15E1BC(1, a1, 0, 0, 0) )
  {
    v12 = (int *)sub_1734D8(a2, a7, a5, a6, 0, a1);
  }
  else
  {
    sub_D00F0();
    v12 = (int *)sub_1732AC(a1, a7, a5, a6);
  }
  if ( v12 )
  {
    result = sub_162490(a3, a4, a8, v12);
    if ( !result )
    {
      X509_ALGOR_free((int)v12);
      return 0;
    }
  }
  else
  {
    sub_D0048(35, 125, 13, (int)"crypto/pkcs12/p12_p8e.c", 32);
    return 0;
  }
  return result;
}
