int sub_76ABC()
{
  int result; // r0

  result = sub_798E8(&unk_1082B4, "./../lib/isc/unix/strerror.c", 41);
  if ( result )
    sub_705AC(
      "./../lib/isc/unix/strerror.c",
      41,
      "isc__mutex_init((&isc_strerror_lock), \"./../lib/isc/unix/strerror.c\", 41) == 0");
  return result;
}
