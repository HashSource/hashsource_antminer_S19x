int *__fastcall sub_F7CDC(int *result)
{
  unsigned int v1; // r3
  int v2; // r7
  int v3; // r4
  int v4; // r6
  int v5; // r5
  int v6; // r8
  int v7; // r3
  const char **v8; // r7
  const char **v9; // r8
  const char *v10; // r6
  const char *v11; // t1
  const char **i; // r4
  const char *v13; // r5

  v1 = result[1];
  if ( v1 > 1 )
  {
    v2 = *result;
    v3 = 4 * (v1 + 1);
    v4 = *result + 4;
    v5 = *result + v3;
    if ( v4 != v5 )
    {
      sub_F8308(*result + 4, v5, 2 * (31 - __clz((v3 - 4) >> 2)), sub_F4718);
      if ( v3 <= 68 )
      {
        return (int *)sub_F8100(v4, v5, sub_F4718);
      }
      else
      {
        v6 = v2 + 68;
        result = (int *)sub_F8100(v4, v2 + 68, sub_F4718);
        if ( v5 != v2 + 68 )
        {
          v7 = v2 + 72;
          v8 = (const char **)(v2 + 64);
          v9 = (const char **)(v6 + v5 - v7);
          do
          {
            v11 = v8[1];
            ++v8;
            v10 = v11;
            for ( i = v8; ; --i )
            {
              v13 = *(i - 1);
              result = (int *)strcmp(v10, v13);
              if ( (int)result >= 0 )
                break;
              *i = v13;
            }
            *i = v10;
          }
          while ( v8 != v9 );
        }
      }
    }
  }
  return result;
}
