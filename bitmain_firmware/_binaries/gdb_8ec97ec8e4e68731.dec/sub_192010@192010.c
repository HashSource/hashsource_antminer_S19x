int __fastcall sub_192010(int a1, int a2, int a3, int a4)
{
  unsigned int v7; // r8
  int v8; // r0
  int v9; // r6
  int v10; // r3
  int v11; // r0
  int v12; // r4
  int v13; // r0
  int v14; // r7
  __int64 v15; // r0
  int v17; // [sp+0h] [bp-24h] BYREF

  v17 = a4;
  v7 = ((int (__fastcall *)(int))loc_165BB8)(a1);
  sub_1780B4();
  v9 = *(_DWORD *)(*(_DWORD *)(v8 + 152) + 20);
  v10 = ((int (__fastcall *)(int))loc_165FD0)(a1);
  v11 = a2;
  v12 = (v10 / 8 - 1 + 3 * v9) & (v10 / -8);
  if ( sub_230020(v11, &v17, v12 + 8) )
    sub_946E0("Unable to read JIT code entry from remote memory!");
  sub_1780B4();
  v14 = *(_DWORD *)(v13 + 152);
  *(_DWORD *)a3 = sub_15AEA8((int)&v17, v14);
  *(_DWORD *)(a3 + 4) = sub_15AEA8((int)&v17 + v9, v14);
  *(_DWORD *)(a3 + 8) = sub_15AEA8((int)&v17 + 2 * v9, v14);
  LODWORD(v15) = sub_15C250((unsigned __int8 *)&v17 + v12, 8, v7);
  *(_QWORD *)(a3 + 16) = v15;
  return v15;
}
