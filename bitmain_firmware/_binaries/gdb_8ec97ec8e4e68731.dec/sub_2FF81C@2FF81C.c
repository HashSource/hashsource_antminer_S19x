int __fastcall sub_2FF81C(int *a1, int *a2)
{
  int v2; // r2
  int v3; // r1
  unsigned int v4; // lr
  unsigned int v5; // r12
  int result; // r0
  unsigned int v7; // r5
  int v8; // r1
  int v9; // r2
  int v10; // r0
  int v11; // r3
  int v12; // r4
  int v13; // r2
  int v14; // r1
  int v15; // t1
  int v16; // t1

  v2 = *a1;
  v3 = *a2;
  v4 = *(_DWORD *)(*a1 + 12);
  v5 = *(_DWORD *)(v3 + 12);
  result = ((*(_DWORD *)(*a1 + 16) - 1) & v4) - ((*(_DWORD *)(*a1 + 16) - 1) & v5);
  if ( !result )
  {
    if ( v4 >= v5 )
      v7 = *(_DWORD *)(v3 + 12);
    else
      v7 = v4;
    if ( !v7 )
      return v4 - v5;
    v8 = *(_DWORD *)(v3 + 4);
    v9 = *(_DWORD *)(v2 + 4);
    v10 = *(unsigned __int8 *)(v9 + v4 - 1);
    v11 = v9 + v4 - 1;
    v12 = *(unsigned __int8 *)(v8 + v5 - 1);
    v13 = v8 + v5 - 1;
    if ( v10 == v12 )
    {
      v14 = v11 + 1 - v7;
      while ( v11 != v14 )
      {
        v15 = *(unsigned __int8 *)--v11;
        v10 = v15;
        v16 = *(unsigned __int8 *)--v13;
        v12 = v16;
        if ( v10 != v16 )
          return v10 - v12;
      }
      return v4 - v5;
    }
    return v10 - v12;
  }
  return result;
}
