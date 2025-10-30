int __fastcall sub_216950(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r9
  const char *v8; // r8
  char *v9; // r10
  char *v10; // r0

  v6 = sub_1B6B24(a1, (_DWORD *)dword_4896EC);
  v7 = *(_DWORD *)sub_242FC8(v6);
  v8 = (const char *)sub_1B87CC(a1);
  v9 = sub_98EEC(a2);
  v10 = sub_98EEC(a3);
  sub_25A418(v7, "qf->relocate (%s, %s, %s)\n", v8, v9, v10);
  return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)(*(_DWORD *)v6 + 40) + 28))(a1, a2, a3);
}
