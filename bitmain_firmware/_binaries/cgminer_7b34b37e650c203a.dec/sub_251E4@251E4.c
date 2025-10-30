int __fastcall sub_251E4(int a1)
{
  pthread_setcanceltype(1, 0);
  (*(void (__fastcall **)(_DWORD))(a1 + 16))(*(_DWORD *)(a1 + 20));
  sub_251AC((sem_t *)a1, "util.c", "completion_thread", 3626);
  return 0;
}
