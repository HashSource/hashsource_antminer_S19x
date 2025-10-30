int __fastcall sub_2172E0(int a1, int a2, const char *a3, int a4)
{
  int v8; // r8
  int v9; // r10
  const char *v10; // r9
  const char *v11; // r0
  int v12; // r4
  int v13; // r5
  const char *v14; // r2
  int v15; // r0

  v8 = sub_1B6B24(a1, (_DWORD *)dword_4896EC);
  v9 = *(_DWORD *)sub_242FC8(v8);
  v10 = (const char *)sub_1B87CC(a1);
  v11 = (const char *)((int (__fastcall *)(int))loc_21A5A4)(a4);
  sub_25A418(v9, "qf->lookup_symbol (%s, %d, \"%s\", %s)\n", v10, a2, a3, v11);
  v12 = (*(int (__fastcall **)(int, int, const char *, int))(*(_DWORD *)(*(_DWORD *)v8 + 40) + 16))(a1, a2, a3, a4);
  v13 = *(_DWORD *)sub_242FC8(v12);
  if ( v12 )
  {
    v15 = sub_21A6C4(v12);
    v14 = (const char *)((int (__fastcall *)(int))loc_2043D4)(v15);
  }
  else
  {
    v14 = "NULL";
  }
  sub_25A418(v13, "qf->lookup_symbol (...) = %s\n", v14);
  return v12;
}
