char *__fastcall sub_297AAC(char *result)
{
  const char *v1; // r4
  int v2; // r5
  void *v3; // r0
  size_t v4; // r0
  char *v5; // r0

  v1 = result;
  if ( result )
  {
    v2 = *(_DWORD *)(dword_48BB28 + 4 * (dword_490158 + 0x3FFFFFFF));
    v3 = *(void **)(v2 + 4);
    if ( v3 )
      free(v3);
    v4 = strlen(v1);
    v5 = (char *)sub_93028(v4 + 1);
    result = strcpy(v5, v1);
    *(_DWORD *)(v2 + 4) = result;
  }
  return result;
}
