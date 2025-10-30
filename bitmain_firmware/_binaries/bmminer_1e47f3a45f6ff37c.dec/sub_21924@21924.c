_DWORD *__fastcall sub_21924(_DWORD *result, _DWORD *a2, int a3)
{
  _DWORD *v3; // r2

  if ( a3 > 0 )
  {
    v3 = &result[a3];
    do
      *result++ ^= *a2;
    while ( result != v3 );
  }
  return result;
}
