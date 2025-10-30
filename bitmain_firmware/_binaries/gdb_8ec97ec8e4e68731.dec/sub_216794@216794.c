int __fastcall sub_216794(int a1, int a2, int a3, int a4)
{
  int v8; // r8
  int v9; // r11
  const char *v10; // r9
  char *v11; // r10
  char *v12; // r0

  v8 = sub_1B6B24(a1, (_DWORD *)dword_4896EC);
  v9 = *(_DWORD *)sub_242FC8(v8);
  v10 = (const char *)sub_1B87CC(a1);
  v11 = sub_98EEC(a2);
  v12 = sub_98EEC(a3);
  sub_25A418(v9, "qf->map_symbol_filenames (%s, %s, %s, %d)\n", v10, v11, v12, a4);
  return (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)(*(_DWORD *)v8 + 40) + 60))(a1, a2, a3, a4);
}
