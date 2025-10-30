int __fastcall sub_7C6DC(int result, const char *a2, const char *a3, const char *a4)
{
  const char *v4; // r4
  FILE *v5; // r6
  char *v6; // r0

  v4 = a2;
  v5 = (FILE *)result;
  if ( !a2 )
  {
    if ( a3 )
    {
      v4 = a3;
    }
    else
    {
      if ( !a4 )
        return result;
      v4 = a4;
    }
  }
  v6 = strchr(v4, 10);
  if ( v6 )
    fwrite(v4, 1u, v6 - v4, v5);
  else
    fputs(v4, v5);
  return fputc(10, v5);
}
