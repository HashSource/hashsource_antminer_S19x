int __fastcall sub_227CE0(int a1, int a2)
{
  _DWORD *v3; // r0
  int v4; // r0
  _DWORD *v5; // r0
  char *v6; // r4
  _DWORD *v7; // r0
  int v8; // r0
  _DWORD *v9; // r0
  char *v10; // r4
  _DWORD *v11; // r0
  int v12; // r0
  _DWORD *v13; // r0

  v3 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v3, "-> %s->to_thread_events (...)\n", (const char *)dword_489C90);
  v4 = off_489DF0(&unk_489C8C, a2);
  v5 = (_DWORD *)sub_242FC8(v4);
  sub_2594B0(*v5, "<- %s->to_thread_events (", (const char *)dword_489C90);
  v6 = sub_98EEC((int)&unk_489C8C);
  v7 = (_DWORD *)sub_242FC8(v6);
  v8 = sub_256850(v6, *v7);
  v9 = (_DWORD *)sub_242FC8(v8);
  sub_256850(", ", *v9);
  v10 = sub_988AC(a2);
  v11 = (_DWORD *)sub_242FC8(v10);
  v12 = sub_256850(v10, *v11);
  v13 = (_DWORD *)sub_242FC8(v12);
  return sub_256850(")\n", *v13);
}
