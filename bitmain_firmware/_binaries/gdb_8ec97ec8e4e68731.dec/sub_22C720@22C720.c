__int64 __fastcall sub_22C720(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v9; // r0
  __int64 v10; // r6
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
  int v24; // r3
  char *v25; // r4
  _DWORD *v26; // r0
  int v27; // r0
  _DWORD *v28; // r0
  int v29; // r3
  char *v30; // r4
  _DWORD *v31; // r0
  int v32; // r0
  _DWORD *v33; // r0

  v9 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v9, "-> %s->to_get_raw_trace_data (...)\n", (const char *)dword_489C90);
  v10 = off_489EC0(&unk_489C8C, a2, a3, a4, a5, a6);
  v11 = (_DWORD *)sub_242FC8(v10);
  sub_2594B0(*v11, "<- %s->to_get_raw_trace_data (", (const char *)dword_489C90);
  v12 = sub_98EEC((int)&unk_489C8C);
  v13 = (_DWORD *)sub_242FC8(v12);
  v14 = sub_256850(v12, *v13);
  v15 = (_DWORD *)sub_242FC8(v14);
  sub_256850(", ", *v15);
  v16 = sub_98EEC(a2);
  v17 = (_DWORD *)sub_242FC8(v16);
  v18 = sub_256850(v16, *v17);
  v19 = (_DWORD *)sub_242FC8(v18);
  sub_256850(", ", *v19);
  v20 = sub_98B08(a3, a4);
  v21 = (_DWORD *)sub_242FC8(v20);
  v22 = sub_256850(v20, *v21);
  v23 = (_DWORD *)sub_242FC8(v22);
  sub_256850(", ", *v23);
  v25 = sub_98904(a5, a6, 0, v24);
  v26 = (_DWORD *)sub_242FC8(v25);
  v27 = sub_256850(v25, *v26);
  v28 = (_DWORD *)sub_242FC8(v27);
  sub_256850(") = ", *v28);
  v30 = sub_98904(v10, SHIDWORD(v10), 0, v29);
  v31 = (_DWORD *)sub_242FC8(v30);
  v32 = sub_256850(v30, *v31);
  v33 = (_DWORD *)sub_242FC8(v32);
  sub_256850(&word_356638, *v33);
  return v10;
}
