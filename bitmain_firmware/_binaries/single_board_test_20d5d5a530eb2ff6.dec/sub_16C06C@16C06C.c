char *__fastcall sub_16C06C(int a1)
{
  char *result; // r0

  if ( *(_DWORD *)a1 == 1 )
  {
    result = sub_E9E3C(*(char **)(a1 + 4));
    if ( !result )
    {
      sub_D0048(44, 103, 65, (int)"crypto/store/store_lib.c", 340);
      return 0;
    }
  }
  else
  {
    sub_D0048(44, 103, 103, (int)"crypto/store/store_lib.c", 344);
    return 0;
  }
  return result;
}
