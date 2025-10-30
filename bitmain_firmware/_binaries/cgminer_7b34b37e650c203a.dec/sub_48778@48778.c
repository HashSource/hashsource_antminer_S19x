_DWORD *__fastcall sub_48778(char *format, __gnuc_va_list arg)
{
  int v3; // r0
  size_t v4; // r4
  char *v5; // r0
  char *v6; // r7

  v3 = vsnprintf(0, 0, format, arg);
  v4 = v3;
  if ( !v3 )
    return sub_485C8("", 0);
  v5 = (char *)sub_4774C((void *)(v3 + 1));
  v6 = v5;
  if ( !v5 )
    return 0;
  vsnprintf(v5, v4 + 1, format, arg);
  if ( sub_47EB4((int)v6, v4) )
    return sub_4800C(v6, v4, 1);
  sub_47764(v6);
  return 0;
}
