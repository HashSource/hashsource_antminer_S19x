int __fastcall sub_8B300(_DWORD *a1)
{
  a1[7] = 0;
  a1[10] = 0;
  sub_95478(a1);
  a1[6] = *(_DWORD *)(a1[1] + 28);
  sub_8A7B4(a1);
  sub_8B024(a1 + 248);
  return sub_8B024(a1 + 256);
}
