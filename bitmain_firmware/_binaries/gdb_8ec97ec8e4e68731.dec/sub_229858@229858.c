int __fastcall sub_229858(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v9; // r0
  int v10; // r5
  _DWORD *v11; // r0
  char *v12; // r4
  _DWORD *v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  char *v16; // r4
  _DWORD *v17; // r0
  int v18; // r0
  _DWORD *v19; // r0
  const char *v20; // r4
  int v21; // r0
  _DWORD *v22; // r0
  int v23; // r0
  _DWORD *v24; // r0
  char *v25; // r4
  _DWORD *v26; // r0
  int v27; // r0
  _DWORD *v28; // r0
  char *v29; // r4
  _DWORD *v30; // r0
  int v31; // r0
  _DWORD *v32; // r0
  char *v33; // r4
  _DWORD *v34; // r0
  int v35; // r0
  _DWORD *v36; // r0

  v9 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v9, "-> %s->to_set_syscall_catchpoint (...)\n", (const char *)dword_489C90);
  v10 = off_489D78(&unk_489C8C, a2, a3, a4, a5, a6, a5, a6);
  v11 = (_DWORD *)sub_242FC8(v10);
  sub_2594B0(*v11, "<- %s->to_set_syscall_catchpoint (", (const char *)dword_489C90);
  v12 = sub_98EEC((int)&unk_489C8C);
  v13 = (_DWORD *)sub_242FC8(v12);
  v14 = sub_256850(v12, *v13);
  v15 = (_DWORD *)sub_242FC8(v14);
  sub_256850(", ", *v15);
  v16 = sub_988AC(a2);
  v17 = (_DWORD *)sub_242FC8(v16);
  v18 = sub_256850(v16, *v17);
  v19 = (_DWORD *)sub_242FC8(v18);
  v20 = "false";
  v21 = sub_256850(", ", *v19);
  if ( a3 )
    v20 = "true";
  v22 = (_DWORD *)sub_242FC8(v21);
  v23 = sub_256850(v20, *v22);
  v24 = (_DWORD *)sub_242FC8(v23);
  sub_256850(", ", *v24);
  v25 = sub_988AC(a4);
  v26 = (_DWORD *)sub_242FC8(v25);
  v27 = sub_256850(v25, *v26);
  v28 = (_DWORD *)sub_242FC8(v27);
  sub_256850(", ", *v28);
  v29 = sub_98EEC(a5);
  v30 = (_DWORD *)sub_242FC8(v29);
  v31 = sub_256850(v29, *v30);
  v32 = (_DWORD *)sub_242FC8(v31);
  sub_256850(") = ", *v32);
  v33 = sub_988AC(v10);
  v34 = (_DWORD *)sub_242FC8(v33);
  v35 = sub_256850(v33, *v34);
  v36 = (_DWORD *)sub_242FC8(v35);
  sub_256850(&word_356638, *v36);
  return v10;
}
