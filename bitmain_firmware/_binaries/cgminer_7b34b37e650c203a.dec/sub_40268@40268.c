char *__fastcall sub_40268(const char *a1, _DWORD *a2)
{
  char *result; // r0
  int v4; // [sp+4h] [bp-4h] BYREF

  result = sub_401E0(a1, &v4);
  if ( !result )
    *a2 = v4;
  return result;
}
