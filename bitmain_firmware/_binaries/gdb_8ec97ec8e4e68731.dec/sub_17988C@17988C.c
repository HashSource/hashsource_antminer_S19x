int __fastcall sub_17988C(int a1, unsigned __int8 *a2, int *a3, __int64 *a4)
{
  int v8; // r0
  int v9; // r7
  int v10; // r11
  int v11; // r4
  unsigned int v12; // r10
  int v13; // r1
  __int64 v14; // r6
  int result; // r0
  int v16; // [sp+4h] [bp-8h]

  sub_1780B4();
  v9 = *(_DWORD *)(v8 + 156);
  v16 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_487880) + 24) + 24) + 36);
  v10 = ((int (__fastcall *)(int))loc_165BB8)(a1);
  v11 = sub_15AEA8((int)a2, v9);
  v12 = sub_15C190(a2, *(_DWORD *)(v9 + 20), v10);
  LODWORD(v14) = sub_15C190(&a2[*(_DWORD *)(v9 + 20)], *(_DWORD *)(v16 + 20), v10);
  HIDWORD(v14) = v13;
  if ( ((int (__fastcall *)(int))loc_16BBA8)(a1) )
  {
    result = v14 & 1;
    v14 >>= 1;
  }
  else
  {
    result = v12 & 1;
    v12 ^= result;
  }
  if ( result )
    v11 = v12;
  *a3 = v11;
  *a4 = v14;
  return result;
}
