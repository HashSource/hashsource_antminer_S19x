char *__fastcall sub_1B0A98(char *src, char *a2)
{
  void *v2; // r9
  char *v4; // r6
  char *i; // r4
  unsigned int v6; // r5
  int v7; // r8
  int *v8; // r12
  int *v9; // r3
  int v10; // r1
  unsigned int v11; // t1

  if ( a2 != src )
  {
    v2 = src + 8;
    v4 = src;
    for ( i = src + 8; a2 != i; i += 8 )
    {
      v6 = *(_DWORD *)i;
      v7 = *((_DWORD *)i + 1);
      if ( *(_DWORD *)i < *(_DWORD *)v4 )
      {
        if ( i != v4 )
          src = (char *)memmove(v2, v4, i - v4);
        *(_DWORD *)v4 = v6;
        *((_DWORD *)v4 + 1) = v7;
      }
      else
      {
        if ( v6 < *((_DWORD *)i - 2) )
        {
          v9 = (int *)(i - 8);
          do
          {
            src = (char *)*v9;
            v10 = v9[1];
            v8 = v9;
            v9[2] = *v9;
            v9[3] = v10;
            v11 = *(v9 - 2);
            v9 -= 2;
          }
          while ( v6 < v11 );
        }
        else
        {
          v8 = (int *)i;
        }
        *v8 = v6;
        v8[1] = v7;
      }
    }
  }
  return src;
}
