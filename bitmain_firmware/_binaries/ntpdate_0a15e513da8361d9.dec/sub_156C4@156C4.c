char *__fastcall sub_156C4(int a1)
{
  int v2; // r7
  int v3; // r2
  size_t v5; // r5
  void *v6; // r0
  void *v7; // r8
  int v8; // r2
  int v9; // r3

  if ( !a1 || *(_DWORD *)a1 != 1281582695 )
    sub_10C38();
  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(v2 + 12);
  if ( !v3 )
    sub_10C38();
  if ( v3 == *(_DWORD *)(a1 + 20) )
    return 0;
  v5 = 8 * v3;
  v6 = sub_9A68(0, 8 * v3, 0, 0);
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
