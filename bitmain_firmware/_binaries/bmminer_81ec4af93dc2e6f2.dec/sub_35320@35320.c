const char *__fastcall sub_35320(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_4E4E8();
  if ( !result && *a2 > 0x270Fu )
    return "Value out of range";
  return result;
}
