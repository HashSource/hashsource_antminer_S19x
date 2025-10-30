int __fastcall sub_13CE68(int *a1, int a2)
{
  int *v3; // r5
  _DWORD *v4; // r6
  _DWORD *v5; // r6
  int v6; // r8
  unsigned int v7; // r3
  int v8; // r0
  _DWORD *v9; // r6
  int v10; // r8
  unsigned int v11; // r3
  int v12; // r0
  _DWORD *v13; // r8
  __int64 v14; // r6
  unsigned int v15; // r3
  int v16; // r0

  v3 = (int *)*a1;
  v4 = *(_DWORD **)(*a1 + 24);
  sub_13CB0C(
    *(int **)(a2 + 4),
    *(_DWORD **)(a2 + 12),
    (_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 108) + 4 * v4[9]),
    v4[10],
    *(_DWORD *)(a2 + 16),
    0);
  sub_13CB0C(
    *(int **)(a2 + 4),
    *(_DWORD **)(a2 + 12),
    (_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 120) + 4 * v4[11]),
    v4[12],
    *(_DWORD *)(a2 + 16),
    1);
  v5 = *(_DWORD **)(a2 + 8);
  v6 = *v3;
  v7 = v5[1] - *v5;
  if ( v7 < v7 + 8 )
  {
    sub_AF660(*(char ***)(a2 + 8), 8u);
    v8 = v5[1];
  }
  else
  {
    v8 = *v5 + v7 + 8;
    v5[1] = v8;
  }
  sub_15C34C(v8 - 8, 8, 1, v7, v6, 0);
  v9 = *(_DWORD **)(a2 + 8);
  v10 = v3[10];
  v11 = v9[1] - *v9;
  if ( v11 < v11 + 8 )
  {
    sub_AF660(*(char ***)(a2 + 8), 8u);
    v12 = v9[1];
  }
  else
  {
    v12 = *v9 + v11 + 8;
    v9[1] = v12;
  }
  sub_15C34C(v12 - 8, 8, 1, v11, v10, 0);
  v13 = *(_DWORD **)(a2 + 8);
  v14 = *((_QWORD *)v3 + 4);
  v15 = v13[1] - *v13;
  if ( v15 < v15 + 8 )
  {
    sub_AF660(*(char ***)(a2 + 8), 8u);
    v16 = v13[1];
  }
  else
  {
    v16 = *v13 + v15 + 8;
    v13[1] = v16;
  }
  sub_15C34C(v16 - 8, 8, 1, v15, v14, HIDWORD(v14));
  ++*(_DWORD *)(a2 + 16);
  return 1;
}
