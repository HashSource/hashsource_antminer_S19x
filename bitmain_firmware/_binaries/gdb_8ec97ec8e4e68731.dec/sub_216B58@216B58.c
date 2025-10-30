int __fastcall sub_216B58(int a1)
{
  int v2; // r5
  int v3; // r6
  const char *v4; // r0

  v2 = sub_1B6B24(a1, (_DWORD *)dword_4896EC);
  v3 = *(_DWORD *)sub_242FC8(v2);
  v4 = (const char *)sub_1B87CC(a1);
  sub_25A418(v3, "qf->forget_cached_source_info (%s)\n", v4);
  return (*(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)v2 + 40) + 8))(a1);
}
