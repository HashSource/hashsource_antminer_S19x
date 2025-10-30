int *sub_C6D50()
{
  int *result; // r0
  int v1; // r1
  bool v2; // cf

  result = *(int **)(dword_47834C + 52);
  if ( result )
  {
    v1 = *result;
    v2 = dword_478350 >= (unsigned int)*result;
    if ( dword_478350 >= (unsigned int)*result )
      result = 0;
    else
      v1 = dword_478350 + 2;
    if ( !v2 )
      result = (int *)result[v1];
  }
  ++dword_478350;
  return result;
}
