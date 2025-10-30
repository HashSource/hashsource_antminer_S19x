_DWORD *__fastcall sub_22A988(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r2
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
  int v24; // r0
  char *v25; // r4
  _DWORD *v26; // r0
  int v27; // r0
  _DWORD *v28; // r0
  _DWORD v30[5]; // [sp+0h] [bp+0h] BYREF

  v7 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v7, "-> %s->to_get_ada_task_ptid (...)\n", (const char *)dword_489C90);
  off_489E28(v30, &unk_489C8C, a3, a4);
  v8 = v30[0];
  v9 = v30[1];
  v10 = v30[2];
  *a1 = v30[0];
  a1[1] = v9;
  a1[2] = v10;
  v11 = (_DWORD *)sub_242FC8(v8);
  sub_2594B0(*v11, "<- %s->to_get_ada_task_ptid (", (const char *)dword_489C90);
  v12 = sub_98EEC((int)&unk_489C8C);
  v13 = (_DWORD *)sub_242FC8(v12);
  v14 = sub_256850(v12, *v13);
  v15 = (_DWORD *)sub_242FC8(v14);
  sub_256850(", ", *v15);
  v16 = sub_988AC(a3);
  v17 = (_DWORD *)sub_242FC8(v16);
  v18 = sub_256850(v16, *v17);
  v19 = (_DWORD *)sub_242FC8(v18);
  sub_256850(", ", *v19);
  v20 = sub_988AC(a4);
  v21 = (_DWORD *)sub_242FC8(v20);
  v22 = sub_256850(v20, *v21);
  v23 = (_DWORD *)sub_242FC8(v22);
  sub_256850(") = ", *v23);
  v24 = ps_getpid_0((int)a1);
  v25 = sub_988AC(v24);
  v26 = (_DWORD *)sub_242FC8(v25);
  v27 = sub_256850(v25, *v26);
  v28 = (_DWORD *)sub_242FC8(v27);
  sub_256850(&word_356638, *v28);
  return a1;
}
