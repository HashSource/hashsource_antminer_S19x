int *__fastcall sub_1FD5A4(int a1)
{
  int *v1; // r5
  int *result; // r0
  char v3; // [sp+7h] [bp-5h] BYREF

  v1 = *(int **)(a1 + 16);
  v3 = 43;
  do
  {
    result = (int *)write(*v1, &v3, 1u);
    if ( (int)result >= 0 )
      break;
    result = _errno_location();
  }
  while ( *result == 4 );
  return result;
}
