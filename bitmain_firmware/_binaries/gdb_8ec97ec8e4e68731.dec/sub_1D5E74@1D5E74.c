int __fastcall sub_1D5E74(int a1, int a2, int a3)
{
  int v5; // r9
  int v6; // r7
  int v7; // r9
  int v8; // r0
  int v9; // r0
  int *v10; // r3
  int v11; // r4
  int v12; // r8
  int v13; // r0
  int v14; // r1
  int *v15; // r3
  int v16; // r0
  int v17; // r1
  int v19; // r11
  int v20; // r0
  int v21; // r3
  int v22; // r3
  int v23; // r6
  int v24; // r6
  int v25; // r6
  _DWORD *v26; // r0
  int v27; // [sp+Ch] [bp-18h]
  int v28; // [sp+10h] [bp-14h] BYREF
  int v29; // [sp+14h] [bp-10h]
  int v30; // [sp+18h] [bp-Ch] BYREF
  int v31; // [sp+1Ch] [bp-8h]

  v5 = a2 ^ (a2 >> 31);
  v6 = *(_DWORD *)sub_242FDC(a1);
  v7 = v5 - (a2 >> 31);
  v8 = sub_2578AC(v6, 0);
  if ( !a2 )
    sub_946E0("Bad record function-call-history-size.");
  v9 = sub_1D49EC(v8);
  v10 = *(int **)(v9 + 304);
  v11 = v9;
  v12 = v9 + 252;
  if ( !v10 )
  {
    if ( dword_487D4C )
    {
      v26 = (_DWORD *)sub_242FC8(v9);
      sub_2594B0(*v26, "[record-btrace] call-history (0x%x): %d\n", a3, a2);
    }
    v21 = *(_DWORD *)(v11 + 308);
    if ( v21 )
    {
      v22 = *(_DWORD *)(v21 + 4);
      v28 = v12;
      v29 = v22;
    }
    else
    {
      sub_E1C24(&v28, v12);
    }
    v30 = v28;
    v31 = v29;
    if ( a2 < 0 )
    {
      v24 = sub_E1C60(&v30, 1);
      v25 = v24 + ((int (__fastcall *)(int *, int))loc_E1CE4)(&v28, v7 - v24);
      if ( !(v25 + sub_E1C60(&v30, v7 - v25)) )
        goto LABEL_21;
    }
    else
    {
      v23 = sub_E1C60(&v30, v7);
      if ( !(v23 + ((int (__fastcall *)(int *, int))loc_E1CE4)(&v28, v7 - v23)) )
        goto LABEL_7;
    }
    goto LABEL_10;
  }
  v13 = *v10;
  v14 = v10[1];
  v15 = v10 + 2;
  v28 = v13;
  v29 = v14;
  v16 = *v15;
  v17 = v15[1];
  v30 = *v15;
  v31 = v17;
  if ( dword_487D4C )
  {
    v27 = *(_DWORD *)sub_242FC8(v16);
    v19 = sub_E1BA8(&v28);
    v20 = sub_E1BA8(&v30);
    sub_2594B0(v27, "[record-btrace] call-history (0x%x): %d, prev: [%u; %u)\n", a3, a2, v19, v20);
    if ( a2 >= 0 )
    {
LABEL_5:
      v28 = v30;
      v29 = v31;
      if ( !sub_E1C60(&v30, v7) )
        goto LABEL_6;
LABEL_10:
      ((void (__fastcall *)(int, int, int *, int *, int))loc_1D5850)(v6, v12, &v28, &v30, a3);
      goto LABEL_8;
    }
  }
  else if ( a2 >= 0 )
  {
    goto LABEL_5;
  }
  v30 = v28;
  v31 = v29;
  if ( ((int (__fastcall *)(int *, int))loc_E1CE4)(&v28, v7) )
    goto LABEL_10;
LABEL_6:
  if ( a2 < 0 )
  {
LABEL_21:
    sub_259858("At the start of the branch trace record.\n");
    goto LABEL_8;
  }
LABEL_7:
  sub_259858("At the end of the branch trace record.\n");
LABEL_8:
  ((void (__fastcall *)(int, int *, int *))loc_E1E9C)(v12, &v28, &v30);
  return sub_25734C(v6, 0);
}
