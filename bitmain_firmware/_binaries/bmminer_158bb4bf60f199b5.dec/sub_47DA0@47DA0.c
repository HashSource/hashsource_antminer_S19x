int __fastcall sub_47DA0(const char *a1, const char *a2, int a3)
{
  if ( a3 )
  {
    pthread_mutex_trylock(&stru_246264);
    sub_47C94(42);
    off_9E444();
  }
  sub_47D14();
  printf("%s%s%s", a1, a2, "                    \n");
  sub_47C94(55);
  return off_9E444();
}
