char *__fastcall sub_15D314(int a1, int a2)
{
  char *v4; // r0
  int v5; // r3
  char *v6; // r4
  int v7; // r12
  _DWORD *v8; // r0
  int v9; // r0
  int *v10; // r0
  int v11; // r0
  _DWORD *v12; // r0

  v4 = sub_15D27C((char *)0x60);
  v5 = *(_DWORD *)(a2 + 4);
  v6 = v4;
  *(_DWORD *)v4 = -1;
  *((_DWORD *)v4 + 1) = a1;
  *((_DWORD *)v4 + 2) = v5;
  *((_DWORD *)v4 + 3) = sub_1FD4C0(a2);
  v7 = dword_487724;
  *((_DWORD *)v6 + 19) = v6;
  *((_DWORD *)v6 + 4) = &unk_3DB8BC;
  *((_DWORD *)v6 + 11) = 1;
  *((_DWORD *)v6 + 12) = 0;
  *((_DWORD *)v6 + 13) = 0;
  *((_DWORD *)v6 + 14) = 0;
  *((_DWORD *)v6 + 15) = 18;
  *((_DWORD *)v6 + 16) = 0;
  if ( v7 )
  {
    v8 = (_DWORD *)sub_242FC8(0);
    v9 = sub_2594B0(*v8, "{ create_sentinel_frame (...) -> ");
    v10 = (int *)sub_242FC8(v9);
    v11 = sub_15C998(*v10, v6);
    v12 = (_DWORD *)sub_242FC8(v11);
    sub_2594B0(*v12, " }\n");
  }
  return v6;
}
