unsigned int *__fastcall sub_22F488(int a1, unsigned int a2)
{
  unsigned int *v3; // r0
  unsigned int *v4; // r3
  unsigned int *result; // r0
  unsigned int v6; // r2

  v3 = (unsigned int *)(*(int (**)(void))(a1 + 308))();
  v4 = v3;
  if ( !v3 )
    return 0;
  result = (unsigned int *)*v3;
  v6 = v4[1];
  if ( *v4 >= v6 )
    return 0;
  while ( *result > a2 || result[1] <= a2 )
  {
    result += 4;
    if ( (unsigned int)result >= v6 )
      return 0;
  }
  return result;
}
