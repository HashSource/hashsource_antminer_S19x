int __fastcall sub_11E520(int a1, int a2, int **a3, int a4)
{
  const char *v4; // r9
  int *v8; // r3
  int v9; // r5
  int v10; // r0
  int v11; // r3
  int v12; // r2
  int v13; // r6
  int v14; // r1
  int v15; // r10
  __int16 v16; // r0
  int v17; // r3
  int v18; // r0
  int v19; // r2
  int v20; // r3
  int v21; // r6
  int v22; // r0
  int v23; // r0
  int v24; // r6
  __int64 v25; // r0
  int v26; // r12
  bool v27; // zf
  int v29; // r1
  char *v30; // r0
  int v31; // [sp+Ch] [bp-8h] BYREF

  v8 = *a3;
  if ( *((_BYTE *)a3 + 17) )
  {
    if ( *((_BYTE *)v8 + 17) )
    {
      ((void (*)(void))loc_11E090)();
LABEL_29:
      v25 = sub_94700((int)"dwarf2read.c", 6664, "read_comp_unit_head: dwarf from non elf file");
      goto LABEL_30;
    }
    v8 = (int *)*v8;
  }
  v9 = v8[37];
  v4 = *(const char **)v9;
  v10 = sub_11E018(v9 + 4, a2, &v31);
  v11 = v31;
  v12 = *(_DWORD *)(v9 + 4);
  *(_DWORD *)a1 = v10;
  v13 = a2 + v11;
  if ( v11 == 4 )
    v14 = 4;
  else
    v14 = 8;
  *(_DWORD *)(a1 + 16) = v11;
  *(_DWORD *)(a1 + 12) = v14;
  v15 = v13 + 2;
  v16 = (*(int (__fastcall **)(int))(v12 + 52))(v13);
  *(_WORD *)(a1 + 4) = v16;
  if ( v16 > 4 )
  {
    v29 = *(unsigned __int8 *)(v13 + 2);
    *(_DWORD *)(a1 + 20) = v29;
    if ( v29 == 1 )
    {
      if ( a4 )
        sub_946E0(
          "Dwarf Error: wrong unit_type in compilation unit header (is DW_UT_compile, should be DW_UT_type) [in module %s]",
          v4);
    }
    else
    {
      if ( v29 != 2 )
        sub_946E0(
          "Dwarf Error: wrong unit_type in compilation unit header (is %d, should be %d or %d) [in module %s]",
          v29,
          1,
          2,
          v4);
      a4 = 1;
    }
    v15 = v13 + 4;
    *(_BYTE *)(a1 + 6) = *(_BYTE *)(v13 + 3);
  }
  else
  {
    if ( a4 == 1 )
    {
      v17 = 2;
    }
    else
    {
      a4 = 0;
      v17 = 1;
    }
    *(_DWORD *)(a1 + 20) = v17;
  }
  v18 = sub_11E4C0(*(const char **)v9, v9 + 4, v15, *(_DWORD *)(a1 + 12));
  v19 = *(__int16 *)(a1 + 4);
  v20 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 8) = v18;
  v21 = v15 + v20;
  v31 = v20;
  if ( v19 <= 4 )
  {
    ++v21;
    *(_BYTE *)(a1 + 6) = *(_BYTE *)(v15 + v20);
  }
  v22 = sub_2A78D4(v9);
  if ( v22 < 0 )
    goto LABEL_29;
  *(_BYTE *)(a1 + 7) = v22;
  if ( a4 == 1 )
  {
    v23 = v21;
    v24 = v21 + 8;
    *(_QWORD *)(a1 + 32) = ((__int64 (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)(v9 + 4) + 28))(v23);
    LODWORD(v25) = sub_11E4C0(*(const char **)v9, v9 + 4, v24, *(_DWORD *)(a1 + 12));
    v26 = *(_DWORD *)(a1 + 12);
    v27 = HIDWORD(v25) == 0;
    *(_DWORD *)(a1 + 40) = v25;
    if ( !HIDWORD(v25) )
      v27 = 1;
    v31 = v26;
    v21 = v24 + v26;
    if ( !v27 )
    {
LABEL_30:
      v30 = sub_988AC(v25);
      sub_946E0("Dwarf Error: Too big type_offset in compilation unit header (is %s) [in module %s]", v30, v4);
    }
  }
  return v21;
}
