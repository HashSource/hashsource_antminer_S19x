int __fastcall sub_3071F0(int a1, int a2, size_t n)
{
  int v4; // r4
  char *v6; // r3
  size_t v7; // r2
  int v8; // r0
  const void *v9; // r1
  size_t v10; // r5
  char *v11; // r0
  unsigned int v12; // r2
  size_t v13; // r3
  unsigned int v14; // r3
  int result; // r0
  int v16; // r0
  int v17; // r3
  size_t v18; // r6
  int v19; // r3

  v4 = *(_DWORD *)(a1 + 28);
  v6 = *(char **)(v4 + 56);
  if ( !v6 )
  {
    v6 = (char *)(*(int (__fastcall **)(_DWORD, int, int))(a1 + 32))(*(_DWORD *)(a1 + 40), 1 << *(_DWORD *)(v4 + 40), 1);
    *(_DWORD *)(v4 + 56) = v6;
    if ( !v6 )
      return 1;
  }
  v7 = *(_DWORD *)(v4 + 44);
  if ( !v7 )
  {
    v16 = *(_DWORD *)(v4 + 40);
    *(_DWORD *)(v4 + 52) = 0;
    *(_DWORD *)(v4 + 48) = 0;
    v7 = 1 << v16;
    *(_DWORD *)(v4 + 44) = 1 << v16;
    if ( n < 1 << v16 )
      goto LABEL_5;
LABEL_12:
    memcpy(v6, (const void *)(a2 - v7), v7);
    v17 = *(_DWORD *)(v4 + 44);
    *(_DWORD *)(v4 + 52) = 0;
    *(_DWORD *)(v4 + 48) = v17;
    return 0;
  }
  if ( n >= v7 )
    goto LABEL_12;
LABEL_5:
  v8 = *(_DWORD *)(v4 + 52);
  v9 = (const void *)(a2 - n);
  v10 = v7 - v8;
  v11 = &v6[v8];
  if ( n >= v10 )
  {
    memcpy(v11, v9, v10);
    v18 = n - v10;
    if ( v18 )
    {
      memcpy(*(void **)(v4 + 56), (const void *)(a2 - v18), v18);
      v19 = *(_DWORD *)(v4 + 44);
      *(_DWORD *)(v4 + 52) = v18;
      *(_DWORD *)(v4 + 48) = v19;
      return 0;
    }
    n = v10;
  }
  else
  {
    memcpy(v11, v9, n);
  }
  v12 = *(_DWORD *)(v4 + 44);
  v13 = n + *(_DWORD *)(v4 + 52);
  *(_DWORD *)(v4 + 52) = v13;
  if ( v13 == v12 )
    *(_DWORD *)(v4 + 52) = 0;
  v14 = *(_DWORD *)(v4 + 48);
  result = 0;
  if ( v12 > v14 )
    *(_DWORD *)(v4 + 48) = v14 + n;
  return result;
}
