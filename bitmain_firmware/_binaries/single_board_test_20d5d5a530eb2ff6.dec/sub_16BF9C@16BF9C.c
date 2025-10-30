_DWORD *__fastcall sub_16BF9C(int a1)
{
  _DWORD *result; // r0

  result = sub_E0740((void *)0xC);
  if ( result )
  {
    *result = 3;
    result[1] = a1;
  }
  else
  {
    sub_D0048(44, 111, 65, (int)"crypto/store/store_lib.c", 294);
    return 0;
  }
  return result;
}
