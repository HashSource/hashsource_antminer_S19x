unsigned int __fastcall sub_121724(unsigned __int8 *a1, size_t n, void *s2, size_t a4, unsigned int a5)
{
  unsigned int result; // r0
  bool v7; // zf
  unsigned __int8 *v9; // r2
  int v10; // t1
  unsigned int v11; // r4

  if ( (a5 & 0x8000) == 0 )
  {
    if ( a4 != n )
      return a5 & 0x8000;
    return memcmp(a1, s2, n) == 0;
  }
  v7 = a4 == n;
  if ( a4 < n )
  {
    if ( *a1 )
    {
      if ( *a1 != 46 || !((a5 >> 4) & 1) )
      {
        v9 = a1 + 1;
        while ( 1 )
        {
          --n;
          a1 = v9;
          if ( a4 == n )
            break;
          v10 = *v9++;
          result = v10;
          if ( v10 == 46 )
            v11 = (a5 >> 4) & 1;
          else
            v11 = 0;
          if ( !result )
            return result;
          if ( v11 )
            return 0;
        }
        return memcmp(a1, s2, n) == 0;
      }
    }
    v7 = a4 == n;
  }
  if ( v7 )
    return memcmp(a1, s2, n) == 0;
  return 0;
}
