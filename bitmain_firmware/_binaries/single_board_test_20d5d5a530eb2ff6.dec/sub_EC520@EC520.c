char ***__fastcall sub_EC520(_DWORD *a1, int *a2, int a3)
{
  _DWORD *v5; // r5
  int v6; // r7
  int *v7; // r0

  v5 = a1;
  if ( !a1 )
    v5 = sub_D93D8();
  if ( a2 )
  {
    v6 = sub_10E65C(a2);
    a2 = (int *)sub_10E668(a2);
  }
  else
  {
    v6 = sub_10E660(a3);
  }
  v7 = (int *)sub_1164B0(a3);
  return sub_EC444(v5, v6, v7, a2);
}
