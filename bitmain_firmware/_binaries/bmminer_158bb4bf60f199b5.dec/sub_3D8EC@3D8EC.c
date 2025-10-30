int __fastcall sub_3D8EC(int a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  pthread_detach(v2);
  pthread_setcanceltype(1, 0);
  sub_4BD10("APIMcast");
  sub_3CD2C();
  *(_DWORD *)(a1 + 12) = 0;
  return 0;
}
