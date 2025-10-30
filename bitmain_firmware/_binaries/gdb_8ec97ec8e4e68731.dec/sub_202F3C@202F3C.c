void __fastcall sub_202F3C(void **ptr)
{
  int v2; // r2
  void **v3; // r3
  void *v4; // r0

  v2 = dword_4893F0;
  if ( (void **)dword_4893F0 == ptr )
  {
    dword_4893F0 = (int)ptr[2];
    goto LABEL_11;
  }
  if ( !dword_4893F0 )
    goto LABEL_8;
  v3 = *(void ***)(dword_4893F0 + 8);
  if ( ptr != v3 )
  {
    while ( v3 )
    {
      if ( v3[2] == ptr )
        goto LABEL_10;
      v3 = (void **)v3[2];
    }
LABEL_8:
    sub_94700(
      (int)"source.c",
      1800,
      "%s: Assertion `%s' failed.",
      "void delete_substitute_path_rule(substitute_path_rule*)",
      "prev != NULL");
  }
  v3 = (void **)v2;
LABEL_10:
  v3[2] = ptr[2];
LABEL_11:
  if ( *ptr )
    free(*ptr);
  v4 = ptr[1];
  if ( v4 )
    free(v4);
  free(ptr);
}
