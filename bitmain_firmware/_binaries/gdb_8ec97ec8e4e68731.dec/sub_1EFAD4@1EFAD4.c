void __fastcall sub_1EFAD4(int a1, const char *a2, const char *a3, char *s)
{
  size_t v8; // r0
  _DWORD *v9; // r0
  char *v10; // r6
  size_t v11; // r0
  void *ptr; // [sp+8h] [bp-18h] BYREF
  char v13; // [sp+10h] [bp-10h] BYREF

  v8 = strlen(s);
  v9 = sub_9949C(&ptr, (int)s, v8);
  v10 = *(char **)a1;
  v11 = sub_1E2890((int)v9);
  sub_93170(v10, v11, "%s:%s", a3, (const char *)ptr);
  sub_1E7DEC(*(const char **)a1);
  sub_1E4EB8((char **)a1, (size_t *)(a1 + 4), 0, 0, 0);
  if ( strcmp(*(const char **)a1, "OK") )
    sub_946B0("Unable to %s environment variable '%s' on remote.", a2, s);
  if ( ptr != &v13 )
    sub_339E64(ptr);
}
