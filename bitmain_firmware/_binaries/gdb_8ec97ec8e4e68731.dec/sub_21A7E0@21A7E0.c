bool __fastcall sub_21A7E0(int **a1, const char *a2, int a3)
{
  int v3; // r12
  bool v4; // zf

  v3 = *a1[1];
  v4 = a2 == 0;
  if ( a2 )
    v4 = v3 == 0;
  if ( v4 )
    return v3 == 0;
  else
    return sub_21A76C(a2, **a1, v3, a3) != 0;
}
