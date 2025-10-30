_DWORD *__fastcall sub_2A612C(_DWORD *result, _DWORD *a2)
{
  if ( result[3] != a2[3] || *result != *a2 )
    return 0;
  if ( result[4] < a2[4] )
    return a2;
  return result;
}
