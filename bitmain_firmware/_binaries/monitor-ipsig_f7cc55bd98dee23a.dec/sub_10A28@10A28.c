char *sub_10A28()
{
  char *result; // r0

  if ( !byte_220AC )
  {
    result = sub_109D8();
    byte_220AC = 1;
  }
  return result;
}
