int __fastcall sub_1483C(int *a1, int *a2)
{
  int v4; // r3
  unsigned int *v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r2
  unsigned int *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r2

  if ( !a2 )
    return -1;
  if ( !a1 || *a1 != 1 || a1 == a2 )
  {
    if ( a2[1] == -1 )
      return -1;
    v6 = (unsigned int *)(a2 + 1);
    __dmb(0xFu);
    do
    {
      v7 = __ldrex(v6);
      v8 = v7 - 1;
    }
    while ( __strex(v8, v6) );
    if ( v8 )
      return -1;
    goto LABEL_11;
  }
  if ( sub_13D64(a1, 1, *a1) )
  {
    v4 = a1[3];
    *(_DWORD *)(a1[4] + 4 * v4) = a2;
    a1[3] = v4 + 1;
    return 0;
  }
  if ( a2[1] != -1 )
  {
    v9 = (unsigned int *)(a2 + 1);
    __dmb(0xFu);
    do
    {
      v10 = __ldrex(v9);
      v11 = v10 - 1;
    }
    while ( __strex(v11, v9) );
    if ( !v11 )
LABEL_11:
      sub_1427C(a2);
  }
  return -1;
}
