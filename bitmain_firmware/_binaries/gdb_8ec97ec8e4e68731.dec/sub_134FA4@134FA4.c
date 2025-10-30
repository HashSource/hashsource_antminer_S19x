int __fastcall sub_134FA4(int a1, int a2, int *a3)
{
  int v6; // r4
  int v7; // r0
  __int16 v8; // r1
  unsigned int v9; // r12
  bool v10; // cc
  int v11; // r3
  int v12; // r0
  __int16 v13; // r1
  unsigned int v14; // r12
  bool v15; // cc
  int v16; // r3
  int v17; // r0
  int v18; // r10
  int v19; // r0
  int v20; // r2
  int v21; // r3
  int **v22; // r8
  int v23; // r1
  int v24; // r3
  char v25; // r2
  int *v26; // r12
  int *v27; // r3
  int v28; // r0
  bool v29; // zf
  int v30; // r3
  int v31; // r0
  int v32; // r1
  int v33; // r2
  int v35; // r0
  const char *v36; // r2
  int v37; // r0
  const char *v38; // r2
  int v39; // r0
  int v40; // r3
  int v41; // [sp+14h] [bp-1Ch] BYREF
  int v42; // [sp+18h] [bp-18h]
  int v43; // [sp+1Ch] [bp-14h]
  int v44; // [sp+20h] [bp-10h] BYREF
  int v45; // [sp+24h] [bp-Ch]
  int v46; // [sp+28h] [bp-8h]
  int v47; // [sp+2Ch] [bp-4h]

  v6 = *a3;
  v7 = sub_12E694(a1, 78, (int)a3);
  if ( v7 )
  {
    v8 = *(_WORD *)(v7 + 2);
    v9 = (v8 & 0x7FFF) - 3;
    v10 = v9 > 1;
    if ( v9 > 1 )
      v10 = (v8 & 0x7FFFu) - 9 > 1;
    v11 = !v10;
    if ( (v8 & 0x7FFF) == 0x18 )
      v11 |= 1u;
    if ( v11 )
    {
      if ( sub_134AAC(v7, a1, a3, &v44) )
        ((void (__fastcall *)(int, int, int, int, int, int, int, int))loc_171104)(1, v47, v44, v45, v46, v47, a2, v6);
    }
    else if ( dword_47AC88 > 0 )
    {
      v37 = sub_321640(v8 & 0x7FFF);
      v38 = "DW_FORM_<unknown>";
      if ( v37 )
        v38 = (const char *)v37;
      sub_F43B4(&off_46D334, "DW_AT_allocated has the wrong form (%s) at DIE 0x%x", v38, *(_DWORD *)(a1 + 8));
    }
  }
  v12 = sub_12E694(a1, 79, (int)a3);
  if ( v12 )
  {
    v13 = *(_WORD *)(v12 + 2);
    v14 = (v13 & 0x7FFF) - 9;
    v15 = v14 > 1;
    if ( v14 > 1 )
      v15 = (v13 & 0x7FFFu) - 3 > 1;
    v16 = !v15;
    if ( (v13 & 0x7FFF) == 0x18 )
      v16 |= 1u;
    if ( v16 )
    {
      if ( sub_134AAC(v12, a1, a3, &v44) )
        ((void (__fastcall *)(int, int, int, int, int, int, int, int))loc_171104)(2, v47, v44, v45, v46, v47, a2, v6);
    }
    else if ( dword_47AC88 > 0 )
    {
      v35 = sub_321640(v13 & 0x7FFF);
      v36 = "DW_FORM_<unknown>";
      if ( v35 )
        v36 = (const char *)v35;
      sub_F43B4(&off_46D334, "DW_AT_associated has the wrong form (%s) at DIE 0x%x", v36, *(_DWORD *)(a1 + 8));
    }
  }
  v17 = sub_12E694(a1, 80, (int)a3);
  if ( sub_134AAC(v17, a1, a3, &v44) )
    ((void (__fastcall *)(_DWORD, int, int, int, int, int, int, int))loc_171104)(0, v47, v44, v45, v46, v47, a2, v6);
  v18 = dword_4872D8;
  v19 = *(_DWORD *)(dword_4872D8 + 436);
  if ( !v19 )
  {
    v39 = sub_323980(127, sub_11C4A8, sub_11C4B4, 0, v6 + 48, sub_25AEEC, nullsub_44);
    v40 = dword_4872D8;
    *(_DWORD *)(v18 + 436) = v39;
    v19 = *(_DWORD *)(v40 + 436);
  }
  v20 = a3[34];
  v21 = *(_DWORD *)(a1 + 8);
  v43 = a2;
  v41 = v20;
  v42 = v21;
  v22 = (int **)sub_324030(v19, &v41, 1);
  if ( *v22 && dword_47AC88 > 0 )
    sub_F43B4(&off_46D334, "A problem internal to GDB: DIE 0x%x has type already set", *(_DWORD *)(a1 + 8));
  v23 = *(_DWORD *)(v6 + 64);
  v24 = *(_DWORD *)(v6 + 60);
  v25 = v23 - v24;
  if ( (unsigned int)(v23 - v24) <= 0xB )
  {
    obstack_newchunk((struct obstack *)(v6 + 48), 12);
    v24 = *(_DWORD *)(v6 + 60);
    v23 = *(_DWORD *)(v6 + 64);
  }
  v26 = *(int **)(v6 + 56);
  v27 = (int *)(v24 + 12);
  v28 = *(_DWORD *)(v6 + 72);
  *(_DWORD *)(v6 + 60) = v27;
  v29 = v27 == v26;
  if ( v27 == v26 )
    v25 = *(_BYTE *)(v6 + 88);
  v30 = ((unsigned int)v27 + v28) & ~v28;
  *(_DWORD *)(v6 + 60) = v30;
  if ( v29 )
    *(_BYTE *)(v6 + 88) = v25 | 2;
  if ( v30 - *(_DWORD *)(v6 + 52) > (unsigned int)(v23 - *(_DWORD *)(v6 + 52)) )
  {
    *(_DWORD *)(v6 + 60) = v23;
    v30 = v23;
  }
  v31 = v41;
  v32 = v42;
  v33 = v43;
  *(_DWORD *)(v6 + 56) = v30;
  *v22 = v26;
  *v26 = v31;
  v26[1] = v32;
  v26[2] = v33;
  return a2;
}
