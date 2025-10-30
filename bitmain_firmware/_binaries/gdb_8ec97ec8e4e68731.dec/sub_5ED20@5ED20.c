int __fastcall sub_5ED20(int a1, int a2, int a3)
{
  int v4; // r0
  const char *v5; // r4
  int v6; // r5
  int v7; // r1

  if ( a3 != 2 )
    sub_946E0("-var-set-format: Usage: NAME FROZEN_FLAG.");
  v4 = sub_26FBAC(*(char **)a2);
  v5 = *(const char **)(a2 + 4);
  v6 = v4;
  v7 = strcmp(v5, "0");
  if ( v7 )
  {
    if ( strcmp(v5, "1") )
      sub_946E0("Invalid flag value");
    v7 = 1;
  }
  return sub_26FD00(v6, v7);
}
