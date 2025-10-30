int __fastcall sub_EBE04(int a1, _BYTE **a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v13; // r0
  int v14; // r5
  int v15; // r1
  bool v16; // zf
  int result; // r0
  int v18; // r0
  bool v19; // zf
  int v20; // r6
  int *v21; // r8
  int v22; // r3
  int v23; // r0
  int v24; // r0
  int v25; // r0
  bool v26; // zf
  int v27; // r0
  bool v28; // zf
  int v29; // r2
  int v30; // r3
  int v31; // r0
  __int64 v32; // r0
  _DWORD v33[2]; // [sp+10h] [bp-14h] BYREF
  _DWORD v34[3]; // [sp+18h] [bp-Ch] BYREF

  v13 = sub_170040(a1);
  if ( **a2 == 7 )
    return sub_267E04(a9, v13, a6, a7);
  if ( *(_DWORD *)(a9 + 72) )
  {
    v25 = sub_1C73DC(a9, v13, a6, a7, dword_46D448);
    v15 = *(unsigned __int8 *)(a9 + 40);
    v14 = v25;
    v26 = v15 == 0;
    if ( *(_BYTE *)(a9 + 40) )
      v26 = v15 == 115;
    if ( !v26 )
      goto LABEL_7;
  }
  else
  {
    v14 = *(_DWORD *)(a9 + 20);
    if ( v14 )
    {
      v14 = 1;
      v27 = sub_25AC8C(v13, a6);
      sub_25A6BC(v27, a7);
      v15 = *(unsigned __int8 *)(a9 + 40);
      v28 = v15 == 0;
      if ( *(_BYTE *)(a9 + 40) )
        v28 = v15 == 115;
      if ( !v28 )
        goto LABEL_7;
    }
    else
    {
      v15 = *(unsigned __int8 *)(a9 + 40);
      v16 = v15 == 0;
      if ( *(_BYTE *)(a9 + 40) )
        v16 = v15 == 115;
      if ( !v16 )
        goto LABEL_7;
    }
  }
  v18 = sub_EBD30(a3, v15);
  v19 = a6 == 0;
  if ( a6 )
    v19 = v18 == 0;
  if ( !v19 )
  {
    if ( v14 )
      sub_25A6BC(&word_3E1F84, a7);
    return sub_269EC4(a3, 0, a6, -1, a7, a9);
  }
LABEL_7:
  result = sub_1012F0(a1);
  if ( !result )
    return result;
  v20 = sub_26D230(a1, a4 + a5);
  result = sub_1B240C(v33, v20);
  v21 = (int *)v33[0];
  v22 = v33[0];
  if ( v33[0] )
    v22 = 1;
  if ( *(_DWORD *)(a9 + 72) )
    v22 = 0;
  if ( !v22 )
    goto LABEL_50;
  v29 = *(__int16 *)(v33[0] + 22);
  v30 = *(_DWORD *)(v33[0] + 8);
  if ( v29 == -1 )
  {
    v32 = sub_94700((int)"c-valprint.c", 185, "Section index is uninitialized", v30);
    return sub_EC10C(v32, HIDWORD(v32));
  }
  if ( v20 != v30 + *(_DWORD *)(*(_DWORD *)(v33[1] + 144) + 4 * v29) )
  {
LABEL_50:
    if ( !v20 || !*(_DWORD *)(a9 + 12) )
      return result;
    if ( !v14 )
      goto LABEL_23;
    goto LABEL_45;
  }
  if ( v14 )
    sub_25A6BC(&word_3E1F84, a7);
  sub_25A6BC(" <", a7);
  if ( dword_46D448 )
    v31 = sub_21B3C4(v21);
  else
    v31 = *v21;
  sub_25A6BC(v31, a7);
  result = sub_25A6BC(">", a7);
  if ( v20 && *(_DWORD *)(a9 + 12) )
  {
LABEL_45:
    sub_25A6BC(&word_3E1F84, a7);
LABEL_23:
    if ( v21 )
    {
      v23 = sub_21B7DC(v21);
      sub_21D6E8(v34, v23, 0, 1);
      if ( v34[0] )
        a3 = *(_DWORD *)(v34[0] + 24);
    }
    v24 = sub_260F7C(a3, v20);
    result = sub_266BC4(v24, a7, a8 + 1, a9, off_46D5A4[0]);
    if ( *(_DWORD *)a9 )
    {
      sub_25A418(a7, (const char *)&word_356638);
      return sub_25A7A0(2 * (a8 + 1), a7);
    }
  }
  return result;
}
