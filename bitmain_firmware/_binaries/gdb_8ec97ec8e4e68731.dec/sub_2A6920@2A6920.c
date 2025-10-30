char *__fastcall sub_2A6920(unsigned int a1)
{
  const char *v1; // r4
  int *v3; // r0
  char *v4; // [sp+4h] [bp-8h] BYREF

  if ( a1 == 20 )
  {
    v1 = (const char *)sub_2A6920(dword_48BBD4);
    if ( asprintf(&v4, "Error reading %s: %s", *(const char **)dword_48BBD8, v1) != -1 )
      return v4;
    return (char *)v1;
  }
  if ( a1 != 1 )
  {
    if ( a1 >= 0x15 )
      a1 = 21;
    return off_41160C[a1];
  }
  v3 = _errno_location();
  return (char *)sub_32727C(*v3);
}
