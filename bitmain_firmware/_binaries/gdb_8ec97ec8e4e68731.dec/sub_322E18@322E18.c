int __fastcall sub_322E18(int *a1, int a2)
{
  int v2; // r4
  int v3; // r6
  int v5; // r9
  int v6; // r8
  unsigned int v7; // r5
  int result; // r0

  v2 = a1[8];
  v3 = a1[7];
  if ( v2 <= 0 )
    return 0;
  v5 = *a1;
  v6 = a1[1];
  while ( 1 )
  {
    v7 = v2 >= 32 ? 32 : v2;
    result = sub_322D08(a2, v5, v6, v3, v7);
    v2 -= v7;
    v3 += v7;
    if ( result )
      break;
    if ( v2 <= 0 )
      return result;
  }
  return 1;
}
