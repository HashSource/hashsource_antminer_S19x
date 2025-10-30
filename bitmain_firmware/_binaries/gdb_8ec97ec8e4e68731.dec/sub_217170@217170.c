int __fastcall sub_217170(int a1)
{
  int v2; // r5
  int v3; // r6
  const char *v4; // r0
  int v5; // r4
  int v6; // r5
  const char *v7; // r2

  v2 = sub_1B6B24(a1, (_DWORD *)dword_4896EC);
  v3 = *(_DWORD *)sub_242FC8(v2);
  v4 = (const char *)sub_1B87CC(a1);
  sub_25A418(v3, "qf->find_last_source_symtab (%s)\n", v4);
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)v2 + 40) + 4))(a1);
  v6 = *(_DWORD *)sub_242FC8(v5);
  if ( v5 )
    v7 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v5);
  else
    v7 = "NULL";
  sub_25A418(v6, "qf->find_last_source_symtab (...) = %s\n", v7);
  return v5;
}
