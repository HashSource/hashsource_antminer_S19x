char *__fastcall sub_930E0(char *a1, va_list a2)
{
  unsigned int v2; // r0
  int v3; // r0
  __int64 v5; // r0
  char *v6; // [sp+4h] [bp-8h] BYREF

  v6 = 0;
  v2 = vasprintf(&v6, a1, a2);
  if ( v6 )
    v3 = v2 >> 31;
  else
    v3 = 1;
  if ( !v3 )
    return v6;
  v5 = sub_94700("common/common-utils.c", 129, "vasprintf call failed");
  return (char *)sub_93140((const char *)v5, HIDWORD(v5));
}
