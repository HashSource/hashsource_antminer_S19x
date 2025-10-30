char *__fastcall sub_211714(const char *a1)
{
  if ( !strcmp(a1, ".dynbss") )
    return ".bss";
  if ( !strcmp(a1, ".sdynbss") )
    return ".sbss";
  return (char *)a1;
}
