_DWORD *__fastcall sub_EA214(_DWORD *result, _DWORD *a2)
{
  int v2; // r3
  int v3; // r2

  if ( *result == *a2 )
  {
    v2 = a2[1];
    v3 = a2[2];
    a2[1] = v2 + 1;
    *(_DWORD *)(v3 + 4 * v2) = result;
  }
  return result;
}
