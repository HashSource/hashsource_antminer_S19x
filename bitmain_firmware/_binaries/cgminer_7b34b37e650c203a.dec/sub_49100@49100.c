int __fastcall sub_49100(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  int v6; // r2
  unsigned int *v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r2
  char *v11; // r8
  char *v12; // r0
  int v13; // r7
  int v14; // r3
  unsigned int *v15; // r3
  unsigned int v16; // r2

  if ( !a3 )
    return -1;
  if ( !a1 )
    goto LABEL_6;
  v6 = a3 == a1;
  if ( *a1 != 1 )
    v6 |= 1u;
  if ( v6 || a1[3] < a2 )
  {
LABEL_6:
    if ( a3[1] == -1 )
      return -1;
    v8 = a3 + 1;
    __dmb(0xBu);
    do
    {
      v9 = __ldrex(v8);
      v10 = v9 - 1;
    }
    while ( __strex(v10, v8) );
LABEL_10:
    if ( !v10 )
    {
      sub_48A34(a3);
      return -1;
    }
    return -1;
  }
  v11 = (char *)sub_47F80(a1, 1, 0);
  if ( !v11 )
  {
    if ( a3[1] == -1 )
      return -1;
    v15 = a3 + 1;
    __dmb(0xBu);
    do
    {
      v16 = __ldrex(v15);
      v10 = v16 - 1;
    }
    while ( __strex(v10, v15) );
    goto LABEL_10;
  }
  v12 = (char *)a1[4];
  v13 = 4 * (a2 + 1);
  if ( v12 == v11 )
  {
    memmove(&v12[v13], &v11[v13 - 4], 4 * (a1[3] - a2));
  }
  else
  {
    memcpy(v12, v11, v13 - 4);
    memcpy((void *)(a1[4] + v13), &v11[v13 - 4], 4 * (a1[3] - a2));
    sub_47764(v11);
  }
  v14 = a1[3] + 1;
  *(_DWORD *)(a1[4] + v13 - 4) = a3;
  a1[3] = v14;
  return 0;
}
