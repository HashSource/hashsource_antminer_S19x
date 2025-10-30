char *__fastcall sub_3CF7C(const char *a1)
{
  if ( strstr(a1, "PT2") )
    return "PT2";
  if ( strstr(a1, "PT1new") )
    return "PT1new";
  if ( strstr(a1, "SWEEP") )
    return "SWEEP";
  if ( strstr(a1, "PT3") )
    return "PT3";
  if ( strstr(a1, "PT1+") )
    return "PT1+";
  return 0;
}
