__int64 __fastcall sub_9B67C(int a1, int a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r7
  int v7; // r0
  int v8; // r0
  _DWORD savedregs[6]; // [sp+0h] [bp-14h] BYREF

  v4 = sub_170040(a2);
  v5 = *(_DWORD *)(a2 + 20);
  v6 = v4;
  v7 = ((int (__fastcall *)(int))loc_26C09C)(a1);
  ((void (__fastcall *)(int, int, _DWORD *, int))loc_168974)(v6, a2, savedregs, v7);
  v8 = ((int (__fastcall *)(int))loc_165BB8)(v6);
  return sub_15C250(savedregs, v5, v8);
}
