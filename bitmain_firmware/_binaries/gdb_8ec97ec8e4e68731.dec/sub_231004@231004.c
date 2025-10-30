int *sub_231004()
{
  int *result; // r0
  int (*v1)(void); // r3

  result = &dword_4899A0;
  while ( 1 )
  {
    v1 = (int (*)(void))result[110];
    if ( v1 )
      break;
    result = (int *)*result;
    if ( !result )
      return result;
  }
  return (int *)v1();
}
