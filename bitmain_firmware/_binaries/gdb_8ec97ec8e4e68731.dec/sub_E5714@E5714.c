char *__fastcall sub_E5714(char *src, char *a2)
{
  unsigned int **v2; // r12
  unsigned int **v4; // r5
  int v5; // r7
  char *v6; // r8
  char *v7; // r4
  unsigned int *v8; // r6
  unsigned int v9; // r1
  int *v10; // r3
  unsigned int **v11; // r2

  if ( src != a2 )
  {
    v2 = (unsigned int **)(src + 4);
    if ( a2 != src + 4 )
    {
      v4 = (unsigned int **)src;
      v5 = -4 - (_DWORD)src;
      v6 = src + 8;
      do
      {
        v7 = (char *)(v2 + 1);
        v8 = *v2;
        v9 = **v2;
        if ( v9 > **v4 )
        {
          if ( v4 != v2 )
            src = (char *)memmove(v6 - 4, v4, (size_t)&v7[v5]);
          *v4 = v8;
        }
        else
        {
          v10 = (int *)*(v2 - 1);
          v11 = v2 - 1;
          src = (char *)*v10;
          if ( v9 <= *v10 )
          {
            *v2 = v8;
          }
          else
          {
            src = (char *)(v2 + 1);
            while ( 1 )
            {
              *((_DWORD *)src - 1) = v10;
              src -= 4;
              v10 = (int *)*(v11 - 1);
              if ( v9 <= *v10 )
                break;
              --v11;
            }
            *v11 = v8;
          }
        }
        v2 = (unsigned int **)v7;
      }
      while ( a2 != v7 );
    }
  }
  return src;
}
