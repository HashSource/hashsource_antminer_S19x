int __fastcall sub_C3410(int a1)
{
  int *v1; // r3
  int result; // r0

  v1 = sub_C32A8(a1, 0);
  if ( !v1 )
    return 0;
  do
  {
    result = v1[2];
    if ( result )
      break;
    v1 = (int *)v1[3];
  }
  while ( v1 );
  return result;
}
