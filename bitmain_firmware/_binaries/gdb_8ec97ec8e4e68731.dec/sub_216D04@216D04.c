int __fastcall sub_216D04(int a1, int a2)
{
  int v4; // r6
  int v5; // r7
  const char *v6; // r8
  char *v7; // r0

  v4 = sub_1B6B24(a1, (_DWORD *)dword_4896EC);
  v5 = *(_DWORD *)sub_242FC8(v4);
  v6 = (const char *)sub_1B87CC(a1);
  v7 = sub_98EEC(a2);
  sub_25A418(v5, "sf->sym_offsets (%s, %s)\n", v6, v7);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 20))(a1, a2);
}
