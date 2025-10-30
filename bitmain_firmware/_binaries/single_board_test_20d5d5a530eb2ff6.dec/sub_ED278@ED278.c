int __fastcall sub_ED278(int a1, int *a2)
{
  int *v3; // r0
  int v4; // r6
  int v5; // r4

  v3 = (int *)sub_EEFEC(a1, 0);
  if ( !v3 )
    return 0;
  v4 = (int)v3;
  v5 = sub_DA22C(v3);
  sub_DA240(v4);
  if ( !v5 )
    return 0;
  if ( a2 )
  {
    sub_C5410(*a2);
    *a2 = v5;
  }
  return v5;
}
