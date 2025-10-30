int __fastcall sub_2B6CB0(int a1, char *s, char **a3)
{
  int v3; // r4
  size_t v7; // r0
  char *v8; // r6

  if ( *(_DWORD *)(a1 + 44) != 4 )
    return 0;
  v7 = strlen(s);
  v8 = (char *)sub_2AB368(v7 + 16);
  if ( !v8 )
    sub_2A6BBC("elf32-arm.c", 6752);
  sprintf(v8, "__%s_from_thumb", s);
  v3 = sub_2FC920(a1, v8, 0);
  if ( !v3 && asprintf(a3, "unable to find THUMB glue '%s' for '%s'", v8, s) == -1 )
    *a3 = sub_2A6920(1u);
  free(v8);
  return v3;
}
