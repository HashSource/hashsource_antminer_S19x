_DWORD *__fastcall sub_24C190(_DWORD **a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r4

  result = *a1;
  if ( result )
  {
    do
    {
      v3 = (_DWORD *)result[5];
      free(result);
      result = v3;
      *a1 = v3;
    }
    while ( v3 );
  }
  return result;
}
