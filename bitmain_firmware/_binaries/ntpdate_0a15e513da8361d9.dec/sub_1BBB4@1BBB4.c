int __fastcall sub_1BBB4(const char *a1, void *a2, size_t a3)
{
  const char *v5; // r7
  size_t v6; // r2

  if ( !a1 )
    sub_10C38();
  if ( !a2 )
    sub_10C38();
  v5 = sub_1BB30(a1);
  v6 = strlen(v5) + 1;
  if ( v6 > a3 )
    return 19;
  memcpy(a2, v5, v6);
  return 0;
}
