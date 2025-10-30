const char *__fastcall sub_2C5A4(const char *a1)
{
  if ( sscanf(a1, "%d:%d", &dword_733A8, &dword_733A4) != 2 )
    return "Invalid time set, should be HH:MM";
  if ( (unsigned int)dword_733A8 > 0x17 || (unsigned int)dword_733A4 > 0x3B )
    return "Invalid time set.";
  byte_7339C = 1;
  return 0;
}
