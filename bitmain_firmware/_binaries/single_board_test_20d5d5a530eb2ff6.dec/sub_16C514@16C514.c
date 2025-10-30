_DWORD *__fastcall sub_16C514(char *a1, int a2)
{
  _DWORD *result; // r0
  _DWORD *v5; // r4
  char *v6; // r5

  result = sub_E0740((void *)0xC);
  v5 = result;
  if ( !result )
  {
    sub_D0048(44, 123, 65, (int)"crypto/store/store_lib.c", 612);
    return v5;
  }
  *result = -1;
  result[1] = a2;
  if ( a1 )
  {
    v6 = sub_E9E3C(a1);
    v5[2] = v6;
    if ( v6 )
      return v5;
    sub_D0048(44, 123, 65, (int)"crypto/store/store_lib.c", 622);
    OSSL_STORE_INFO_free(v5);
    return 0;
  }
  else
  {
    result[2] = 0;
  }
  return result;
}
