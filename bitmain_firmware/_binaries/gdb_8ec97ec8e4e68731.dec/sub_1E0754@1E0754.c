int __fastcall sub_1E0754(int a1, int a2, _UNKNOWN **a3)
{
  int v6; // r9
  int v7; // r4
  int v8; // r0
  _BOOL4 v9; // r4
  bool v10; // zf

  if ( !((int (*)(void))loc_1677C0)() || !*(_BYTE *)((int (__fastcall *)(int, int))loc_1677C0)(a1, a2) )
    return 0;
  if ( a3 == &off_46DACC )
    return 1;
  v6 = *(_BYTE *)(*(_DWORD *)(((int (__fastcall *)(int, int))loc_1DD3B4)(a1, a2) + 24) + 2) & 1;
  v7 = **(char **)(((int (__fastcall *)(int, int))loc_1DD3B4)(a1, a2) + 24) - 9;
  v8 = ((int (__fastcall *)(int))loc_166E9C)(a1);
  v9 = v7 == 0;
  if ( a3 == (_UNKNOWN **)&unk_46DAD4 )
    return v9;
  if ( a3 == (_UNKNOWN **)&unk_46DADC )
    return v6;
  if ( a3 != (_UNKNOWN **)&unk_46DAE4 )
  {
    v10 = a3 == (_UNKNOWN **)&unk_46DAF4;
    if ( a3 != (_UNKNOWN **)&unk_46DAF4 )
      v10 = a3 == (_UNKNOWN **)&unk_46DAEC;
    if ( v10 )
      return a2 < v8;
    return 0;
  }
  return (v6 | v9) ^ 1;
}
