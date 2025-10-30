unsigned int *__fastcall sub_149A64(unsigned int *src, unsigned int *a2)
{
  unsigned int *v2; // r12
  unsigned int *v4; // r6
  int v5; // r7
  char *v6; // r8
  unsigned int *v7; // r4
  unsigned int v8; // r5
  unsigned int v9; // r3
  unsigned int *v10; // r2
  _DWORD *v11; // r1

  if ( a2 != src )
  {
    v2 = src + 1;
    if ( src + 1 != a2 )
    {
      v4 = src;
      v5 = -4 - (_DWORD)src;
      v6 = (char *)(src + 2);
      do
      {
        v7 = v2 + 1;
        v8 = *v2;
        if ( *v2 < *v4 )
        {
          if ( v4 != v2 )
            src = (unsigned int *)memmove(v6 - 4, v4, (size_t)v7 + v5);
          *v4 = v8;
        }
        else
        {
          v9 = *(v2 - 1);
          v10 = v2 - 1;
          if ( v8 >= v9 )
          {
            *v2 = v8;
          }
          else
          {
            v11 = v2 + 1;
            while ( 1 )
            {
              *--v11 = v9;
              src = v10 - 1;
              v9 = *(v10 - 1);
              if ( v8 >= v9 )
                break;
              --v10;
            }
            *v10 = v8;
          }
        }
        v2 = v7;
      }
      while ( a2 != v7 );
    }
  }
  return src;
}
