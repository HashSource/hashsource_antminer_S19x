const char *__fastcall sub_51F54(const char *a1)
{
  if ( sscanf(a1, "%d:%d", &dword_242E70, &dword_242E6C) != 2 )
    return "Invalid time set, should be HH:MM";
  if ( (unsigned int)dword_242E70 > 0x17 || (unsigned int)dword_242E6C > 0x3B )
    return "Invalid time set.";
  byte_242E64 = 1;
  return 0;
}
