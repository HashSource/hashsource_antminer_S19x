unsigned __int8 *__fastcall sub_9DFAC(unsigned __int8 *result, int *a2)
{
  int v2; // r4
  int v3; // r4
  int v4; // r3
  unsigned __int8 *v5; // r2
  int v6; // t1
  int v7; // r3
  unsigned __int8 *v8; // r5
  int v10; // r4

  v2 = *a2;
  if ( *a2 <= 1 || (unsigned int)result[v2 - 1] - 48 > 9 )
    return result;
  v3 = v2 - 2;
  if ( v3 )
  {
    v4 = result[v3];
    if ( (unsigned int)(v4 - 48) > 9 )
    {
LABEL_13:
      if ( v4 == 46 || v4 == 36 )
        goto LABEL_12;
      v8 = result;
      if ( v3 == 1 || (result = (unsigned __int8 *)strncmp((const char *)&result[v3 - 2], "___", 3u)) != 0 )
      {
        v10 = v3 - 1;
        result = (unsigned __int8 *)strncmp((const char *)&v8[v10], (const char *)&dword_3C439C, 2u);
        if ( !result )
          *a2 = v10;
      }
      else
      {
        *a2 = v3 - 2;
      }
      return result;
    }
    v5 = &result[v3];
    while ( --v3 )
    {
      v6 = *--v5;
      v4 = v6;
      if ( (unsigned int)(v6 - 48) > 9 )
        goto LABEL_13;
    }
  }
  v7 = *result;
  if ( v7 == 46 || v7 == 36 )
  {
    v3 = 0;
LABEL_12:
    *a2 = v3;
  }
  return result;
}
