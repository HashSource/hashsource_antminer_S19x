int sub_75400()
{
  int result; // r0

  sub_703E8();
  result = pthread_once(&dword_10728C, (void (*)(void))sub_752E0);
  if ( result )
    sub_6F61C("./../lib/isc/result.c", 168, "((pthread_once((&once), (initialize_action)) == 0) ? 0 : 34) == 0");
  return result;
}
