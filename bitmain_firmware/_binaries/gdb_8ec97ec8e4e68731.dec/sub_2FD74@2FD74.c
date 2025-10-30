_DWORD *__fastcall sub_2FD74(_DWORD **a1)
{
  _DWORD *result; // r0
  _DWORD *v2; // r4

  result = *a1;
  if ( result )
  {
    do
    {
      v2 = (_DWORD *)*result;
      sub_200A30();
      result = v2;
    }
    while ( v2 );
  }
  return result;
}
