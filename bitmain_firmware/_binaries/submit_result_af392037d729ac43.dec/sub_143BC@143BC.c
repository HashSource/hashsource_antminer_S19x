int __fastcall sub_143BC(int a1, unsigned int a2, _DWORD *a3)
{
  char *v6; // r0
  char *v7; // r5
  char *v8; // r1
  int v10; // r2
  unsigned int *v11; // r3
  unsigned int v12; // r2
  unsigned int v13; // r2
  unsigned int *v14; // r3
  unsigned int v15; // r2
  unsigned int v16; // r2
  unsigned int *v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r2

  if ( !a3 )
    return -1;
  if ( !a1 || *(_DWORD *)a1 != 1 || (_DWORD *)a1 == a3 )
  {
    if ( a3[1] == -1 )
      return -1;
    v11 = a3 + 1;
    __dmb(0xFu);
    do
    {
      v12 = __ldrex(v11);
      v13 = v12 - 1;
    }
    while ( __strex(v13, v11) );
    if ( v13 )
      return -1;
LABEL_14:
    sub_1427C(a3);
    return -1;
  }
  if ( *(_DWORD *)(a1 + 12) < a2 )
  {
    if ( a3[1] == -1 )
      return -1;
    v14 = a3 + 1;
    __dmb(0xFu);
    do
    {
      v15 = __ldrex(v14);
      v16 = v15 - 1;
    }
    while ( __strex(v16, v14) );
    if ( v16 )
      return -1;
    goto LABEL_14;
  }
  v6 = (char *)sub_13D64((_DWORD *)a1, 1, 0);
  v7 = v6;
  if ( !v6 )
  {
    if ( a3[1] == -1 )
      return -1;
    v17 = a3 + 1;
    __dmb(0xFu);
    do
    {
      v18 = __ldrex(v17);
      v19 = v18 - 1;
    }
    while ( __strex(v19, v17) );
    if ( v19 )
      return -1;
    goto LABEL_14;
  }
  v8 = *(char **)(a1 + 16);
  if ( v8 == v6 )
  {
    memmove(&v8[4 * a2 + 4], &v8[4 * a2], 4 * (*(_DWORD *)(a1 + 12) - a2));
  }
  else
  {
    memcpy(*(void **)(a1 + 16), v6, 4 * a2);
    memcpy((void *)(*(_DWORD *)(a1 + 16) + 4 * (a2 + 1)), &v7[4 * a2], 4 * (*(_DWORD *)(a1 + 12) - a2));
    sub_1383C(v7);
  }
  v10 = *(_DWORD *)(a1 + 12) + 1;
  *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * a2) = a3;
  *(_DWORD *)(a1 + 12) = v10;
  return 0;
}
