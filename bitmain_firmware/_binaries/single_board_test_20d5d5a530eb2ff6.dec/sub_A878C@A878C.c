_DWORD *__fastcall sub_A878C(_DWORD *result)
{
  _DWORD *v1; // r3

  v1 = result;
  if ( result )
  {
    result = (_DWORD *)*result;
    if ( result )
      *v1 = result[3];
  }
  return result;
}
