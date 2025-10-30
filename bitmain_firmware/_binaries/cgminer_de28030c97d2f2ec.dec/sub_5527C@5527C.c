char *__fastcall sub_5527C(const char *a1, _DWORD *a2)
{
  int v2; // s0
  _BYTE *v7; // [sp+Ch] [bp-8h] BYREF

  *_errno_location() = 0;
  strtof(a1, &v7);
  *a2 = v2;
  if ( *v7 || !*a1 )
    return sub_54FA8("'%s' is not a number", a1);
  if ( *_errno_location() )
    return sub_54FA8("'%s' is out of range", a1);
  return 0;
}
