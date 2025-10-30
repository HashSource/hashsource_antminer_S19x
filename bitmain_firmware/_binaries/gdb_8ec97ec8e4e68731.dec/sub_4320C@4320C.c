void __fastcall sub_4320C(int a1, int a2)
{
  int v2; // r4
  int v3; // r7
  _DWORD *v6; // r5
  int v7; // r0
  int v8; // r0

  sub_92E40(v3);
  if ( a2 == 1 )
  {
    v6 = (_DWORD *)sub_339E78(a1);
    v7 = sub_15828(v2);
    if ( v7 )
    {
      sub_339EF8(v7);
      JUMPOUT(0x4306C);
    }
    sub_92F1C(*v6, v6[1], v6[2]);
  }
  v8 = sub_339E78(a1);
  sub_92E60(v8);
}
