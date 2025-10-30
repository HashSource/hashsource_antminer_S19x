int __fastcall sub_17995C(int *a1, int a2)
{
  unsigned __int8 *v4; // r8
  _DWORD *v5; // r0
  int v6; // r0
  _DWORD *v7; // r7
  _DWORD *v8; // r6
  _DWORD *v9; // r0
  int v10; // r3
  int v11; // r0
  _DWORD *v12; // r7
  int v13; // r5
  int v14; // r8
  int v15; // r0
  int v16; // r0
  _DWORD *v17; // r0
  int v19; // r6
  int v20; // r0
  int v21; // r6
  int v22; // r0
  int v23; // [sp+4h] [bp-Ch] BYREF
  __int64 v24; // [sp+8h] [bp-8h] BYREF

  v4 = (unsigned __int8 *)sub_26E978(a2);
  v5 = (_DWORD *)sub_26BC70(a2);
  v6 = sub_171258(v5);
  v7 = (_DWORD *)((int (__fastcall *)(int))loc_1708E0)(v6);
  v8 = sub_1700C0(v7);
  v9 = (_DWORD *)sub_26BC70(a2);
  v10 = *(_DWORD *)(sub_171258(v9) + 24);
  v11 = (int)v7;
  v12 = *(_DWORD **)(v10 + 20);
  v13 = sub_170040(v11);
  v14 = sub_17988C(v13, v4, &v23, &v24);
  *a1 = sub_2647C8(v8, *a1);
  sub_1780B4();
  *a1 = sub_2647C8(*(_DWORD *)(v15 + 152), *a1);
  v16 = ((int (*)(void))loc_25CA94)();
  *a1 = v16;
  *a1 = sub_2647C8(v8, v16);
  if ( v14 )
  {
    v19 = v23;
    v20 = ((int (__fastcall *)(int, int))loc_16EC88)(v13, dword_487880);
    v21 = sub_347418(v19, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v20 + 24) + 24) + 36) + 20));
    v22 = sub_26210C(*a1);
    return ((int (__fastcall *)(int, int, _DWORD *, int))loc_179728)(v13, v22, v12, v21);
  }
  else
  {
    v17 = sub_1700C0(v12);
    return sub_26DC9C(v17, v23);
  }
}
