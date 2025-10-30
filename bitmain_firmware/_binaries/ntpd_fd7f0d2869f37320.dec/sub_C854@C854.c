char *sub_C854()
{
  char *result; // r0

  if ( !_bss_start__ )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(off_B7004);
    result = sub_C7F0();
    _bss_start__ = 1;
  }
  return result;
}
