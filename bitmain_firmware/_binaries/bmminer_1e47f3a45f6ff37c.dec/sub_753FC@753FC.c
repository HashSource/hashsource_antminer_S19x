int __fastcall sub_753FC(int a1, double *a2)
{
  double v2; // d0
  char *endptr; // [sp+Ch] [bp-10h] BYREF
  double v8; // [sp+10h] [bp-Ch]

  sub_75320((const char **)a1);
  *_errno_location() = 0;
  strtod(*(const char **)a1, &endptr);
  v8 = v2;
  if ( (char *)(*(_DWORD *)a1 + *(_DWORD *)(a1 + 4)) != endptr )
    _assert_fail("end == strbuffer->value + strbuffer->length", "strconv.c", 0x4Eu, "jsonp_strtod");
  if ( (v8 > 1.79769313e308 || v8 < -1.79769313e308) && *_errno_location() == 34 )
    return -1;
  *a2 = v8;
  return 0;
}
