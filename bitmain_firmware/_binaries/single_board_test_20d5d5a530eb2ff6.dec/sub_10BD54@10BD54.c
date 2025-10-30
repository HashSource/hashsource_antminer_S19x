int *__fastcall sub_10BD54(int *result)
{
  int v1; // r2
  int *v2; // r4
  int *v3; // r0
  int v4; // r5

  if ( result )
  {
    v1 = *result;
    if ( *result )
    {
      v2 = result;
      v3 = (int *)result[1];
      v4 = *v3;
      if ( v1 != 1 )
      {
        memmove(v3, v3 + 1, 4 * (v1 - 1));
        v1 = *v2;
      }
      *v2 = v1 - 1;
      return (int *)v4;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
