int __fastcall sub_3CF38(struct timespec *req)
{
  int result; // r0

  do
    result = clock_nanosleep(1, 1, req, 0);
  while ( result == 4 );
  return result;
}
