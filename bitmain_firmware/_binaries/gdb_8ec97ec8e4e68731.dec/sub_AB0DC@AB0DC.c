int __fastcall sub_AB0DC(int a1, int a2)
{
  int v4; // r8
  int v5; // r7
  int v6; // r4
  int v7; // r5
  int v8; // r0
  int v9; // r0
  _BOOL4 v10; // r3
  int v12; // r3
  bool v13; // zf
  int v14; // r6
  int v15; // r10
  int v16; // r0
  int v17; // r0
  int v18; // r1
  int v19; // r4
  void *v20; // r6
  const void *v21; // r0
  int v22; // r0
  _BYTE v23[4]; // [sp+8h] [bp-34h] BYREF
  int v24; // [sp+Ch] [bp-30h]
  __int64 v25; // [sp+10h] [bp-2Ch]

  v4 = sub_26BC70(a1);
  v5 = sub_26BCA0(a1);
  v6 = sub_AB07C(a1);
  v7 = sub_AB07C(a2);
  v8 = sub_26BC70(v6);
  if ( v8 && sub_A1D84(v8) )
    v6 = sub_A8AAC(v6);
  v9 = sub_26BC70(v7);
  if ( v9 && sub_A1D84(v9) )
    v7 = sub_A8AAC(v7);
  if ( !sub_26C1D4(v6) )
    sub_946E0("Left operand of assignment is not a modifiable lvalue.");
  v10 = *(_DWORD *)nullsub_31(v6) == 1;
  if ( v5 <= 0 )
    v10 = 0;
  if ( !v10 )
    return ((int (__fastcall *)(int, int))loc_265548)(v6, v7);
  v12 = **(char **)(v4 + 24);
  v13 = v12 == 9;
  if ( v12 != 9 )
    v13 = v12 == 3;
  if ( !v13 )
    return ((int (__fastcall *)(int, int))loc_265548)(v6, v7);
  v25 = sub_26BC90(v6) + v5;
  v14 = (v25 + 7) / 8;
  v15 = ((int (__fastcall *)(int))loc_26C09C)(v6);
  if ( **(_BYTE **)(v4 + 24) == 9 )
    v7 = sub_2647C8(v4, v7);
  sub_FA844(v15, v23, v14);
  LODWORD(v25) = sub_26BCA0(v7);
  if ( !(_DWORD)v25 )
    LODWORD(v25) = 8 * *(_DWORD *)(sub_26BC70(v7) + 20);
  v16 = sub_170040(v4);
  if ( ((int (__fastcall *)(int))loc_165D78)(v16) )
  {
    v24 = sub_26BC90(v6);
    v17 = sub_26E978(v7);
    sub_9A254((int)v23, v24, v17, v25 - v5, v5, 1);
  }
  else
  {
    v24 = 0;
    LODWORD(v25) = sub_26BC90(v6);
    v22 = sub_26E978(v7);
    sub_9A254((int)v23, v25, v22, v24, v5, v24);
  }
  sub_FAB00(v15, v23, v14);
  v19 = sub_26C4E0(v6, v18);
  v20 = (void *)sub_26BCB8();
  v21 = (const void *)sub_26E978(v7);
  memcpy(v20, v21, *(_DWORD *)(v4 + 20));
  sub_26BC78(v19, v4);
  return v19;
}
