int __fastcall sub_217070(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v8; // r9
  int v9; // r11
  const char *v10; // r10
  char *v11; // r5
  char *v12; // r6
  char *v13; // r0
  int v14; // r4
  int v15; // r5
  const char *v16; // r2
  int v17; // r0

  v8 = sub_1B6B24(a1, (_DWORD *)dword_4896EC);
  v9 = *(_DWORD *)sub_242FC8(v8);
  v10 = (const char *)sub_1B87CC(a1);
  v11 = sub_98EEC(a2);
  v12 = sub_98B08(a4, 0);
  v13 = sub_98EEC(a5);
  sub_25A418(v9, "qf->find_pc_sect_compunit_symtab (%s, %s, %s, %s, %d)\n", v10, v11, v12, v13, a6);
  v14 = (*(int (__fastcall **)(int, int, int, int, int, int))(*(_DWORD *)(*(_DWORD *)v8 + 40) + 52))(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6);
  v15 = *(_DWORD *)sub_242FC8(v14);
  if ( v14 )
  {
    v17 = sub_21A6C4(v14);
    v16 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v17);
  }
  else
  {
    v16 = "NULL";
  }
  sub_25A418(v15, "qf->find_pc_sect_compunit_symtab (...) = %s\n", v16);
  return v14;
}
