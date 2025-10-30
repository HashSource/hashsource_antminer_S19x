int __fastcall sub_C8514(int a1)
{
  int v2; // r2
  __int64 v3; // r0

  v2 = dword_478360;
  dword_478360 = a1;
  dword_47835C = v2;
  v3 = sub_26CBF4("bpnum");
  return sub_26CC80(v3, HIDWORD(v3), a1, a1 >> 31);
}
