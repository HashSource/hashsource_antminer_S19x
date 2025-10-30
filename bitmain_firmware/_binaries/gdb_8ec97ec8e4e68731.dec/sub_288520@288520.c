int __fastcall sub_288520(const char *a1)
{
  size_t v2; // r0
  char *v3; // r0

  if ( !a1 || !*a1 )
    return 1;
  if ( dword_4900C8 )
    free((void *)dword_4900C8);
  v2 = strlen(a1);
  v3 = (char *)sub_93028(v2 + 1);
  dword_4900C8 = (int)strcpy(v3, a1);
  return 0;
}
