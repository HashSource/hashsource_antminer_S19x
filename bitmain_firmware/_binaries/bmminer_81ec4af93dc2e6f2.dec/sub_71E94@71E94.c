_BYTE *__fastcall sub_71E94(const char *a1)
{
  _BYTE *result; // r0

  result = localeconv();
  if ( **(_BYTE **)result != 46 )
  {
    result = strchr(a1, **(unsigned __int8 **)result);
    if ( result )
      *result = 46;
  }
  return result;
}
