const char *__fastcall sub_57574(unsigned int a1)
{
  if ( a1 <= 0xFFFFFFEA )
    return "Unspecified error code";
  else
    return (const char *)dword_1A00CC[-a1 + 4];
}
