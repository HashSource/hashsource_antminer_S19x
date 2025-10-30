_DWORD *__fastcall sub_1634C0(_DWORD *a1, char *file)
{
  void *v4; // r0
  char *v6; // r0

  v4 = dlopen(file, 2);
  if ( !v4 )
  {
    v6 = dlerror();
    sub_946E0("Could not load %s: %s", file, v6);
  }
  *a1 = v4;
  return a1;
}
