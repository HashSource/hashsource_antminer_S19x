void *__fastcall sub_1410A8(const char *a1)
{
  void *v2; // r0
  void *v3; // r5
  void *v4; // r4

  v2 = dlopen(0, 1);
  v3 = v2;
  if ( !v2 )
    return 0;
  v4 = dlsym(v2, a1);
  dlclose(v3);
  return v4;
}
