int __fastcall sub_1C50C(const char *a1)
{
  size_t v2; // r0
  size_t v3; // r8
  size_t v4; // r9
  int v5; // r7

  v2 = strlen(a1);
  v3 = v2 + 3;
  v4 = v2;
  v5 = sub_63BA4(0, v2 + 3, 0, 0);
  if ( *a1 == 34 || strcspn(a1, "{}(),;|=") >= v4 && !strchr(a1, 32) )
    sub_6D4DC(v5);
  else
    sub_6C054(v5, v3, "\"%s\"", a1);
  return v5;
}
