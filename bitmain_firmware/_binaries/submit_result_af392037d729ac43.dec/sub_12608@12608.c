int __fastcall sub_12608(_DWORD *a1, char *s)
{
  size_t v4; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r7
  int *v8; // r8
  _DWORD *v9; // r0
  _DWORD *v10; // r4
  _DWORD *v11; // r3
  int v12; // r3
  int v13; // r0
  int v14; // r2
  int v15; // r3
  unsigned int *v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r2
  _DWORD *v20; // r3

  v4 = strlen(s);
  v5 = sub_11FBC((unsigned __int16 *)s, v4, dword_27DF4);
  v6 = a1[1];
  v7 = ((1 << a1[2]) - 1) & v5;
  v8 = (int *)(v6 + 8 * v7);
  v9 = (_DWORD *)sub_1238C((int)a1, v8, s, v5);
  v10 = v9;
  if ( !v9 )
    return -1;
  v11 = (_DWORD *)v8[1];
  if ( v9 == *(_DWORD **)(v6 + 8 * v7) )
  {
    if ( v9 == v11 )
    {
      v20 = a1 + 3;
      v8[1] = (int)(a1 + 3);
    }
    else
    {
      v20 = (_DWORD *)v9[1];
    }
    *(_DWORD *)(v6 + 8 * v7) = v20;
  }
  else if ( v9 == v11 )
  {
    v8[1] = *v9;
  }
  v12 = *v9;
  v13 = v9[5];
  *(_DWORD *)(v12 + 4) = v10[1];
  v14 = v10[3];
  *(_DWORD *)v10[1] = v12;
  v15 = v10[2];
  *(_DWORD *)(v15 + 4) = v14;
  *(_DWORD *)v10[3] = v15;
  if ( v13 && *(_DWORD *)(v13 + 4) != -1 )
  {
    v16 = (unsigned int *)(v13 + 4);
    __dmb(0xFu);
    do
    {
      v17 = __ldrex(v16);
      v18 = v17 - 1;
    }
    while ( __strex(v18, v16) );
    if ( !v18 )
      sub_1427C();
  }
  sub_1383C(v10);
  --*a1;
  return 0;
}
