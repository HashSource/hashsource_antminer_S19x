_BYTE *__fastcall sub_5506C(const char **a1)
{
  _BYTE *result; // r0
  size_t v3; // [sp+10h] [bp-Ch] BYREF
  _BYTE *i; // [sp+14h] [bp-8h]

  if ( a1[1] != (const char *)2 && a1[1] != (const char *)1 && a1[1] != (const char *)4 )
    errx(1, "Option %s: unknown entry type %u", *a1, a1[1]);
  if ( !a1[6] )
    errx(1, "Option %s: description cannot be NULL", *a1);
  if ( **a1 != 45 )
    errx(1, "Option %s: does not begin with '-'", *a1);
  result = (_BYTE *)sub_54B9C((int)*a1, &v3);
  for ( i = result; i; i = result )
  {
    if ( *i == 45 )
    {
      if ( v3 == 1 )
        errx(1, "Option %s: invalid long option '--'", *a1);
      ++dword_94314;
    }
    else
    {
      if ( v3 != 1 )
        errx(1, "Option %s: invalid short option '%.*s'", *a1, v3 + 1, i - 1);
      ++dword_94318;
      if ( a1[1] == (const char *)2 || a1[1] == (const char *)4 )
        ++dword_94320;
    }
    if ( a1[1] == (const char *)1 && (i[v3] == 32 || i[v3] == 61) )
      errx(1, "Option %s: does not take arguments '%s'", *a1, &i[v3 + 1]);
    result = (_BYTE *)sub_54BE8((int)i, &v3);
  }
  return result;
}
