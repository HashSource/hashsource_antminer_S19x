int __fastcall sub_D7750(int a1, int a2)
{
  _DWORD *v4; // r4
  int v5; // r0

  v4 = (_DWORD *)sub_D8934(a1);
  v5 = sub_D8AD4(a1);
  sub_F5D68(v4, v5, a2);
  sub_DFC40(v4 + 258);
  memcpy(v4 + 281, v4 + 258, 0x5Cu);
  memcpy(v4 + 304, v4 + 258, 0x5Cu);
  v4[327] = -1;
  return 1;
}
