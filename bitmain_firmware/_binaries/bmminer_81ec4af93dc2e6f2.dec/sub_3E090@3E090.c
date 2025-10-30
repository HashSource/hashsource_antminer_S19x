int __fastcall sub_3E090(int a1)
{
  pthread_setcanceltype(1, 0);
  (*(void (__fastcall **)(_DWORD))(a1 + 16))(*(_DWORD *)(a1 + 20));
  sub_3E058((sem_t *)a1, "util.c", "completion_thread", 3638);
  return 0;
}
