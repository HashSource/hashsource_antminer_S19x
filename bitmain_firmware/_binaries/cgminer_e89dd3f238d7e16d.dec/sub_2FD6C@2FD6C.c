const char *__fastcall sub_2FD6C(const char *a1)
{
  if ( !a1 || !*a1 )
    return "Invalid parameters for set temp cutoff";
  if ( (unsigned int)atoi(a1) > 0xC8 )
    return "Invalid value passed to set temp cutoff";
  dword_871DC = (int)a1;
  return 0;
}
