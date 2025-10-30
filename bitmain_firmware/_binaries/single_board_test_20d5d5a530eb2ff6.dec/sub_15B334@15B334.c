int __fastcall sub_15B334(int *a1, int a2)
{
  int result; // r0
  int (*v5)(void); // r2

  while ( 1 )
  {
    result = sub_10BC4C(a1[1], a2);
    if ( result < 0 )
      break;
    sub_10BC04((int *)a1[1], result);
    a1[3] = 0;
  }
  if ( a2 == a1[2] )
  {
    result = sub_CDCEC(a2, 0, v5);
    a1[2] = 0;
  }
  return result;
}
