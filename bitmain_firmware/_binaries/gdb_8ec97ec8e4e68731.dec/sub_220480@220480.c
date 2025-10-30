int __fastcall sub_220480(const char *a1)
{
  const char *v2; // r5
  const char *v3; // r4
  size_t i; // r2
  const char *v5; // t1

  if ( !a1 )
    return 0;
  v2 = "hD>";
  v3 = "ARM C Compiler, ADS";
  for ( i = 19; strncmp(a1, v3, i); i = strlen(v5) )
  {
    if ( v2 == (const char *)&off_3E3900 )
      return 0;
    v5 = (const char *)*((_DWORD *)v2 + 1);
    v2 += 4;
    v3 = v5;
  }
  return 1;
}
