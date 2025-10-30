size_t __fastcall sub_210F08(const char *a1)
{
  const char *v1; // r4
  size_t result; // r0
  int v3; // t1
  size_t v4; // r2

  v1 = a1;
  result = strlen(a1);
  if ( result )
  {
    if ( v1[result - 1] == 47 )
    {
      v1 += result;
    }
    else
    {
      result = (size_t)&v1[result - 2];
      while ( 1 )
      {
        v4 = result - (_DWORD)v1;
        if ( v1 - 1 == (const char *)result )
          break;
        v3 = *(unsigned __int8 *)result--;
        if ( v3 == 47 )
        {
          v1 += v4 + 1;
          break;
        }
      }
    }
  }
  *v1 = 0;
  return result;
}
