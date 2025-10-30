int __fastcall sub_309218(_DWORD *a1, int a2, _DWORD *a3)
{
  void *v6; // r1
  _BOOL4 v7; // r7
  int v8; // r4
  int v9; // r2
  bool v10; // zf

  if ( !a1 )
    return -2;
  if ( !a1[8] )
    return -2;
  if ( !a1[9] )
    return -2;
  v7 = sub_307334((int)a1);
  if ( v7 )
    return -2;
  v8 = a1[7];
  v9 = *(_DWORD *)(v8 + 48);
  v10 = v9 == 0;
  if ( v9 )
    v10 = v6 == 0;
  if ( !v10 )
  {
    memcpy(v6, (const void *)(*(_DWORD *)(v8 + 56) + *(_DWORD *)(v8 + 52)), v9 - *(_DWORD *)(v8 + 52));
    memcpy((void *)(a2 + *(_DWORD *)(v8 + 48) - *(_DWORD *)(v8 + 52)), *(const void **)(v8 + 56), *(_DWORD *)(v8 + 52));
  }
  if ( a3 )
    *a3 = *(_DWORD *)(v8 + 48);
  return v7;
}
