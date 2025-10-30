int __fastcall sub_2D4DE8(int a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r4
  int v6; // r5
  int v7; // r12
  bool v8; // zf
  unsigned int v9; // r12
  int v10; // lr
  int v11; // r12

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) != 5 || *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4) != 5 )
    return 1;
  v5 = *(_DWORD **)(a2 + 140);
  v6 = *(_DWORD *)(a4 + 140);
  v7 = v5[1];
  v8 = v7 == 11;
  if ( v7 != 11 )
    v8 = v7 == 2;
  v9 = v7 - 1879048189;
  v10 = v8;
  if ( v9 <= 1 )
    v11 = v10 | 1;
  else
    v11 = v10;
  *(_DWORD *)(v6 + 40) = v5[10];
  if ( v11 )
    *(_DWORD *)(v6 + 32) = v5[8];
  return sub_2D4C58(a1, a2, a3, a4, 0);
}
