int __fastcall sub_1A19CC(int a1, int a2, const void **a3, _DWORD *a4, int a5, const char **a6)
{
  const char **v9; // r8
  int v10; // r4
  size_t v11; // r5
  const char *v12; // r11
  const char *v13; // t1
  size_t v15; // r2

  if ( a5 > 0 )
  {
    v9 = a6;
    v10 = 0;
    v11 = *(_DWORD *)(a1 + 4);
    do
    {
      v13 = *v9++;
      v12 = v13;
      if ( v11 == strlen(v13) && !memcmp(*(const void **)a1, v12, v11) )
        return v10;
      ++v10;
    }
    while ( v9 != &a6[a5] );
  }
  if ( !a2 )
    return -1;
  v15 = *(_DWORD *)(a1 + 4);
  if ( v15 != *a4 || memcmp(*(const void **)a1, *a3, v15) )
    return -1;
  return a5 - 1;
}
