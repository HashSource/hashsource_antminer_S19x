_DWORD *__fastcall sub_1CDC6C(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r4

  result = *(_DWORD **)(a1 + 8);
  if ( result )
  {
    do
    {
      v3 = (_DWORD *)result[1];
      free(result);
      result = v3;
    }
    while ( *(_DWORD **)(a1 + 8) != v3 );
    *(_DWORD *)(a1 + 8) = 0;
  }
  return result;
}
