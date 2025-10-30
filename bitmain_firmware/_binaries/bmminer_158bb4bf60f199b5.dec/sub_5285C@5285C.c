const char *__fastcall sub_5285C(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_6448C(a1, a2);
  if ( !result && *a2 > 4u )
    return "Value out of range";
  return result;
}
