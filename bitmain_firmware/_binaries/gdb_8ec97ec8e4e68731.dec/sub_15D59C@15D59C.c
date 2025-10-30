char *__fastcall sub_15D59C(int a1, int a2)
{
  __int64 v3; // r6
  char *v4; // r4
  int v5; // r9
  int v6; // r0
  char *v7; // r0
  int v8; // r12
  int v9; // r2
  bool v10; // zf
  _DWORD *v11; // r0
  int v12; // r0
  int *v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  int v17; // r4
  char *v18; // r0

  HIDWORD(v3) = a2;
  if ( dword_487724 )
  {
    v17 = *(_DWORD *)sub_242FC8(a1);
    LODWORD(v3) = sub_98B08(a1, 0);
    v18 = sub_98B08(SHIDWORD(v3), 0);
    sub_2594B0(v17, "{ create_new_frame (addr=%s, pc=%s) ", (const char *)v3, v18);
  }
  LODWORD(v3) = 1;
  v4 = sub_15D27C((char *)0x60);
  v5 = dword_487D2C;
  v6 = sub_1DDBBC(v4);
  v7 = sub_15D314(v5, v6);
  v8 = *((_DWORD *)v7 + 1);
  v9 = *((_DWORD *)v7 + 2);
  *((_DWORD *)v4 + 19) = v7;
  *(_QWORD *)(v7 + 28) = v3;
  *((_DWORD *)v4 + 1) = v8;
  *((_DWORD *)v4 + 2) = v9;
  sub_160DD4(v4, v4 + 12);
  v10 = dword_487724 == 0;
  *((_DWORD *)v4 + 11) = 1;
  *((_DWORD *)v4 + 12) = a1;
  *((_DWORD *)v4 + 13) = HIDWORD(v3);
  *((_DWORD *)v4 + 14) = 0;
  *((_DWORD *)v4 + 15) = 9;
  *((_DWORD *)v4 + 16) = 0;
  if ( !v10 )
  {
    v11 = (_DWORD *)sub_242FC8(a1);
    v12 = sub_2594B0(*v11, "-> ");
    v13 = (int *)sub_242FC8(v12);
    v14 = sub_15C998(*v13, v4);
    v15 = (_DWORD *)sub_242FC8(v14);
    sub_2594B0(*v15, " }\n");
  }
  return v4;
}
