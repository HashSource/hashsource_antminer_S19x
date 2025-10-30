int __fastcall sub_1A3D0(int a1, int *a2)
{
  int v4; // r6
  int v5; // r4
  int v6; // r6
  int v7; // r0
  int v8; // r3
  int v9; // r0
  _BYTE v11[8]; // [sp+4h] [bp-8h] BYREF

  v4 = sub_15ECB4();
  v5 = sub_163E78(v4);
  v6 = ((int (__fastcall *)(int))loc_165BB8)(v4);
  v7 = sub_15ECAC(a1, 0);
  if ( sub_230020(v7 + *(_DWORD *)(v5 + 68) * *(_DWORD *)(v5 + 64), v11, 4) )
    return 0;
  v9 = sub_15C250(v11, 4, v6);
  v8 = 1;
  *a2 = v9;
  return v8;
}
