char *__fastcall sub_2CAA4(const char *a1)
{
  char *v2; // r5
  char *v3; // r0
  bool v4; // zf
  int v5; // r4
  char *v6; // r6

  v2 = strchr(a1, 123);
  v3 = strrchr(a1, 125);
  v4 = v2 == 0;
  if ( v2 )
    v4 = v3 == 0;
  if ( v4 )
  {
    puts("resp not find {...}");
    return 0;
  }
  else
  {
    v5 = v3 - v2;
    v6 = (char *)calloc(v3 - v2 + 2, 1u);
    strncpy(v6, v2, v5 + 1);
    return v6;
  }
}
