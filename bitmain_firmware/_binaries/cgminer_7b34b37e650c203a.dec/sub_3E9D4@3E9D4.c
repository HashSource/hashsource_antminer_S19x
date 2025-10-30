int __fastcall sub_3E9D4(int a1, int a2, int a3)
{
  struct timeval *v4; // r5

  *(_DWORD *)(a2 + 76) = a3;
  v4 = (struct timeval *)sub_2FD8C();
  sub_2CA90((int)v4, a2, 0);
  sub_3E108(v4);
  return 1;
}
