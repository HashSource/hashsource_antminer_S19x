int __fastcall sub_3ED30(const char *a1)
{
  char *v2; // r0

  v2 = dlerror();
  return sub_946B0("Symbol \"%s\" not found in libthread_db: %s", a1, v2);
}
