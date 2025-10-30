int __fastcall sub_2FF378(int a1, int a2)
{
  int v3; // r3
  _DWORD *v4; // r2
  int v5; // r12
  _DWORD *v6; // r12
  unsigned int v8; // r5
  char **v9; // r0
  char *v10; // r3

  if ( (unsigned int)*(unsigned __int8 *)(a1 + 12) - 3 > 1 )
    return 1;
  v3 = *(_DWORD *)(a1 + 20);
  if ( !v3 )
    return 1;
  v4 = *(_DWORD **)(v3 + 60);
  if ( !v4 || (v4[5] & 0x8000) == 0 )
    return 1;
  v5 = v4[3];
  v6 = v5 ? *(_DWORD **)(v5 + 16) : *(_DWORD **)(a2 + 104);
  if ( v6 == v4 )
    return 1;
  v8 = *(_DWORD *)(a1 + 24) + *(_DWORD *)(v3 + 56) + v4[7];
  *(_DWORD *)(a1 + 24) = v8;
  v9 = sub_2FF1FC(a2, v4, v8);
  v10 = v9[7];
  *(_DWORD *)(a1 + 20) = v9;
  *(_DWORD *)(a1 + 24) = v8 - (_DWORD)v10;
  return 1;
}
