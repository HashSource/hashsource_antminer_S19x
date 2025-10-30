int __fastcall sub_BD2A8(int result, int a2)
{
  int v2; // r4

  v2 = result;
  if ( a2 > 0 )
  {
    sub_C0B5C(result, a2, a2, a2 >> 31);
    return sub_C09B8(v2, 2);
  }
  else if ( a2 )
  {
    sub_C0B5C(result, a2, -a2, -a2 >> 31);
    return sub_C09B8(v2, 3);
  }
  return result;
}
