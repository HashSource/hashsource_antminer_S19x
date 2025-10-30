void *sub_16A5C()
{
  void *result; // r0

  if ( !byte_B3BE0 )
  {
    result = sub_16A0C();
    byte_B3BE0 = 1;
  }
  return result;
}
