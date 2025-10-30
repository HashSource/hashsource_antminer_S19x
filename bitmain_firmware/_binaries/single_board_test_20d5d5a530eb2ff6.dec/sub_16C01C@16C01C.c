_DWORD *__fastcall sub_16C01C(int a1)
{
  _DWORD *result; // r0

  result = sub_E0740((void *)0xC);
  if ( result )
  {
    *result = 5;
    result[1] = a1;
  }
  else
  {
    sub_D0048(44, 107, 65, (int)"crypto/store/store_lib.c", 314);
    return 0;
  }
  return result;
}
