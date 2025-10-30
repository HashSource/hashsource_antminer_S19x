int __fastcall sub_22C9D8(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v8; // r0
  int v9; // r0
  _DWORD *v10; // r0
  char *v11; // r4
  _DWORD *v12; // r0
  int v13; // r0
  _DWORD *v14; // r0
  char *v15; // r4
  _DWORD *v16; // r0
  int v17; // r0
  _DWORD *v18; // r0
  int v19; // r3
  char *v20; // r4
  _DWORD *v21; // r0
  int v22; // r0
  _DWORD *v23; // r0

  v8 = (_DWORD *)sub_242FC8(a1);
  sub_2594B0(*v8, "-> %s->to_flash_erase (...)\n", (const char *)dword_489C90);
  v9 = off_489E1C(&unk_489C8C, off_489E1C, a3, a4, a5, a6);
  v10 = (_DWORD *)sub_242FC8(v9);
  sub_2594B0(*v10, "<- %s->to_flash_erase (", (const char *)dword_489C90);
  v11 = sub_98EEC((int)&unk_489C8C);
  v12 = (_DWORD *)sub_242FC8(v11);
  v13 = sub_256850(v11, *v12);
  v14 = (_DWORD *)sub_242FC8(v13);
  sub_256850(", ", *v14);
  v15 = sub_98B08(a3, a4);
  v16 = (_DWORD *)sub_242FC8(v15);
  v17 = sub_256850(v15, *v16);
  v18 = (_DWORD *)sub_242FC8(v17);
  sub_256850(", ", *v18);
  v20 = sub_98904(a5, a6, 0, v19);
  v21 = (_DWORD *)sub_242FC8(v20);
  v22 = sub_256850(v20, *v21);
  v23 = (_DWORD *)sub_242FC8(v22);
  return sub_256850(")\n", *v23);
}
