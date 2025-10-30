int __fastcall sub_3369AC(const char *a1, int a2, int a3)
{
  size_t v5; // r0
  size_t v6; // r6
  int v7; // r4
  _DWORD *v8; // r7
  _BYTE *v9; // r0
  char *v10; // r5
  const char *v11; // t1
  size_t v12; // r8
  void *v13; // r0
  void *v14; // r11
  int v15; // r4
  void *v16; // t1

  v5 = strlen(a1);
  if ( v5 == 1 )
    v6 = *(unsigned __int8 *)a1 != 47;
  else
    v6 = v5;
  if ( !a3 )
    return 0;
  v7 = 0;
  v8 = (_DWORD *)(a2 - 4);
  while ( 1 )
  {
    v11 = (const char *)v8[1];
    ++v8;
    v10 = (char *)v11;
    v12 = strlen(v11) + 1;
    v13 = malloc(v12 + v6 + 1);
    v14 = v13;
    if ( !v13 )
      break;
    v9 = memcpy(v13, a1, v6);
    v9[v6] = 47;
    memcpy(&v9[v6 + 1], v10, v12);
    ++v7;
    free(v10);
    *v8 = v14;
    if ( a3 == v7 )
      return 0;
  }
  if ( v7 )
  {
    v15 = a2 + 4 * v7;
    do
    {
      v16 = *(void **)(v15 - 4);
      v15 -= 4;
      free(v16);
    }
    while ( a2 != v15 );
  }
  return 1;
}
