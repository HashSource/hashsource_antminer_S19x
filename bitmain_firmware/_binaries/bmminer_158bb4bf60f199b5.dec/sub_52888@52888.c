const char *__fastcall sub_52888(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_6448C(a1, a2);
  if ( !result && *a2 > 0xC8u )
    return "Value out of range";
  return result;
}
