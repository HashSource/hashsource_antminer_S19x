int __fastcall sub_45B70(_DWORD *a1, char *s)
{
  size_t v4; // r0
  int v5; // r0
  int v6; // r9
  int v7; // r5
  int *v8; // r7
  _DWORD *v9; // r0
  _DWORD *v10; // r4
  _DWORD *v11; // r1
  int v12; // r2
  int v13; // r3
  int *v14; // r1
  int v15; // r2
  int v16; // r0
  int v17; // r3
  unsigned int *v19; // r3
  unsigned int v20; // r2
  unsigned int v21; // r2
  bool v22; // zf

  v4 = strlen(s);
  v5 = sub_451C0((unsigned __int16 *)s, v4, dword_73108);
  v6 = a1[1];
  v7 = v5 & ~(-1 << a1[2]);
  v8 = (int *)(v6 + 8 * v7);
  v9 = (_DWORD *)sub_45704((int)a1, v8, s, v5);
  v10 = v9;
  if ( !v9 )
    return -1;
  v11 = (_DWORD *)v8[1];
  v12 = v9[1];
  v13 = *v9;
  if ( v9 == *(_DWORD **)(v6 + 8 * v7) )
  {
    v22 = v9 == v11;
    if ( v9 == v11 )
      v11 = a1 + 3;
    else
      *(_DWORD *)(v6 + 8 * v7) = v12;
    if ( v22 )
    {
      v8[1] = (int)v11;
      *(_DWORD *)(v6 + 8 * v7) = v11;
    }
  }
  else if ( v9 == v11 )
  {
    v8[1] = v13;
  }
  *(_DWORD *)(v13 + 4) = v12;
  v14 = (int *)v9[1];
  v15 = v9[3];
  v16 = v9[5];
  *v14 = v13;
  v17 = v10[2];
  *(_DWORD *)(v17 + 4) = v15;
  *(_DWORD *)v10[3] = v17;
  if ( v16 && *(_DWORD *)(v16 + 4) != -1 )
  {
    v19 = (unsigned int *)(v16 + 4);
    __dmb(0xBu);
    do
    {
      v20 = __ldrex(v19);
      v21 = v20 - 1;
    }
    while ( __strex(v21, v19) );
    if ( !v21 )
      sub_48A34(v16);
  }
  sub_47764(v10);
  --*a1;
  return 0;
}
