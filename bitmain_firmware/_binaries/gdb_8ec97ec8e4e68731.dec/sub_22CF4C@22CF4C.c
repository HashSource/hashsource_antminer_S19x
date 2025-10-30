int __fastcall sub_22CF4C(int a1, int a2, int a3, unsigned int a4)
{
  _DWORD *v7; // r0
  int v8; // r6
  _DWORD *v9; // r0
  char *v10; // r4
  _DWORD *v11; // r0
  int v12; // r0
  _DWORD *v13; // r0
  int v14; // r0
  int v15; // r4
  _DWORD *v16; // r0
  int v17; // r0
  _DWORD *v18; // r0
  char *v19; // r4
  _DWORD *v20; // r0
  int v21; // r0
  _DWORD *v22; // r0
  char *v23; // r4
  _DWORD *v24; // r0
  int v25; // r0
  _DWORD *v26; // r0
  char *v27; // r4
  _DWORD *v28; // r0
  int v29; // r0
  _DWORD *v30; // r0

  v7 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v7, "-> %s->to_remove_breakpoint (...)\n", (const char *)dword_489C90);
  v8 = off_489CDC(&unk_489C8C, a2, a3, a4);
  v9 = (_DWORD *)sub_242FC8(v8);
  sub_2594B0(*v9, "<- %s->to_remove_breakpoint (", (const char *)dword_489C90);
  v10 = sub_98EEC((int)&unk_489C8C);
  v11 = (_DWORD *)sub_242FC8(v10);
  v12 = sub_256850(v10, *v11);
  v13 = (_DWORD *)sub_242FC8(v12);
  sub_256850(", ", *v13);
  v14 = ((int (__fastcall *)(int))loc_163EB0)(a2);
  v15 = *(_DWORD *)(v14 + 24);
  v16 = (_DWORD *)sub_242FC8(v14);
  v17 = sub_256850(v15, *v16);
  v18 = (_DWORD *)sub_242FC8(v17);
  sub_256850(", ", *v18);
  v19 = sub_98E1C(*(_DWORD *)(a3 + 4));
  v20 = (_DWORD *)sub_242FC8(v19);
  v21 = sub_256850(v19, *v20);
  v22 = (_DWORD *)sub_242FC8(v21);
  sub_256850(", ", *v22);
  v23 = sub_988AC(a4);
  v24 = (_DWORD *)sub_242FC8(v23);
  v25 = sub_256850(v23, *v24);
  v26 = (_DWORD *)sub_242FC8(v25);
  sub_256850(") = ", *v26);
  v27 = sub_988AC(v8);
  v28 = (_DWORD *)sub_242FC8(v27);
  v29 = sub_256850(v27, *v28);
  v30 = (_DWORD *)sub_242FC8(v29);
  sub_256850(&word_356638, *v30);
  return v8;
}
