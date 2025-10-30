char **__fastcall sub_23103C(char **a1, const char *a2)
{
  int v4; // r1

  if ( dword_489AD8 <= 1 )
    v4 = sub_22451C("get OS data");
  else
    v4 = dword_4899A0;
  if ( v4 )
    sub_230590(a1, v4, 15, a2);
  else
    *a1 = 0;
  return a1;
}
