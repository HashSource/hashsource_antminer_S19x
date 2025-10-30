int __fastcall sub_22B880(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // r0
  int v7; // r7
  _DWORD *v8; // r0
  char *v9; // r5
  _DWORD *v10; // r0
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r0
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
  int v31; // [sp+Ch] [bp-Ch] BYREF
  int v32; // [sp+10h] [bp-8h]
  int v33; // [sp+14h] [bp-4h]

  v31 = a2;
  v32 = a3;
  v33 = a4;
  v6 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v6, "-> %s->to_get_thread_local_address (...)\n", (const char *)dword_489C90);
  v7 = off_489E0C(&unk_489C8C, v31, v32, v33, a5, a6);
  v8 = (_DWORD *)sub_242FC8(v7);
  sub_2594B0(*v8, "<- %s->to_get_thread_local_address (", (const char *)dword_489C90);
  v9 = sub_98EEC((int)&unk_489C8C);
  v10 = (_DWORD *)sub_242FC8(v9);
  v11 = sub_256850(v9, *v10);
  v12 = (_DWORD *)sub_242FC8(v11);
  sub_256850(", ", *v12);
  v13 = ps_getpid_0((int)&v31);
  v14 = sub_988AC(v13);
  v15 = (_DWORD *)sub_242FC8(v14);
  v16 = sub_256850(v14, *v15);
  v17 = (_DWORD *)sub_242FC8(v16);
  sub_256850(", ", *v17);
  v18 = sub_98E1C(a5);
  v19 = (_DWORD *)sub_242FC8(v18);
  v20 = sub_256850(v18, *v19);
  v21 = (_DWORD *)sub_242FC8(v20);
  sub_256850(", ", *v21);
  v22 = sub_98E1C(a6);
  v23 = (_DWORD *)sub_242FC8(v22);
  v24 = sub_256850(v22, *v23);
  v25 = (_DWORD *)sub_242FC8(v24);
  sub_256850(") = ", *v25);
  v26 = sub_98E1C(v7);
  v27 = (_DWORD *)sub_242FC8(v26);
  v28 = sub_256850(v26, *v27);
  v29 = (_DWORD *)sub_242FC8(v28);
  sub_256850(&word_356638, *v29);
  return v7;
}
