int __fastcall sub_5F294(int a1, int a2, int a3)
{
  int v4; // r5
  int v5; // r6
  int v6; // r0

  if ( a3 != 3 )
    sub_946E0("-var-set-update-range: Usage: VAROBJ FROM TO");
  v4 = sub_26FBAC(*(char **)a2);
  v5 = strtol(*(const char **)(a2 + 4), 0, 10);
  v6 = strtol(*(const char **)(a2 + 8), 0, 10);
  return sub_26FFB4(v4, v5, v6);
}
