int __fastcall sub_1C57D8(int a1, int a2, int a3, int a4)
{
  _DWORD *v8; // r0
  int v9; // r6
  int v10; // r9
  int v11; // r3
  __int64 v12; // r0
  int v13; // r7
  int v14; // r6
  int v15; // r0
  int result; // r0
  bool v17; // zf
  int v18; // r2
  bool v19; // zf
  int v20; // r3
  int v21; // r7
  int v22; // r6
  int v23; // r0
  __int64 v24; // r0

  v8 = (_DWORD *)sub_26BC70(a1);
  v9 = sub_171258(v8);
  v10 = *(_DWORD *)(v9 + 20);
  if ( *(_DWORD *)nullsub_31(a1) == 1 )
    dword_487CE4 = v10 + ((int (__fastcall *)(int))loc_26C09C)(a1);
  v11 = *(_DWORD *)(a3 + 40);
  if ( a2 )
  {
    if ( v11 == 105 )
    {
      sub_259B58("    ");
      v21 = ((int (__fastcall *)(int))loc_26C09C)(a1);
      v22 = sub_170040(v9);
      v23 = ((int (__fastcall *)(int))loc_26C09C)(a1);
      result = sub_10BFF0(v22, v23, a4, &dword_487CE8) + v21;
      dword_487CE4 = result;
      return result;
    }
    if ( v11 == 115 )
    {
      v12 = sub_26BC70(a1);
      v13 = v12;
      v14 = ((int (__fastcall *)(int, _DWORD))loc_26C09C)(a1, HIDWORD(v12));
      v15 = ((int (__fastcall *)(int))loc_26C09C)(a1);
      result = v14 + sub_269EC4(v13, 0, v15, -1, a4, a3) * v10;
      dword_487CE4 = result;
      return result;
    }
  }
  v17 = v11 == 115;
  if ( v11 != 115 )
    v17 = v11 == 0;
  if ( v17 )
    return sub_266C84(a1, a4, a3);
  v18 = **(char **)(v9 + 24);
  v19 = v18 == 18;
  if ( v18 != 18 )
    v19 = v18 == 13;
  v20 = v19;
  if ( v18 == 24 )
    v20 |= 1u;
  if ( (unsigned __int8)(v18 - 2) <= 2u )
    v20 |= 1u;
  if ( v20 )
    return sub_266C84(a1, a4, a3);
  v24 = sub_26BFE0(a1);
  return sub_266D40(v9, HIDWORD(v24), v24, HIDWORD(v24), a1, a3, a2, a4);
}
