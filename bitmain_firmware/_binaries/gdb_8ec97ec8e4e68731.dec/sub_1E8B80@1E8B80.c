int __fastcall sub_1E8B80(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r3
  _BOOL4 v9; // r4
  _DWORD *v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r4
  _DWORD v14[4]; // [sp+4h] [bp-10h] BYREF

  v5 = sub_16F654(a1);
  v6 = ((int (__fastcall *)(int))loc_1E2770)(v5);
  v7 = *(_DWORD *)(((int (__fastcall *)(int))loc_23DBE4)(v6) + 208);
  if ( v7 != 4 )
  {
    if ( v7 != 5 || ((int (__fastcall *)(int))loc_1E2198)(82) != 1 )
      return 0;
LABEL_5:
    v9 = a2 == 0;
    if ( !a3 )
      v9 = 0;
    if ( v9 )
    {
      v10 = (_DWORD *)((int (*)(void))loc_23DBE4)();
      v11 = v10[54];
      v12 = v10[55];
      v14[0] = v10[53];
      v14[1] = v11;
      v14[2] = v12;
      v13 = ps_getpid_0((int)v14);
      sub_1E8AB0(v13);
      sub_183930(v13);
    }
    return 0;
  }
  if ( ((int (__fastcall *)(int))loc_1E2198)(81) == 1 )
    goto LABEL_5;
  return 0;
}
