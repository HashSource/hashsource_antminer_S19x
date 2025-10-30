const char *__fastcall sub_2B824(const char *a1)
{
  if ( sscanf(a1, "%d:%d", &dword_732F0, &dword_732EC) != 2 )
    return "Invalid time set, should be HH:MM";
  if ( (unsigned int)dword_732F0 > 0x17 || (unsigned int)dword_732EC > 0x3B )
    return "Invalid time set.";
  byte_732E4 = 1;
  return 0;
}
