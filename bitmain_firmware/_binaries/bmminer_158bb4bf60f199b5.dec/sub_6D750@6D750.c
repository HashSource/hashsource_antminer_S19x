int __fastcall sub_6D750(int a1, double *a2)
{
  double v2; // d0
  struct lconv *v5; // r0
  const char *v6; // r5
  int v7; // r6
  char *v8; // r0
  int *v9; // r6
  int result; // r0
  char *endptr; // [sp+4h] [bp-8h] BYREF

  v5 = localeconv();
  v6 = *(const char **)a1;
  v7 = *(unsigned __int8 *)v5->decimal_point;
  if ( v7 != 46 )
  {
    v8 = strchr(*(const char **)a1, 46);
    if ( v8 )
    {
      *v8 = v7;
      v6 = *(const char **)a1;
    }
  }
  v9 = _errno_location();
  *v9 = 0;
  strtod(v6, &endptr);
  if ( endptr != (char *)(*(_DWORD *)a1 + *(_DWORD *)(a1 + 4)) )
    _assert_fail(
      "end == strbuffer->value + strbuffer->length",
      "3rdparty/jansson-2.6/src/strconv.c",
      0x46u,
      "jsonp_strtod");
  result = *v9 == 34 && v2 != 0.0;
  if ( result )
    return -1;
  *a2 = v2;
  return result;
}
