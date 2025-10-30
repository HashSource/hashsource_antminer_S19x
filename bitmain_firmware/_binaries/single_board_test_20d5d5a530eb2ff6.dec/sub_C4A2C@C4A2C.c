int __fastcall sub_C4A2C(int **a1, int *a2, int *a3)
{
  bool v3; // zf

  v3 = a3 == 0;
  if ( a3 )
    v3 = a2 == 0;
  if ( v3 )
    return 0;
  sub_B87C8(*a1);
  sub_B87C8(a1[1]);
  *a1 = a2;
  a1[1] = a3;
  return 1;
}
