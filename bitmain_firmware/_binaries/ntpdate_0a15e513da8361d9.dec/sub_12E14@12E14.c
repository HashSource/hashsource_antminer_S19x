int sub_12E14()
{
  int result; // r0

  result = sub_13048(&unk_3335C, "./../lib/isc/unix/strerror.c", 41);
  if ( result )
    sub_15644(
      "./../lib/isc/unix/strerror.c",
      41,
      "isc__mutex_init((&isc_strerror_lock), \"./../lib/isc/unix/strerror.c\", 41) == 0",
      _stack_chk_guard);
  return result;
}
