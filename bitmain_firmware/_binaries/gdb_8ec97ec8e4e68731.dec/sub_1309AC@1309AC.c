int __fastcall sub_1309AC(int a1, int *a2)
{
  int v4; // r1
  int result; // r0

  v4 = sub_12E694(a1, 71, *a2);
  if ( v4 )
    return sub_12E620((int *)(a1 + 8), v4, a2);
  result = sub_12E694(a1, 49, *a2);
  v4 = result;
  if ( result )
    return sub_12E620((int *)(a1 + 8), v4, a2);
  return result;
}
