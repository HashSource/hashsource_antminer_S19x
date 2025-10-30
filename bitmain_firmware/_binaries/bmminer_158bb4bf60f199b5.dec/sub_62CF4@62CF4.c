int __fastcall sub_62CF4(int a1, int a2, int a3)
{
  struct timeval *v4; // r5

  *(_DWORD *)(a2 + 76) = a3;
  v4 = (struct timeval *)sub_55E38();
  sub_52F6C((int)v4, a2, 0);
  sub_62428(v4);
  return 1;
}
