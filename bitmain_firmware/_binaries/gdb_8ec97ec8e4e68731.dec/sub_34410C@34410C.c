int **sub_34410C()
{
  int **result; // r0
  int v1; // r3

  result = *(int ***)sub_339E4C();
  if ( result )
  {
    v1 = *((unsigned __int8 *)result + 39);
    result = (int **)*result;
    if ( v1 == 1 )
      return (int **)*(result - 30);
  }
  return result;
}
