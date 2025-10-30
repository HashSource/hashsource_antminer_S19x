const char *__fastcall sub_52A4C(const char *a1)
{
  if ( sscanf(a1, "%d:%d", &dword_242F28, &dword_242F24) != 2 )
    return "Invalid time set, should be HH:MM";
  if ( (unsigned int)dword_242F28 > 0x17 || (unsigned int)dword_242F24 > 0x3B )
    return "Invalid time set.";
  byte_242F1C = 1;
  return 0;
}
