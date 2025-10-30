FILE *__fastcall sub_54EE4(int a1, char *s, const void *a3, int a4, size_t a5)
{
  FILE *result; // r0
  FILE *sa; // [sp+4h] [bp-4h] BYREF

  sub_967F0((int)&sa, a1, s);
  if ( fwrite(a3, a5, 1u, sa) != 1 )
    sub_258B04(a1);
  result = sa;
  if ( sa )
    return (FILE *)fclose(sa);
  return result;
}
