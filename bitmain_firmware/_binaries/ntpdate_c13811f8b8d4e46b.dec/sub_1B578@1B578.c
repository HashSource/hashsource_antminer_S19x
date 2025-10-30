int __fastcall sub_1B578(const char *a1, void *a2, size_t a3)
{
  const char *v5; // r7
  size_t v6; // r2

  if ( !a1 )
    sub_1073C();
  if ( !a2 )
    sub_1073C();
  v5 = sub_1B4F4(a1);
  v6 = strlen(v5) + 1;
  if ( v6 > a3 )
    return 19;
  memcpy(a2, v5, v6);
  return 0;
}
