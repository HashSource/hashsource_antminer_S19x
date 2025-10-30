_DWORD *__fastcall sub_553F0(__int64 a1)
{
  _DWORD *v1; // r7
  const char **v2; // r6
  const char *v3; // r0
  const char *v4; // r4
  size_t v5; // r1
  const char *v6; // r0
  const char *v7; // r4
  void *v8; // r5

  v1 = (_DWORD *)a1;
  if ( !*(_DWORD *)HIDWORD(a1) )
LABEL_5:
    sub_946E0("Missing filename.", HIDWORD(a1));
  v2 = (const char **)HIDWORD(a1);
  v3 = (const char *)sub_9360C(*(_DWORD *)HIDWORD(a1));
  *v2 = v3;
  v4 = v3;
  v5 = strcspn(v3, " \t");
  v6 = v4;
  v7 = &v4[v5];
  v8 = (void *)sub_93330(v6);
  *v2 = (const char *)sub_9360C(v7);
  if ( !v8 )
  {
    a1 = sub_94700(
           "cli/cli-dump.c",
           78,
           "%s: Assertion `%s' failed.",
           "gdb::unique_xmalloc_ptr<char> scan_filename(const char**, const char*)",
           "filename != NULL");
    goto LABEL_5;
  }
  *v1 = sub_29B910(v8);
  free(v8);
  return v1;
}
