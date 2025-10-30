int __fastcall sub_225130(int a1)
{
  _DWORD *v1; // r0
  int v2; // r0
  _DWORD *v3; // r0
  char *v4; // r4
  _DWORD *v5; // r0
  int v6; // r0
  _DWORD *v7; // r0

  v1 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v1, "-> %s->to_trace_stop (...)\n", (const char *)dword_489C90);
  v2 = ((int (__fastcall *)(void *))off_489EA8)(&unk_489C8C);
  v3 = (_DWORD *)sub_242FC8(v2);
  sub_2594B0(*v3, "<- %s->to_trace_stop (", (const char *)dword_489C90);
  v4 = sub_98EEC((int)&unk_489C8C);
  v5 = (_DWORD *)sub_242FC8(v4);
  v6 = sub_256850(v4, *v5);
  v7 = (_DWORD *)sub_242FC8(v6);
  return sub_256850(")\n", *v7);
}
