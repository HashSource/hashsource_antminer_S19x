const char *__fastcall sub_35960(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_50584();
  if ( !result )
  {
    if ( *a2 <= 0x270Fu )
      return 0;
    else
      return "Value out of range";
  }
  return result;
}
