int __fastcall sub_25DEE0(int a1, int a2, int a3)
{
  int v6; // r8
  int v7; // r1
  unsigned int v8; // r4
  unsigned __int8 *v9; // r5
  int v10; // r4
  unsigned int v11; // r0
  unsigned int v12; // r5
  int v13; // r1
  int v14; // r6
  int v15; // r0
  __int64 v17; // [sp+0h] [bp-10h] BYREF
  __int64 v18; // [sp+8h] [bp-8h] BYREF

  v6 = sub_170040(a1);
  if ( sub_17195C(*(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + 12), &v17, &v18) < 0 )
    return -2;
  if ( a3 < v17 )
    return -1;
  v7 = (unsigned __int64)(v18 - a3) >> 32;
  if ( v18 < a3 )
    return -1;
  v8 = a3 - v17;
  v9 = (unsigned __int8 *)(a2 + (v8 >> 3));
  v10 = v8 & 7;
  v11 = ((int (__fastcall *)(int, int))loc_165BB8)(v6, v7);
  v12 = sub_15C250(v9, 1, v11);
  v14 = v13;
  if ( ((int (__fastcall *)(int))loc_165D78)(v6) )
    v10 = 7 - v10;
  v15 = (v12 >> v10) | (v14 << (32 - v10));
  if ( v10 - 32 >= 0 )
    v15 |= v14 >> (v10 - 32);
  return v15 & 1;
}
