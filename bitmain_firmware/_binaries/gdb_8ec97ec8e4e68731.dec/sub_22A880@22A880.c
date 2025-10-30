int __fastcall sub_22A880(int a1, int a2, int a3, int a4)
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
  char *v16; // r4
  _DWORD *v17; // r0
  int v18; // r0
  _DWORD *v19; // r0
  int v21; // [sp+4h] [bp-10h] BYREF
  int v22; // [sp+8h] [bp-Ch]
  int v23; // [sp+Ch] [bp-8h]

  v21 = a2;
  v22 = a3;
  v23 = a4;
  v4 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v4, "-> %s->to_core_of_thread (...)\n", (const char *)dword_489C90);
  v5 = off_489ED8(&unk_489C8C, v21, v22, v23);
  v6 = (_DWORD *)sub_242FC8(v5);
  sub_2594B0(*v6, "<- %s->to_core_of_thread (", (const char *)dword_489C90);
  v7 = sub_98EEC((int)&unk_489C8C);
  v8 = (_DWORD *)sub_242FC8(v7);
  v9 = sub_256850(v7, *v8);
  v10 = (_DWORD *)sub_242FC8(v9);
  sub_256850(", ", *v10);
  v11 = ps_getpid_0((int)&v21);
  v12 = sub_988AC(v11);
  v13 = (_DWORD *)sub_242FC8(v12);
  v14 = sub_256850(v12, *v13);
  v15 = (_DWORD *)sub_242FC8(v14);
  sub_256850(") = ", *v15);
  v16 = sub_988AC(v5);
  v17 = (_DWORD *)sub_242FC8(v16);
  v18 = sub_256850(v16, *v17);
  v19 = (_DWORD *)sub_242FC8(v18);
  sub_256850(&word_356638, *v19);
  return v5;
}
