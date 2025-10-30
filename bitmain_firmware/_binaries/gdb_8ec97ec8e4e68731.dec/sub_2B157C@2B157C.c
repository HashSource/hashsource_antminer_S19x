_DWORD *__fastcall sub_2B157C(int a1)
{
  _DWORD *result; // r0

  result = sub_2AD09C(a1, 0x1Cu);
  if ( result )
  {
    *result = a1;
    result[6] = 0;
  }
  return result;
}
