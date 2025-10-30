_DWORD *__fastcall sub_D8CA8(int a1, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_E0740(48, "crypto/evp/evp_lib.c", 336);
  if ( result )
  {
    *result = a1;
    result[1] = a2;
  }
  return result;
}
