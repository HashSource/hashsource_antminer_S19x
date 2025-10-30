int __fastcall sub_10FCCC(int *a1, int *a2)
{
  int v2; // r4
  int result; // r0

  v2 = (int)a2;
  if ( (int *)*a1 != a2 )
  {
    v2 = sub_AE228(a2);
    if ( v2 )
    {
      sub_12AA8C(*a1);
      *a1 = v2;
    }
  }
  result = v2;
  if ( v2 )
    return 1;
  return result;
}
