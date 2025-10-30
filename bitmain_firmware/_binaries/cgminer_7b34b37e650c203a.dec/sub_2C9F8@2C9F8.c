const char *__fastcall sub_2C9F8(const char *a1)
{
  if ( !a1 || !*a1 )
    return "Invalid parameters for set temp cutoff";
  if ( (unsigned int)strtol(a1, 0, 10) > 0xC8 )
    return "Invalid value passed to set temp cutoff";
  dword_68FD4 = (int)a1;
  return 0;
}
