_DWORD *__fastcall sub_16BEE4(int a1)
{
  _DWORD *result; // r0

  result = sub_E0740((void *)0xC);
  if ( result )
  {
    *result = 1;
    result[1] = a1;
    result[2] = 0;
  }
  else
  {
    sub_D0048(44, 109, 65, (int)"crypto/store/store_lib.c", 256);
    return 0;
  }
  return result;
}
