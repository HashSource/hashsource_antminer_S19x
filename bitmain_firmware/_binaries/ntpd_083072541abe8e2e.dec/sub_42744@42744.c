size_t __fastcall sub_42744(const char *a1)
{
  size_t result; // r0
  size_t v3; // r5
  void *v4; // r0

  result = strlen(a1);
  if ( result )
  {
    v3 = result + 1;
    dword_BCD30 = sub_63BA4(dword_BCD30, result + 1, 0, 0);
    v4 = memcpy((void *)dword_BCD30, a1, v3);
    return sub_62B28(v4);
  }
  return result;
}
