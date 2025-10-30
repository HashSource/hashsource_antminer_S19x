int __fastcall sub_F16C4(int a1, int a2)
{
  _DWORD *v4; // r0
  int v5; // r4

  v4 = (_DWORD *)sub_EF5F8();
  v5 = (int)v4;
  if ( v4 && sub_F160C(v4, a2) && sub_F15BC(a1, v5) )
    return v5;
  sub_EF60C(v5);
  return 0;
}
