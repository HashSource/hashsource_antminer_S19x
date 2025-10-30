char *__fastcall sub_6AAD0(char *result, int a2)
{
  unsigned int v2; // r2
  char *v3; // r1
  char *v4; // r3
  char v5; // r5

  v2 = a2 - 1;
  if ( a2 != 1 )
  {
    v3 = &result[a2];
    v4 = result;
    do
    {
      --v2;
      v5 = *v4;
      *v4++ = *(v3 - 1);
      *--v3 = v5;
    }
    while ( v2 > v4 - result );
  }
  return result;
}
