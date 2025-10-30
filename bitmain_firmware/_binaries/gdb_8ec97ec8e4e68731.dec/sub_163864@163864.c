const char *__fastcall sub_163864(const char **a1)
{
  const char **v1; // r5
  unsigned int v2; // r4
  const char *v3; // r3
  unsigned int v4; // r0
  const char *v5; // t1
  unsigned int v7; // r4

  v1 = a1;
  if ( a1 )
  {
    v2 = 0;
    byte_487788[0] = 0;
    v3 = *a1;
    if ( !*a1 )
      return byte_487788;
    while ( 1 )
    {
      v4 = sub_93170(&byte_487788[v2], 100 - v2, "%s, ", v3);
      v5 = v1[1];
      ++v1;
      v3 = v5;
      v2 += v4 + 2;
      if ( !v5 )
        break;
      if ( v2 > 0x63 )
        goto LABEL_8;
    }
    if ( !v2 )
      return byte_487788;
LABEL_8:
    v7 = v2 - 2;
    if ( v7 <= 0x63 )
    {
      *((_BYTE *)&dword_487780 + v7 + 8) = 0;
      return byte_487788;
    }
    sub_94700(
      (int)"gdbarch.c",
      117,
      "%s: Assertion `%s' failed.",
      "const char* pstring_list(const char* const*)",
      "offset - 2 < sizeof (ret)");
  }
  return "(null)";
}
