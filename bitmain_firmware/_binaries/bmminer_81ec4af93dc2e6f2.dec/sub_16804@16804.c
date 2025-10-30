int *sub_16804()
{
  int *result; // r0

  if ( !byte_B0E70 )
  {
    result = sub_167B4();
    byte_B0E70 = 1;
  }
  return result;
}
