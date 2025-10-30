int __fastcall sub_226BC4(int a1)
{
  _DWORD *v1; // r0
  int v2; // r5
  _DWORD *v3; // r0
  char *v4; // r4
  _DWORD *v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0

  v1 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v1, "-> %s->to_get_min_fast_tracepoint_insn_len (...)\n", (const char *)dword_489C90);
  v2 = ((int (__fastcall *)(void *))off_489EC4)(&unk_489C8C);
  v3 = (_DWORD *)sub_242FC8(v2);
  sub_2594B0(*v3, "<- %s->to_get_min_fast_tracepoint_insn_len (", (const char *)dword_489C90);
  v4 = sub_98EEC((int)&unk_489C8C);
  v5 = (_DWORD *)sub_242FC8(v4);
  v6 = sub_256850(v4, *v5);
  v7 = (_DWORD *)sub_242FC8(v6);
  sub_256850(") = ", *v7);
  v8 = sub_988AC(v2);
  v9 = (_DWORD *)sub_242FC8(v8);
  v10 = sub_256850(v8, *v9);
  v11 = (_DWORD *)sub_242FC8(v10);
  sub_256850(&word_356638, *v11);
  return v2;
}
