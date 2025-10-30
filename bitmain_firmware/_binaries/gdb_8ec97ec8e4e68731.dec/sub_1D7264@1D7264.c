int __fastcall sub_1D7264(int a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r1
  int v6; // r2
  _DWORD *v7; // r12
  void *v8; // r0
  void *v9; // r0
  int v10; // r0
  int v11; // r0

  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 308) )
    {
      result = sub_E1A3C(*(_DWORD **)(a1 + 308), a2);
      if ( !result )
        return result;
    }
    else
    {
      sub_1D4C0C((_DWORD *)a1);
    }
    v5 = a2[1];
    v6 = a2[2];
    v7 = *(_DWORD **)(a1 + 308);
    *v7 = *a2;
    v7[1] = v5;
    v7[2] = v6;
    sub_1DDBE4(*(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 16));
  }
  else
  {
    sub_1D4A70((_DWORD *)a1);
  }
  v8 = *(void **)(a1 + 300);
  if ( v8 )
    free(v8);
  v9 = *(void **)(a1 + 304);
  if ( v9 )
    free(v9);
  *(_DWORD *)(a1 + 300) = 0;
  *(_DWORD *)(a1 + 304) = 0;
  v10 = sub_1DDBBC(v9);
  dword_4878F8 = sub_1DFB3C(v10);
  v11 = sub_15F7E8(0);
  return sub_20E7E8(v11, 1, 1);
}
