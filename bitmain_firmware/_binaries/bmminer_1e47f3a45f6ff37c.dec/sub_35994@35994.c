const char *__fastcall sub_35994(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_50584();
  if ( !result )
  {
    result = "Value out of range";
    if ( *a2 <= 0x64u )
      return 0;
  }
  return result;
}
