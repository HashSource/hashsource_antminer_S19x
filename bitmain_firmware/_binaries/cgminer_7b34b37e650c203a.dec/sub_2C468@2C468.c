const char *__fastcall sub_2C468(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_40268(a1, a2);
  if ( !result && *a2 > 0x64u )
    return "Value out of range";
  return result;
}
