char *sub_3690()
{
  char *result; // r0

  if ( !byte_31278 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(off_31004);
    result = sub_3630();
    byte_31278 = 1;
  }
  return result;
}
