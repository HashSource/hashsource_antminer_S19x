int __fastcall sub_2168EC(int a1, const char *a2)
{
  int v4; // r6
  int v5; // r7
  const char *v6; // r0

  v4 = sub_1B6B24(a1, (_DWORD *)dword_4896EC);
  v5 = *(_DWORD *)sub_242FC8(v4);
  v6 = (const char *)sub_1B87CC(a1);
  sub_25A418(v5, "qf->expand_symtabs_for_function (%s, \"%s\")\n", v6, a2);
  return (*(int (__fastcall **)(int, const char *))(*(_DWORD *)(*(_DWORD *)v4 + 40) + 32))(a1, a2);
}
