int *__fastcall sub_10BD80(int *result)
{
  int v1; // r3
  int v2; // r2
  int v3; // r3

  if ( result )
  {
    v1 = *result;
    if ( *result )
    {
      v2 = v1 - 1;
      v3 = *(_DWORD *)(result[1] + 4 * (v1 - 1));
      *result = v2;
      return (int *)v3;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
