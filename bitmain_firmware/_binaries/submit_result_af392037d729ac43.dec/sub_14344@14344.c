int __fastcall sub_14344(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // r3
  int v4; // r5
  _DWORD *v5; // r0
  unsigned int *v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r2
  unsigned int v9; // r3
  unsigned int v11; // [sp+4h] [bp-4h]

  if ( !a1 )
    return -1;
  if ( *a1 != 1 )
    return -1;
  v3 = a1[3];
  if ( v3 <= a2 )
    return -1;
  v4 = 4 * a2;
  v5 = *(_DWORD **)(a1[4] + 4 * a2);
  if ( v5 && v5[1] != -1 )
  {
    v6 = v5 + 1;
    __dmb(0xFu);
    do
    {
      v7 = __ldrex(v6);
      v8 = v7 - 1;
    }
    while ( __strex(v8, v6) );
    if ( v8 )
    {
      v3 = a1[3];
    }
    else
    {
      v11 = a2;
      sub_1427C(v5);
      v3 = a1[3];
      a2 = v11;
    }
  }
  v9 = v3 - 1;
  if ( a2 < v9 )
  {
    memmove((void *)(a1[4] + v4), (const void *)(a1[4] + 4 * (a2 + 1)), 4 * (v9 - a2));
    v9 = a1[3] - 1;
  }
  a1[3] = v9;
  return 0;
}
