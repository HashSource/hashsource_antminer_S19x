int __fastcall sub_22D430(int a1, int a2, int a3, int a4, int a5, unsigned int a6)
{
  _DWORD *v6; // r0
  int v7; // r0
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
  int v19; // r0
  _DWORD *v20; // r0
  int v21; // r0
  _DWORD *v22; // r0
  char *v23; // r4
  _DWORD *v24; // r0
  int v25; // r0
  _DWORD *v26; // r0
  int v28; // [sp+Ch] [bp-Ch] BYREF
  int v29; // [sp+10h] [bp-8h]
  int v30; // [sp+14h] [bp-4h]

  v28 = a2;
  v29 = a3;
  v30 = a4;
  v6 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v6, "-> %s->to_resume (...)\n", (const char *)dword_489C90);
  v7 = off_489CBC(&unk_489C8C, v28, v29, v30, a5, a6);
  v8 = (_DWORD *)sub_242FC8(v7);
  sub_2594B0(*v8, "<- %s->to_resume (", (const char *)dword_489C90);
  v9 = sub_98EEC((int)&unk_489C8C);
  v10 = (_DWORD *)sub_242FC8(v9);
  v11 = sub_256850(v9, *v10);
  v12 = (_DWORD *)sub_242FC8(v11);
  sub_256850(", ", *v12);
  v13 = ps_getpid_0((int)&v28);
  v14 = sub_988AC(v13);
  v15 = (_DWORD *)sub_242FC8(v14);
  v16 = sub_256850(v14, *v15);
  v17 = (_DWORD *)sub_242FC8(v16);
  v18 = "continue";
  v19 = sub_256850(", ", *v17);
  if ( a5 )
    v18 = "step";
  v20 = (_DWORD *)sub_242FC8(v19);
  v21 = sub_256850(v18, *v20);
  v22 = (_DWORD *)sub_242FC8(v21);
  sub_256850(", ", *v22);
  v23 = sub_99A4C(a6);
  v24 = (_DWORD *)sub_242FC8(v23);
  v25 = sub_256850(v23, *v24);
  v26 = (_DWORD *)sub_242FC8(v25);
  return sub_256850(")\n", *v26);
}
