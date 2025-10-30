int __fastcall sub_216BB0(int a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r6
  const char *v5; // r0

  v2 = sub_1B6B24(a1, (_DWORD *)dword_4896EC);
  v3 = (**(int (__fastcall ***)(int))(*(_DWORD *)v2 + 40))(a1);
  v4 = *(_DWORD *)sub_242FC8(v3);
  v5 = (const char *)sub_1B87CC(a1);
  sub_25A418(v4, "qf->has_symbols (%s) = %d\n", v5, v3);
  return v3;
}
