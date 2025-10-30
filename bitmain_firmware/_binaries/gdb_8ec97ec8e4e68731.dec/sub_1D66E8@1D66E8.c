int __fastcall sub_1D66E8(int a1, int a2, int a3)
{
  int v5; // r9
  int v6; // r7
  unsigned int v7; // r9
  int v8; // r0
  int v9; // r0
  int *v10; // r3
  int v11; // r4
  int *v12; // r8
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int *v16; // r3
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v21; // r11
  int v22; // r0
  int *v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r6
  int v27; // r6
  int v28; // r6
  _DWORD *v29; // r0
  int v30; // [sp+Ch] [bp-20h]
  int v31; // [sp+10h] [bp-1Ch] BYREF
  int v32; // [sp+14h] [bp-18h]
  int v33; // [sp+18h] [bp-14h]
  int v34; // [sp+1Ch] [bp-10h] BYREF
  int v35; // [sp+20h] [bp-Ch]
  int v36; // [sp+24h] [bp-8h]

  v5 = a2 ^ (a2 >> 31);
  v6 = *(_DWORD *)sub_242FDC(a1);
  v7 = v5 - (a2 >> 31);
  v8 = sub_2578AC(v6, 0);
  if ( !a2 )
    sub_946E0("Bad record instruction-history-size.");
  v9 = sub_1D49EC(v8);
  v10 = *(int **)(v9 + 300);
  v11 = v9;
  v12 = (int *)(v9 + 252);
  if ( !v10 )
  {
    if ( dword_487D4C )
    {
      v29 = (_DWORD *)sub_242FC8(v9);
      sub_2594B0(*v29, "[record-btrace] insn-history (0x%x): %d\n", a3, a2);
    }
    v23 = *(int **)(v11 + 308);
    if ( v23 )
    {
      v24 = v23[1];
      v25 = v23[2];
      v31 = *v23;
      v32 = v24;
      v33 = v25;
    }
    else
    {
      sub_E17BC(&v31, (int)v12);
    }
    v34 = v31;
    v35 = v32;
    v36 = v33;
    if ( a2 < 0 )
    {
      v27 = ((int (__fastcall *)(int *, int))loc_E1808)(&v34, 1);
      v28 = v27 + sub_E1948(&v31, v7 - v27);
      if ( !(v28 + ((int (__fastcall *)(int *, unsigned int))loc_E1808)(&v34, v7 - v28)) )
        goto LABEL_21;
    }
    else
    {
      v26 = ((int (__fastcall *)(int *, unsigned int))loc_E1808)(&v34, v7);
      if ( !(v26 + sub_E1948(&v31, v7 - v26)) )
        goto LABEL_7;
    }
    goto LABEL_10;
  }
  v13 = *v10;
  v14 = v10[1];
  v15 = v10[2];
  v16 = v10 + 3;
  v31 = v13;
  v32 = v14;
  v33 = v15;
  v17 = *v16;
  v18 = v16[1];
  v19 = v16[2];
  v34 = *v16;
  v35 = v18;
  v36 = v19;
  if ( dword_487D4C )
  {
    v30 = *(_DWORD *)sub_242FC8(v17);
    v21 = sub_E1770(&v31);
    v22 = sub_E1770(&v34);
    sub_2594B0(v30, "[record-btrace] insn-history (0x%x): %d, prev: [%u; %u)\n", a3, a2, v21, v22);
    if ( a2 >= 0 )
    {
LABEL_5:
      v31 = v34;
      v32 = v35;
      v33 = v36;
      if ( !((int (__fastcall *)(int *, unsigned int))loc_E1808)(&v34, v7) )
        goto LABEL_6;
LABEL_10:
      sub_1D60CC(v6, v12, &v31, &v34, a3);
      goto LABEL_8;
    }
  }
  else if ( a2 >= 0 )
  {
    goto LABEL_5;
  }
  v34 = v31;
  v35 = v32;
  v36 = v33;
  if ( sub_E1948(&v31, v7) )
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
  sub_E1E50((int)v12, &v31, &v34);
  return sub_25734C(v6, 0);
}
