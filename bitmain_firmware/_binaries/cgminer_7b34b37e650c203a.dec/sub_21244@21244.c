int __fastcall sub_21244(const char *a1, const char *a2, int a3)
{
  if ( a3 )
  {
    pthread_mutex_trylock(&stru_766E4);
    sub_21138(41);
    off_67ED8();
  }
  sub_211B8();
  printf("%s%s%s", a1, a2, asc_4C844);
  sub_21138(54);
  return off_67ED8();
}
