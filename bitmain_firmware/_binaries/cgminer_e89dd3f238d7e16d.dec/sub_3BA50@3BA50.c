int __fastcall sub_3BA50(int a1)
{
  pthread_t v1; // r0

  v1 = pthread_self();
  pthread_detach(v1);
  pthread_setcanceltype(1, 0);
  sub_2A95C("API");
  sub_3B824();
  sub_1AEB0();
  *(_DWORD *)(a1 + 12) = 0;
  return 0;
}
