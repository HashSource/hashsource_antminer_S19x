int __fastcall sub_D64D8(int a1, int a2)
{
  _DWORD *v3; // r4

  v3 = (_DWORD *)sub_D8934(a1);
  v3[96] = 0;
  sub_13F3E8(a2, v3);
  sub_13F3E8(a2 + 8, v3 + 32);
  memcpy(v3 + 64, v3, 0x80u);
  return 1;
}
