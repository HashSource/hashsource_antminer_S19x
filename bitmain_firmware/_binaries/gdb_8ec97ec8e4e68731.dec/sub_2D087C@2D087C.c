_DWORD *__fastcall sub_2D087C(int a1, int a2)
{
  _DWORD *result; // r0

  result = sub_2AD09C(a1, 0x2Cu);
  if ( result )
  {
    result[10] = a2;
    *result = 0;
    result[1] = 2;
    result[9] = 1;
  }
  return result;
}
