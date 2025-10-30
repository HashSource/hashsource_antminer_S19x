int __fastcall sub_148B0(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  int v4; // r3
  int v5; // r5
  _DWORD *v6; // r0
  _DWORD *v7; // r3
  unsigned int *v8; // r3
  unsigned int v9; // r1
  unsigned int v10; // r1
  unsigned int *v12; // r3
  unsigned int v13; // r1
  unsigned int v14; // r1
  unsigned int *v15; // r3
  unsigned int v16; // r1
  unsigned int v17; // r1
  _DWORD *v18; // [sp+4h] [bp-4h]

  if ( !a3 )
    return -1;
  if ( !a1 || *a1 != 1 || a1 == a3 )
  {
    if ( a3[1] == -1 )
      return -1;
    v12 = a3 + 1;
    __dmb(0xFu);
    do
    {
      v13 = __ldrex(v12);
      v14 = v13 - 1;
    }
    while ( __strex(v14, v12) );
    if ( v14 )
      return -1;
LABEL_18:
    sub_1427C(a3);
    return -1;
  }
  if ( a1[3] <= a2 )
  {
    if ( a3[1] == -1 )
      return -1;
    v15 = a3 + 1;
    __dmb(0xFu);
    do
    {
      v16 = __ldrex(v15);
      v17 = v16 - 1;
    }
    while ( __strex(v17, v15) );
    if ( v17 )
      return -1;
    goto LABEL_18;
  }
  v4 = a1[4];
  v5 = 4 * a2;
  v6 = *(_DWORD **)(v4 + 4 * a2);
  v7 = (_DWORD *)(v4 + 4 * a2);
  if ( v6 && v6[1] != -1 )
  {
    v8 = v6 + 1;
    __dmb(0xFu);
    do
    {
      v9 = __ldrex(v8);
      v10 = v9 - 1;
    }
    while ( __strex(v10, v8) );
    if ( !v10 )
    {
      v18 = a3;
      sub_1427C(v6);
      a3 = v18;
    }
    v7 = (_DWORD *)(a1[4] + v5);
  }
  *v7 = a3;
  return 0;
}
