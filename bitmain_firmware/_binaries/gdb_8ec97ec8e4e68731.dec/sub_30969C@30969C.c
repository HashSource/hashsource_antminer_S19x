int __fastcall sub_30969C(int *a1, int *a2)
{
  int (__fastcall *v3)(int, int, int); // r7
  _BOOL4 v5; // r0
  int v6; // r5
  int **v7; // r8
  void *v8; // r7
  int *v9; // r1
  int *v10; // r3
  int *v11; // r2
  int v12; // r4
  int v13; // lr
  int v14; // r12
  int v15; // r0
  int v16; // r0
  unsigned int v17; // r1
  int v18; // r12
  _DWORD *v19; // r2
  int v21; // r0

  if ( !a2 )
    return -2;
  v3 = (int (__fastcall *)(int, int, int))a2[8];
  if ( !v3 || !a2[9] )
    return -2;
  v5 = sub_307334((int)a2);
  if ( !a1 )
    v5 = 1;
  if ( v5 )
    return -2;
  v6 = a2[7];
  v7 = (int **)v3(a2[10], 1, 7120);
  if ( !v7 )
    return -4;
  v8 = *(void **)(v6 + 56);
  if ( v8 && (v8 = (void *)((int (__fastcall *)(int, int))a2[8])(a2[10], 1 << *(_DWORD *)(v6 + 40))) == 0 )
  {
    ((void (__fastcall *)(int, int **))a2[9])(a2[10], v7);
    return -4;
  }
  else
  {
    v9 = a2;
    v10 = a1;
    v11 = a2 + 12;
    do
    {
      v12 = *v9;
      v9 += 4;
      v13 = *(v9 - 3);
      v10 += 4;
      v14 = *(v9 - 2);
      v15 = *(v9 - 1);
      *(v10 - 4) = v12;
      *(v10 - 3) = v13;
      *(v10 - 2) = v14;
      *(v10 - 1) = v15;
    }
    while ( v9 != v11 );
    v16 = v9[1];
    *v10 = *v9;
    v10[1] = v16;
    memcpy(v7, (const void *)v6, 0x1BD0u);
    v17 = *(_DWORD *)(v6 + 80);
    v18 = v6 + 1332;
    *v7 = a1;
    v19 = v7 + 333;
    if ( v17 >= v6 + 1332 && v17 <= v6 + 7104 )
    {
      v21 = *(_DWORD *)(v6 + 84);
      v7[20] = (_DWORD *)((char *)v19 + v17 - v18);
      v7[21] = (_DWORD *)((char *)v19 + v21 - v18);
    }
    v7[28] = (_DWORD *)((char *)v19 + *(_DWORD *)(v6 + 112) - v18);
    if ( v8 )
      memcpy(v8, *(const void **)(v6 + 56), 1 << *(_DWORD *)(v6 + 40));
    v7[14] = (int *)v8;
    a1[7] = (int)v7;
    return 0;
  }
}
