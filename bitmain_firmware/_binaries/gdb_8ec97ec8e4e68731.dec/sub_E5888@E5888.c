char *__fastcall sub_E5888(unsigned int **src, unsigned int **a2, int a3, char *a4, _DWORD *dest)
{
  bool v5; // zf
  char *v7; // r5
  unsigned int *v9; // lr
  unsigned int *v10; // r12
  unsigned int v11; // r2
  unsigned int v12; // r3
  bool v13; // zf
  size_t v14; // r7
  char *v15; // r4
  size_t v16; // r6

  v5 = a2 == src;
  if ( a2 != src )
    v5 = a4 == (char *)a3;
  v7 = (char *)a3;
  if ( !v5 )
  {
    do
    {
      v9 = *(unsigned int **)v7;
      ++dest;
      v10 = *src;
      v11 = **(_DWORD **)v7;
      v12 = **src;
      if ( v11 <= v12 )
        ++src;
      else
        v7 += 4;
      if ( v11 <= v12 )
        *(dest - 1) = v10;
      else
        *(dest - 1) = v9;
      v13 = a4 == v7;
      if ( a4 != v7 )
        v13 = a2 == src;
    }
    while ( !v13 );
  }
  v14 = (char *)a2 - (char *)src;
  if ( a2 != src )
    memmove(dest, src, v14);
  v5 = a4 == v7;
  v15 = (char *)dest + v14;
  v16 = a4 - v7;
  if ( !v5 )
    memmove(v15, v7, v16);
  return &v15[v16];
}
