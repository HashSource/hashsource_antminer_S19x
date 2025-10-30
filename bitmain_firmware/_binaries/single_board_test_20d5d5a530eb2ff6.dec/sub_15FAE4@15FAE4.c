int __fastcall sub_15FAE4(_DWORD *a1)
{
  memset(a1, 0, 0x5Cu);
  *a1 = 1732584193;
  a1[1] = -271733879;
  a1[2] = -1732584194;
  a1[3] = 271733878;
  return 1;
}
