int __fastcall sub_4935C(_DWORD *a1, _DWORD *a2)
{
  _BOOL4 v4; // r5
  unsigned int *v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r2
  int v9; // r3
  unsigned int *v10; // r3
  unsigned int v11; // r2

  if ( !a2 )
    return -1;
  if ( !a1 )
    goto LABEL_6;
  v4 = a2 == a1;
  if ( *a1 != 1 )
    v4 = 1;
  if ( !v4 )
  {
    if ( sub_47F80(a1, 1, 1) )
    {
      v9 = a1[3];
      *(_DWORD *)(a1[4] + 4 * v9) = a2;
      a1[3] = v9 + 1;
      return 0;
    }
    if ( a2[1] == -1 )
      return -1;
    v10 = a2 + 1;
    __dmb(0xBu);
    do
    {
      v11 = __ldrex(v10);
      v8 = v11 - 1;
    }
    while ( __strex(v8, v10) );
  }
  else
  {
LABEL_6:
    if ( a2[1] == -1 )
      return -1;
    v6 = a2 + 1;
    __dmb(0xBu);
    do
    {
      v7 = __ldrex(v6);
      v8 = v7 - 1;
    }
    while ( __strex(v8, v6) );
  }
  if ( v8 )
    return -1;
  sub_48A34(a2);
  return -1;
}
