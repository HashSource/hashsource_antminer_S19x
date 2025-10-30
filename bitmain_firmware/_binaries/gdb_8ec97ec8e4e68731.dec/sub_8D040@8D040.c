int __fastcall sub_8D040(const char **a1, int *a2)
{
  const char *v3; // r4
  int result; // r0
  int v6; // r0

  v3 = *a1;
  result = strncmp(*a1, "::", 2u);
  if ( !result )
  {
    v6 = *a2;
    *a1 = v3 + 2;
    result = sub_C2668(v6);
    *a2 = result;
  }
  return result;
}
