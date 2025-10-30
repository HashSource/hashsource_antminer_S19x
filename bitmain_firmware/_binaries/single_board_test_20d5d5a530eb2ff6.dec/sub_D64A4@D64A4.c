int __fastcall sub_D64A4(int a1, int a2)
{
  int v3; // r4

  v3 = sub_D8934(a1);
  *(_DWORD *)(v3 + 384) = 0;
  sub_13F3E8(a2, v3);
  sub_13F3E8(a2 + 8, v3 + 128);
  sub_13F3E8(a2 + 16, v3 + 256);
  return 1;
}
