int __fastcall sub_3BA78(const char *a1, const char *a2, int a3)
{
  if ( a3 )
  {
    pthread_mutex_trylock(&stru_5BE14C);
    sub_3B974(43);
    off_AFD50();
  }
  sub_3B9F0();
  printf("%s%s%s", a1, a2, "                    \n");
  sub_3B974(56);
  return off_AFD50();
}
