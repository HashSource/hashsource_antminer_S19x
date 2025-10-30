_DWORD *__fastcall sub_26DD04(_DWORD *a1, const void *a2, int a3)
{
  _DWORD *result; // r0

  if ( a2 )
    result = sub_26DCD8(a1, a2);
  else
    result = sub_26BB08(a1);
  result[2] = a3;
  *result = 1;
  return result;
}
