size_t __fastcall sub_29B1F4(const char *a1, mbstate_t *a2)
{
  size_t v4; // r0
  size_t result; // r0

  v4 = strlen(a1);
  if ( !a2 )
    return _mbrlen(a1, v4, 0);
  result = mbrtowc(0, a1, v4, a2);
  if ( result >= 0xFFFFFFFE )
  {
    a2->__count = 0;
    a2->__wch = 0;
  }
  return result;
}
