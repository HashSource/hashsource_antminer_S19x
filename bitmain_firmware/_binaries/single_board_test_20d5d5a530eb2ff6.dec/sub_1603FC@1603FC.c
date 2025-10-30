struct tm *__fastcall sub_1603FC(const time_t *a1, struct tm *a2)
{
  if ( gmtime_r(a1, a2) )
    return a2;
  else
    return 0;
}
