int __fastcall sub_227A3C(int a1, int a2, int a3)
{
  _DWORD *v5; // r0
  int v6; // r6
  _DWORD *v7; // r0
  char *v8; // r4
  _DWORD *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  char *v12; // r4
  _DWORD *v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  char *v16; // r4
  _DWORD *v17; // r0
  int v18; // r0
  _DWORD *v19; // r0
  char *v20; // r4
  _DWORD *v21; // r0
  int v22; // r0
  _DWORD *v23; // r0

  v5 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v5, "-> %s->to_find_memory_regions (...)\n", (const char *)dword_489C90);
  v6 = off_489DFC(&unk_489C8C, a2, a3);
  v7 = (_DWORD *)sub_242FC8(v6);
  sub_2594B0(*v7, "<- %s->to_find_memory_regions (", (const char *)dword_489C90);
  v8 = sub_98EEC((int)&unk_489C8C);
  v9 = (_DWORD *)sub_242FC8(v8);
  v10 = sub_256850(v8, *v9);
  v11 = (_DWORD *)sub_242FC8(v10);
  sub_256850(", ", *v11);
  v12 = sub_98EEC(a2);
  v13 = (_DWORD *)sub_242FC8(v12);
  v14 = sub_256850(v12, *v13);
  v15 = (_DWORD *)sub_242FC8(v14);
  sub_256850(", ", *v15);
  v16 = sub_98EEC(a3);
  v17 = (_DWORD *)sub_242FC8(v16);
  v18 = sub_256850(v16, *v17);
  v19 = (_DWORD *)sub_242FC8(v18);
  sub_256850(") = ", *v19);
  v20 = sub_988AC(v6);
  v21 = (_DWORD *)sub_242FC8(v20);
  v22 = sub_256850(v20, *v21);
  v23 = (_DWORD *)sub_242FC8(v22);
  sub_256850(&word_356638, *v23);
  return v6;
}
