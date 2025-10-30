int __fastcall sub_228C48(int a1, const char *a2, int a3)
{
  _DWORD *v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  int v12; // r0
  _DWORD *v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  char *v16; // r4
  _DWORD *v17; // r0
  int v18; // r0
  _DWORD *v19; // r0

  v5 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v5, "-> %s->to_terminal_info (...)\n", (const char *)dword_489C90);
  v6 = off_489D44(&unk_489C8C, a2, a3);
  v7 = (_DWORD *)sub_242FC8(v6);
  sub_2594B0(*v7, "<- %s->to_terminal_info (", (const char *)dword_489C90);
  v8 = sub_98EEC((int)&unk_489C8C);
  v9 = (_DWORD *)sub_242FC8(v8);
  v10 = sub_256850(v8, *v9);
  v11 = (_DWORD *)sub_242FC8(v10);
  v12 = sub_256850(", ", *v11);
  if ( !a2 )
    a2 = "(null)";
  v13 = (_DWORD *)sub_242FC8(v12);
  v14 = sub_256850(a2, *v13);
  v15 = (_DWORD *)sub_242FC8(v14);
  sub_256850(", ", *v15);
  v16 = sub_988AC(a3);
  v17 = (_DWORD *)sub_242FC8(v16);
  v18 = sub_256850(v16, *v17);
  v19 = (_DWORD *)sub_242FC8(v18);
  return sub_256850(")\n", *v19);
}
