char *__fastcall sub_BB058(char *result, char *a2, unsigned int a3)
{
  char *v3; // r2
  char v4; // t1
  unsigned int v5; // r1
  unsigned int v6; // r2
  char *v7; // r1
  char *v8; // r3
  char v9; // r2

  if ( a2 )
  {
    if ( a3 )
    {
      result += a3;
      v3 = &a2[a3];
      do
      {
        v4 = *a2++;
        *--result = v4;
      }
      while ( a2 != v3 );
    }
  }
  else
  {
    v5 = a3 - 1;
    v6 = a3 >> 1;
    v7 = &result[v5];
    if ( v6 )
    {
      v8 = &result[v6];
      do
      {
        v9 = *v7;
        *v7-- = *result;
        *result++ = v9;
      }
      while ( result != v8 );
    }
  }
  return result;
}
