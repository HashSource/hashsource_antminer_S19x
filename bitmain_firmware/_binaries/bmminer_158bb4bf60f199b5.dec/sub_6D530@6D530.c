void *__fastcall sub_6D530(const char *a1)
{
  size_t v2; // r4
  void *v3; // r0
  void *v4; // r5

  v2 = strlen(a1) + 1;
  v3 = off_9F5A4(v2);
  v4 = v3;
  if ( v3 )
    memcpy(v3, a1, v2);
  return v4;
}
