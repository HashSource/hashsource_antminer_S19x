bool __fastcall sub_316B8(const char *a1, const char *a2)
{
  if ( !strcmp(a1, a2) || !strcmp(a1, "/usr/lib/ld.so.1") && !strcmp(a2, "/lib/ld.so.1") )
    return 1;
  if ( !strcmp(a1, "/usr/lib/sparcv9/ld.so.1") )
    return strcmp(a2, "/lib/sparcv9/ld.so.1") == 0;
  return 0;
}
