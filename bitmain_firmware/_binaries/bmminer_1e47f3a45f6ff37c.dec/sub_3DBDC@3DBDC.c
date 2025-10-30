_DWORD *__fastcall sub_3DBDC(_DWORD *result, int *a2)
{
  int v2; // r12
  int v3; // r2
  int v4; // r3

  v2 = a2[1];
  v3 = *result - *a2;
  *a2 = v3;
  v4 = result[1] - v2;
  a2[1] = v4;
  if ( v4 < 0 )
  {
    *a2 = v3 - 1;
    a2[1] = v4 + 1000000;
  }
  return result;
}
