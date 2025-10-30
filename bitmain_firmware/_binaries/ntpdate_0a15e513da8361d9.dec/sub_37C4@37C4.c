char *sub_37C4()
{
  char *result; // r0

  if ( !_bss_start__ )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(off_31004);
    result = sub_3760();
    _bss_start__ = 1;
  }
  return result;
}
