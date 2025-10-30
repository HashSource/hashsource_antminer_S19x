int __fastcall sub_3C210(const char *a1, const char *a2, int a3)
{
  if ( a3 )
  {
    pthread_mutex_trylock(&stru_5C3004);
    sub_3C118(43);
    off_B31B8();
  }
  sub_3C194();
  printf("%s%s%s", a1, a2, "                    \n");
  sub_3C118(56);
  return off_B31B8();
}
