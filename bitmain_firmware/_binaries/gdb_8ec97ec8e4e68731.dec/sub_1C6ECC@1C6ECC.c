int __fastcall sub_1C6ECC(int a1, unsigned int a2, int a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7, _DWORD *a8)
{
  int v9; // r6
  unsigned int v10; // r4
  bool v13; // zf
  int v14; // r7
  int v15; // r8
  int *v16; // r2
  int v17; // r0
  unsigned int v18; // r5
  char *v19; // r0
  _BOOL4 v20; // r7
  int result; // r0
  char v22; // r3
  int v23; // r12
  _BOOL4 v24; // r2
  unsigned int v25; // r3
  unsigned int v26; // r2
  bool v27; // cc
  int v28; // r0
  int v29; // r3
  bool v30; // cc
  int v31; // r4
  int v32; // r0
  __int64 v33; // r0
  int *v34; // [sp+4h] [bp-38h]
  _DWORD v35[2]; // [sp+8h] [bp-34h] BYREF
  _BYTE v36[4]; // [sp+10h] [bp-2Ch] BYREF
  int v37; // [sp+14h] [bp-28h]
  int v38; // [sp+20h] [bp-1Ch]

  v9 = dword_489690;
  v10 = a2;
  v13 = dword_489690 == 0;
  *a8 = 0;
  if ( !v13 )
  {
    v9 = sub_214838(a2);
    if ( sub_2145E4(v10, v9) )
    {
      *a8 = 1;
      v10 = sub_214778(v10, v9);
    }
  }
  sub_1B23BC(v35, v10, v9);
  v14 = v35[0];
  v15 = v35[1];
  v16 = sub_C3448(v10, v9);
  if ( v16 )
  {
    v34 = v16;
    v17 = ((int (__fastcall *)(int, unsigned int))loc_169FA0)(a1, v10);
    v16 = v34;
    v10 = v17;
    v18 = *(_DWORD *)v34[2];
    if ( (a3 || dword_4872B8) && dword_46D448 )
    {
      v19 = (char *)sub_21B3C4(v34);
      v16 = v34;
    }
    else
    {
      v19 = (char *)*v34;
    }
    if ( !v14 )
      goto LABEL_8;
  }
  else
  {
    if ( !v14 )
      return 1;
    v19 = "";
    v18 = 0;
  }
  v22 = *(_BYTE *)(v14 + 32);
  if ( v22 < 0 && !*(_DWORD *)(v14 + 24) )
  {
    v30 = (v22 & 0xFu) > 8;
    if ( (v22 & 0xF) != 8 )
      v30 = (v22 & 0xFu) - 1 > 1;
    if ( v30 )
    {
      if ( v16 )
        goto LABEL_8;
      return 1;
    }
  }
  v23 = *(__int16 *)(v14 + 22);
  if ( v23 == -1 )
  {
    sub_94700((int)"./printcmd.c", 644, "Section index is uninitialized");
    goto LABEL_49;
  }
  if ( v16 )
    v24 = *(_DWORD *)(v14 + 8) + *(_DWORD *)(*(_DWORD *)(v15 + 144) + 4 * v23) > v18;
  else
    v24 = 1;
  if ( !v24 )
    goto LABEL_8;
  v25 = v22 & 0xF;
  v26 = v25 - 1;
  v25 -= 7;
  v27 = v25 > 1;
  if ( v25 > 1 )
    v27 = v26 > 1;
  if ( !v27 )
  {
    v28 = ((int (__fastcall *)(int, unsigned int))loc_169FA0)(a1, v10);
    v29 = *(__int16 *)(v14 + 22);
    v10 = v28;
    if ( v29 != -1 )
    {
      v18 = *(_DWORD *)(v14 + 8) + *(_DWORD *)(*(_DWORD *)(v15 + 144) + 4 * v29);
      goto LABEL_29;
    }
LABEL_49:
    v33 = sub_94700((int)"./printcmd.c", 660, "Section index is uninitialized");
    return sub_1C71D4(v33, HIDWORD(v33));
  }
  v18 = *(_DWORD *)(v14 + 8) + *(_DWORD *)(*(_DWORD *)(v15 + 144) + 4 * v23);
LABEL_29:
  if ( (a3 || dword_4872B8) && dword_46D448 )
    v19 = (char *)sub_21B3C4(v14);
  else
    v19 = *(char **)v14;
LABEL_8:
  v20 = v18 + dword_46DAA4 < v10;
  if ( v18 + dword_46DAA4 <= v18 )
    v20 = 0;
  if ( v20 )
    return 1;
  *a5 = v10 - v18;
  *a4 = sub_327254(v19);
  result = dword_487CF4;
  if ( dword_487CF4 )
  {
    sub_21DF08(v36, v10, v9);
    if ( v37 )
    {
      v31 = v38;
      v32 = ((int (*)(void))loc_2043D4)();
      *a6 = sub_327254(v32);
      *a7 = v31;
    }
    return 0;
  }
  return result;
}
