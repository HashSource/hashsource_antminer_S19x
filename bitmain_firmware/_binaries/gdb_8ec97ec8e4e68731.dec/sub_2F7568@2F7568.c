int __fastcall sub_2F7568(int a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r3
  int v7; // r6
  int v8; // r8
  bool v9; // cf
  int v10; // r4
  int v11; // r12
  unsigned int v12; // r6
  int v13; // r0
  int v14; // r1
  int v15; // r7
  int v16; // r4
  int v17; // r0
  _BOOL4 v18; // r3
  bool v19; // zf

  v3 = *(_DWORD **)(a1 + 84);
  v7 = v3[24];
  v8 = *(_DWORD *)(a1 + 96);
  if ( !v7 )
  {
    if ( !sub_2F5C18(*(_DWORD **)(a1 + 8), (const char **)(v3[2] + 88), v3[15], (int)(v3 + 24), 0, v3 + 24, v3 + 25) )
      return 0;
    v3 = *(_DWORD **)(a1 + 84);
    v7 = v3[24];
  }
  v9 = __CFADD__(v7, a3);
  v10 = v7 + a3;
  if ( !v9 )
  {
    v11 = *(unsigned __int8 *)(a1 + 92);
    v12 = v7 + v3[25];
    while ( v12 >= v10 + 2 * v11 )
    {
      v13 = sub_2F67B0(*(_DWORD *)(a1 + 8), v11, v10, v12);
      v14 = *(unsigned __int8 *)(a1 + 92);
      v15 = v13;
      v16 = v10 + v14;
      v17 = sub_2F67B0(*(_DWORD *)(a1 + 8), v14, v16, v12);
      v11 = *(unsigned __int8 *)(a1 + 92);
      v10 = v16 + v11;
      if ( !(v15 | v17) )
        return 1;
      v18 = v17 != -1;
      if ( v15 != -1 )
        v18 = 0;
      if ( !v18 )
      {
        v19 = sub_2F667C((int *)(a1 + 8), a2, v8 + v15, v8 + v17) == 0;
        v17 = v8;
        if ( v19 )
          return 0;
        v11 = *(unsigned __int8 *)(a1 + 92);
      }
      v8 = v17;
    }
  }
  return 0;
}
