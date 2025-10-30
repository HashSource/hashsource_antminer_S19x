int __fastcall sub_3B200(const char *a1)
{
  FILE *v1; // r4
  int v2; // r0
  int v3; // r6
  int *v5; // r0
  char *v6; // r0
  int v7; // r3
  int v8; // r3
  char v9[1024]; // [sp+0h] [bp-C00h] BYREF
  char s[2048]; // [sp+400h] [bp-800h] BYREF

  v1 = popen(a1, "r");
  if ( !v1 )
  {
    if ( (unsigned int)off_AFC24 <= 3 )
      return -1;
    v5 = _errno_location();
    v3 = -1;
    v6 = strerror(*v5);
    snprintf(s, 0x800u, "popen error: %s/n", v6);
    sub_3AF5C(3, s, 0, v7);
    return v3;
  }
  while ( fgets(v9, 1024, v1) )
    ;
  v2 = pclose(v1);
  v3 = v2;
  if ( v2 != -1 )
  {
    if ( v2 )
    {
      if ( (unsigned int)off_AFC24 > 4 )
      {
        snprintf(s, 0x800u, "pclose res is :%d\n", (v2 & 0x7F) == 0);
        sub_3AF5C(4, s, 0, v8);
      }
      return BYTE1(v3);
    }
    return v3;
  }
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(s, "close popen file pointer fp error!\n");
    sub_3AF5C(3, s, 0, *(int *)"error!\n");
    return v3;
  }
  return -1;
}
