int __fastcall sub_2C1A4(int a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  pthread_detach(v2);
  pthread_setcanceltype(1, 0);
  sub_250A8("API");
  sub_2C148();
  sub_1DD84();
  *(_DWORD *)(a1 + 12) = 0;
  return 0;
}
