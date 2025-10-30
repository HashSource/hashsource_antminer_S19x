char *__fastcall sub_8026C(const char *a1, const char *a2)
{
  int *v2; // r0
  char *s; // [sp+14h] [bp-8h]

  s = (char *)calloc(1u, 0x808u);
  if ( s )
  {
    snprintf(s, 0x401u, "%s", a1);
    *((_DWORD *)s + 513) = snprintf(s + 1025, 0x401u, "%s", a2);
    return s;
  }
  else
  {
    v2 = _errno_location();
    sub_89984(2, "src/mdc.c", 54, "calloc fail, errno[%d]", *v2);
    return 0;
  }
}
