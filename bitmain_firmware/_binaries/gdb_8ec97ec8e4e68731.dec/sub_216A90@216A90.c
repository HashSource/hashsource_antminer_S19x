int __fastcall sub_216A90(int a1, const char *a2, const char *a3, int a4, int a5)
{
  int v8; // r8
  int v9; // r10
  const char *v10; // r9
  char *v11; // r0
  int v12; // r4
  _DWORD *v13; // r0
  char vars1C; // [sp+24h] [bp+1Ch] BYREF
  int varg_r3; // [sp+2Ch] [bp+24h]

  v8 = sub_1B6B24(a1, (_DWORD *)dword_4896EC);
  v9 = *(_DWORD *)sub_242FC8(v8);
  v10 = (const char *)sub_1B87CC(a1);
  v11 = sub_98EEC((int)&vars1C);
  sub_25A418(v9, "qf->map_symtabs_matching_filename (%s, \"%s\", \"%s\", %s)\n", v10, a2, a3, v11);
  v12 = (*(int (__fastcall **)(int, const char *, const char *, int, int))(*(_DWORD *)(*(_DWORD *)v8 + 40) + 12))(
          a1,
          a2,
          a3,
          varg_r3,
          a5);
  v13 = (_DWORD *)sub_242FC8(v12);
  sub_25A418(*v13, "qf->map_symtabs_matching_filename (...) = %d\n", v12);
  return v12;
}
