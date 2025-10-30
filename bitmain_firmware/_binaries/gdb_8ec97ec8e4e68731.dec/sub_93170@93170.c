unsigned int sub_93170(char *a1, size_t a2, const char *a3, ...)
{
  unsigned int result; // r0
  __int64 v5; // r0
  va_list varg_r3; // [sp+1Ch] [bp+Ch] BYREF

  va_start(varg_r3, a3);
  result = vsnprintf(a1, a2, a3, varg_r3);
  if ( result >= a2 )
  {
    v5 = sub_94700(
           "common/common-utils.c",
           141,
           "%s: Assertion `%s' failed.",
           "int xsnprintf(char*, size_t, const char*, ...)",
           "ret < size");
    return sub_931D8(v5, (const char *)HIDWORD(v5));
  }
  return result;
}
