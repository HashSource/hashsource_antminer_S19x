int __fastcall sub_2282E4(int a1, int a2, int a3, int *a4)
{
  _DWORD *v7; // r0
  int v8; // r6
  _DWORD *v9; // r0
  char *v10; // r4
  _DWORD *v11; // r0
  int v12; // r0
  _DWORD *v13; // r0
  char *v14; // r4
  _DWORD *v15; // r0
  int v16; // r0
  _DWORD *v17; // r0
  char *v18; // r4
  _DWORD *v19; // r0
  int v20; // r0
  _DWORD *v21; // r0
  char *v22; // r4
  _DWORD *v23; // r0
  int v24; // r0
  _DWORD *v25; // r0
  char *v26; // r4
  _DWORD *v27; // r0
  int v28; // r0
  _DWORD *v29; // r0

  v7 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v7, "-> %s->to_has_exited (...)\n", (const char *)dword_489C90);
  v8 = off_489D7C(&unk_489C8C, a2, a3, a4);
  v9 = (_DWORD *)sub_242FC8(v8);
  sub_2594B0(*v9, "<- %s->to_has_exited (", (const char *)dword_489C90);
  v10 = sub_98EEC((int)&unk_489C8C);
  v11 = (_DWORD *)sub_242FC8(v10);
  v12 = sub_256850(v10, *v11);
  v13 = (_DWORD *)sub_242FC8(v12);
  sub_256850(", ", *v13);
  v14 = sub_988AC(a2);
  v15 = (_DWORD *)sub_242FC8(v14);
  v16 = sub_256850(v14, *v15);
  v17 = (_DWORD *)sub_242FC8(v16);
  sub_256850(", ", *v17);
  v18 = sub_988AC(a3);
  v19 = (_DWORD *)sub_242FC8(v18);
  v20 = sub_256850(v18, *v19);
  v21 = (_DWORD *)sub_242FC8(v20);
  sub_256850(", ", *v21);
  v22 = sub_988AC(*a4);
  v23 = (_DWORD *)sub_242FC8(v22);
  v24 = sub_256850(v22, *v23);
  v25 = (_DWORD *)sub_242FC8(v24);
  sub_256850(") = ", *v25);
  v26 = sub_988AC(v8);
  v27 = (_DWORD *)sub_242FC8(v26);
  v28 = sub_256850(v26, *v27);
  v29 = (_DWORD *)sub_242FC8(v28);
  sub_256850(&word_356638, *v29);
  return v8;
}
