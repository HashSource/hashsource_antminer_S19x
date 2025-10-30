int __fastcall sub_F89C8(int **a1, int a2)
{
  int v2; // r4
  bool v3; // zf

  if ( !a1 || !*a1 )
    return sub_DB77C((int)a1, -1, a2);
  v2 = **a1;
  v3 = v2 == 6;
  if ( v2 != 6 )
    v3 = v2 == 912;
  if ( !v3 )
    return -1;
  else
    return sub_DB77C((int)a1, -1, a2);
}
