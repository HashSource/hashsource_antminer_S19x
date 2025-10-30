unsigned __int8 *__fastcall sub_1FA364(int a1)
{
  int v1; // r3
  unsigned __int8 *result; // r0

  v1 = *(_DWORD *)(a1 + 24);
  if ( *(_BYTE *)v1 != 3 )
    return 0;
  result = *(unsigned __int8 **)(v1 + 12);
  if ( result )
    return (unsigned __int8 *)(*result == 40);
  return result;
}
