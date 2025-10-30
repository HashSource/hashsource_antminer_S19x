int __fastcall sub_1320E4(int a1, int a2, int a3, int (__fastcall *a4)(int), int a5)
{
  int v9; // r0
  int v10; // r0
  int v11; // r6
  unsigned int v12; // r3
  bool v13; // cc
  int v14; // r5
  int v15; // r0
  int v16; // r3
  const char *v18; // r0
  bool v19; // cc
  int v20; // r2
  int v21; // r3
  _DWORD *v22; // r3
  __int64 v23; // r2
  const char *v24; // r0
  const char *v25; // r0
  int v26; // [sp+4h] [bp-1Ch] BYREF
  int v27; // [sp+8h] [bp-18h] BYREF
  _BYTE v28[20]; // [sp+Ch] [bp-14h] BYREF

  ((void (__fastcall *)(_DWORD))loc_11EB1C)(*(_DWORD *)(a3 + 20));
  if ( *(_DWORD *)(a3 + 16) )
  {
    v26 = *(_DWORD *)(a3 + 16);
  }
  else
  {
    sub_130DE0(a3);
    v26 = *(_DWORD *)(a3 + 16);
    if ( !v26 )
    {
      v18 = (const char *)sub_1B87A8(*(_DWORD *)(a3 + 20));
      sub_946E0("Dwarf Error: Dummy CU at 0x%x referenced in module %s", a2, v18);
    }
  }
  v9 = ((int (__fastcall *)(int, int, int *))loc_12E49C)(a2, (*(unsigned __int8 *)(a3 + 10) >> 3) & 1, &v26);
  if ( !v9 )
  {
    v25 = (const char *)sub_1B87A8(*(_DWORD *)(a3 + 20));
    sub_946E0("Dwarf Error: Cannot find DIE at 0x%x referenced in module %s", a2, v25);
  }
  v10 = sub_12E694(v9, 2, v26);
  v11 = v10;
  if ( v10 )
  {
    v12 = *(_WORD *)(v10 + 2) & 0x7FFF;
    v13 = v12 > 0x17;
    if ( v12 != 23 )
      v13 = v12 - 6 > 1;
    if ( v13 )
    {
      v19 = v12 - 3 > 1;
      if ( v12 - 3 > 1 )
        v19 = v12 - 9 > 1;
      v20 = !v19;
      if ( v12 == 24 )
        v21 = v20 | 1;
      else
        v21 = v20;
      if ( !v21 )
      {
        v24 = (const char *)sub_1B87A8(*(_DWORD *)(a3 + 20));
        sub_946E0(
          "Dwarf Error: DIE at 0x%x referenced in module %s is neither DW_FORM_block* nor DW_FORM_exprloc",
          a2,
          v24);
      }
      v22 = *(_DWORD **)(v10 + 8);
      LODWORD(v23) = v22[1];
      HIDWORD(v23) = *v22;
      *(_QWORD *)a1 = v23;
    }
    else
    {
      v14 = a4(a5);
      ((void (__fastcall *)(int, _BYTE *, int))loc_124684)(v26, v28, v11 + 8);
      v15 = ((int (__fastcall *)(_BYTE *, int *, int))loc_115880)(v28, &v27, v14);
      v16 = v27;
      *(_DWORD *)a1 = v15;
      *(_DWORD *)(a1 + 4) = v16;
    }
  }
  else
  {
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
  }
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(v26 + 136);
  sub_11E9EC();
  return a1;
}
