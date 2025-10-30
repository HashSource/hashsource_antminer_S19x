const char *__fastcall sub_526DC(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_6448C(a1, a2);
  if ( !result && *a2 > 0x270Fu )
    return "Value out of range";
  return result;
}
