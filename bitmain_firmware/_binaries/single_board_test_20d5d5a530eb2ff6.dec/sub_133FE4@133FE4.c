int __fastcall sub_133FE4(int **a1, int **a2, int *a3)
{
  int result; // r0

  result = sub_BA234(a1, a2);
  if ( result )
  {
    if ( sub_B8354((int *)a1, a3) < 0 )
      return 1;
    else
      return BN_sub((int *)a1, (int *)a1, a3);
  }
  return result;
}
