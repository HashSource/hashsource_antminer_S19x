int sub_6DC7C()
{
  int v0; // r5
  int v2; // r0
  int v3; // r0

  v0 = 0;
  if ( dword_65DF70 )
    return v0;
  if ( sub_6DFC4() )
  {
    v0 = -1;
    nullsub_8();
    return v0;
  }
  if ( sub_6E138() )
  {
    v0 = -2;
    nullsub_8();
    return v0;
  }
  memset(dword_65DE48, 0, sizeof(dword_65DE48));
  sub_6DB00();
  dword_65DF70 = 1;
  v2 = sub_6DD88();
  v3 = sub_6F85C(v2);
  sub_6EF18(v3);
  return 0;
}
