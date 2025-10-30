size_t __fastcall sub_EA858(int *a1, _DWORD *a2)
{
  int v2; // r4
  char **v3; // r3
  size_t result; // r0

  v2 = *a1;
  v3 = &off_2078B0[6 * *a2];
  result = *(_DWORD *)(*a1 + 12);
  if ( result == (_DWORD)v3[3] )
  {
    if ( result )
      return j_memcmp(*(const void **)(v2 + 16), v3[4], result);
  }
  else
  {
    result -= (unsigned int)v3[3];
  }
  return result;
}
