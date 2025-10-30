char *__fastcall sub_16C0D4(_DWORD *a1)
{
  char *v1; // r0
  char *result; // r0

  if ( *a1 == 1 )
  {
    v1 = (char *)a1[2];
    if ( !v1 )
      v1 = &byte_1A4198;
    result = sub_E9E3C(v1);
    if ( !result )
    {
      sub_D0048(44, 135, 65, (int)"crypto/store/store_lib.c", 363);
      return 0;
    }
  }
  else
  {
    sub_D0048(44, 135, 103, (int)"crypto/store/store_lib.c", 367);
    return 0;
  }
  return result;
}
