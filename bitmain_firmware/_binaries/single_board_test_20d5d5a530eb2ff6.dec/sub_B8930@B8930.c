int __fastcall sub_B8930(int **a1, int a2)
{
  int *v4; // r2
  int v5; // r3
  int result; // r0

  if ( (int)a1[2] > 0 || (result = sub_B8838((int)a1, 1)) != 0 )
  {
    v4 = *a1;
    v5 = a2;
    a1[3] = 0;
    if ( a2 )
      v5 = 1;
    *v4 = a2;
    a1[1] = (int *)v5;
    return 1;
  }
  return result;
}
