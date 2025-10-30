void __fastcall sub_1F768C(int a1, int a2)
{
  int v4; // r5
  _DWORD *v5; // r0
  _DWORD *v6; // r7
  _DWORD *v7; // r0

  v4 = (*(int (**)(void))(a1 + 20))();
  v5 = sub_9253C(2063744, v4);
  v6 = v5;
  if ( dword_48935C )
  {
    v7 = (_DWORD *)sub_242FC8(v5);
    sub_2594B0(*v7, "notif: ack '%s'\n", *(const char **)(a1 + 4));
  }
  (*(void (__fastcall **)(int, int, int))(a1 + 8))(a1, a2, v4);
  (*(void (__fastcall **)(int, int, int))(a1 + 12))(a1, a2, v4);
  sub_92640(v6);
}
