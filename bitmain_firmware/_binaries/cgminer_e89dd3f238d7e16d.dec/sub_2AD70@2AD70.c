int __fastcall sub_2AD70(int a1)
{
  pthread_setcanceltype(1, 0);
  (*(void (__fastcall **)(_DWORD))(a1 + 16))(*(_DWORD *)(a1 + 20));
  sub_2AA64((sem_t *)a1, "util.c", "completion_thread", 3897);
  return 0;
}
