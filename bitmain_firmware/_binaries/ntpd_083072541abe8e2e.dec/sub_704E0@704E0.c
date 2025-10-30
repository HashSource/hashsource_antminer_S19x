char *__fastcall sub_704E0(int a1)
{
  int v2; // r7
  int v3; // r5
  size_t v5; // r5
  void *v6; // r0
  void *v7; // r8
  int v8; // r2
  int v9; // r3

  if ( !a1 || *(_DWORD *)a1 != 1281582695 )
    sub_6ECC0(
      (int)"./../lib/isc/log.c",
      1112,
      0,
      "(((lcfg) != ((void *)0)) && (((const isc__magic_t *)(lcfg))->magic == ((('L') << 24 | ('c') << 16 | ('f') << 8 | ('g')))))");
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(v2 + 12);
  if ( !v3 )
    sub_6ECC0((int)"./../lib/isc/log.c", 1116, 0, "lctx->category_count != 0");
  if ( v3 == *(_DWORD *)(a1 + 20) )
    return 0;
  v5 = 8 * v3;
  v6 = sub_63BA4(0, v5, 0, 0);
  v7 = v6;
  if ( !v6 )
    return (char *)&dword_0 + 1;
  memset(v6, 0, v5);
  v8 = *(_DWORD *)(a1 + 20);
  if ( v8 )
  {
    memcpy(v7, *(const void **)(a1 + 16), 8 * v8);
    free(*(void **)(a1 + 16));
  }
  v9 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(a1 + 16) = v7;
  *(_DWORD *)(a1 + 20) = v9;
  return 0;
}
