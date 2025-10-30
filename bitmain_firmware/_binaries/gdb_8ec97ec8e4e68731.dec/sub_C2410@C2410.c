int *__fastcall sub_C2410(unsigned int a1, int a2, int *a3, int a4)
{
  int *v6; // r4
  int v7; // r0

  if ( !a4 )
  {
    a4 = sub_21DB88();
    if ( !a4 )
      return 0;
  }
  v6 = *(int **)(a4 + 32);
  v7 = sub_C1F2C(v6, a1);
  if ( !v7 )
    return 0;
  if ( a3 )
    *a3 = v7;
  return v6;
}
