int __fastcall sub_66564(int a1)
{
  int v1; // r0
  int v2; // r4

  if ( !a1 )
  {
    v1 = 954;
    return sub_6739C(v1, 0);
  }
  if ( a1 == 1 )
  {
    v1 = 955;
    return sub_6739C(v1, 0);
  }
  v2 = sub_6739C(954, 0);
  return v2 + sub_6739C(955, 0);
}
