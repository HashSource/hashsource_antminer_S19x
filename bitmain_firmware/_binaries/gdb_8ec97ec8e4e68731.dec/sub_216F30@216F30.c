int *__fastcall sub_216F30(int a1)
{
  int v2; // r0
  int *v3; // r4
  int v4; // r6
  const char *v5; // r5
  char *v6; // r0

  v2 = sub_1B6B24(a1, (_DWORD *)dword_4896EC);
  v3 = (int *)(**(int (__fastcall ***)(int))(*(_DWORD *)v2 + 36))(a1);
  v4 = *(_DWORD *)sub_242FC8(v3);
  v5 = (const char *)sub_1B87CC(a1);
  v6 = sub_98EEC(*v3);
  sub_25A418(v4, "probes->sym_get_probes (%s) = %s\n", v5, v6);
  return v3;
}
