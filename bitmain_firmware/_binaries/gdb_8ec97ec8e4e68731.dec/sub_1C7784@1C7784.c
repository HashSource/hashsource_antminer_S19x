int *sub_1C7784()
{
  int *result; // r0

  for ( result = (int *)dword_487CEC; dword_487CEC; result = (int *)dword_487CEC )
  {
    dword_487CEC = *result;
    sub_1C5988(result);
  }
  return result;
}
