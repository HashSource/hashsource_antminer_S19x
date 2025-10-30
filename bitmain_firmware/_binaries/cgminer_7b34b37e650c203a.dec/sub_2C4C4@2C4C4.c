const char *__fastcall sub_2C4C4(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_40268(a1, a2);
  if ( !result && *a2 > 0xAu )
    return "Value out of range";
  return result;
}
