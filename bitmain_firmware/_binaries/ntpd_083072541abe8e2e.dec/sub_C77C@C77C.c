char *sub_C77C()
{
  char *result; // r0

  if ( !byte_B8608 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(off_B6004);
    result = sub_C71C();
    byte_B8608 = 1;
  }
  return result;
}
