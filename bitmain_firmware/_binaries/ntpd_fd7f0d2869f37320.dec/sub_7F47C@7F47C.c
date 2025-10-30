const char *__fastcall sub_7F47C(_BYTE *a1)
{
  const char *result; // r0
  const char *v2; // r4
  char *v3; // r0
  char *v4; // r5

  if ( !a1 || !*a1 )
    return (const char *)fwrite("''", (size_t)&dword_0 + 1, 2u, stdout);
  result = sub_7DB38(a1);
  v2 = result;
  if ( *result )
  {
    while ( 1 )
    {
      fputc(39, stdout);
      v3 = strchr(v2, 39);
      v4 = v3;
      if ( !v3 )
        break;
      fwrite(v2, v3 - v2, 1u, stdout);
      fputc(39, stdout);
      result = sub_7DB38(v4);
      v2 = result;
      if ( !*result )
        return result;
    }
    fputs(v2, stdout);
    return (const char *)fputc(39, stdout);
  }
  return result;
}
