int sub_75A78()
{
  int result; // r0

  result = sub_78614(&unk_107290, "./../lib/isc/unix/strerror.c", 41);
  if ( result )
    sub_6F61C(
      "./../lib/isc/unix/strerror.c",
      41,
      "isc__mutex_init((&isc_strerror_lock), \"./../lib/isc/unix/strerror.c\", 41) == 0");
  return result;
}
