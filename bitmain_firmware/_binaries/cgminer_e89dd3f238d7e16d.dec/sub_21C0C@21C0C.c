int __fastcall sub_21C0C(const struct timespec *a1)
{
  int result; // r0

  do
    result = clock_nanosleep(1, 1, a1, 0);
  while ( result == 4 );
  return result;
}
