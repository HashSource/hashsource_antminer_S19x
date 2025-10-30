char *__fastcall sub_E57D8(_DWORD *src, _BYTE *a2, char *a3, char *a4, char *dest)
{
  char *v5; // r12
  _DWORD *v7; // r2
  int v8; // r5
  size_t v10; // r2
  _DWORD *v11; // r1
  void *v12; // r0
  char *v13; // r4

  v5 = a3;
  if ( src == (_DWORD *)a2 )
  {
LABEL_9:
    v8 = a4 - v5;
    if ( v5 != a4 )
      memmove(dest, v5, a4 - v5);
    return &dest[v8];
  }
  if ( a3 != a4 )
  {
    do
    {
      v7 = (_DWORD *)*src;
      if ( **(_DWORD **)v5 <= *(_DWORD *)*src )
      {
        ++src;
        *(_DWORD *)dest = v7;
      }
      else
      {
        *(_DWORD *)dest = *(_DWORD *)v5;
        v5 += 4;
      }
      dest += 4;
      if ( src == (_DWORD *)a2 )
        goto LABEL_9;
    }
    while ( a4 != v5 );
  }
  v10 = a2 - (_BYTE *)src;
  if ( src == (_DWORD *)a2 )
  {
    dest += v10;
    v8 = 0;
    return &dest[v8];
  }
  v11 = src;
  v12 = dest;
  v13 = &dest[v10];
  memmove(v12, v11, v10);
  return v13;
}
