unsigned __int8 *__fastcall sub_A03E4(int a1, int a2)
{
  unsigned __int8 *result; // r0

  result = *(unsigned __int8 **)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + 24 * a2 + 16);
  if ( result )
    return (unsigned __int8 *)(*result == 79);
  return result;
}
