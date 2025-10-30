int __fastcall sub_20F86C(_BYTE *a1)
{
  int v2; // r4
  char *v3; // r0
  int result; // r0

  v2 = sub_15D58C();
  v3 = sub_20F554(a1, 0);
  sub_15E10C((int)v3);
  result = sub_15D58C();
  if ( v2 != result )
    return sub_1BABB4(8);
  return result;
}
