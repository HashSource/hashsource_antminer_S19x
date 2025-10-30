int *sub_F3B60()
{
  int *result; // r0
  int *v1; // r4
  int *v2; // r0
  _BOOL4 v3; // r4

  result = (int *)sub_F3B3C();
  v1 = result;
  if ( result )
  {
    sub_F370C(result);
    v2 = v1;
    v3 = v1[23] == 1;
    sub_F3718(v2);
    return (int *)v3;
  }
  return result;
}
