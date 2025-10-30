char *sub_28AB98()
{
  char *result; // r0
  char *v1; // r7
  const char *v2; // r2
  char *v3; // r4
  const char *v4; // t1

  result = sub_283468();
  v1 = result;
  if ( result )
  {
    v2 = *(const char **)result;
    if ( *(_DWORD *)result )
    {
      v3 = result;
      do
      {
        fprintf((FILE *)dword_48AAB0, "%s\n", v2);
        v4 = (const char *)*((_DWORD *)v3 + 1);
        v3 += 4;
        v2 = v4;
      }
      while ( v4 );
    }
    return (char *)sub_297758(v1);
  }
  return result;
}
