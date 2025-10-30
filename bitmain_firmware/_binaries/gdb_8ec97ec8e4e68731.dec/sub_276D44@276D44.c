int __fastcall sub_276D44(int a1, int a2, int *a3, const char *a4)
{
  int v7; // r1
  int v9; // r0

  v7 = sub_2A657C(a4);
  if ( v7 )
    return sub_2365FC(*a3, v7);
  v9 = sub_273CF8(a1, "Target description specified unknown architecture \"%s\"", a4);
  return sub_276D84(v9);
}
