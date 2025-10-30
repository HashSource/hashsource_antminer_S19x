_DWORD *__fastcall sub_D1364(int a1)
{
  _DWORD *result; // r0

  result = sub_CFCDC();
  if ( result )
    result[result[96]] |= ~(((a1 - 1) & ~a1) >> 31) & 2;
  return result;
}
