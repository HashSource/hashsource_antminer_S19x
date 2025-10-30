int __fastcall sub_1FDE4C(int a1, int a2)
{
  int v4; // r6
  int v5; // r0
  _DWORD *v6; // r0
  int v7; // r0
  int *v8; // r0
  int v9; // r0
  _DWORD *v10; // r0
  int v11; // r0
  _DWORD *v12; // r0

  v4 = (*(int (**)(void))(*(_DWORD *)(a1 + 12) + 16))();
  v5 = dword_489374;
  if ( dword_489374 )
  {
    sub_1FD994(dword_489374, 114, v4, a2);
    v5 = sub_25680C(dword_489374);
  }
  if ( *(_DWORD *)(a1 + 8228) || dword_489388 )
  {
    v6 = (_DWORD *)sub_242FC8(v5);
    v7 = sub_2594B0(*v6, "[");
    v8 = (int *)sub_242FC8(v7);
    v9 = sub_1FD994(*v8, 114, v4, a2);
    v10 = (_DWORD *)sub_242FC8(v9);
    v11 = sub_2594B0(*v10, (const char *)&word_419FC8);
    v12 = (_DWORD *)sub_242FC8(v11);
    sub_25680C(*v12);
  }
  return v4;
}
