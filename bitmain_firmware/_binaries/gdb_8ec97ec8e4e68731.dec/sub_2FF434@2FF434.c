__int64 __fastcall sub_2FF434(int a1, int a2, int a3)
{
  unsigned int *v5; // r3
  int v6; // r0
  int v7; // r6
  unsigned int v8; // r7
  _DWORD *v9; // r4
  int v10; // r0
  int v11; // r8
  int v12; // r9
  __int64 result; // r0
  int v14; // r2
  int v15; // r3
  int v16; // r3

  if ( !a3 || *(_BYTE *)(a3 + 12) != 5 )
    sub_2A6BBC("linker.c", 3075);
  v5 = *(unsigned int **)(a3 + 20);
  v6 = a1;
  v7 = *(_DWORD *)(a3 + 24);
  v8 = *v5;
  v9 = (_DWORD *)v5[1];
  v10 = sub_2A6904(v6);
  v11 = v10 << v8;
  v12 = -(v10 << v8);
  if ( !(v10 << v8) || (v11 & ((v10 << v8) - 1)) != 0 )
    sub_2A6BBC("linker.c", 3084);
  result = 0x300000001LL;
  v14 = v9[5];
  v15 = v9[9] - 1 + v11;
  if ( v9[16] < v8 )
    v9[16] = v8;
  v16 = v15 & v12;
  v9[9] = v16;
  *(_DWORD *)(a3 + 24) = v16;
  *(_DWORD *)(a3 + 20) = v9;
  *(_BYTE *)(a3 + 12) = 3;
  v9[9] = v16 + v7;
  v9[5] = v14 & 0xFFFFEFFE | 1;
  return result;
}
