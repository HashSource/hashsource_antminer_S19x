int __fastcall sub_2BD64(int a1)
{
  pthread_setcanceltype(1, 0);
  (*(void (__fastcall **)(_DWORD))(a1 + 16))(*(_DWORD *)(a1 + 20));
  sub_2BA68((sem_t *)a1, "util.c", "completion_thread", 3897);
  return 0;
}
