int sub_15AE74()
{
  int v1; // r0
  int v2; // r5
  int v3; // r0

  if ( dword_6E1CA8 )
    return dword_6E1CA8;
  v1 = sub_15CDE0(5, 1, 5);
  v2 = v1;
  if ( !v1
    || !sub_15CE54(v1, 0)
    || !sub_15CE5C(v2, 8)
    || !sub_15CE6C(v2, sub_15AFE4)
    || !sub_15CE74(v2, sub_15AFC8)
    || !sub_15CE64(v2, 1048) )
  {
    v3 = v2;
    v2 = 0;
    sub_15CE44(v3);
  }
  dword_6E1CA8 = v2;
  return v2;
}
