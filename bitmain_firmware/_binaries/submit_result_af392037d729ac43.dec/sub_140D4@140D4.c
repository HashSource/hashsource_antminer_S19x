char *__fastcall sub_140D4(char *format, __gnuc_va_list arg)
{
  int v3; // r0
  size_t v4; // r4
  size_t v5; // r6
  char *result; // r0
  char *v7; // r7

  v3 = vsnprintf(0, 0, format, arg);
  v4 = v3;
  if ( !v3 )
    return (char *)sub_13FF8("");
  v5 = v3 + 1;
  result = (char *)sub_13828((void *)(v3 + 1));
  v7 = result;
  if ( result )
  {
    vsnprintf(result, v5, format, arg);
    if ( sub_13CD8((int)v7, v4) )
    {
      return (char *)sub_13FD0(v7, v4);
    }
    else
    {
      sub_1383C(v7);
      return 0;
    }
  }
  return result;
}
