int __fastcall sub_22CBF0(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r0
  int v5; // r6
  _DWORD *v6; // r0
  char *v7; // r5
  _DWORD *v8; // r0
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r0
  char *v12; // r4
  _DWORD *v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  int v16; // r0
  int v17; // r4
  _DWORD *v18; // r0
  int v19; // r0
  _DWORD *v20; // r0
  int v22; // [sp+4h] [bp-10h] BYREF
  int v23; // [sp+8h] [bp-Ch]
  int v24; // [sp+Ch] [bp-8h]

  v22 = a2;
  v23 = a3;
  v24 = a4;
  v4 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v4, "-> %s->to_thread_architecture (...)\n", (const char *)dword_489C90);
  v5 = off_489E54(&unk_489C8C, v22, v23, v24);
  v6 = (_DWORD *)sub_242FC8(v5);
  sub_2594B0(*v6, "<- %s->to_thread_architecture (", (const char *)dword_489C90);
  v7 = sub_98EEC((int)&unk_489C8C);
  v8 = (_DWORD *)sub_242FC8(v7);
  v9 = sub_256850(v7, *v8);
  v10 = (_DWORD *)sub_242FC8(v9);
  sub_256850(", ", *v10);
  v11 = ps_getpid_0((int)&v22);
  v12 = sub_988AC(v11);
  v13 = (_DWORD *)sub_242FC8(v12);
  v14 = sub_256850(v12, *v13);
  v15 = (_DWORD *)sub_242FC8(v14);
  sub_256850(") = ", *v15);
  v16 = ((int (__fastcall *)(int))loc_163EB0)(v5);
  v17 = *(_DWORD *)(v16 + 24);
  v18 = (_DWORD *)sub_242FC8(v16);
  v19 = sub_256850(v17, *v18);
  v20 = (_DWORD *)sub_242FC8(v19);
  sub_256850(&word_356638, *v20);
  return v5;
}
