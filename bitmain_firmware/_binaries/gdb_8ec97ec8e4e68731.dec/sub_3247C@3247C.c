void __fastcall sub_3247C(int a1, int a2)
{
  int v2; // r9
  _DWORD *v5; // r4
  _DWORD *v6; // r0
  int v7; // r0

  sub_92E40(v2);
  if ( a2 == 1 )
  {
    v5 = (_DWORD *)sub_339E78(a1);
    v6 = (_DWORD *)sub_242FB4();
    sub_154B38(*v6, *v5, v5[1], v5[2]);
    JUMPOUT(0x32270);
  }
  v7 = sub_339E78(a1);
  sub_92E60(v7);
}
