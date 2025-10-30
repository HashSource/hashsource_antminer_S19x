int __fastcall sub_17620C(int *a1, int **a2)
{
  int v4; // r1
  int v5; // t1
  int result; // r0

  sub_B8930(a2, 0);
  v4 = *a1;
  if ( *a1 == -1 )
    return 1;
  while ( 1 )
  {
    result = sub_B8A68((int *)a2, v4);
    if ( !result )
      break;
    v5 = a1[1];
    ++a1;
    v4 = v5;
    if ( v5 == -1 )
      return 1;
  }
  return result;
}
