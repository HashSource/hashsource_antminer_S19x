int __fastcall sub_DFA98(int a1, int a2)
{
  int v4; // r0
  unsigned int *v5; // r3
  int v6; // r7
  unsigned int v7; // r2
  unsigned int v8; // r1
  int (__fastcall *v9)(_DWORD, int); // r9
  unsigned int *v10; // r5
  unsigned int *v11; // r10
  _DWORD *v12; // r4
  int **v13; // r6
  unsigned int v14; // r3
  unsigned int v15; // r3
  int result; // r0
  unsigned int *v17; // r11
  unsigned int v18; // r3
  unsigned int *v19; // r11
  unsigned int v20; // r3

  *(_DWORD *)(a1 + 92) = 0;
  v4 = (*(int (__fastcall **)(int))(a1 + 8))(a2);
  v5 = (unsigned int *)(a1 + 56);
  v6 = v4;
  do
    v7 = __ldrex(v5);
  while ( __strex(v7 + 1, v5) );
  sub_1892EC(v4, *(_DWORD *)(a1 + 24));
  if ( v8 < *(_DWORD *)(a1 + 20) )
    sub_1892EC(v6, *(_DWORD *)(a1 + 16));
  v9 = *(int (__fastcall **)(_DWORD, int))(a1 + 4);
  v10 = (unsigned int *)(a1 + 88);
  v11 = (unsigned int *)(a1 + 60);
  v12 = *(_DWORD **)(*(_DWORD *)a1 + 4 * v8);
  v13 = (int **)(*(_DWORD *)a1 + 4 * v8);
  if ( !v12 )
    goto LABEL_16;
  while ( 1 )
  {
    do
      v14 = __ldrex(v10);
    while ( __strex(v14 + 1, v10) );
    if ( v6 == v12[2] )
    {
      do
        v15 = __ldrex(v11);
      while ( __strex(v15 + 1, v11) );
      if ( !v9(*v12, a2) )
        break;
    }
    v13 = (int **)(v12 + 1);
    v12 = (_DWORD *)v12[1];
    if ( !v12 )
      goto LABEL_16;
  }
  if ( *v13 )
  {
    result = **v13;
    v17 = (unsigned int *)(a1 + 80);
    do
      v18 = __ldrex(v17);
    while ( __strex(v18 + 1, v17) );
  }
  else
  {
LABEL_16:
    v19 = (unsigned int *)(a1 + 84);
    do
      v20 = __ldrex(v19);
    while ( __strex(v20 + 1, v19) );
    return 0;
  }
  return result;
}
