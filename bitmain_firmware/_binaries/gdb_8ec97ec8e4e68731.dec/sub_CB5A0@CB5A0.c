char *__fastcall sub_CB5A0(char *src, char *a2)
{
  char *v2; // r3
  char *v4; // r6
  int v5; // r7
  char *v6; // r8
  unsigned int v7; // r4
  char *v8; // r5
  char *v9; // r1
  _BOOL4 v10; // r1
  _BOOL4 v11; // r2
  unsigned int v12; // r2
  char *v13; // r1

  if ( src != a2 )
  {
    v2 = src + 4;
    if ( a2 != src + 4 )
    {
      v4 = src;
      v5 = -4 - (_DWORD)src;
      v6 = src + 8;
      do
      {
        v8 = v2 + 4;
        v7 = *(_DWORD *)v2;
        v9 = *(char **)(*(_DWORD *)v4 + 24);
        src = *(char **)(*(_DWORD *)v2 + 24);
        if ( (int)src < (int)v9 || ((v10 = (int)src <= (int)v9, *(_DWORD *)v4 > v7) ? (v11 = v10) : (v11 = 0), v11) )
        {
          if ( v4 != v2 )
            src = (char *)memmove(v6 - 4, v4, (size_t)&v8[v5]);
          *(_DWORD *)v4 = v7;
        }
        else
        {
          while ( 1 )
          {
            v12 = *((_DWORD *)v2 - 1);
            v13 = *(char **)(v12 + 24);
            if ( (int)src >= (int)v13 && (v12 <= v7 || (int)src > (int)v13) )
              break;
            *(_DWORD *)v2 = v12;
            v2 -= 4;
          }
          *(_DWORD *)v2 = v7;
        }
        v2 = v8;
      }
      while ( a2 != v8 );
    }
  }
  return src;
}
