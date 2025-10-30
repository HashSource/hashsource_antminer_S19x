int __fastcall sub_22CE20(int a1, int a2, int a3)
{
  _DWORD *v5; // r0
  int v6; // r6
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  int v12; // r0
  int v13; // r4
  _DWORD *v14; // r0
  int v15; // r0
  _DWORD *v16; // r0
  char *v17; // r4
  _DWORD *v18; // r0
  int v19; // r0
  _DWORD *v20; // r0
  char *v21; // r4
  _DWORD *v22; // r0
  int v23; // r0
  _DWORD *v24; // r0

  v5 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v5, "-> %s->to_insert_hw_breakpoint (...)\n", (const char *)dword_489C90);
  v6 = off_489CF8(&unk_489C8C, a2, a3);
  v7 = (_DWORD *)sub_242FC8(v6);
  sub_2594B0(*v7, "<- %s->to_insert_hw_breakpoint (", (const char *)dword_489C90);
  v8 = sub_98EEC((int)&unk_489C8C);
  v9 = (_DWORD *)sub_242FC8(v8);
  v10 = sub_256850(v8, *v9);
  v11 = (_DWORD *)sub_242FC8(v10);
  sub_256850(", ", *v11);
  v12 = ((int (__fastcall *)(int))loc_163EB0)(a2);
  v13 = *(_DWORD *)(v12 + 24);
  v14 = (_DWORD *)sub_242FC8(v12);
  v15 = sub_256850(v13, *v14);
  v16 = (_DWORD *)sub_242FC8(v15);
  sub_256850(", ", *v16);
  v17 = sub_98E1C(*(_DWORD *)(a3 + 4));
  v18 = (_DWORD *)sub_242FC8(v17);
  v19 = sub_256850(v17, *v18);
  v20 = (_DWORD *)sub_242FC8(v19);
  sub_256850(") = ", *v20);
  v21 = sub_988AC(v6);
  v22 = (_DWORD *)sub_242FC8(v21);
  v23 = sub_256850(v21, *v22);
  v24 = (_DWORD *)sub_242FC8(v23);
  sub_256850(&word_356638, *v24);
  return v6;
}
