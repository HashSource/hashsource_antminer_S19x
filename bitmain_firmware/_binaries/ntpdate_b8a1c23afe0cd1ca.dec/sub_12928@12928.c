int sub_12928()
{
  int result; // r0

  result = sub_12B5C(&unk_33358, "./../lib/isc/unix/strerror.c", 41);
  if ( result )
    sub_150D0(
      "./../lib/isc/unix/strerror.c",
      41,
      "isc__mutex_init((&isc_strerror_lock), \"./../lib/isc/unix/strerror.c\", 41) == 0",
      _stack_chk_guard);
  return result;
}
