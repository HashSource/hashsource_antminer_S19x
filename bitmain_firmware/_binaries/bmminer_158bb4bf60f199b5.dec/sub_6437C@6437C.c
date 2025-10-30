char *__fastcall sub_6437C(const char *a1, _DWORD *a2)
{
  int v2; // s0
  int *v5; // r5
  _BYTE *v6; // r3
  char *result; // r0
  _BYTE *v8; // [sp+4h] [bp-4h] BYREF

  v5 = _errno_location();
  *v5 = 0;
  strtof(a1, &v8);
  v6 = v8;
  *a2 = v2;
  if ( *v6 || !*a1 )
    return sub_64250("'%s' is not a number", a1);
  result = (char *)*v5;
  if ( *v5 )
    return sub_64250("'%s' is out of range", a1);
  return result;
}
