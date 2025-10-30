int __fastcall sub_3C940(int a1)
{
  pthread_t v1; // r0

  v1 = pthread_self();
  pthread_detach(v1);
  pthread_setcanceltype(1, 0);
  sub_2B968("API");
  sub_3C718();
  sub_1B868();
  *(_DWORD *)(a1 + 12) = 0;
  return 0;
}
